#include <stdio.h>
#include <string.h>


int main() {
    int a, b, j;
    char buffer[100];
    char resChar[100];
    while (1){
        memset(&buffer, 0, sizeof(buffer));
        memset(&resChar, 0, sizeof(resChar));
        j = 0;

        scanf("%d %d", &a, &b);
        
		if (a == 0 && b == 0 ){
            return 0;
        
		} else {
            a += b;
            
            printf (buffer, "%d", a);
            for (int i = 0; i < strlen(buffer); i ++) {
                if(buffer[i] != '0') {
                    resChar[j] = buffer[i];
                    j++;
                }
            }
            resChar[j] = '\0';
            printf("%s\n", resChar);
            
        }
    }
    return 0;
}
