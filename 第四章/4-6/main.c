#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,y;   
	printf(" ‰»Îx:");   
	scanf("%d",&x);   
	if(x<1)                 
	{ 
	  y=x;    
	  printf("x=%3d,   y=x=%d\n" ,x,y);     
	  }   
	else  if(x<10)          
	  { y=2*x-1;   
	    printf("x=%d,  y=2*x-1=%d\n",x,y);  
		} 
	 else             
	  { y=3*x-11;  
	   printf("x=%d,  y=3*x-11=%d\n",x,y); 
	    }
	return 0;
}

