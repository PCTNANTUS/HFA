#include <stdio.h>
#include <string.h>
typedef struct
{
    int idade;
    char nome[100];
    char sexo[100];
}lista;
void preencher(lista *x)
{
     int i;
     for(i=0;i<3;++i){
     printf("----DADOS DO ALUNO %d----\n",i+1);
     printf("Nome: ");
     getchar();
     scanf("99[^\n]",x[i].nome);
     printf("\nIdade: ");
     scanf("%d",&x[i].idade);
     printf("\nSexo: ");
     getchar();
     scanf("99[^\n]",x[i].sexo);}  
}
int main()
{
     lista pessoas[3];
     preencher(pessoas);
}