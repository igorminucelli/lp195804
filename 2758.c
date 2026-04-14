#include <stdio.h>

int main(){
    
    float A,B;
    double C,D;
    
    scanf("%f %f",&A,&B);
    scanf("%lf %lf",&C,&D);
    
if(A < -100000|| A > 100000|| B < -100000|| B > 100000|| C < -100000|| C >100000|| D < -100000|| D >100000){
    return 0;
}
printf("A = %f, B = %f\nC = %f, D = %f\n",A,B,C,D);
printf("A = %.1f, B = %.1f\nC = %.1f, D = %.1f\n",A,B,C,D);
printf("A = %.2f, B = %.2f\nC = %.2f, D = %.2f\n",A,B,C,D);
printf("A = %.3f, B = %.3f\nC = %.3f, D = %.3f\n",A,B,C,D);
printf("A = %.3E, B = %.3E\nC = %.3E, D = %.3E\n",A,B,C,D);
printf("A = %.0f, B = %.0f\nC = %.0f, D = %.0f\n",A,B,C,D);
    return 0;
}
