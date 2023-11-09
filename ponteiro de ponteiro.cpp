# include <stdio.h>
int main (void) 
{
	int  x,y,*ponteiro1,*ponteiro2,d;
	x=27;
	y=150;
	d=75;
	ponteiro1=&x;
	*ponteiro1=y;
	ponteiro2=&y;
	*ponteiro2=d;
	printf(" \n o valor da variavel x = %i ",*ponteiro1);
	printf(" \n o valor da variavel y = %i", *ponteiro2);

	getchar ();
	
	return 0 ; 
	
	
	
	}
