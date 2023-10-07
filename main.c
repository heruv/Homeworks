#include <stdio.h>
#include <math.h>

int main() {
    
    float R ;
    const float PI = 3.1415F;

    printf("enter your radius- R, \n");
    printf("R must be more then 0! \n");
    while (1 == 1)
    {
        printf("enter: ");
        scanf("%f", &R);
        
        if (R > 0)
        {
            float R3 = powf(R, 3);

            float res = (float)4/3 * PI * R3;
            
            printf("your volume is %f \n", res);
            break;
        }

        printf("error: R must be more then 0! \n");

    }
    
    return 0;
}