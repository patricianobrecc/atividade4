#include <stdio.h>
#include <string.h>


int main() {
    
    int c, i, j;
    int start, end;
    char buffer[12221];
    scanf("%d", &c);
    
    while (c) {
        scanf("%d %d", &start, &end);
        
        for (i = start; i <= end; i++) {
            printf("%d", i);
        }
       
	    for (i = end; i >= start; i--) {
        	sprintf(buffer, "%d", i);
        
		for (j = strlen(buffer) - 1; j >= 0 ; j--) {
        	printf("%c", buffer[j]);
                
            }
        }
        printf("\n");
        c--;
    }
}
