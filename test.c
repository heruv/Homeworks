#include <stdio.h>
#include <math.h>

// this code is good
int main(){
    double R, res;

    printf("this program calculate the volume of sphere\n");

    do
    {
        printf("\nremeber that radius must be greater than 0\n");
        printf("\nenter your radius:");
        scanf("%lf", &R);

    } while (R<0);
    
    res = 4.0/3.0 * M_PI * R *R * R;

    printf("your volume is:%lf\n", res);

    return 0;
}