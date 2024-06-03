#include <stdio.h>

int main() {
    int a;
    printf("PRESS 1 FOR CIRCLE\nPRESS 2 FOR RECTANGLE\nPRESS 3 FOR TRIANGLE\nA=");
    scanf("%d", &a);

    float C = 0, r, R = 0, l, w, T = 0, b, h;

    if (a == 1) {
        printf("\nENTER THE RADIUS OF THE CIRCLE= ");
        scanf("%f", &r);

        C = 3.14 * r * r;
        printf("\nTHE AREA OF THE CIRCLE= %f", C);
    } else if (a == 2) {
        printf("\nENTER THE LENGTH= ");
        scanf("%f", &l);

        printf("\nENTER THE WIDTH= ");
        scanf("%f", &w);

        R = l * w;
        printf("\nTHE AREA OF THE RECTANGLE= %f", R);
    } else if (a == 3) {
        printf("\nENTER THE BASE OF THE TRIANGLE= ");
        scanf("%f", &b);

        printf("\nENTER THE HEIGHT OF THE TRIANGLE= ");
        scanf("%f", &h);

        T = 0.5 * b * h;
        printf("THE AREA OF THE TRIANGLE= %f", T);
    } else {
        printf("Invalid input! Please enter 1, 2, or 3.");
    }

    return 0;
}
