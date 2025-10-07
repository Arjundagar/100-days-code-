#include <stdio.h>

int main() {
    int star_counts[] = {1, 3, 5, 3, 1};
    int num_segments = 5;
    
    for (int i = 0; i < num_segments; i++) {
        
        for (int j = 0; j < star_counts[i]; j++) {
            printf("*\n");
        }
        
        if (i < num_segments - 1) {
            printf("\n");
        }
    }
    
    return 0; 
}