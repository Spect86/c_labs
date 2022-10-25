#include <stdio.h>
#include <math.h>

int main()
{
    double x = 0;
    double h = 0;
    printf("Enter h -> ");
    scanf("%lf", &h);
    printf("    x                 f(x) \n -------------------------- \n");

   while (0 <= x && x <= 2)
   {
      for (x; 0 <= x && x <= 1; x+h)
      {
         printf("%lf", x);
         double f = (cos(x + pow(x, 3)));
         printf("            %lf \n \n", f);
         x += h;
      }
      for (x; 1 < x && x <= 2; x+h)
      {
         printf("%lf", x);
         double f = ((exp(-1 * pow(x, 2))) - (pow(x, 2)) + 2 * x);
         printf("            %lf \n \n", f);
         x += h;
      }
   }
   return 0;
}