#include <stdio.h>

int main() {
    int n;
    float p1 = 0, p2 = 0, p3 = 0;
    float total, discount, net;

    scanf("%d", &n);

    if (n == 1) {
        scanf("%f", &p1);
        total = p1;
        discount = 0.95;
    }
    else if (n == 2) {
        scanf("%f %f", &p1, &p2);
        total = p1 + p2;
        discount = 0.85;
    }
    else {  
        scanf("%f %f %f", &p1, &p2, &p3);
        total = p1 + p2 + p3;
        discount = 0.70;
    }

    net = total * discount * 1.07;

    printf("%.2f\n", net);

    return 0;
}
