#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int a[3][3],sum=0; 
	int i,j;   
	printf("enter data:\n");   
	for (i=0;i<3;i++)     
	  for (j=0;j<3;j++)      
	   scanf("%3d",&a[i][j]);   
	for (i=0;i<3;i++)     
	  sum=sum+a[i][i];   
	printf("sum=%6d\n",sum);
	return 0;
}
