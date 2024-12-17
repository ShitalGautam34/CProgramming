#include<stdio.h>
#include<conio.h>

void main(){
	int i, j, k, row, column;
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
	
	//printinf the matrix
	printf("The matrix is:\n");
	for(i=0; i<row; i++){
		for(j=0; j<column; j++){
			printf(" %d", mat[i][j]);
		}
		printf("\n");
	}
	
	for(i=0; i<row; i++){
		for(j=0; j<column; j++){
			for(k=1; k<=(mat[i][j]); k++){
				if((mat[i][j] % k == 0) && (k!=1)){
					break;
				}
			}
			if(k == mat[i][j]){
				printf("%d is prime\n,",mat[i][j]);
			}
			else{
				printf("%d id composite\n,", mat[i][j]);
			}
		}
	}
	
	
	
getch();
}
