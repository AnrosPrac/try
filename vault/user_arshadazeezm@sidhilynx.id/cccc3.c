#include <stdio.h>

void main(){
 int first_number = 0;
 int second_number = 1;
 int next_number;
 int length_of_the_series;
 
 printf("Enter thye length of the series : \n");
 scanf("%d",&length_of_the_series);
 if(length_of_the_series < 0){
     printf("Please enter a positive number of terms.\n");
 }
 else if(length_of_the_series == 1){
     printf("0\n");
 }
else{
     
 for(int i = 3;i<=length_of_the_series;i++){
     next_number = first_number+second_number;
     first_number = second_number;
     second_number=next_number;
      printf("%d ",next_number);
 }
}

}