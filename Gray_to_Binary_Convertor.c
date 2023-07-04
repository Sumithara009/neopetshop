#include <AT89S52.h>
#define G2 P0.7
#define G1 P0.6
#define G0 P0.5
#define B2 P0.2
#define B1 P0.1
#define B0 P0.0
void main()
{
  __bit g2,g1,g0;//Assign bit variables
  G2=1;//Make the variables to switch off
  G1=1;
  G0=1;
  while(1)//Infinite loop
  {
    g2=!G2;
    g1=!G1;
    g0=!G0;
    B2=!g2;
    B1=!(g2^g1);
    B0=!(!(g2^g1)^g0);
     
  }
}

