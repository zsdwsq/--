#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	double sn=100,hn=sn/2;   
	int n;   
	for (n=2;n<=10;n++)    
	{    
	  sn=sn+2*hn;      
	  hn=hn/2;      
	}    
	printf("��10�����ʱ������%f��\n",sn);    
	printf("��10�η���%f��\n",hn);
	return 0;
}
