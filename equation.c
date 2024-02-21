#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <float.h>

 double ovnLog( double temp) {
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


 double mesuarementError(double logarithm, double system_log, int afterpoint) {
  printf("log from me: %.*lf\n", afterpoint, logarithm);
  printf("log from funchion: %.*lf\n\n", afterpoint, system_log);

  //absolute
  printf("absolute error: %.*lf\n", afterpoint, system_log-logarithm);

  //relative
  printf("relative error: %.*lf%%\n", afterpoint, ((system_log-logarithm)/logarithm)*100);
  printf("check %lf\n", logarithm*((system_log-logarithm)/logarithm)*100);
}


int main() {
  int afterpoint = 0;
   double temp; //x , x> 1/2

  printf("input your x: ");
  scanf("%lf", &temp);
    while (temp<0.5) {
      printf("error, x must be less then 1/2\n");
      scanf("%lf", &temp);
    }

  printf("input your number of symbol after colon: ");
  scanf("%d", &afterpoint);
  while ((afterpoint<0) && (afterpoint>19)) {
    printf("error, number of symbols must be less then 19 and more then 0\n");
    scanf("%d", &afterpoint);
  }
   //tec.out
    //printf("log from me: %LF\nlog from funchion %F\n",  ovnLog(temp),  log(temp));

     double logarithm = (double)ovnLog(temp);
     double system_log = log(temp);

    // printf("%LF\n", system_log-logarithm);
    mesuarementError(logarithm, system_log, afterpoint);
  return 0;
}
