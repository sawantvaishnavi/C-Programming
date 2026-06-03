#include <stdio.h>
int main()
{
    
    int sum = 0;
    int num = 0;
    printf("Enter Number = ");
    scanf("%d", &num);

    while(num >= 0)
    {
        sum = sum + num;
        
        num = num - 1;
    }
    printf("Sum is = %d", sum);
    return 0;
}
