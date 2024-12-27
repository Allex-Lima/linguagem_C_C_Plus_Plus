#include <stdio.h>

int main() {
    int n1, n2;

    printf("Introduza dois Números: ");
    scanf("%d%d", &n1, &n2);

    printf("O resultado de %d + %d = %d", n1, n2, (n1 + n2));
    
    return 0;
}