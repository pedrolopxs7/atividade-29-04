#include<stdio.h>
#include<stdlib.h>

int main() {
    char operacao;
    float num1, num2, resultado;
    char continuar;

    do {
      system("clear");
      printf("Calculadora das 4 operacoes!\n\n\n");
        printf("Escolha a operacao: \n+ = somar \n- = subtrair \n* = multiplicar \n/ = dividir\n");
        scanf(" %c", &operacao);

        printf("Digite o primeiro numero: ");
        scanf("%f", &num1);

        printf("Digite o segundo numero: ");
        scanf("%f", &num2);

        switch(operacao) {
            case '+':
                resultado = num1 + num2;
                break;
            case '-':
                resultado = num1 - num2;
                break;
            case '*':
                resultado = num1 * num2;
                break;
            case '/':
                if(num2 != 0)
                    resultado = num1 / num2;
                else {
                    printf("Erro! Divisão por zero não é permitida.\n");
                    continue;
                }
                break;
            default:
                printf("Operação inválida.\n");
                continue;
        }

        printf("Resultado: %.2f\n", resultado);

        printf("Deseja continuar? (s/n): ");
        scanf(" %c", &continuar);

    } while(continuar == 's' || continuar == 'S');

    printf("Obrigado por usar a calculadora!\n");

    return 0;
}
