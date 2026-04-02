#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    /**/ 
    
    //01-//

    int n;

    printf("Digite um número: ");
    scanf("%d", &n);

    if (n % 4 == 0){
        printf("Multiplo de 4!\n");
    }else{
        printf("Não é múltiplo de 4!\n");
    }
    
    printf("_________________________________________________________\n"); 

    //02-//

    int n1;
    int n2;
    int n3;

    printf("Digite três números: \n");
    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 <= n2 && n1 <= n3){
        printf("O menor número é: %d\n", n1);
    }else if (n2 <= n1 && n2 <= n3){
        printf("O menor número é: %d\n", n2);
    }else if (n3 <= n1 && n3 <= n2){
        printf("O menor número é: %d\n", n3);
    }else{
        printf("Os números são iguais!\n");
    }

    printf("_________________________________________________________\n"); 

    //03-//

    int id;

    printf("Digite a idade: ");
    scanf("%d", &id);

    if(id <= 12 && id >= 0){
        printf("Criança!\n");
    }else if (id > 12 && id <= 19){
        printf("Adolescente!\n");
    }else{
        printf("Adulto!\n");
    }
    
    printf("_________________________________________________________\n"); 
    //04-//

    int p;

    printf("Digite um número: ");
    scanf("%d", &p);


    if  (p == 2 || p == 3 || p == 5 || p == 7 || p > 1 && p % 1 == 0 && p % p == 0 && p % 2 != 0 &&  p % 3 != 0 && p % 5 != 0 && p % 7 != 0){
        printf("Número primo!\n");
    }else{
        printf("Número não é primo!\n");
    }

    printf("_________________________________________________________\n"); 

    //05-//

    int c;

    printf("Digite a temperatura em Celsius: ");
    scanf("%d", &c);

    if (c < 0){
        printf("Congelando!\n");
    }else if (c <= 30){
        printf("Temperatura normal!\n");
    }else{
        printf("Quente!\n");
    } 

    printf("_________________________________________________________\n"); 

    //06-//

    int x;

    printf("Digite um número: ");
    scanf("%d", &x);

    if (x % 2 == 0 || x % 7 == 0){
        printf("Divisível por 2 ou 7! \n");
    }else{
        printf("Não é divisível por 2 ou 7! \n");
    }

    printf("_________________________________________________________\n"); 

    //07-//

    int a;

    printf("Digite um número: ");
    scanf("%d", &a);

    if (a >= 20 && a <= 40){
        printf("Dentro do intervalo de 20 a 40! \n");
    }else{
        printf("Fora do intervalo de 20 a 40! \n");
    }

    printf("_________________________________________________________\n"); 

    //08-//

    int a1;
    int a2;
    int soma;

    printf("Digite o primeiro número: ");
    scanf("%d", &a1);
    
    printf("Digite o segundo número: ");
    scanf("%d", &a2);

    soma = a1 + a2;
    if (soma % 2 == 0){
        printf("A soma entre %d e %d é par! \n", a1, a2);
    }else{
        printf("A soma entre %d e %d é ímpar! \n",a1, a2);
    }
    
    printf("_________________________________________________________\n"); 

    //09-//

    float r;

    printf("Digite o valor do produto em R$: ");
    scanf("%f", &r);

    if (r < 50 ){
        printf("O valor do produto com 20%% de aumento é: R$%.2f\n", r * 1.20);
    }else{
        printf("O valor do produto com 10%% de aumento é: R$%.2f\n", r * 1.10);
    }

    printf("-------------------------------FIM!-------------------------------\n");
    printf("Feito por: Eduardo Kirk - RA: 2006190\n");

    return 0;
}
