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
