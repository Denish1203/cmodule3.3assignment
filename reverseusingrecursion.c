#include <stdio.h>
void reversestring();
int main() {
    printf("Enter a sentence: ");
    reverseSentence();
    return 0;
}

void reversestring() 
{
    char c;
    scanf("%c", &c);
    if (c != '\n') {
        reverseSentence();
        printf("%c", c);
    }
}
