#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main(int argc, char const *argv[]) {
  double a, b, c, sqrt1, sqrt2;


    printf("Enter values for a, b, and c\n");
    printf("a : \n");
    scanf("%lf", &a);

    printf("b : \n");
    scanf("%lf", &b);

    printf("c : \n");
    scanf("%lf", &c);

    sqrt1 = (-b + sqrt((pow(b,2) + 4*a*c))) / (2*a);
    sqrt2 = (-b - sqrt((pow(b,2) + 4*a*c))) / (2*a);

    printf("The quadratic value for %.3f, %.3f, %.3f is %.3f and %.3f\n", a,b,c,sqrt1, sqrt2);



  return 0;
}
