#include<stdio.h>
#include "atm.h"

void print_notes(notes);

void print_notes(notes notes) {
  money denominations[] = DENOMINATIONS;

  REPEAT_8_TIMES {
    printf("%d notes of Rs %d\n", notes >> 28, denominations[index]);
    notes <<= 4;
  }
}

int main(void) {
  money amouts[] = {1, 10, 39, 589, 2590, 31999};
  for (int index = 0; index < 6; index++) {
    notes notes = get_money(amouts[index]);
    printf("\nAmount: Rs. %d\n", amouts[index]);
    print_notes(notes);
    printf("\n");
  }
  return 0;
}