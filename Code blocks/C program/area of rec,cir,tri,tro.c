#include<stdio.h>
 main()
{
    double A,B,C;
 double Triangle,Circle,Trapezium,Square,Rectangle;

    scanf("%lf %lf %lf", &A, &B, &C);
    Triangle=(.5*A*C);
    Circle=(3.14159*C*C);
    Trapezium=(.5*(A+B)*C);
    Square=(B*B);
    Rectangle=(A*B);

    printf("Triangulo: %.3lf\n",Triangle);
    printf("Circulo: %.3lf\n",Circle);
    printf("Trapezio: %.3lf\n",Trapezium);
    printf("Quadrado: %.3lf\n",Square);
    printf("rectangulo: %.3lf\n",Rectangle);
    return 0;
}
