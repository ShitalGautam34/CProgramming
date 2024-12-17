#include<stdio.h>
#include<conio.h>

void main(){
	int i, j, row, column, operChoice;
	printf("Enter the no. of rows and columns: ");
	scanf("%d%d", &row, &column);
	int matA[row][column];
	int matB[row][column];
	
	// array initialization
	printf("Enter elements of first matrix:\n");
	for(i=0; i<row; i++){
		for(j=0; j<column; j++){
			printf("Enter matrixA[%d][%d]: ", i, j);
			scanf("%d", &matA[i][j]);
		}
	}
	printf("Enter elements of second matrix:\n");
	for(i=0; i<row; i++){
		for(j=0; j<column; j++){
			printf("Enter matrixB[%d][%d]: ", i, j);
			scanf("%d", &matB[i][j]);
		}
	}
	
	printf("Enter 1 -> addition & 2 -> subtraction");
	scanf("%d", &operChoice);
	printf("The matrix A is:\n");
		for(i=0; i<row; i++){
			for(j=0; j<column; j++){
				printf(" %d", matA[i][j]);
			}
		printf("\n");
	}
	printf("The matrix B is: \n");
	for(i=0; i<row; i++){
		for(j=0; j<column; j++){
			printf(" %d", matB[i][j]);
		}
	printf("\n");
	}
	
	//matrix addition
	if(operChoice == 1)
		printf("The martix A + B is: \n");
	else
		printf("The martix A - B is: \n");
		
	for(i=0; i<row; i++){
		for(j=0; j<column; j++){
			if(operChoice == 1){
				printf("%d ", (matA[i][j] + matB[i][j]));
			}
			if(operChoice == 2){
				printf("%d ", (matA[i][j] - matB[i][j]));
			}
		}
		printf("\n");
	}
	
	getch();
}
	
	
	
