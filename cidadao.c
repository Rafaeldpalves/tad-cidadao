#include <stdio.h>

struct Cidadao {
    int id;
    char nome[100];
    int idade;
};

void imprimirCidadao(struct Cidadao c) {
    printf("\n--- Dados do Cidadao ---\n");
    printf("ID: %d\n", c.id);
    printf("Nome: %s\n", c.nome);
    printf("Idade: %d\n", c.idade);
}

int main() {
    struct Cidadao c;

    printf("Digite o ID: ");
    scanf("%d", &c.id);

    printf("Digite o nome: ");
    scanf(" %[^\n]", c.nome);

    printf("Digite a idade: ");
    scanf("%d", &c.idade);

    imprimirCidadao(c);

    return 0;
}