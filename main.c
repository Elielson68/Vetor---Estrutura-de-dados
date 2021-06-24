/*
Considere o array [3, 5, 6, 1, 9, 2] para implementar as funcionalidades de 1 a 3:
1. imprimir array.
output: 3 5 6 1 9 2
2. Imprime números pares e ímpares.
output: 6 2
3 5 1 9
3. Mostre a posição de dois números dentro do array os quais a soma resulte no input do usuário, caso não exista imprimir mensagem “Não existe”.
input: 8
output: 3 e 5 nas posições 0 e 1 é igual a 8
input: 7
output: 6 e 1 nas posições 2 e 3 é igual a 7
4. Permita que o usuário insira os valores do vetor na quantidade que lhe for conveniente ( ou seja, o tamanho do vetor é desconhecido em tempo de compilação)

*/
#include<stdio.h>
#include<stdlib.h>
 
void imprimirArray (int *v, int tamanho){
 
 for (int i = 0; i < tamanho; i++){
   printf("%d ", v[i]);
 }
 printf("\n");
}
 
void imprimirParImpar (int *v, int tamanho){
 
 for (int i = 0; i < tamanho; i++){
   if(v[i]%2 == 0)
     printf("%d ", v[i]);
 }
 printf("\n");
 for (int i = 0; i < tamanho; i++){
   if(v[i]%2 != 0)
     printf("%d ", v[i]);
 } 
 printf("\n");
}
 
void Soma(int *v, int tamanho, int numeroDigitado){
  for (int i = 0; i < tamanho; i++){
   for(int j = 0; j < tamanho; j++){
       if(((v[i] + v[j]) == numeroDigitado) && i != j){
               printf(" %d e %d nas posições %d e %d é igual a %d\n", v[i], v[j], i, j,  numeroDigitado);
               return;
       }
   }
 }
printf("Não existe.\n");
}
 
void novoVetor(int *v, int tamanho){
 free(v);
 v = (int *) malloc(tamanho * sizeof(int));
 for (int i = 0; i < tamanho; i++){
    printf("Digite o valor do item %d: ", i);
    scanf("%d", &v[i]);
 }
 }
 
void exibeMenu(){

}
 
int main (void) {
  int opcao = -1;
  int tamanhoVetor = 6;
  int vetor[] = {3,1,5,6,1,9,2};
  printf("1 - para imprimir o vetor.\n");
  printf("2 - para imprimir os números pares ímpares do vetor.\n");
  printf("3 - para descobrir se existe dois valores em que a soma resulte no valor fornecido \n");
  printf("4 - para inserir um novo vetor \n");
  printf("0 - para sair \n");
  printf("------------------------------------- \n");
  while(opcao != 0){

    switch (opcao)
    {
      case 1:
        imprimirArray(vetor, tamanhoVetor);
      break;

      case 2:
        imprimirParImpar(vetor, tamanhoVetor);
      break;

      case 3:
      printf("Digite o número:");
      int numero = 0;
      scanf("%d", &numero);
      Soma(vetor, tamanhoVetor, numero);
      break;

      case 4:
      printf("Digite o tamanho do novo vetor:");
      scanf("%d", &tamanhoVetor);
      novoVetor(vetor, tamanhoVetor);
      break;
      default:
        break;
    }
    printf("Digite a opção do menu: ");
    scanf("%d", &opcao);
  }
}
