// to reverse a number
#include <stdio.h>
int main() {
    int n,i,rem=0;
    printf("take a number: ");
    scanf("%d", &n);
   for(i=0;i<n;i++)
   {rem = n%10;
     n=n/10;
   printf("%d", rem);}
  
     return 0;
    
}