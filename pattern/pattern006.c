#include <stdio.h>
void main()
{
    int row, column, n;
    printf("Enter row col number: ");
    scanf("%d", &n);
    for(row =n; row>=1; row--)
    {
        for(column=1; column<=row; column++)
        {
          printf("%d",column);
         
        }
        printf("\n");
         column=column+1;
    }
}