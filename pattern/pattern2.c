/*pettarn piramid 111111
                  11111
                  1111
                  111
                  11
                  1          */

#include <stdio.h>
void main()
{
    int row, column, n;
    printf("Enter row number: ");
    scanf("%d", &n);

    for(row = 0; row<n; row++){
        for(column=n; column>row; column--){
            printf("%d",column);
        }
        printf("\n");
    }
}