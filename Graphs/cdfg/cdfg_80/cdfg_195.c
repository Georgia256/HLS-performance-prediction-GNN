#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1066752552
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(double p, long p_4, long p_7[3][5][3], long p_9,
              unsigned char p_15[2][5])
{
  unsigned int v_23;
  short v_21;
  unsigned int v_19;
  signed char v_17;
  short v_13;
  signed char v_11;
  unsigned short v;
  long long result;
  v_23 = (unsigned int)p_15[0][4];
  v_21 = (short)-12587;
  v_19 = (unsigned int)p_7[2][2][1];
  v_17 = (signed char)120;
  v_13 = (short)-9430;
  v_11 = (signed char)15;
  v = (unsigned short)56119;
  result = 729298658LL;
  if (((long long)v_23 * result) % (long long)(p_9 + 771L) - (long long)(
      (double)(v_23 % (unsigned int)((int)v_17 + 241)) / ((p - 7.79198456828e+37) + 54.)) > (long long)(
      ((int)(~ p_15[1][3]) - (int)v_13) & (int)v_13 / (((int)p_15[0][0] ^ (int)v_11) + 621))) {
    v = (unsigned short)((611456322 >> ((p_9 ^ (long)v_11) & 31L)) - (int)p_15[0][3]);
    result = (long long)v_17;
    v_11 = (signed char)((long long)p_4 ^ ~ (result % (result + 901LL)));
  }
  else {
    result = (long long)(- (- (p * (double)p_9)));
    v_13 = (short)(~ v_17);
    result = result * (long long)(140742275U + v_19) - (long long)(-115 % (
                                                                   (int)v_21 + 784));
  }
  while ((unsigned long long)(- ((long)p / (p_4 + 460L)) * (((long)v - p_7[2][0][1]) - 
                                                            p_9 % -27L)) == - (- (
         56342ULL / (unsigned long long)(result + 89LL)))) {
    result = (int)v_13 % ((int)v_11 / -104 + 486);
    v = (unsigned short)(((645497822ULL | (unsigned long long)p_15[1][2]) % (unsigned long long)(
                          ! result + 417LL)) / 850991793ULL);
    v_13 = (short)(-18446744073709503160ULL);
    result = result;
  }
  while_0_break: ;
  return result;
}

