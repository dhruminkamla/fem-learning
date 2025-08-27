#include<stdio.h>

// Functions to compute shape functions for local co-odinates "ξ"
void shape_functions(double xi, double *N1 , double *N2){
    *N1 = (1.0 - xi) / 2.0;
    *N2 = (1.0 + xi) / 2.0;
}

int main(){
    double xi; // local co-ordinate
    double N1, N2;

    printf("Enter xi (between -1 and 1): ");
    scanf("%lf", &xi);
    shape_functions(xi, &N1, &N2);

    printf("xi = %lf, N1 = %lf, N2 = %lf\n", xi, N1, N2);
    return 0;
}
