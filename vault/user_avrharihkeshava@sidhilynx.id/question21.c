#include<stdio.h>
void main()
{
 int n ;
 float sub1,sub2,sub3,average;
 printf("enter sub1=\n");
 scanf("%f",&sub1);
 printf("enter sub2=\n");
 scanf("%f",&sub2);
 printf("enter sub3=\n");
 scanf("%f",&sub3);
 average =(sub1+sub2+sub3)/3;
 if(average>=50)
 {
 printf(" pass");
 }
 else
 {
 printf("fail");
 }
 if (average >=90 && average<=100)
 {
 n=1;
 }
    if( average >=75 && average<=89)
 {
 n=2;
 
}
 if (average >=50 && average<=74)
 {
n=3;
 
}
 if ( average<50)
 {
 n=4;
 
}
 
 switch(n)
 {
     case 1:
         printf("A");
         break;
     case 2:
         printf("B");
         break;
     case 3:
         printf("C"); 
 break;
case 4:
         printf("D"); 
 break;
     default:
         printf("fail");
}}