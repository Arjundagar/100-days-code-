

#include <stdio.h>

int main() {
    int number, tempNumber;
    int frequency[10] = {0}; 
    int remainder;
    int mostFrequentDigit = 0;
    int maxCount = 0;
    int i;

    printf("Enter an integer: ");
    scanf("%d", &number);
    
   
    tempNumber = number;
    if (tempNumber < 0) {
        tempNumber = -tempNumber;
    }

   
    if (tempNumber == 0) {
        frequency[0]++;
    } else {
        while (tempNumber > 0) {
            remainder = tempNumber % 10; 
            frequency[remainder]++;     
            tempNumber = tempNumber / 10; 
        }
    }
    
   
    maxCount = frequency[0];
    mostFrequentDigit = 0;
    
    for (i = 1; i < 10; i++) {
        if (frequency[i] > maxCount) {
            maxCount = frequency[i];
            mostFrequentDigit = i;
        }
    }

    printf("The most frequent digit in %d is %d.\n", number, mostFrequentDigit);

    return 0; 
}

