#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 216274197
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned short p, char p_7, char p_9, int p_15,
        unsigned short p_21[3][1][4])
{
  short v_19;
  unsigned char v_17;
  long v_13;
  unsigned short v_11;
  char v_4;
  long long v;
  int result;
  v_17 = (unsigned char)219;
  v_13 = (long)p_21[0][0][2];
  v_11 = (unsigned short)55692;
  if ((long long)(~ (- v_13)) == 4265922467LL * ((long long)p_7 - ((long long)p_9 + -796310950LL))) {
    v_4 = (char)((long)((int)p_9 % ((int)v_11 + 33) & -159167842) - v_13);
    v = (long long)(((795442492L + (long)p) - (long)v_4) * (long)p_7);
    v_4 = (char)52;
  }
  else {
    v_19 = (short)p_15;
    v_4 = (char)((long long)v_17 / (((long long)((int)v_19 / ((int)p_21[0][0][3] + 208)) - (
                                     (long long)p_7 - -1042143566LL)) + 41LL));
    v = (long long)((int)(- (- p_9)) / ((-36 - p_15) + 794));
  }
  result = (int)(~ (v % (long long)((int)v_4 + 899)) >> ((int)(- (~ p)) & 63));
  return result;
}

