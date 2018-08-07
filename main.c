#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <windows.h>

void calc(void);
void aprovado(void);
void imc (void);
void vetores (void);

int main(){
    unsigned int res;
    printf("============= Utilitarios v0.1 ==============\n");
    printf("============= By Danthand ====================\n");
    printf("Digite 1 para calculadora, 2 para media escolar, 3 para calculo do IMC! \n ");
    scanf("%i", &res);
    if (res >= 4){
        exit(EXIT_SUCCESS);
    }

     switch (res) {
        case 1:
            calc();
            break;
        case 2:
            aprovado();
            break;
        case 3:
            imc();
            break;
    }
    return (0);
}


 void calc() {
    int num1, num2, sub, soma, div, mult;
    printf("\t\t\t\tCalculadora v0.1\n \t\t\t\t by Denathor\n");
    printf("Digite o numero 1 e o numero 2\n ");
    scanf("%i%i", &num1, &num2);
    system("cls");
    soma = num1 + num2;
    sub = num1 - num2;
    div = num1 / num2;
    mult = num1 * num2;
    printf("A soma é: %i\n", soma);
    printf("A subtracao e: %i\n", sub);
    printf("A divisao e: %i\n", div);
    printf("A multiplicacao e: %i\n", mult);
    system("Pause");

        }

  void aprovado(){
    printf("\t\t\t\t Media escolar v0.1\n");
    printf("\t\t\t\t by Denathor\n");
    float nota1, nota2, nota3, nota4, media;
    printf("Digite sua nota 1\n");
    scanf("%f", &nota1);
      printf("Digite sua nota 2\n");
      scanf("%f", &nota2);
      printf("Digite sua nota 3\n");
      scanf("%f", &nota3);
      printf("Digite sua nota 4\n");
      scanf("%f", &nota4);

    media = (nota1+nota2+nota3+nota4) / 4;
    printf("Sua nota foi %f\n", media);
    if (media >=7 ){
        printf("Parabens!! Voce foi aprovado!!!\n");
    } else {
        printf("Voce foi reprovado :( \n");
    }
    system("Pause");
}

   void imc(){

    int massa;
    float altura, resul;
    printf("Digite sua massa em KG \n");
    scanf("%i", &massa);
    printf("Digite sua altura em metros \n");
    scanf("%f", &altura);
    resul = massa / (altura*altura);
    printf("Seu imc e de %f \n", resul);
    if (resul <=16.9){
        printf("Voce esta muito abaixo do peso!! \n");
        } else if (resul >= 17 && resul <= 18.4){
        printf("Voce esta abaixo do peso!!\n");
        } else if (resul >= 18.5 && resul <= 24.9){
        printf("Voce esta saudavel!!\n");
        }else if (resul >= 25 && resul <= 29.9){
        printf("Voce esta acima do peso!!\n");
        } else if (resul >=30 && resul <= 34.9){
        printf("Voce esta com obesidade grau 1!!\n");
        } else if (resul >= 35 && resul <= 40){
        printf("Voce esta com obesidade grau 2!!\n");
    } else if (resul > 40){
        printf("Voce esta com obesidade grau 3!!\n");
    }
    system("Pause");


    void vetores(){

        }
}