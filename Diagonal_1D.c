#include<stdio.h>
#include<conio.h>

void main(){
	int i, j, row, column;
	printf("Enter the no.of rows and columns: ");
	scanf("%d%d", &row, &column);
	if(row==column){  //only square matrices have diagonal elements
	int mat[row][column];
	
	// array initialization
	for(i=0; i<row; i++){
		for(j=0; j<column; j++){
			printf("Enter matrix[%d][%d]: ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}
	
	//printinf the matrix
	printf("The matrix is:\n");
		for(i=0; i<row; i++){
		for(j=0; j<column; j++){
			printf(" %d", mat[i][j]);
		}
		printf("\n");
	}
	
	//printing diagonal elements
	printf("Diagonal elements in 1D format  are:\n[");
	for(i=0; i<row; i++){
		for(j=0; j<column; j++){
			if(i==j){
				printf("%d, ",mat[i][j]);
			}
		}
	}
	printf("\b\b]");
	}
	else{
		printf("Only square matrices(row=column) have diagonal elements.");
	}
	getch();
}
