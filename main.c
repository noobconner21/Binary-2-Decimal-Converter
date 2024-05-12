#include<stdio.h>
#include<math.h>
int main(){
    long number;
    int dec = 0, rem = 0, place = 0;
    printf("Enter a Binary Number: \n");
    scanf("%ld",&number);
    printf("Binary Equivalent of %ld is: ",number);
    while (number)
    {
        rem = number%10;
        if(rem){
            dec = dec + (pow(2, place));
        }

        number = number/10;
        place++;
    }
    printf("%d\n",dec);
    
    return 0;
}