// Wind chill factor is the felt air temperature on exposed skin due to wind.
// The wind chill temperature is always lower than the air temperature, and is 
// calculated as per the following formua: 
//        wcf = 35.74 + 0.6215*t + (0.4275*t - 35.75) * v^0.16

// where t is the temperature and v is the wind velocity. Write a program to recieve 
// values of t and v and calculate wind chill factor (wcf).


#include<stdio.h>
#include<math.h>

int main()
{
    float wcf, t, v;

    printf("enter the velocity and temperature\n");
    scanf("%f %f", &v, &t);

    wcf = 35.74 + 0.6215 * t + (0.4275 * t - 35.75) * pow(v, 0.16);

    printf("wind chill factor is %f", wcf);

    return 0;
}
