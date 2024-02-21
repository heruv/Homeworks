#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bublesort(int* arr, int arraysize) {
    int temp;

    for (int i = 0; i < arraysize; i++)
    {

        for (int j = 0; j<arraysize-1; j++)
        {

            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < arraysize; i++)
    {
        printf("%d\t", arr[i]);

        if ((i+1)%10 == 0)
        {
            printf("\n");
        }
    }
}


int negativesum(int* arr, int arraysize) {
    int sum = 0;

    for (int i = 0; i < arraysize; i++)
    {
        if (arr[i] < 0)
        {
            sum += arr[i];
        }
    }

    return sum;
}


int main() {
    // random genarator start
    srand(time(NULL));
    int N = rand()%21; 

    int* arr = (int*)malloc(sizeof(int) * N);


    //tech_out
    printf("N:%d\n", N);

    for (int i = 0; i < N; i++)
    {
        arr[i] = -100 + rand() / 200;
    }

    
    bublesort(arr, N);
    
    printf("\nnegatives numbers sum: %d\n", negativesum(arr, N));

    free(arr);

    return 0;
}

