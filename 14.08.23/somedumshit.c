#include <stdio.h>
#include <stdlib.h>


int main() {
    int i;
    int j;
    int k = 0;
    int *p = (int*) calloc(4, sizeof(int));
    int *q = (int*) calloc(4, sizeof(int));
    int matrix1[2][2] = {{1, 2}, {3, 4}};
    int matrix2[2][2] = {{5, 6}, {7, 8}};
    for(i=0; i<2; i++) {
        for(j=0; j<2; j++) {
            p[k] = matrix1[0][i]*matrix2[i][j];
            k++;
        }
    }
    k = 0;
    for(i=0; i<2; i++) {
        for(j=0; j<2; j++) {
            q[k] = matrix1[1][i]*matrix2[i][j];
            k++;
        }
    }
    printf("%d %d %d %d", p[0], p[1], p[2], p[3]);
    printf("\n");
    printf("%d %d", p[0]+p[2], p[1]+p[3]);
    printf("\n");
    printf("%d %d %d %d", q[0], q[1], q[2], q[3]);
    printf("\n");
    printf("%d %d", q[0]+q[2], q[1]+q[3]);
    free(p);
    free(q);
}
