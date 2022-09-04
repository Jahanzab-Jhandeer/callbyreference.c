#include<stdio.h>
// print the address with "call by referance"
void printaddress(int *n);

int main () {
   int n = 4;
   printaddress(&n);
   printf("address of n is : %u\n" , &n);

return 0;
}
void printaddress(int *n) {
    printf("address of n is : %u\n" , n);
}