#include <stdio.h>
#include <string.h>
#include <locale.h>

double soma(double a, double b) { return a + b; }
double subtracao(double a, double b) { return a - b; }
double multiplicacao(double a, double b) { return a * b; }
double divisao(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Erro! Divisão por zero.\n");
        return 0;
    }
}

int main(void) {
    setlocale(LC_ALL, "");

    char operacao;
    double fator1, fator2, resultado;
    int continuar = 1;

    while (continuar) {
        printf("Digite o operador que deseja usar (+, -, *, /): ");
        scanf(" %c", &operacao);
        printf("Digite o primeiro fator: ");
        scanf("%lf", &fator1);
        printf("Digite o segundo fator: ");
        scanf("%lf", &fator2);

        switch (operacao) {
            case '+':
                resultado = soma(fator1, fator2);
                break;
            case '-':
                resultado = subtracao(fator1, fator2);
                break;
            case '*':
                resultado = multiplicacao(fator1, fator2);
                break;
            case '/':
                resultado = divisao(fator1, fator2);
                break;
            default:
                printf("Operador inválido! \n");
                continue;
        }
        printf("Resultado: %.2f\n", resultado);

        printf("Deseja realizar outra operação? (1 para Sim, 0 para Não): ");
        scanf("%d", &continuar);
    }

    printf("Calculadora encerrada.\n");
    return 0;
}