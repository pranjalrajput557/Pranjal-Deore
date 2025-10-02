#include <stdio.h>
int main() {
    double loan = 50000, emi = 5000;
    for(int m = 1; loan > 0; m++) {
        loan -= emi;
        if(loan < 0) loan = 0;
        printf("Month %d: Remaining Loan = %.2f\n", m, loan);
    }
    return 0;
}