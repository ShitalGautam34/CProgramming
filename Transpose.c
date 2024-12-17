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
			printf("Enter matrix[%d][%d]: ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}
		
	printf("The matrix is:\n");
		for(i=0; i<row; i++){
		printf("|");
		for(j=0; j<column; j++){
			printf(" %d", mat[i][j]);
		}
		printf(" |\n");
	}
	
	printf("\nPrinting the transpose of the matrix:\n");
	for(i=0; i<row; i++){
		printf("|");
		for(j=0; j<column; j++){
			printf(" %d", mat[j][i]);
		}
		printf(" |\n");
	}

	getch();
}
