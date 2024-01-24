#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <float.h>

double ovn_log(double temp) {
  double formula;
  double res;
  double n=1;
  int check = 0;

  formula = (temp-1)/(temp*n); //a_0
  res += formula;

  do {
    ++n;

    formula = formula * ((temp-1)*(n-1)/(temp*n));
    res += formula;
    }
  while(fabs(formula)>DBL_EPSILON);

  return res;
}


int main() {
  double temp; //x , x> 1/2

  printf("input your x:\n");
  scanf("%lf", &temp);
    while (temp<0.5) {
      printf("error, x must be less then 1/2\n");
      scanf("%lf", &temp);
    }

   //tec.out
    printf("log from me: %lf\nlog from funchion %lf\n", ovn_log(temp),  log(temp));
    // printf("\n result: %lf\n", res);

  return 0;
}
