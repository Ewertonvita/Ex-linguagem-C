#include<stdio.h>
#include<stdlib.h>

int main()
{
    int s, n1, n2, op;
    printf("=====calculador======\n\n");
    printf("DIGITE 1 => SOMAR \nDIGITE 2 => SUBTRAIR\nDIGITE 3 => MULTIPLICAR\nDIGITE 4 => DIVIDIR\n");
    scanf("[%d]",&op);
    printf("digite o primeiro numero\n");
    scanf("%d",&n1);
    printf(" digite o segundo numero\n");
    scanf("\n%d",&n2);
    if (op==1){
      s = n1+n2;
         printf (" o resultado da soma é %d",s);}
        if (op==2){
        s = n1-n2;
         printf (" o resultado da SUBTRAÇÃO  é %d",s);}
        if (op==3){
        s = n1*n2;
         printf (" o resultado da MULTIPLICAÇÃO é %d",s);}
        if (op==4){
        s = n1/n2;
        printf (" o resultado DIVISÃO é %d",s);
        }
        
    
    return 0;
}
