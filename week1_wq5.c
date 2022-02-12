#include<stdio.h>

int main()
{ float r,d,c,area,Pi=3.14;
  printf("enter the radius of circle: \n"); 
  scanf("%f",&r); d=r*2; 
  printf("\n Diameter is %f",d); 
  c=2*Pi*r; 
  printf("\n Cicumference is %f",c);
  area=Pi*r*r; 
  printf("\n Area is %f",area);

  return 0;
 }
