#include<stdio.h>

int main()
{
    int arr[6]={50,20,80,10,5,70};

    int small = arr[0];
    int second = 99999;
    int third = 99999;

    for(int i=1; i<6; i++)
    {
        if(arr[i] < small)
        {
            third = second;
            second = small;
            small = arr[i];
        }
        else if(arr[i] < second && arr[i] != small)
        {
            third = second;
            second = arr[i];
        }
        else if(arr[i] < third &&
                arr[i] != small &&
                arr[i] != second)
        {
            third = arr[i];
        }
    }

    printf("Smallest = %d\n", small);
    printf("Second Smallest = %d\n", second);
    printf("Third Smallest = %d\n", third);

    return 0;
}
