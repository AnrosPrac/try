#include <stdio.h>
struct attendance{
    unsigned mon:1,tue:1,wed:1,thu:1,fri:1;
};
int main(){
    struct attendance a={1,0,1,1,0};
    printf("mon:%s\n",a.mon?"present":"absent");
    printf("tue:%s\n",a.tue?"present":"absent");
    printf("wed:%s\n",a.wed?"present":"absent");
    printf("thu:%s\n",a.thu?"present":"absent");
    printf("fri:%s\n",a.fri?"present":"absent");
    return 0;
}
