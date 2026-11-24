// to write prime number upto n
#include <stdio.h>
int main() {
    int i,j,n;
    printf("Enter your no. : ");
    scanf("%d", &n);
    for(i=4;i<=n;i++)
 {for(j=2;j<i;j++)
   { k=i%j;
    if(k!=0)
    break;
    printf("%d", i);
    printf("\n");}}
    return 0;


    
}