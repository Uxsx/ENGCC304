#include <stdio.h>

int main() {
    int Matrix1[5][5], Matrix2[5][5], Matrix3[5][5], Matrix4[5][5];
    int rows1, cols1, rows2, cols2;
    int rows3, cols3, rows4, cols4;
    int i, j, k;

    // รับข้อมูล Matrix1
    printf("Enter Matrix1:\n");
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows1, &cols1);

    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols1; j++) {
            printf("Enter [%d %d] value: ", i, j);
            scanf("%d", &Matrix1[i][j]);
        }
    }

    // รับข้อมูล Matrix2
    printf("\nEnter Matrix2:\n");
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows2, &cols2);

    for (i = 0; i < rows2; i++) {
        for (j = 0; j < cols2; j++) {
            printf("Enter [%d %d] value: ", i, j);
            scanf("%d", &Matrix2[i][j]);
        }
    }

    // แสดง Matrix1
    printf("\nMatrix1:\n");
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols1; j++) {
            printf("%d ", Matrix1[i][j]);
        }
        printf("\n");
    }

    // แสดง Matrix2
    printf("\nMatrix2:\n");
    for (i = 0; i < rows2; i++) {
        for (j = 0; j < cols2; j++) {
            printf("%d ", Matrix2[i][j]);
        }
        printf("\n");
    }

    rows3 = cols1;
    cols3 = rows1;

    for (i = 0; i < rows3; i++) {
        for (j = 0; j < cols3; j++) {
            Matrix3[i][j] = Matrix1[j][i];
        }
    }

    printf("\nTranspose of Matrix1 is:\n");
    for (i = 0; i < rows3; i++) {
        for (j = 0; j < cols3; j++) {
            printf("%d ", Matrix3[i][j]);
        }
        printf("\n");
    }

    if (cols1 != rows2) {
        printf("\nMatrix1 and Matrix2 cannot be multiplied.\n");
    } else {
        rows4 = rows1;
        cols4 = cols2;

        for (i = 0; i < rows4; i++) {
            for (j = 0; j < cols4; j++) {
                Matrix4[i][j] = 0;
                for (k = 0; k < cols1; k++) {
                    Matrix4[i][j] += Matrix1[i][k] * Matrix2[k][j];
                }
            }
        }

        printf("\nMatrix1 x Matrix2 is:\n");
        for (i = 0; i < rows4; i++) {
            for (j = 0; j < cols4; j++) {
                printf("%d ", Matrix4[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
