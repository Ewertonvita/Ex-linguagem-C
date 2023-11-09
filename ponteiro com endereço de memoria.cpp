#include <stdio.h>


int main (void) 
{
	int  x,y,*ponteiro;
	x=27;
	y=150;
	ponteiro = &y;
	
	printf("%i",*ponteiro);// ponteiro rouba valor de y = 150
	getchar ();
	return 0 ; 
	
	
	
	}
