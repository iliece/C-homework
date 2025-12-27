#include<stdio.h>
int main(){
    int array[2][3] = {{1,2,3},{4,5,6,}};
    printf("%p %p %p\n",&array[0][0],&array[0][1],&array[0][2]);
     printf("%p %p %p\n",&array[1][0],&array[1][1],&array[1][2]);
return 0;
}
