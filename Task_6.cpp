#include <stdio.h>

int main() {
    int matrix[3][3];
    int i, j;

    printf("Enter elements of 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    
	printf("Your Matrix : \n");
		for( i=0; i<3; i++){
		    for( j=0; j<3;j++){
		      printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
	
    int hasSaddle = 0;

    for (i = 0; i < 3; i++) {
    	
        int rowMin = matrix[i][0];
        int colIndex = 0;
        for (j = 1; j < 3; j++) {
            if (matrix[i][j] < rowMin) {
                rowMin = matrix[i][j];
                colIndex = j;
            }
        }

        int k, isLargest = 1;
        for (k = 0; k < 3; k++) {
            if (matrix[k][colIndex] > rowMin) {
                isLargest = 0;
                break;
            }
        }

        if (isLargest) {
            printf("\nSaddle point found: %d at position [%d][%d]\n", rowMin, i, colIndex);
            hasSaddle = 1;
        }
    }

    if (!hasSaddle)
        printf("\nNo saddle point found.\n");

    return 0;
}

