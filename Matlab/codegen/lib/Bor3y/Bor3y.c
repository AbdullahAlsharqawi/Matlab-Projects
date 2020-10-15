/*
 * File: Bor3y.c
 *
 * MATLAB Coder version            : 2.8
 * C/C++ source code generated on  : 17-Jan-2018 09:45:10
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "Bor3y.h"
#include "fprintf.h"
#include <stdio.h>

/* Function Definitions */

/*
 * Arguments    : double y
 *                double z
 *                char operator
 * Return Type  : void
 */

void Bor3y(double y, double z, char operator)
{
  boolean_T b_bool;
  int b_index;
  b_bool = false;
  if (operator != '+') {
  } else {
    b_bool = true;
  }

  if (b_bool) {
    b_index = 0;
  } else {
    b_bool = false;
    if (operator != '-') {
    } else {
      b_bool = true;
    }

    if (b_bool) {
      b_index = 1;
    } else {
      b_bool = false;
      if (operator != '*') {
      } else {
        b_bool = true;
      }

      if (b_bool) {
        b_index = 2;
      } else {
        b_bool = false;
        if (operator != '/') {
        } else {
          b_bool = true;
        }

        if (b_bool) {
          b_index = 3;
        } else {
          b_index = -1;
        }
      }
    }
  }

  switch (b_index) {
   case 0:
    printf(y + z);
    break;

   case 1:
    printf(y - z);
    break;

   case 2:
    printf(y * z);
    break;

   case 3:
    printf(y / z);
    break;

   default:
    printf();
    break;
  }
}

/*
 * File trailer for Bor3y.c
 *
 * [EOF]
 */
void main(void){

  Bor3y(1,3,'+');
}
