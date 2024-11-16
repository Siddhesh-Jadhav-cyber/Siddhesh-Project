#include <stdio.h>

int main(){
    int n, i, j;

    printf("Enter a Number of Row for Pyramid:");
    scanf("%d", &n); // It will ask the user for the number of row for pyramid to be printed.

    for (i = 1; i<= n; i++)
    {
        for(j = 1; j<= n-i; j++)
        {
            printf(" "); // It will print the leading space.
        }

        for (j = 1; j <= 2*i-1; j++)
        {
            printf("*"); // It will print the '*' for the pyramids for the current row.
        }

            printf("\n");  // It will break the line and move to next line after each row.

    }

    return 0;

}
/*

Output:
Enter a Number of Row for Pyramid:5
      *
     ***
    *****
   *******
  *********
*/