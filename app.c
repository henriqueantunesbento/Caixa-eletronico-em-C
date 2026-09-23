#include <stdio.h>


int saldo_disponivel = 1500;
int nota_100 = 100;
int nota_50 = 50;
int nota_20 = 20;
int nota_10 = 10;
int nota_5 = 5;


int receber_valor(int saldo_disponivel) {

    int valor_recebido;
    printf("Digite o valor do saque: ");
    scanf("%d", &valor_recebido);

    while (valor_recebido % 5 != 0 || valor_recebido > saldo_disponivel) {
        printf("Digite um valor válido (O valor deve terminar em 0 ou 5)");
        scanf("%d", &valor_recebido);  
    };

    return valor_recebido;
};




int calcular_notas_100(int valor_entrada) {


    int notas_100_entregues = 0;


    while (valor_entrada >= 100) {
        valor_entrada = valor_entrada - 100;
        notas_100_entregues = notas_100_entregues + 1;
    };


    return notas_100_entregues;
};




int calcular_notas_50(int valor_entrada) {


    int notas_50_entregues = 0;


    while (valor_entrada >= 50) {
        valor_entrada = valor_entrada - 50;
        notas_50_entregues = notas_50_entregues + 1;
    };


    return notas_50_entregues;
};




int calcular_notas_20(int valor_entrada) {


    int notas_20_entregues = 0;


    while (valor_entrada >= 20) {
        valor_entrada = valor_entrada - 20;
        notas_20_entregues = notas_20_entregues + 1;
    };


    return notas_20_entregues;
};




int calcular_notas_10(int valor_entrada) {


    int notas_10_entregues = 0;


    while (valor_entrada >= 10) {
        valor_entrada = valor_entrada - 10;
        notas_10_entregues = notas_10_entregues + 1;
    };


    return notas_10_entregues;
};




int calcular_notas_5(int valor_entrada) {


    int notas_5_entregues = 0;


    while (valor_entrada >= 5) {
        valor_entrada = valor_entrada - 5;
        notas_5_entregues = notas_5_entregues + 1;
    };


    return notas_5_entregues;
};


int saque (int valor_entrada) {


    int mensagem_notas_100 = 0;
    int mensagem_notas_50 = 0;
    int mensagem_notas_20 = 0;
    int mensagem_notas_10 = 0;
    int mensagem_notas_5 = 0;

        if (valor_entrada >= 100) {
            mensagem_notas_100 = calcular_notas_100(valor_entrada);
            valor_entrada -= mensagem_notas_100 * nota_100;
        }; 
        if (valor_entrada >= 50) {
            mensagem_notas_50 = calcular_notas_50(valor_entrada);
            valor_entrada -= mensagem_notas_50 * nota_50;
        }; 
        if(valor_entrada >= 20) {
            mensagem_notas_20 = calcular_notas_20(valor_entrada);
            valor_entrada -= mensagem_notas_20 * nota_20;
        }; 
        if(valor_entrada >= 10) {
            mensagem_notas_10 = calcular_notas_10(valor_entrada);
            valor_entrada -= mensagem_notas_10 * nota_10;
        }; 
        if(valor_entrada >= 5) {
            mensagem_notas_5 = calcular_notas_5(valor_entrada);
            valor_entrada -= mensagem_notas_5 * nota_5;
        };


    if (mensagem_notas_100 > 0) {
        printf("Quantidades de notas 100: %d", mensagem_notas_100);
    };
    if(mensagem_notas_50 > 0) {
        printf("Quantidades de notas 50: %d", mensagem_notas_50);
    };
    if(mensagem_notas_20 > 0) {
        printf("Quantidades de notas 20: %d", mensagem_notas_20);
    };
    if(mensagem_notas_10 > 0) {
        printf("Quantidades de notas 10: %d", mensagem_notas_10);
    };
    if(mensagem_notas_5 > 0) {
        printf("Quantidades de notas 5: %d", mensagem_notas_5);
    };


};


int main() {
   
    int valor_saque = receber_valor(saldo_disponivel);
    saque(valor_saque);
    return 0;
};