#include<stdio.h>
#include<string.h>
int main(){
    char str100];
    printf("enter a string:");
    fgets (str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    int length=strlen (str);
    printf("the length of sting is %d\n",length);
    retun 0;
}
