#include <stdio.h>

int main() {
    int i, numero, t1 = 0, t2 = 1, proximotermo;
    
    scanf("%d", &numero);
    
    for (i = 1; i <= numero; ++i) {
        if (i != numero) {
            printf("%d ", t1);
            
			proximotermo = t1 + t2;
            t1 = t2;
           	t2 = proximotermo;
        
		} else {
            printf("%d\n", t1);
        }
    }
    return 0;
}
