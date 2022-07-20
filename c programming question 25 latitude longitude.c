// write a program to recieve values of latitude (L1, L2) and longitude (G1, G2) in
// degrees, of two places on the earth and output the distance (D) between  them
// in nautical miles.

#include<stdio.h>
#include<math.h>

int main()
{
    float l1, l2, g1, g2, d;

    printf("enter the latitude \n");
    scanf("%f %f", &l1, &l2);

    printf("enter the longitude \n");
    scanf("%f %f", &g1, &g2);

    l1 = l1 * 180 / 3.14;
    l2 = l2 * 180 / 3.14;
    g1 = g1 * 180 / 3.14;
    g2 = g2 * 180 / 3.14;

    d = 3963 * acos(sin(l1) * sin(l2) + cos(l1) * cos(l2) * cos(g2-g1));

    printf("distance in nautical miles is %f", d);

    return 0;
}
