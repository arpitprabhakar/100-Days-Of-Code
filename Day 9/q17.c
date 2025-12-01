//Write a program to find the roots of a quadratic equation and categorize them.
 #include<stdio.h>
    #include<math.h>
    int main(){
        float a, b, c, dis, root1, root2, real, imag;
        printf("Enter coefficients a, b and c: ");
        scanf("%f %f %f", &a, &b, &c);
        dis = b*b - 4*a*c;
        if (dis > 0) {
            root1 = (-b + sqrt(dis)) / (2*a);
            root2 = (-b - sqrt(dis)) / (2*a);
            printf("Roots are real and different.\n");
            printf("Root 1 = %.2f\n", root1);
            printf("Root 2 = %.2f\n", root2);
        }
        else if (dis == 0) {
            root1 = root2 = -b / (2*a);
            printf("Roots are real and the same.\n");
            printf("Root 1 = Root 2 = %.2f\n", root1);
        }
        else {
            real = -b / (2*a);
            imag = sqrt(-dis) / (2*a);
            printf("Roots are complex and different.\n");
            printf("Root 1 = %.2f + %.2fi\n", real, imag);
            printf("Root 2 = %.2f - %.2fi\n", real, imag);
        }
        return 0;
    }