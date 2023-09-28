/*A gerente de um salão tem uma tabela em que registra as quantidades de serviços
executados nos "pés", nas "mãos" e o serviço de podologia das cinco manicures.
Sabendo-se que cada uma ganha exatamente 50% do que faturou ao mês, criar um
programa que possa calcular e imprimir quanto cada uma vai receber, uma vez que
não os valores, respectivamente, são: R$10,00, R$15,00 e R$30,00. As entradas
devem ser encerradas quando for digitado o código 0 para a manicure*/

#include <stdio.h>

int main() {
    const float valor_pes = 10.00;
    const float valor_maos = 15.00;
    const float valor_podologia = 30.00;

    int pes[5] = {0};
    int maos[5] = {0};
    int podologia[5] = {0};
    float faturamento[5] = {0.0};

    for (int i = 0; i < 5; i++) {
        printf("Digite a quantidade de serviços executados nos pés pela manicure %d: ", i+1);
        scanf("%d", &pes[i]);

        printf("Digite a quantidade de serviços executados nas mãos pela manicure %d: ", i+1);
        scanf("%d", &maos[i]);

        printf("Digite a quantidade de serviços de podologia executados pela manicure %d: ", i+1);
        scanf("%d", &podologia[i]);

        // Calcula o faturamento total da manicure
        faturamento[i] = pes[i] * valor_pes + maos[i] * valor_maos + podologia[i] * valor_podologia;
    }

    printf("\nRelatório de pagamento das manicures:\n");
    for (int i = 0; i < 5; i++) {
        float pagamento = faturamento[i] * 0.5; // Cada manicure ganha 50% do faturamento
        printf("Manicure %d vai receber: R$ %.2f\n", i+1, pagamento);
    }

    return 0;
}
