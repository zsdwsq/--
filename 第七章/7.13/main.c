#include <stdio.h>
#include <stdlib.h>
#define N 10
#define M 5
float score[N][M];
float a_stu[N],a_cour[M];
int r,c;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int i,j;   
	float h;   
	float s_var(void);   
	float highest();   
	void input_stu(void);   
	void aver_stu(void);   
	void aver_cour(void);   
	input_stu();   
	aver_stu();   
	aver_cour();   
	printf("\n  NO.     cour1   cour2   cour3   cour4 cour5   aver\n");   
	for(i=0;i<N;i++)    
	  {printf("\n NO %2d ",i+1);     
	   for(j=0;j<M;j++)       
	     printf("%8.2f",score[i][j]);     
	   printf("%8.2f\n",a_stu[i]); 
	   }   
	 printf("\naverage:");   
	 for (j=0;j<M;j++)     
	   printf("%8.2f",a_cour[j]);   
	 printf("\n");   
	 h=highest();   
	 printf("highest:%7.2f   NO. %2d   course %2d\n",h,r,c);   
	 printf("variance %8.2f\n",s_var());
	return 0;
}
