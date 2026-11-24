//inveted right triangle

#include <stdio.h>
int main() {
    int i,j,k,n; 
    printf("Enter no. of rows: ");
    scanf ("%d", &n);
    for(i=0;i<n;i++)
  { for(j=0;j<i;j++)
    printf("  ");
    {for(k=1;k<=(n-i);k++)
    printf("* ");
    printf("\n");} }
    return 0;
}