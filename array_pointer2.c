#include<stdio.h>
int main(){
    int array[3] = {1,2,3};
    printf("%p %p %p \n",array+0,array+1,array+2);
    printf("%d %d %d \n",*(array+0),*(array+1),*(array+2));
    printf("%d %d \n",*(array+0),*array);
    return 0;
}
