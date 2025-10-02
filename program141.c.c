#include <stdio.h>
int main() {
    double mobile = 60000, emi = 5000;
    for(int m = 1; mobile > 0; m++) {
        mobile -= emi;
        if(mobile < 0) mobile = 0;
        printf("Month %d: Remaining Mobile EMI = %.2f\n", m, mobile);
    }
    return 0;
}