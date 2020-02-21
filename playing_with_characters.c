/*In order to take a line as input, you can use scanf("%[^\n]%*c", s); 
where  is defined as char s[MAX_LEN] where MAX_LEN is the maximum size of s.
Here, [] is the scanset character. ^\n stands for taking input until a newline isn't encountered.
Then, with this %*c, it reads the newline character and here, the used * indicates that this newline character is discarded.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MAX_LEN 1001

int main() 
{

    char ch, s[MAX_LEN], sen[MAX_LEN]; 
    scanf("%[^\n]%*c", &ch);
    scanf("%[^\n]%*c", s);
    scanf("%[^\n]%*c", sen);
    printf("%c\n%s\n%s\n", ch, s, sen);
    return 0;
}
