#include <stdio.h>

int main() {
    
	int A[3][3]={{2,3,4},{5,6,7},{8,9,10}};
  //  int B[3][3]={{2,3,4},{5,6,7},{8,9,10}};
    int C[3][3];
    printf("Matris:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    
    printf("Transpoz aliniyor..:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            C[j][i]=A[i][j];
        }
    }
    
   printf("Transpoz:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}

