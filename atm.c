#include "atm.h"

notes get_money(money amount) {
  money remaining_amount = amount;
  notes notes = 0x00000000;
  money denominations[] = DENOMINATIONS;

  if (amount > LIMIT) {
    return notes;
  }

  REPEAT_8_TIMES {
    notes <<= 4;
    notes |= remaining_amount / denominations[index];
    remaining_amount %= denominations[index];
  }
  return notes;
}