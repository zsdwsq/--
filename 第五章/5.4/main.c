#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	char c;   
	int letters=0,space=0,digit=0,other=0;   
	printf("������һ���ַ�:\n");   
	while((c=getchar())!='\n')    
	{      
	  if (c>='a' && c<='z' || c>='A' && c<='Z')  
	    letters++;      
	  else if (c==' ')      
	    space++;      
	  else if (c>='0' && c<='9')      
	    digit++;      
	  else      
	    other++;     
	}    
	printf("��ĸ��:%d\n�ո���:%d\n������:%d\n�����ַ���:%d\n",letters,space,digit,other);
	return 0;
}
