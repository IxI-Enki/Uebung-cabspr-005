/*------------------------------------------------------------------------------
 *                      HTBLA-Leonding / Class: 3ACIF                           
 *------------------------------------------------------------------------------
 *                      Jan Ritt                                                
 *------------------------------------------------------------------------------
 *  Description:  The program outputs a temperature scale from +50°C to -50°C   
 *                It displays Celsius - Fahrenheit                              
 *                In 10°C steps
 *----------------------------------------------------------------------------*/
#include <stdio.h>     // input/output library    -  printf, scanf, ..
#include <string.h>    // string handling library -  strlen, strcpy, strcmp, ..
int main(void)
{ 
  // VARIABLES //
  int i;

  /*  CALCULATION  */
  printf("\n  TEMPERATURTABELLE: ");
  printf("\n Celsius - Fahrenheit ");
  printf("\n======================\n");  
  for ( i = 5; i>=-5; i-- )
  {
    printf( "   %3d   -   %3d\n", (i*10),(((i*10)*9)/5)+32);
  }

  //  END PROGRAM  //
  printf("----------------------");
  printf("\n   Eingabetaste zum \n   Beenden druecken");
  while (getchar() != '\n');    //  wait for [Enter]-Key
  getchar();                    //
  return 0;
}
