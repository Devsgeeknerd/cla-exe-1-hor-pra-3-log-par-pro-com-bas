#include <stdio.h>

// Função para calcular o fatorial de um número.
long long calcularFatorial(int num)
{
    // Verifica se o número é 0 ou 1.
    if (num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        // Chamada recursiva para calcular o fatorial.
        return num * calcularFatorial(num - 1);
    }
}

int main()
{
    int numero;

    // Solicita ao usuário para digitar um número inteiro.
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // Verifica se o número é negativo.
    if (numero < 0)
    {
        printf("O fatorial não está definido para números negativos.\n");
    }
    else
    {
        // Calcula o fatorial e exibe o resultado.
        long long fatorial = calcularFatorial(numero);
        printf("O fatorial de %d é %lld.\n", numero, fatorial);
    }

    return 0;
}
