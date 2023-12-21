#include <stdio.h>

int main(){
    float bruto, deducaoINSS, inss;
    int depend;
    
    printf("---- Cálculo de imposto de renda ----\n");
    printf("Digite o valor bruto: ");
    scanf("%f",&bruto);
    
    //printf("Digite o quantidade de dependentes: ");
    //scanf("%d",&depend);
    //deducao = depend*189.50

    if(bruto <= 1320){
        inss = bruto * 0.075;
        printf("Valor descontado de INSS: R$ %.2f.\n",inss);
    }
    else if(bruto >= 1320.01 && bruto <=  2571.29){
        inss = bruto * 0.09;
        printf("Valor descontado de INSS: R$ %.2f.\n",inss);
    }
    else if(bruto >= 2571.30 && bruto <= 3856.94){
        inss = bruto * 0.12;
        printf("Valor descontado de INSS: R$ %.2f.\n",inss);
    }
    else if(bruto >= 3856.95 && bruto <= 7507.49){
        inss = bruto * 0.14;
        printf("Valor descontado de INSS: R$ %.2f.\n",inss);
    }
    else{
        inss = 7507.49 * 0.14;
        printf("Valor descontado de INSS: R$ %.2f.\n",inss);
    }
    
    return 0;
}


