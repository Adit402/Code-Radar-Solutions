#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char c;
    scanf("%c", &c);
    if((c=='a')||(c=='e')||(c=='i')||(c=='o'||'O')||(c=='u')){
        printf("Vowel");
    }
    else if(c>=48 && c<=57){
        printf("Digit");
    }
    else if((c>=32 && c<=47)||(c>=58 && c<=64)||(c>=91 && c<=96)||(c>=123 && c<=126)||(c>=0 && c<=31)){
        printf("Special Character");
    }
    else{
        printf("Consonant");
    }
    return 0;
}