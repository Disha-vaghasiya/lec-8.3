#include<stdio.h>

void main()
{
    int m[100][100];
    int i,j,row,col,sum=0;
    printf("Enter the number of  rows\n");
    scanf("%d",&row);
    
    printf("Enter the number of  column\n");
    scanf("%d",&col);
    
    printf("Enter the elements of the matrix\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&m[i][j]);
        }
    }

    printf("The matrix\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",m[i][j]);
        }
        printf("\n");
    }
    
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i==j)
            {
                sum=sum+m[i][j];
            }
        }
    }

    printf("The sum of diagonal elements of a square matrix = %d\n",sum);
}
