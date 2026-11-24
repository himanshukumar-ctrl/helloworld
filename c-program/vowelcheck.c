#include <stdio.h>
void isVowel(int ch) {
    if(ch==65 || ch==69 || ch==73 || ch==79 || ch==85 || ch==97 || ch==101 || ch==105 || ch==111 || ch==117) {
 printf("vowel");
    } else {
        printf("consonant");
    }
}
int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    isVowel((int) ch);
    return 0;
}