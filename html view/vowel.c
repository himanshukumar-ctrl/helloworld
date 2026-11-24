#include <stdio.h>
void isVowel(char ch) {
    if(ch==65 || ch==69 || ch==73 || ch==79 || ch==85 || ch==97 || ch==101 || ch==105 || ch==111 || ch==117);{
 printf("vowel")
    } else {
        printf("consonant");
    }
}
int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%d", &ch);
    isVowel(ch);
    return 0;
}