/*C Program print pascal triangle*/
#include <stdio.h>
int main()
{
    int r, col = 1;

    printf("Enter number of rows: ");
    scanf("%d",&r);

    for(int i=0; i<r; i++)            // outer loop for displaying rows
    {
        for(int space=1; space <= r-i; space++)  // space for every row starting
            printf("  ");

        for(int j=0; j <= i; j++)     // displaying the pascal triangle of numbers
        {
            if (j==0 || i==0)     // either outer loop value or inner-loop value is "0 " it prints 1
                col = 1;
            else
                col = col*(i-j+1)/j;  // coefficient

            printf("%4d", col);
        }
        printf("\n");
    }

    return 0;
}