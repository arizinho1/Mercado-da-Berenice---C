// Declaracao de Bibliotecas para linguagem C
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float forma = 7.50, centeio = 8.69, broa = 5.00, sonho = 4.50, tubaina = 3.25, valorUnitario, subtotal, valorTroco, parcelas, valorParcela; // Atribuicao de Valores para os produtos.
    int opcao, quantidade; // Variavel para guardar o codigo do produto que o usuario vai comprar e a quantidade.
    char troco; // Variavel para demonstrar qual será o troco do cliente, se necessário.

    // Printando a tabela de produtos no Terminal
    printf("--------------------------------------------------------------------------------\n");
    printf("\t\t\t\tBem Vindo ao Mercadinho da Berenice!\t\t\n");
    printf("\t\t\tSiga a tabela com os produtos comercializados neste local:\n");
    printf("\n\t\t\t\tCodigo\t\tItem\t\tPreco\n");
    printf("\t\t\t\t1\t\tPao de Forma\tR$ 7.50\n");
    printf("\t\t\t\t2\t\tPao de Centeio\tR$ 8.69\n");
    printf("\t\t\t\t3\t\tBroa de Milho\tR$ 5.00\n");
    printf("\t\t\t\t4\t\tSonho\t\tR$ 4.50\n");
    printf("\t\t\t\t5\t\tTubaina\t\tR$ 3.25\n\n\n");
    printf("--------------------------------------------------------------------------------\n");

    // Pergunta para o usuario qual o codigo do produto para realizar a compra
    printf("\nDigite um numero referente ao codigo de 1 a 5 para selecionar um dos produtos: \n");
    scanf("%d", &opcao);
    getchar();

    // valorUnitário entra como variável coringa para ser utilizada na atribuição do valor dos produtos, utilizada em outras partes no código
    switch(opcao)
    {
    case 1:
        valorUnitario = forma;
        break;
    case 2:
        valorUnitario = centeio;
        break;
    case 3:
        valorUnitario = broa;
        break;
    case 4:
        valorUnitario = sonho;
        break;
    case 5:
        valorUnitario = tubaina;
        break;
    default:
        printf("\nOpcao invalida, reinicie o programa e tente novamente\n");
        return 0;
        break;
    }

    printf("\nAgora, digite a quantidade desejada: \n"); // Selecionar a quantidade desejada do produto, que foi anteriormente escolhida pelo cliente.
    scanf("%i", &quantidade);
    getchar();

    // Cálculo do subtotal
    subtotal = quantidade * valorUnitario;

    printf("\nO subtotal e: R$ %.2f\n", subtotal);

    printf("\n\nQual seria a forma de pagamento?\n");
    printf("\n\t\t\t\tCodigo\t\tForma\n");
    printf("\t\t\t\t1\t\tA vista\n");
    printf("\t\t\t\t2\t\tA prazo\n");

    printf("\nDigite a forma desejada: \n");
    scanf("%i", &opcao);
    getchar();

    if(opcao == 1)// Se o pagamento for a vista
    {
        if(subtotal > 0 && subtotal <= 50.0)// Se subtotal for entre 0 e 50
        {
            subtotal -= subtotal * 0.05;//Desconto de 5% aplicado ao valor final
        }
        else if(subtotal > 50.0 && subtotal < 100.0)//Se o subtotal for entre 50 e 100
        {
            subtotal -= subtotal * 0.1;//Desconto de 10% aplicado ao valor final
        }
        else
        {
            subtotal -= subtotal * 0.18;// Desconto de 18% aplicado ao valor final
        }
        printf("\nO total e R$ %.2f", subtotal);
        printf("\n\nVoce precisa de troco? (S/N)\n");
        scanf("\n%c", &troco);
        getchar();

        if(troco == 'S' || troco == 's') // Validação caso a resposta seja S ou s para troco
        {
            printf("\nTroco para quanto?\n");
            scanf("\n%f", &valorTroco);
            getchar();

            float volta = valorTroco - subtotal;

            printf("\nAqui vai o seu troco: R$ %.2f", volta);
        }
        else if(troco == 'N' || troco == 'n') // Validação caso a resposta seja N ou n para troco
        {
            printf("Troco nao e necessario.");
        }
        else
        {
            printf("\nOpcao invalida, reinicie o programa e tente novamente\n");
            return 0;
        }
    }
    else if(opcao == 2)// Se pagamento parcelado for selecionado
    {
        printf("\n\nEm quantas parcelas gostaria de pagar? \n"); //Após selecionar a forma de pagamento 2 que seria a prazo, pergunta para o usuário o numero de parcelas desejado.
        scanf("%f", &parcelas);

        if(parcelas < 1)// Se a quantidade de parcelas for menor que 1
        {
            printf("\nQuantidade invalida, reinicie o programa e tente novamente\n");//Printa mensagem de erro
            return 0;//E finaliza o programa
        }
        else if(parcelas >= 1 && parcelas < 3)//Se a quantidade de parcelas for entre 1 e 3
        {
            subtotal += subtotal * 0.05;// Acrescimo no subtotal de 5%
        }
        else // Se a quantidade de parcelas for maior que 3
        {
            subtotal += subtotal * 0.08;// Acrescimo no subtotal de 8%
        }

        valorParcela = subtotal / parcelas;// Valor da parcela eh igual ao subtotal dividido pela quantidade de parcelas (considerando o acréscimo)

        printf("\nSelecionado: %.0f parcela(s).", parcelas);
        printf("\nO valor de cada parcela sera de: R$ %.2f\n", valorParcela); //Valor de cada parcela.
    }
    else
    {
        printf("\nOpcao invalida, reinicie o programa e tente novamente\n"); // Mensagem de erro
        return 0;
    }

    printf("\n\nObrigado pela sua compra, tenha um otimo dia!\n"); // Mensagem do fim do programa

    return 0; // Fim do Programa
}
