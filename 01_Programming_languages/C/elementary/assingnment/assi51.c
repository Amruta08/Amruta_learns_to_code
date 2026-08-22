#include <stdio.h>

struct Distance
{
  int feet;
  float inch;
} d1, d2, s;

int main()
{
  printf("Enter feet and inch for the first distance with a space : \n");
  scanf("%d %f", &d1.feet, &d1.inch);

  printf("Enter feet and inch for the second distance with a space : \n");
  scanf("%d %f", &d2.feet, &d2.inch);

  s.feet = d1.feet + d2.feet;
  s.inch = d1.inch + d2.inch;

  while (s.inch >= 12)
  {
    s.inch = s.inch - 12;
    s.feet++;
  }

  printf("Sum is %d feet, %.1f inches\n", s.feet, s.inch);
  return 0;
}