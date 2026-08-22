#include<stdio.h>
#include<conio.h>
void main()
{
 float radius , length , breadth , base , height ;
 float areacircle , arearectangle , areatriangle ;

 printf("enter radius of circle:");
 scanf("%f" , &radius);
 areacircle = 3.1415*radius*radius;
 printf("area of the circle is %f" ,  areacircle);

 printf("\nenter length and breadth of rectangle :");
 scanf("%f %f" , &length , &breadth);
 arearectangle = length*breadth;
 printf("area of the rectangle is %f" , arearectangle);

 printf("\nenter base and height of triangle :");
 scanf("%f %f" , &base , &height);
 areatriangle = 0.5 * base * height ;
 printf("area of the triangle is  %f" , areatriangle);
 getch();

}
