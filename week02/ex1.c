#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    int a = INT_MAX;
    float b = FLT_MAX;
    double c = DBL_MAX;

    printf("%d %f %lf %zu %zu %zu",a,b,c,sizeof(a),sizeof(b),sizeof(c));

    return 0;
}
