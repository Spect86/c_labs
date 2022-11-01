#include <stdio.h>
#include <math.h>

int main()
{
    double x = 0;
    double h = 0;
    printf("Enter h -> ");
    scanf("%lf", &h);
    printf("    x                 f(x) \n -------------------------- \n");
    int y = 2/h + 1;
    int i = 0;

   while (i != y)
   {
    if (0 <= x && x <= 1)
    {
        printf("%lf", x);
        double f = (cos(x + pow(x, 3)));
        printf("            %lf \n \n", f);
        x += h;
        i += 1;
    }
    else
    {
        printf("%lf", x);
        double f = ((exp(-1 * pow(x, 2))) - (pow(x, 2)) + 2 * x);
        printf("            %lf \n \n", f);
        x += h;
        i += 1;
    }
   }
   return 0;
}