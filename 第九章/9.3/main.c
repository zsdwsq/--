#include <stdio.h>
#include <stdlib.h>
#define N 5
struct student 
{ char num[6];   
  char name[8];   
  int score[4]; 
}stu[N];

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	void print(struct student stu[6]);
	int i,j; for (i=0;i<N;i++) 
	{printf("\ninput score of student %d:\n",i+1);   
	  printf("NO.: ");   
	  scanf("%s",stu[i].num);   
	  printf("name: ");   
	  scanf("%s",stu[i].name);   
	  for (j=0;j<3;j++)     
	    {printf("score %d:",j+1);      
		 scanf("%d",&stu[i].score[j]);     
		}   
	  printf("\n"); 
	} 
	print(stu); 
	return 0; 
	}  
	void print(struct student stu[6])  
	{int i,j;   
	 printf("\n   NO.      name    score1   score2  score3\n");   
	 for (i=0;i<N;i++)    
	   {printf("%5s%10s",stu[i].num,stu[i].name);     
	    for (j=0;j<3;j++)       
		  printf("%9d",stu[i].score[j]);     
		  printf("\n");    
		  }

}
