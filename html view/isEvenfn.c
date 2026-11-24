#include<stdio.h>
void isEven(int n) {
    if (n%2==0){
        printf("even");
    } else {
        printf("odd");
    }
    
}
int main(){
int n;
printf("Enter a number: ");
scanf("%d", &n);
isEven(n);
return 0;
}
