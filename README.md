# Mercado-da-Berenice-V.1 - C

#include <stdio.h> #include <stdlib.h> #include <locale.h>

int main() { setlocale(LC_ALL, "Portuguese"); int opc, qtdItem, pagamento,parcelas; float forma = 7.50, centeio = 8.69, broa = 5.0, refri = 8.0, sonho = 5.0, vt, vtp, valorParcelas;

do{
    printf("Seja bem vindo a padaria da Berenice\n");
    printf("Para comprar selecione a opção desejada\n");
    printf("1 - Forma - \n2 - Centeio - \n3 - Broa - \n4 - Refrigerante - \n5 - Sonho - \n0 - para sair\n");

    scanf("%d",&opc);
    getchar();
    system ("cls");
    switch(opc){
        case 1:
            printf("Digite a quantidade de pães de forma desejada: \n");
            scanf("%d",&qtdItem);
            vt=qtdItem*forma;
            printf("\nEscolha a forma de pagamento\n1 - A vista -\n2 - Parcelado\n");
            scanf("%d",&pagamento);
            getchar();
            system("cls");
            if(pagamento==1){
                printf("O valor da sua compra é:R$%.2f\n",vt);

            }else{
                printf("Insira a quantidade de parcelas\n");
                scanf("%d",&parcelas);
                printf("o valor total parcelado para compra de pães de forma é:R$%.2f\n",vtp=vt*1.03);
                printf("o valor das suas %d parcelas será:R$%.2f cada uma\n",parcelas,valorParcelas=vtp/parcelas);
            }
            break;
        case 2:
            printf("Digite a quantidade de pães de centeio desejada: \n");
            scanf("%d",&qtdItem);
            vt=qtdItem*centeio;
            printf("\nEscolha a forma de pagamento\n1 - A vista -\n2 - Parcelado\n");
            scanf("%d",&pagamento);
            getchar();
            system("cls");
            if(pagamento==1){
                printf("O valor da sua compra é:R$%.2f\n",vt);
            }else{
                printf("Insira a quantidade de parcelas\n");
                scanf("%d",&parcelas);
                getchar;
                printf("o valor total parcelado é:R$%.2f\n",vtp=vt*1.03);
                printf("o valor das suas %d parcelas será:R$%.2f cada uma\n",parcelas,valorParcelas=vtp/parcelas);
            }
            break;
        case 3:
            printf("Digite a quantidade de Broa desejada: \n");
            scanf("%d",&qtdItem);
            getchar();
            vt=qtdItem*broa;
            printf("\nEscolha a forma de pagamento\n1 - A vista -\n2 - Parcelado\n");
            scanf("%d",&pagamento);
            getchar();
            system("cls");
            if(pagamento==1){
                printf("O valor da sua compra é:R$%.2f\n",vt);
            }else{
                printf("Insira a quantidade de parcelas\n");
                scanf("%d",&parcelas);
                getchar();
                printf("o valor total parcelado é:R$%.2f\n",vtp=vt*1.03);
                printf("o valor das suas %d parcelas será:R$%.2f cada uma\n",parcelas,valorParcelas=vtp/parcelas);
            }
            break;
        case 4:
            printf("Digite a quantidade de refrigerantes desejada: \n");
            scanf("%d",&qtdItem);
            getchar();
            vt=qtdItem*refri;
            printf("\nEscolha a forma de pagamento\n1 - A vista -\n2 - Parcelado\n");
            scanf("%d",&pagamento);
            getchar();
            system("cls");
            if(pagamento==1){
                printf("O valor da sua compra é:R$%.2f\n",vt);
            }else{
                printf("Insira a quantidade de parcelas\n");
                scanf("%d",&parcelas);
                getchar();
                printf("o valor total parcelado é:R$%.2f\n",vtp=vt*1.03);
                printf("o valor das suas %d parcelas será:R$%.2f cada uma\n",parcelas,valorParcelas=vtp/parcelas);
            }
            break;
        case 5:
            printf("Digite a quantidade de sonhos: \n");
            scanf("%d",&qtdItem);
            getchar();
            vt=qtdItem*sonho;
            printf("\nEscolha a forma de pagamento\n1 - A vista -\n2 - Parcelado\n");
            scanf("%d",&pagamento);
            getchar();
            system("cls");
            if(pagamento==1){
                printf("O valor da sua compra é:R$%.2f\n",vt);
            }else{
                printf("Insira a quantidade de parcelas\n");
                scanf("%d",&parcelas);
                getchar();
                printf("o valor total parcelado é:R$%.2f\n",vtp=vt*1.03);
                printf("o valor das suas %d parcelas será:R$%.2f cada uma\n",parcelas,valorParcelas=vtp/parcelas);
            }

            break;
        case 0:
            break;


        default:
            printf("Valor inválido, digite um número de 1 a 5\n");

    }
  printf("Deseja continuar a compra? Aperte 0 para sair\n");
  scanf("%d",&opc);
}while(opc!=0);

return 0;
