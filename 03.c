#include <stdio.h>
int main()
{

    int hora;

    printf("digite a hora:");
    scanf("%d", &hora);

    if(hora < 12){
        printf("Bom dia!\n");
    }else{
        printf("Boa tarded!\n");
    }
 
 return 0;
} 