#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    
    printf("Enter the string: "); // ei ta Shoron name diye check kore code ta kivabe kaj kortese seta easily buja jay//
    gets(str);
    
    int d = strlen(str);
    
    for (int i = 0; i < d; i++) {
        for (int j =i + 1; j < d; j++) {
            if (str[i] == str[j]) { // j=4 e hoito loop ta chole nai kintu j er man last e kintu 4 cilo tai condition check korte parse//
                for (int k = j; k < d; k++) {
                    str[k] = str[k + 1];
                }
                d--; //deeply vable sob problem solve kora somvob//
            }
        }
    }
    
    puts(str);
    return 0;
}