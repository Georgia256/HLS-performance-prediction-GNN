#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 457720983
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(long p, long long p_11[4], char p_13, int p_15[5][5][1],
              unsigned long p_19[5])
{
  short v_25;
  signed char v_23;
  char v_21;
  unsigned short v_17;
  int v_8;
  double v_6;
  unsigned long long v_4;
  unsigned long v;
  long long result;
  v_25 = (short)-7852;
  v_21 = (char)-125;
  v_17 = (unsigned short)p_19[3];
  v_8 = (int)p_13;
  v_6 = -1.98745290216e+38;
  v = (unsigned long)p_13;
  while (p_19[0] < (unsigned long)(- (v_8 % ((int)v_17 + 980)) % -17856)) {
    v_23 = (unsigned long)v_21 / 63328UL;
    v_21 = (char)((int)((double)((int)v_25 / 31255) / (- v_6 + 989.)) - (
                  (int)v_23 - (p_15[2][0][0] - (int)v_6)));
    v_6 = (double)((unsigned long)((833192508U * (unsigned int)8980591056.86) / (unsigned int)(
                                   73 * (int)v_23 + 101)) % (unsigned long)(
                   ((long)v_8 * p) * (long)(~ v_17) + 374L));
    v_8 = (int)((long long)(! (~ v_21)) % ((84LL | p_11[2]) * -34LL + 792LL));
  }
  while_0_break: ;
  if (~ ((long long)(p_15[4][2][0] % ((int)v_17 + 520)) - -63395LL) <= (long long)(
      (unsigned long)p & (! p_19[0] | ! v))) {
    v_4 = (unsigned long long)((long long)(((unsigned long)v_6 + 355362250UL) / (unsigned long)(
                                           (long)v_8 * p + 5L)) / (p_11[0] + 26LL));
    v = (unsigned long)(18446744073709551595ULL & v_4);
    result = (long long)(7141UL / (v + 198UL));
  }
  else result = (long long)(- p_13);
  return result;
}

