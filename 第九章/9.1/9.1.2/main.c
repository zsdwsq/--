#include <stdio.h>
#include <stdlib.h>
struct
{ int year;      
 int month;      
 int day;    
 }date;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int i,days;   
	 int day_tab[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};   
	 printf("input year,month,day:");   
	 scanf("%d,%d,%d",&date. year,&date.month,&date.day);   
	 days=0;   
	 for(i=1;i<date.month;i++)      
	   days=days+day_tab[i];   
	 days=days+date.day;   
	 if((date.year%4==0 && date.year%100!=0 || date.year%400==0) && date.month>=3)     
	   days=days+1;   
	 printf("%d/%d is the %dth day in %d.\n",date.month,date.day,days,date.year);   
	 return 0;
   }
