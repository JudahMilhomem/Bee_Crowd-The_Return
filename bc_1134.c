// 1134 - Type of Fuel
#include <stdio.h>
 int main(){
  int input;
  int alcohol = 0;
  int gasoline = 0;
  int diesel = 0;
  while(input != 4){
    scanf("%d", &input);
    if(input == 1){
      alcohol += 1;
    } else if(input == 2){
      gasoline += 1;
    } else if(input == 3){
      diesel += 1;
    // } else{ -> Esse else é desnecessário
    //   continue;
    }
  }
  printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", alcohol, gasoline, diesel);

  return 0;
 }



// (...)
// Try number 1:
// #include <stdio.h>
//  int main(){
//   int input;
//   int alcohol, gasoline, diesel = 0;
//   while(input != 4){
//     scanf("%d", &input);
//     if(input = 1){alcohol += 1;}
//     else if(input = 2){gasoline += 1;}
//     else if(input = 3){diesel += 1;}
//     else{continue;}
//   }
//   printf("MUITO OBRIGADO\n
//   Alcool: %d\n
//   Gasolina: %d\n
//   Diesel: %d\n", alcohol, gasoline, diesel);

//   return 0;
//  }


// Try number 2:
// 1134 - Type of Fuel
// #include <stdio.h>
//  int main(){
//   int input;
//   int alcohol, gasoline, diesel = 0;     -> #01: A atribuição de valores quando se declara mais de uma variável não é feita dessa forma
//   while(input != 4){     -> O programa funciona, mas não encerra quando input = 4
//     scanf("%d", &input);
//     if(input = 1){     -> #02: Eu deveria ter usado o == e não o =
//       alcohol += 1;
//     } else if(input = 2){
//       gasoline += 1;
//     } else if(input = 3){
//       diesel += 1;
//     } else{
//       continue;
//     }
//   }
//   printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", alcohol, gasoline, diesel);

//   return 0;
//  }