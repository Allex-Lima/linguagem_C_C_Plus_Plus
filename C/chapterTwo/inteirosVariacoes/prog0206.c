#include <stdio.h>

int main() {
    
    short int idade;
    int montante;
    long int nConta;

    printf("Qual a Idade: ");
    scanf("%hd", &idade);

    printf("Qual o montante a depositar: ");
    scanf("%d", &montante);

    printf("Qual o numero da conta: ");
    scanf("%ld", &nConta);

    printf("Uma pessoa de %hd anos depositou R$ %d na conta %ld\n", idade, montante, nConta);

    return 0;
}