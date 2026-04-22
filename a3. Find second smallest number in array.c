#include <stdio.h>

int  second_smallest_ele (int a[], int size)
{
    int small = a[0];
    int j=0;

    for(int i =1; i<size; i++)
    {
        if(small > a[i])
        {
            small = a[i];
               j  = i ;
        }
    }

/////Initialize secondsmall
    int secondsmall;
    if(j == 0)
    {
        secondsmall = a[1];
    }
    else{
        secondsmall = a[0];
    }

    for(int i=0; i < size; i++ )
    {
        if (secondsmall > a[i] && i != j)
        {
            secondsmall = a[i];
        }
    }
    return secondsmall;
}


int main()
{
    int size = 4;
    int a[] = {4, 5, 9, 50};

    int result = second_smallest_ele(a, size);
    printf("smallest element is = %d", result);
    return 0;
}
