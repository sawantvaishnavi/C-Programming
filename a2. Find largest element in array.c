#include <stdio.h>

int  smallest_ele (int a[], int size)
{
    int small = a[0];

    for(int i =1; i<size; i++)
    {
        if(small < a[i])
        {
            small = a[i];
        }
    }
    return small;
}


int main()
{
    int size = 4;
    int a[] = {4, 8, 9, 5};

    int result = smallest_ele(a, size);
    printf("smallest element is = %d", result);
    return 0;
}
