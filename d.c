#include<msp430.h>
int main()
{
int n=10000;
P1DIR=0x41;
while(10000)
{
P1OUT=0x40;
while(n>0)
{
n=n-1;
}
P1OUT=1;
while(n<10000)
{
n=n+1;
}
}
}
