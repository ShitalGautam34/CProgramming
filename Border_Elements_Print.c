#include<stdio.h>
#include<conio.h>

void main(){
	int i, j, row, column;
	printf("Enter the no.of rows and columns: ");
	scanf("%d%d", &row, &column);
	int mat[row][column];
	
	// array initialization
	for(i=0; i<row; i++){
		for(j=0; j<column; j++){
			printf("Enter element[%d][%d]: ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}
	
	//printing the input
	printf("The input is:\n");
	for(i=0; i<row; i++){
		for(j=0; j<column; j++){
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	
	//output printing
	printf("\nThe output is:\n");
	for(i=0; i<row; i++){
		for(j=0; j<column; j++){
			if(i==0 || j==0 || i==row-1 || j==column-1){ //
				printf("%d ", mat[i][j]);
			}
			else{
				printf("  ");
			}
		}
		printf("\n");
	}	
	
	getch();
}
