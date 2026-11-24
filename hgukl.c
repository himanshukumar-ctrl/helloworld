#include <stdio.h>
int main() {
    int i,k,n;
    printf("Enter the no. of rows: ");
    scanf("%d", &n);
    if(n>=3&&n%2!=0)
    {
    for(k=1;k<=n;k++)
    {printf("*");
    for(i=1;i<n;i++)
     printf(" "); 
    }}
    else
    printf("Error hai");
    return 0;
}