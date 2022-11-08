// WAP to accept radius and calculate area and perimeter

#include<stdio.h>
#define pi 3.14
//
void main()
{
    int rad ;
    float area , peri;
    printf("Enter the radius of your circle :");
    scanf("%d",&rad);
    
  
    //area
    area= pi *rad*rad;
    printf("The area of your circle is %f\n",area);
    
  
    //perimeter
    peri= 2*pi*rad;
    printf("The perimeter of your circle is %f\n",peri);
}
