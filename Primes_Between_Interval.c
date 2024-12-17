#include<stdio.h>
#include<conio.h>

void main(){
	int uLim, lLim, i, j;
	
	printf("Enter upper and lower limit:  ");
	scanf("%d %d",&lLim, &uLim);
	
	printf("The prime numbers between %d and %d are:\n", lLim, uLim);
	for(i=lLim; i<=uLim; i++){
		for(j=1; j<=i; j++){
			
			if((i%j==0) && (j!=1)){
				break;
			}
		}
		
		if(j==i){
			printf("%d, ",i);
		}
	}
	getch();
}
