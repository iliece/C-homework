#include<stdio.h>
#include<stdlib.h>

int main(){
    int a,b;
    char su[4];
    char su1[4];
    char temp;
    int large;
    
    scanf("%d %d",&a,&b);
      
    sprintf(su, "%d", a);
    sprintf(su1, "%d", b);

    temp = su[0];
    su[0] = su[2];
    su[2] = temp;

     temp = su1[0];
    su1[0] = su1[2];
    su1[2] = temp;

    int i = atoi(su);
    int j = atoi(su1);
    
    if (i<j)
    large = j;
    else
    large = i;

    printf("%d", large);
     
    return 0;

}