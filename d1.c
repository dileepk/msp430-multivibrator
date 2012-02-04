#include<msp430.h>
int main()
{
P1DIR=0x41;
P1OUT=0X01;
int n=10000;
while(n)
{
P1OUT=(P1OUT^0X41);
while(n>0)
{
--n;
}
n=10000;
}
}
