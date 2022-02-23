//switch case and break

#include<stdio.h>
#define PI 3.14
int main()
{
   int choice;
   printf("enter\n1 for finding area of Square\n2 for finding area of Circle\n3 for finding area of rectangle");
   scanf("%d",&choice);
   switch(choice) {
      
      case 1: {
         float side,area;
         printf("Enter Sides of Square\n");
         scanf("%f",&side);
         area=side*side;
         printf("Area of Square is %f\n",area);
         break;
      }
      case 2: {
         float radius,area;
         printf("Enter Radius of Circle\n");
         scanf("%f",&radius);
         area=PI*radius*radius;
         printf("Area of Circle %f\n",area);
         break;
      }
      case 3: {
         float length,breadth,area;
         printf("Enter Length and Breadth of Rectangle\n");
         scanf("%f %f",&length,&breadth);
         area=length*breadth;
         printf("Area of Rectangle is %f\n",area);
         break;
    }
      default: {
         printf("Invalid Choice\n");
         break;
      }
   }
   return 0;
}

