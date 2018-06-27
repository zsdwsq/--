#include <stdio.h>
#include <stdlib.h>
struct
{ int year;      
 int month;      
 int day;    
 }date;
 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	 int days;   
	 printf("input year,month,day:");   
	 scanf("%d,%d,%d",&date. year,&date.month,&date.day);   
	 switch(date.month)   
	 { case 1: days=date.day;    break;     
	   case 2: days=date.day+31; break;     
	   case 3: days=date.day+59; break;     
	   case 4: days=date.day+90; break;     
	   case 5: days=date.day+120; break;     
	   case 6: days=date.day+151; break;     
	   case 7: days=date.day+181; break;     
	   case 8: days=date.day+212; break;     
	   case 9: days=date.day+243; break;     
	   case 10: days=date.day+273; break;     
	   case 11: days=date.day+304; break;     
	   case 12: days=date.day+334; break;  
	}  
	if ((date.year %4== 0 && date.year % 100 != 0       
	  ||date.year % 400 == 0) && date.month >=3)  days+=1;  
	printf("%d/%d is the %dth day in %d.\n",date.month,date.day,days,date.year);  return 0;
	return 0;
}
