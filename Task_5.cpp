#include <stdio.h>

int main(){
	
	int rows,columns,i,j;
	
	printf("Enter the number of rows: ");
	scanf("%d", &rows);
	
	printf("Enter the number of columns: ");
	scanf("%d", &columns);
	
	int arr[rows][columns] , transpose[columns][rows] ;
	
	for( i=0; i<rows; i++){
		for( j=0; j<columns;j++){
		 printf("Enter element at position [%d][%d]: ", i, j);
		 scanf("%d", &arr[i][j]);
		}
	}
		
	for( i=0; i<rows; i++){
		for( j=0; j<columns;j++){
           
           transpose[j][i] = arr[i][j];
	     }
	}
	
	printf("Your original Matrix : \n");
		for( i=0; i<rows; i++){
		    for( j=0; j<columns;j++){
		      printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
		
	printf("The transpose of your matrix : \n");
		for( i=0; i < columns; i++){
		    for( j=0; j < rows ;j++){
		      printf("%d ", transpose[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
