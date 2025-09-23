#include <stdio.h> 
int main() {
    float cost_price, selling_price;
    float profit, loss;
    float profit_percentage, loss_percentage;

    printf("Enter the cost price: ");
    scanf("%f", &cost_price);
    
    printf("Enter the selling price: ");
    scanf("%f", &selling_price);
    
    if (selling_price > cost_price) {
        
        profit = selling_price - cost_price;

        profit_percentage = (profit / cost_price) * 100;

      
        printf("You made a profit of %.2f%%\n", profit_percentage);
    }
   
    else if (cost_price > selling_price) {
        
        loss = cost_price - selling_price;
       
        loss_percentage = (loss / cost_price) * 100;

      
        printf("You made a loss of %.2f%%\n", loss_percentage);
    }
    // If they are equal
    else {
        printf("There is no profit and no loss.\n");
    }

    return 0; // End of the program
}
