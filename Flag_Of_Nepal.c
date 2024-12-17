#include<stdio.h>
#include<conio.h>

void main(){
	int i,j, c=1;
	
	for(i=1;i<=6;i++){
		for(j=1;j<=i;j++){
			printf("* ");
		}
		
		if(i==5 && c==5){
			i=1;
		}
		printf("\n");
		c++;
	}
	getch();
}
