#include <stdio.h>
#include <stdlib.h>
#define M 1000

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,k;                                         
	printf("������һ��С��%d������i:",M);   
	scanf("%d",&i);   
	if (i>M)    
	{printf("�������������Ҫ������������һ��С��%d������i:",M);    
	scanf("%d",&i);   
	}   
	k=sqrt(i);   
	printf("%d��ƽ���������������ǣ�%d\n",i,k);

	return 0;
}
