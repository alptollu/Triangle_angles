#include <stdio.h>
// eşkenar üçgen >> Equilateral Triangle
// ikizkenar üçgen >> Isosceles Triangle
// çeşitkenar üçgen >> Scalene Triangle
int main()
{
    int angle1,angle2,angle3;
    printf("Please enter your triangle's value of two angles in degrees:\n");
    scanf("%d%d",&angle1,&angle2);

    angle3=(180-angle1-angle2);

    if (angle1==60 && angle3==60)
        printf("Your triangle is a equilateral triangle(%d-%d-%d)!",angle1,angle3,angle2);
    else if ((angle1==angle2) || (angle2==angle3) || (angle1==angle3))
        printf("Your triangle is a isosceles triangle(%d-%d-%d)!",angle1,angle3,angle2);
    else
        printf("Your triangle is a scalene triangle(%d-%d-%d)!",angle1,angle3,angle2);
    return 0;
}
