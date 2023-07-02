#include <stdio.h>
int main(void)
{
    int i,j,row1,row2,rowsum,col1,col2,colsum, matrix1[10][10], matrix2[10][10], sumofm1m2[10][10];
    // Get The Number of rows and column for matrix1
    printf("Matrix1: wirite number of rows and number of columns\n");
    scanf("%d %d",&row1,&col1);
    // Get The Number of rows and column for matrix1
    printf("Matrix2: wirite number of rows and number of columns\n");
    scanf("%d %d",&row2,&col2);
    printf("%d %d %d %d",row1,col1,row2,col2);
    if (row1==row2 && col1==col2)
    {
        printf("\n Rows and Column are equal\n");
        // get the values of matrix1
        printf("for matrix 1");
        for ( i = 0; i < row1; i++)
        {
            printf("\n");
            for ( j = 0; j < col1 ; j++)
            {
                printf("value of Matrix[%d][%d] is = ",i,j);
                scanf("%d", &matrix1[i][j]);
            }
            
        }
        // get the values of matrix1
        printf("for matrix 2");
        for ( i = 0; i < row2; i++)
        {
            printf("\n");
            for ( j = 0; j < col2; j++)
            {
                printf("value of Matrix[%d][%d] is = ",i,j);
                scanf("%d", &matrix2[i][j]);
            }
            
        }
        rowsum=row1;
        colsum=col1;
        for ( i = 0; i < rowsum; i++)
        {
            for ( j = 0; j < colsum; j++)
            {
                sumofm1m2[i][j]=matrix1[i][j]+matrix2[i][j];
            }
            
        }
        for ( i = 0; i < rowsum; i++)
        {
            printf("\n");
            for ( j = 0; j < colsum; j++)
            {
                printf("%d\t",sumofm1m2[i][j]);
                
            }
            
        }
        
        
        
    }
    else
    {
        printf("rows and column are not equal for matrix1 and matrix2. Kindly keep the corresponding rows and column for each matrix equal, and rerun the program.");
    }
    return 0;

}