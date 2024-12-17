#include<stdio.h>
#include<conio.h>
#include<math.h>

void main(){
	int dec, rem, bin=0, i=0;
	printf("Enter a number in decimal number system: ");
	scanf("%d",&dec);
	
	while(dec!=0){
		rem = dec % 2;
		bin = bin + (pow(10, i))*rem;
		dec = dec / 2;
		i++;
	}
	
	printf("The binary equivalent is %d",bin);
	
	getch();
}
