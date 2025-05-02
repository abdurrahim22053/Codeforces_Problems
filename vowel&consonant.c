#include<stdio.h>
int main (){
    char  s[100];
    char ch;
    printf("Enter a string:");
    gets(s);
    int i=0,vowel=0,consonant=0;
    while((ch=s[i])!='\0'){
        if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'||ch=='u'|| ch=='A'|| ch=='E'|| ch=='I'|| ch=='O'||ch=='U')
        vowel++;
        else if((ch>='a'&& ch<='z')||(ch>='A'&&ch<='Z')) 
          consonant++;
        i++;
    }
    printf(" Vowel=%d\n",vowel);
    printf(" Consonant=%d\n",consonant);
    return 0;
}