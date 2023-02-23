
 /*                                                         Revisão Linguagem C, Condiçôes.

    Nome do Programa: Maior Número        
    Descrição do Programa: Este programa aponta para o maior número incerido pelo usuario. O programa esta em loop 
    e apresenta um opção de sair ou continuar para o usuario.
    Autor: Mauro Cesar Yaga Junior 
    Data: 16/02/23
 */


#include <stdio.h>

/*Protótipo*/

void maiormenor(float a, float b);


main(){

  while(1)                                                           /*Loop para manter o programa aberto*/
  {
       /*Variaveis que vão receber os numeros inseridos pelo usuario */ 

      float a = 0,                                
            b = 0;

      char i;                                                        /*Variavel que recebera a opção de continuar ou sair*/

      /*Entrada dos numeros digitados pelo usuario*/

      printf("Vamos testar qual o maior numero:\n");
      printf("Digite o primeiro numero:\n");
      scanf("%f", &a);
      printf("Digite o segundo numero:\n");
      scanf("%f", &b);

      maiormenor(a,b);                                                   /*Chamada da função com os parametros de entrada que ira comparar os números*/
      

      /*Entrada e processamento da opção de sair ou continuar do usuaario*/
      printf("\nDigite s para sair ou c para continuar!\n");
      scanf("%c", &i); 

      if(i == 's' || i == 'S')                                          /*Condiçao caso opte por s ou S*/
      {
         break;                                                         /*Sai do loop*/                    

      }else if(i == 'c' || i == 'C')                                    /*Condição para opte por c ou C*/
      {
         continue;                                                      /*Continua a próxima iteração do código*/
      }
      else
      {
         printf("opcao invalida!\n");                                   /*mensagem caso o usuario tecle qualquer tecla*/
      }
  }

return 0;      

} /* end main */       

/*Declaração da função*/

void maior(float a, float b)                                            /*Atribui a função maio()dois parametros para receber as entradas do usuario */
{
   if((a - b) == 0)                                                    /*Condição para os numeros serem iguais a == b*/
   {
      printf("Os numeros sao iguais!\n");

   }else if((a - b) < 0)                                                /*Condição para o primeiro número ser menor, a < b*/
   {  
      printf("O primeiro numero digitado e menor!\n");                      

   /*Único caso possivel se as duas primeiras condiçoes retornarem falso, a > b*/

   }else
   {
      printf("O primeiro numero digitado e maior!\n");
   }
   

}
  



