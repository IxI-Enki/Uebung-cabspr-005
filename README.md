# Uebung-cabspr-005  --  Temperaturtabelle

## Angabe
* Temperaturtabelle mit **for Schleife**
* Umrechnung von Celsius in Grad Fahrenheit
* Die Werte sind in absteigender Reihenfolge in *10er Schritten* im Bereich **-50** bis **+50** auszugeben.

## Codebeispiel
**`for-Schleife`**
```c
  for ( i = 5; i>=-5; i-- )
  {
    printf( "   %3d   -   %3d\n", (i*10),(((i*10)*9)/5)+32);
  }
```

```c
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
```

## AUSGABE:
![a](https://github.com/IxI-Enki/Uebung-cabspr-005/assets/138018029/012650a2-7ff7-4059-a4e3-4cc6f02eabdd)

