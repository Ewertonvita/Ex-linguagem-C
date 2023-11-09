
#include <stdio.h>
#include <stdlib.h>


int main()
{       printf(" **** TABOADA EM C ****\n\n");
        int s,n1,n2,op;
        printf ("DIGITE 1 = SOMA\nDIGITE 2 = SUBTRAI\nDIGITE 3 = MULTIPLICA\nDIGITE 4 = DIVIDE\n");
        scanf("%d",&op);
        printf ("Digite o primeiro numero\n");
        scanf("%d",&n1);
        printf ("Digite o segundo numero\n");
        scanf("%d",&n2);
        if(op==1){
                s = n1+n2;
                printf ( "o resultado da soma foi = %d",s);
        }
        if(op==2){
                s= n1-n2;
                printf ( "o resultado da subtração foi = %d",s);
                
        }
         if(op==3){
                s = n1*n2;
                printf ( "o resultado da multiplicação foi = %d",s);
        }
         if(op==4){
                s = n1/n2;
                printf ( "o resultado da divisão foi = %d",s);
        
        }
        
        printf("\nfim\n");
        
        
        
    
    return 0;
}
