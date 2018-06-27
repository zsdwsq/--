#include <stdio.h>
#include <stdlib.h>
#define M 1000

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,k;                                         
	printf("请输入一个小于%d的整数i:",M);   
	scanf("%d",&i);   
	if (i>M)    
	{printf("输入的数不符合要求，请重新输入一个小于%d的整数i:",M);    
	scanf("%d",&i);   
	}   
	k=sqrt(i);   
	printf("%d的平方根的整数部分是：%d\n",i,k);

	return 0;
}
