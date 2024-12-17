#include<stdio.h>
#include<conio.h>

void main(){
	int n,original,rev, rem;
	
	printf("Enter a number:");
	scanf("%d",&n);
	original = n;
	
	while(n!=0){
		rem = n % 10;
		rev = rev*10 + rem;
		n /= 10;
	}
	
	if(original == rev){
		printf("\n%d is palindrome",original);
	}
	else{
		printf("\n%d is not a plaindrome", original);
	}
	getch();
}
