#include <stdio.h>
#include <math.h>

int main() {
  const double pi = 4.0 * atan(1.0);
  double radius, height, circle_area, cylinder_area, total_area;

  scanf("%lf%lf", &radius, &height);

  printf("%lf%lf", radius, height);
  //printf("%1f%1f", radius, height);
  circle_area = pi * radius * radius;
  cylinder_area = 2 * pi * radius * height;

  total_area = 2 * circle_area + cylinder_area;

  printf("Area = %.31f\n", total_area);
  return 0;
}

