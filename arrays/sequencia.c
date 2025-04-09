#include <stdlib.h>
#include <stdio.h>

int main(){
    double a = 10;
    double b = 100;
    double h = 0;

    for(int i = 0; i < 10; i++){
        h = a/b;
        printf("%.0lf/%.0lf = %lf\n", a, b, h);
        a++;
        b--;
        h = b/a;
        printf("%.0lf/%.0lf = %lf\n", b, a, h);
        a++;
        b--;
    }

}