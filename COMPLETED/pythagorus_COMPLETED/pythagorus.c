#include<stdio.h>
#include<math.h>

double pythagorus(double a,double b){
    double ans;
    a = a*a;
    b = b*b;
    ans = a+b;
    ans = sqrt(ans);
    return ans;
}

int main(){
    double a,b,c;
    scanf("%lf %lf", &a,&b);
    c = pythagorus(a,b);
    printf("%.6lf\n", c);
    return 0;
}