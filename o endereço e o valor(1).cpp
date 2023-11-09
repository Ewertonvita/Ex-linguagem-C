# include <stdio.h>
int main (void) 
{
	int  x,y,*ponteiro;
	x=27;
	y=150;
	ponteiro = &y;
	
	printf(" o valor da variavel y =%i \n\n o endereo de y=%i ",*ponteiro,ponteiro);// com * rouba valor sem * rouba endereço 
	
	getchar ();
	return 0 ; 
	
	
	
	}
