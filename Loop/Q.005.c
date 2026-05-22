//Print the multiplication table of a given number from n x 1 to n x 10. 

#include <stdio.h>
int main()
{
    int num = 0;
    int i   = 1;

    printf("Enter the number of which Table is required ");
    scanf("%d", &num );

    while (i <= 10)
    {
        printf("%d\n", num*i);
        i++;
    }

    
    return 0;
}
