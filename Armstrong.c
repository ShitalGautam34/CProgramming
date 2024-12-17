#include<stdio.h>
#include<conio.h>

void main(){
	int n, original, rem, result;
	printf("Enter a number: ");
	scanf("%d",&n);
	original = n;
	
	while(n!=0){
		rem = n % 10;
		result = result + rem*rem*rem;
		n = n / 10;
	}
	
	if(original == result)
		printf("%d is armstrong number",original);
	else
		printf("%d is not a armstrong number",original);
		
	getch();
}
