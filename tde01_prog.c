#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

/**/

//01-//

int v1;
int v2;

    printf("Digite o primeiro valor: ");
    scanf("%d", &v1);

    printf("Digite o segundo valor: ");
    scanf("%d", &v2);

    printf("A soma entre %d e %d é = %d\n",v1, v2, v1+v2);
    printf("_________________________\n"); 


//02-//

int r;

    printf("Digite seu saldo em R$: ");
    scanf("%d", &r);

    printf("O seu saldo em U$ é: %d\n", r/5);
    printf("_________________________\n"); 

//03-//

float r1;

    printf("Digite o valor do raio: ");
    scanf("%f", &r1);

    printf("A área do círculo é: %.2f\n", 3.14*(r1*r1));
    printf("_________________________\n"); 

//04-//

float nt1;
float nt2;



    printf("Digite a primeira nota: ");
    scanf("%f", &nt1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nt2);

    printf("A média ponderada é: %.2f\n", (nt1*3 + nt2*7)/10);
    printf("_________________________\n"); 

//05-// 

int n;

    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    printf("Antecessor: %d\n", n-1);
    printf("Sucessor: %d\n", n+1);
    printf("_________________________\n"); 

//06-// 

int i;

    printf("1 = Maior ou igual a 18 anos!\n");
    printf("0 = Menor de 18 anos!\n");

    printf("Digite sua idade: ");
    scanf("%i", &i);

    printf("Resultado: %i\n", i >= 18);
    printf("_________________________\n"); 

//07-// 

    printf("1 = Números diferentes\n");
    printf("0 = Números iguais\n");

    int a;
    int b;

    printf("Digite o primeiro número: ");
    scanf("%d", &a);

    printf("Digite o segundo número: ");
    scanf("%d", &b);

    printf("Resultado: %d\n", !(a == b));
    printf("_________________________\n");

//08-// 

    printf("1 = Número maior que 0.\n");
    printf("0 = Número menor ou igual a 0.\n");

    int num1;

    printf("Digite um número: ");
    scanf("%d", &num1);

    printf("Resultado: %d\n", num1 > 0);
    printf("_________________________\n");

//09-// 

float p;

    printf("Digite o preço do produto:R$ ");
    scanf("%f", &p);

    printf("O preço com desconto de 10%% é:R$ %.2f\n", p*0.9);
    printf("_________________________\n"); 

//10// 

    printf("1 = Número negativo.\n");
    printf("0 = Número positivo ou zero.\n");

    int x;

    printf("Digite um número: ");
    scanf("%d", &x);

    printf("Resultado: %d \n", x < 0);
    

    printf("==========Programa finalizado==========!\n");


    return 0;
}
