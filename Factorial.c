#include<stdio.h>
#include<conio.h>

void main(){
	 int i, a, factorial=1;    
	 printf("Enter a number to find factorial. ");   
	 scanf("%d",&a);    //storing the variable in "a"
	 
	 for(i=a;i>=1;i--){ 
	 	factorial *= i;  
	 }
	 
	 printf("\nThe factorial of %d is %d.",a,factorial);
	 
	getch();
}
