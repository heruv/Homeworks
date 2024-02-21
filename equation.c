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
	printf("log from me: %lf\nlog from funchion %lf\n",  ovnLog(temp),  log(temp));

  return 0;
}
