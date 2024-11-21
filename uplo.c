#include <stdio.h>
int main()
{
 char ch;
 printf("Enter any character: ");
 scanf("%c", &ch);
 if(ch >= 'A' && ch <= 'Z')
 {
 printf("'%c' is uppercase character.", ch);
 }
 else if(ch >= 'a' && ch <= 'z')
 {
 printf("'%c' is lowercase character.", ch);
 }
 else
 {
 printf("'%c' is not an character.", ch);
 }
 return 0;
}
