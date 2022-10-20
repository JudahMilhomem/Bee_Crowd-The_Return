// 1132 - Multiples of 13
#include <stdio.h>
#include <stdlib.h>

int main(){
  int X, Y;
  int counter = 0;
  scanf("%d", &X);
  scanf("%d", &Y);

  int vet[2];
  if(X < Y){
    vet[0] = X;
    vet[1] = Y;
  } else {
    vet[0] = Y;
    vet[1] = X;
  }

  for(int i = vet[0]; i <= vet[1]; i++){
    if(i % 13 != 0){
      counter += i;
    }
  }
  printf("%d\n", counter);

  return 0;
}