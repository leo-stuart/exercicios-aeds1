int etapa = 0;
unsigned long previousMillis = 0;
unsigned long agora;

// buzzer
unsigned long beepMillis = 0;
const long beepInterval = 500; // tempo entre beeps
bool buzzerState = false;

// tempo de cada fase
long redDuration = 8000;    // tempo total de buzzer/pedestre
long pedDuration = 8000;    // tempo total de buzzer/pedestre
long yellowDuration = 2000; // tempo total de buzzer/pedestre
long greenDuration = 13000; // tempo total de buzzer/pedestre

bool greenAjusteFeito = false;
bool solicitacaoPed = false;
unsigned long solicitacaoPedMillis = 0;

void setup()
{
  Serial.begin(9600); //debug
  // definindo os pinos
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(2, INPUT_PULLUP);
  pinMode(3, OUTPUT);
}

void loop()
{
  // pegar os milisegundos desde o inicio do arduino
  agora = millis();
  
  // checar se é dia ou nao
  if (analogRead(A0) >= analogRead(A1))
  {
    Serial.println("Botao detectado!");
    // ativar a solicitacao
    if (!solicitacaoPed && digitalRead(2) == LOW)
    {
      delay(50);
      if (digitalRead(2) == LOW)
      {
        solicitacaoPed = true;
        solicitacaoPedMillis = agora;

        // checar se estava verde, e se verdade, ter no maximo mais um segundo para trocar.
        if (etapa == 0 && !greenAjusteFeito)
        {
          unsigned long tempoDecorrido = agora - previousMillis;
          if (tempoDecorrido < (greenDuration - 3000))
          {
            greenDuration = tempoDecorrido + 1000;
          }
          greenAjusteFeito = true;
        }
      }
    }

    switch (etapa)
    {
    case 0:
      digitalWrite(3, LOW); // garante buzzer desligado
      // setar os leds
      digitalWrite(7, HIGH);
      digitalWrite(6, LOW);
      digitalWrite(5, LOW);
      digitalWrite(9, HIGH);
      digitalWrite(8, LOW);

      // passar para o amarelo
      if (agora - previousMillis >= greenDuration)
      {
        previousMillis = agora;
        etapa = 1;
      }
      break;

    case 1:
      digitalWrite(3, LOW); // garante buzzer desligado
      // setar os leds
      digitalWrite(7, LOW);
      digitalWrite(6, HIGH);
      digitalWrite(5, LOW);

      // passar para o vermelho
      if (agora - previousMillis >= yellowDuration)
      {
        previousMillis = agora;
        etapa = 2;

        // caso o botao tenha sido apertado, aumente o tempo do pedestre de 8s para 10s
        pedDuration = solicitacaoPed ? 10000 : 8000;
      }
      break;

    case 2:
      // setar os leds
      digitalWrite(7, LOW);
      digitalWrite(6, LOW);
      digitalWrite(5, HIGH);
      digitalWrite(9, LOW);
      digitalWrite(8, HIGH);

      // Ligar buzzer sem interromper o codigo
      if (agora - beepMillis >= beepInterval)
      {
        beepMillis = agora;
        buzzerState = !buzzerState;
        digitalWrite(3, buzzerState);
      }

      // passar para o verde
      if (agora - previousMillis >= redDuration)
      {
        previousMillis = agora;
        solicitacaoPed = false;   // reseta a solicitacao
        greenDuration = 13000;    // reseta tempo sinal verde
        greenAjusteFeito = false; // permite solicitacao dnv
        etapa = 0;
      }
      break;

    default:
      break;
    }
  }
  // se for noite:
  else
  {
    // setar os leds
    digitalWrite(8, LOW);
    digitalWrite(9, HIGH);
    digitalWrite(7, LOW);
    digitalWrite(6, HIGH);
    digitalWrite(5, LOW);
    // fazer piscar
    delay(2000);
    digitalWrite(6, LOW);
    delay(1000);
  }
}