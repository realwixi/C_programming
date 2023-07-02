#include <stdio.h>
int main(void)
{
    int i,j,k,row1,row2,rowproduct,col1,col2,colproduct, matrix1[10][10], matrix2[10][10], sumofm1m2[10][10];
    // Get The Number of rows and column for matrix1
    printf("Matrix1: wirite number of rows and number of columns\n");
    scanf("%d %d",&row1,&col1);
    // Get The Number of rows and column for matrix1
    printf("Matrix2: wirite number of rows and number of columns\n");
    scanf("%d %d",&row2,&col2);
    printf("%d %d %d %d",row1,col1,row2,col2);
    if(col1==row2)
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
        rowproduct=row1;
        colproduct=col2;
        for ( i = 0; i < rowproduct; i++)
        {
            for ( j = 0; j < colproduct; j++)
            {
             sumofm1m2[i][j]=0;
                for(k=0;k<colproduct;k++)
                {
                    sumofm1m2[i][j]+=matrix1[i][k]*matrix2[k][j];
                }
            }
        }
        printf("Result\n");
        for ( i = 0; i < rowproduct; i++)
        {
            printf("\n");
            for ( j = 0; j < colproduct; j++)
            {
                printf("%d \t",sumofm1m2[i][j]);    
            }
            
        }
        
        
        
    }
    else
    {
        printf("rows and column are not equal for matrix1 and matrix2. Kindly keep the corresponding rows and column for each matrix equal, and rerun the program.");
    }
    return 0;

}