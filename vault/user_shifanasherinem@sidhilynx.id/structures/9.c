#include <stdio.h>
struct car{
char brand[20];
char model[20];
};
int main(){
struct car c={"toyota","corolla"};
struct car *ptr=&c;
printf("brand:%s\n",ptr->brand);
printf("model:%s\n",ptr->model);
return 0;
}