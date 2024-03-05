#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <time.h>

int minimal(int* arrptr)
{
    int int_min = INT_MAX;
    int* temp = arrptr;
    int i = 0;

    for (arrptr; arrptr <= (temp+19); arrptr++)
    {
        int cell_value = *(arrptr);

        if (int_min>cell_value) 
        {
            int_min = cell_value;
        } 
    }

    return int_min;
}

void custom_sum(int* arrptr)
{
    int* temp = arrptr;

    int positive_num = 0;
    int sum=0;

    for (arrptr; arrptr < (temp + 19); arrptr++)
    {
        int cell_value = *(arrptr);

        if (cell_value > 0) positive_num = cell_value;

        while (cell_value != positive_num+1)
        {
            sum += cell_value;
            break;
        }
    }

    printf("sum = %d\n", sum);
}

int main() 
{
    srand(time(NULL));

    int arr[20];

    for (int i = 0; i < 20; i++)
    {
        arr[i] = -100 + rand() % 200;
        printf("elem: %d\n", arr[i]);
    }

    int* ptr = arr;

    printf("the smalest number: %d\n", minimal(ptr));

    custom_sum(ptr);
   
    return 0;
}
