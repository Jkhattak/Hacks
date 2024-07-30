#include <stdlib.h>
#include <stdio.h>
#include <math.h>

//  This program calculates the distance between two points in a 2D plane.

double distanceFormula(double x1, double y1, double x2, double y2);

int main(int argc, char const *argv[])
{
    double x1, y1, x2, y2, Distance;

    printf("Please enter the first x coordinate: ");
    scanf("%lf", &x1);
    printf("Please enter the first y coordinate: ");
    scanf("%lf", &y1);
    printf("Please enter the second x coordinate: ");
    scanf("%lf", &x2);
    printf("Please enter the second y coordinate: ");
    scanf("%lf", &y2);

    Distance = distanceFormula(x1, y1, x2, y2);

    printf("The distance is %lf\n", Distance);

    return 0;
}

double distanceFormula(double x1, double y1, double x2, double y2)
{
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    return distance;
}
