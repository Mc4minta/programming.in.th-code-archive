#include<stdio.h>
#include<math.h>

int main(){
    double a,b;
scanf("%lf %lf", &a,&b);
double ans = sqrt((a*a)+(b*b));
printf("%.6lf", ans);
return 0;
}

