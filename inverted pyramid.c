//inverted pyramid

#include <stdio.h>
int main() {
    int i,j,k,p=1,n; 
    printf("Enter no. of rows: ");
    scanf ("%d", &n);
    for(i=1;i<=n;i++)
  { for(j=1;j<i;j++)
    printf("  ");
    {for(k=1;k<=(2*n-p);k++)
    printf("* ");
    p=p+2;
    printf("\n");} }
    return 0;
}