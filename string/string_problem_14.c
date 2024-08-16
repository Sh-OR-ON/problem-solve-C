#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char str[100];
    char a, e;
    int i, j, b, c, d = 0;
    printf("Enter string: ");
    gets(str);
    b = strlen(str);
    for (i = 0; i < b; i++) {
        c = 0;
        for (j = 0; j < b; j++) {
            if (str[i] == str[j]) {
                c++;
            }
        }
        if (c > d) {
            d = c;
            e = str[i];
        }
    }
    putchar(e);
    return 0;
}
