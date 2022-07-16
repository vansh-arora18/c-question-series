// write a program to recieve cartesian co-ordinates (x, y) of a point and
// convert them into polar co-ordinates (r, thetha).

#include<stdio.h>
#include<math.h>

int main()
{
    int x, y;
    float r, thetha;

    printf("enter the cartesain coordinates\n");
    scanf("%d %d", &x, &y);

    r = sqrt(x*x + y*y);

    thetha = atan(y/x);
    thetha = (thetha * 180) / 3.14;

    printf("(%f, %f)", r, thetha);

    return 0;
}
