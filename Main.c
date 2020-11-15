#include <stdio.h>
#include "basicMath.c"
#include "power.c"

int main(){
double x = 0;
    printf("please inset a real number: ");
    scanf("%lf.4",&x);
    double temp1=0;
    double temp2=0;
    double temp3=0;
    temp1=Exponent(x);
    temp2=Power(x,3);
    temp3=sub(add(temp1,temp2),2);
    printf("The value of f(x) = e^x+x^3-2 at the point %.4lf is %.4lf\n", x , temp3);
    temp1=temp2=temp3=0;
    temp1=mul(x,3);
    temp2=mul(Power(x,2),2);
    temp3=add(temp1,temp2);
    printf("The value of f(x)=3x+2x^2 at the point %.4lf is %.4lf\n", x, temp3);
    temp1=temp2=temp3=0;
    temp1=div(mul(Power(x,3),4),5);
    temp2=mul(x,2);
    temp3=sub(temp1,temp2);
    printf("The value of f(x)=((4*x^3)/5)-2x at the point %.4lf is %.4lf\n", x, temp3);
    temp3= Power(x,-3);
    printf("The value of f(x)=x^-3 at the point %.4lf is %.4lf\n", x, temp3);
}
