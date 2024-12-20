#include<stdio.h>
#include<conio.h>

void main(){
	int i, j, row, column, max, min;
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
	
	//printing the matrix
	printf("The matrix is:\n");
	for(i=0; i<row; i++){
		for(j=0; j<column; j++){
			printf(" %d", mat[i][j]);
		}
		printf("\n");
	}
	
	//checking for maximun and minimun numbers in row 
	for(i=0; i<row; i++){
		max = mat[i][0];
		min = mat[i][0];
		for(j=0; j<column; j++){
			if(mat[i][j] > max){
				max = mat[i][j];
			}
			if(mat[i][j] < min){
				min = mat[i][j];
			}
		}
		printf("In row %d max= %d and min= %d\n", i, max, min);
	}
	printf("\n");
	
	//checking for maximun and minimun numbers in column
	for(j=0; j<column; j++){
		max = mat[0][j];
		min = mat[0][j];
		for(i=0; i<row; i++){
			if(mat[i][j] > max){
				max = mat[i][j];
			}
			if(mat[i][j] < min){
				min = mat[i][j];
			}
		}
		printf("In column %d max= %d and min= %d\n", j, max, min);
	}
	
	getch();
}
