#include <stdio.h>
int X = 0b1011; //binary
int Y = 0x10; //hexadecimal
int Z = 10; //Decimal

int main()
{
    printf("X in Decimal :%d", X);
    printf("X in Octal :%o", X);
    printf("X in Hexadecimal :%x", X);

    printf("Y in Decimal :%d", Y);
    printf("Y in Octal :%o", Y);
    printf("Y in Hexadecimal :%x", Y);

    printf("Z in Decimal :%d", Z);
    printf("Z in Octal :%o", Z);
    printf("Z in Hexadecimal :%x", Z);
}