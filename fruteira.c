/*
Uma fruteira está vendendo frutas com a seguinte tabela de preços:
morango: ate 5kg = 2.50kg  acima de 5kg = 2.20kg;
maça:    ate 5kg = 1.80kg  acima de 5kg = 1.50kg;
Se o cliente comprar mais de 8 Kg em frutas ou o valor total da compra ultrapassar R$ 25,00,
receberá ainda um desconto de 10% sobre este total. Escreva um algoritmo para ler a quantidade (em Kg)
de morangos e a quantidade (em Kg) de maças adquiridas e escreva o valor a ser pago pelo
*/
#include <stdio.h>
int main(){

    float pesoMaca = 0;
    float valorkgMaca = 0;
    float valorTotalMaca = 0;

    float pesoMorango = 0;
    float valorTotalMorango = 0;
    float ValorkgMorango = 0;

    float Totalkgfruta = 0;
    float totalCompra = 0;
    float desconto;
    float valorComDesconto;
    int opcao;

    while (1)
    {
        printf("---menu---\n");
        printf("01 = morango\n");
        printf("02 = maca\n");
        printf("03 = Aplicar descontos\n");
        printf("04 = Valor a ser pago\n");
        scanf("%d", &opcao);

        switch (opcao){
        case (1):

            printf("Fruta selecionada: morango\n");
            printf("digite o peso da morango: ");
            scanf("%f", &pesoMorango);

            if (pesoMorango <= 5 && pesoMorango > 0){
                ValorkgMorango = 2.50;
                valorTotalMorango = pesoMorango * ValorkgMorango;
            }else{
                ValorkgMorango = 2.20;
                valorTotalMorango = pesoMorango * ValorkgMorango;
            }

            printf("O valor total do morango deu: %.2f\n", valorTotalMorango);

            break;

        case (2):
            printf("Fruta selecionada: maca\n");
            printf("digite o peso da maca: ");
            scanf("%f", &pesoMaca);

            if (pesoMaca <= 5 && pesoMaca > 0){
                valorkgMaca = 1.80;
                valorTotalMaca = pesoMaca * valorkgMaca;
            }else{
                valorkgMaca = 1.50;
                valorTotalMaca = pesoMaca * valorkgMaca;
            }

            printf("O valor total do maca deu: %.2f\n", valorTotalMaca);

            break;

        case (3):

            totalCompra = valorTotalMorango + valorkgMaca;
            Totalkgfruta = pesoMorango + pesoMaca;

            if (totalCompra > 25 || Totalkgfruta > 8){
                desconto = (totalCompra * 10) / 100;
                printf("desconto: %.2f\n", desconto);
                valorComDesconto = ((desconto - totalCompra) * -1);
            }else{
                printf("Nao possui descontos\n");
            }

            break;

        case (4):

            printf("O total da compra sem desconto deu: %.2f\n", totalCompra);
            printf("O total da compra com desconto deu: %.2f\n", valorComDesconto);

            return 0;
        default:
            break;
        }
    }
}