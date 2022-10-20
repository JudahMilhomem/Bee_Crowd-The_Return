// 1005 - Average 1
#include <stdio.h>

int main(){
  double A;
  double B;
  // ln 8 e 9 > Runtime Error -> não coloquei os endereços de A e B
  scanf("%lf", &A);
  scanf("%lf", &B);
  double MEDIA = (A*3.5 + B*7.5) / 11;
  printf("MEDIA = %0.5lf\n", MEDIA);

  return 0;
}