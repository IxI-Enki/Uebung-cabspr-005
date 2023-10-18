/*------------------------------------------------------------------------------
 *                      HTBLA-Leonding / Class: 3ACIF                           
 *------------------------------------------------------------------------------
 *                      Jan Ritt                                                
 *------------------------------------------------------------------------------
 *  Description:  A simple calculator.
 *----------------------------------------------------------------------------*/
#include <stdio.h>     // input/output library    -  printf, scanf, ..
#include <string.h>    // string handling library -  strlen, strcpy, strcmp, ..
int main(void)
{
  /*  VARIABLES  */
  int numberOne;       // first Operand
  int numberTwo;       // second Operand
  int resultModulo;    // calculation result if modulo is calculated
  float result;        // calculation result
  char operator[2];    // Operator
  
  //  INPUT  //
  printf("\n Einfacher Taschenrechner \n");
  printf("==========================\n");
  printf("Geben Sie den ersten ganzzahligen Operanden ein: ");
  scanf("%i",&numberOne);
  printf("\nGeben Sie den zweiten ganzzahligen Operanden ein: ");
  scanf("%i",&numberTwo);
  printf("\nWaehlen Sie einen Operator (+ - * / %%): ");
  scanf("%1s",operator);
  /*  CALCULATION  */
  if (strlen (operator) == 1        //  test if the operator is 1 char long
          && (operator[0] == '+'    //  & test for allowed symbols (+ - * / %)
          || operator[0] == '-'     //
          || operator[0] == '*'     //
          || operator[0] == '/'     //
          || operator[0] == '%'))   //
  {                                                                                                                        
    if (operator[0] == '+')
    {
      result = numberOne + numberTwo;
    }
    else if (operator[0] == '-')
    {
      result = numberOne - numberTwo;
    }
    else if (operator[0] == '*')
    {
      result = numberOne * numberTwo;      
    }
    else if (operator[0] == '/')
    {
      result = numberOne / numberTwo;      
    }
        else if (operator[0] == '%')
    {
       resultModulo = numberOne % numberTwo;
       result = resultModulo;
    }
    printf("\n--------------------------\n");
    printf("Ihr Ergebnis ist: %.4f",result);     //  %.4f .. format output float number to 4 decimal places after the comma
    printf("  (auf 4 Nachkommastellen genau)");
  }
  else
  {
    printf("! Ungueltiger Operator gewaehlt: %s !",operator);
  }
  //  END PROGRAM  //
  printf("\nEingabetaste zum Beenden druecken.");
  while (getchar() != '\n');    //  wait for [Enter]-Key
  getchar();                    //
  return 0;
}
