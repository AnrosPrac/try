#include <stdio.h>

float addition(float x,float y);
float multiplication(float x,float y);
float subtraction(float x,float y);
float division(float x,float y);
float modulus(float x,float y);


void main()
{
   float a,b,m; 
   int op;
  printf("Enter a number : \n");
  scanf("%f",&a);
  printf("Enter a number : \n");
  scanf("%f",&b);
  printf("Enter the operation (0->add,1->sub,3->mul,4->div): \n");
  scanf("%d",&op);
  if(op == 0){
    m =   addition(a,b);
       printf("%f",m);
  }
  else if (op == 1){
     m =  subtraction(a,b);
       printf("%f",m);
      
      
  }
  else if(op == 3){
    m=  multiplication(a,b);
    printf("%f",m);
  }
   else if (op == 2){
     m =   division(a,b);
        printf("%f",m);
   }
  
   else {
       printf("Unsupported format !");
   }
}


float addition(float x,float y ){
    return x + y;
}
float subtraction(float x,float y){
    return x - y;
}
float multiplication(float x,float y){
    return x*y;
}
float division (float x,float y){
    return x/y;
    
}