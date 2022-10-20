// 1002 - Area of a Circle
#include <stdio.h>
#include <math.h>

int main(){
    double pi = 3.14159;
    double R;
    // scanf("%lf", R); > Runtime Error -> não coloquei o endereço da variável (&)
    scanf("%lf", &R);
    double area = pi * pow(R, 2);
    printf("A=%0.4lf\n", area);

    return 0;
}