#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,y;   
	printf("please enter x:");   
	scanf("%d",&x);   
	y=0;   
	if(x>=0)     
	  if(x>0) 
	    y=1;   
	else 
	  y=-1;    
	printf("x=%d,y=%d\n",x,y); 
	return 0;
}
