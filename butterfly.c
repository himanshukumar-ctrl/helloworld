// butterfly pattern
#include <stdio.h>
int main() {
    int i,j,k,m,n;
    printf("Enter the no. of rows: ");
    scanf ("%d", &n);
    for(i=1;i<=n;i++)
    {for(j=1;j<=n;j++)
    {if(j==1 || i==1 || j==(n\2) || i==(n/2) )
      printf("* ");
      else
      printf("  ");

}
printf("\n"); }
    return 0;
}
