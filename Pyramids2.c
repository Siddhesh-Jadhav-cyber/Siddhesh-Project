#include <stdio.h>

int main(){
    int n, i, j;

    printf("Enter a Number of Row for Triangle:");
    scanf("%d", &n); // It will ask the user to enter a number of row for triangle to be printed.

    for (i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
        printf("*"); // It will print '*' for each row.
        }
        printf("\n"); // It breaks the line and move to next line after each row.

    }

    return 0;

}
/*

Output:
Enter a Number of Row for Triangle:5
*
**
***
****
*****

*/

