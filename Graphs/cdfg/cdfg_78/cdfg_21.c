#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 864869468
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned char p, short p_13, signed char p_15[2][2],
          unsigned char p_19, char p_21[3])
{
  char v_31;
  long long v_29;
  unsigned long long v_27;
  int v_25;
  long v_23;
  unsigned char v_17;
  unsigned int v_11;
  double v_8;
  signed char v_6;
  signed char v_4;
  char v;
  float result;
  v_31 = (char)9;
  v_29 = 1001538469LL;
  v_27 = 557251085ULL;
  v_25 = -504541291;
  v_23 = (long)p_19;
  v_6 = (signed char)-65;
  if ((unsigned long long)((int)p_21[2] ^ ((int)p_15[0][1] + (int)(! p_13))) == 
      (unsigned long long)p_15[1][0] / (! v_27 + 702ULL) + (unsigned long long)(! (
      v_29 ^ (long long)v_31))) {
    v_17 = (unsigned char)(0 - (unsigned long long)-751.299696067);
    v = (char)(~ p_15[0][0]);
    v_6 = (signed char)(! (! (! p)));
  }
  else {
    v_4 = (signed char)v_25;
    v_17 = (unsigned char)(~ ((long)p_15[1][1] / (v_23 + 538L) - (long)(! p_15[1][1])));
    v = (char)(- ((int)v_4 & (int)(~ p)));
  }
  if ((unsigned long)(! ((int)v_17 & (int)p_19) * (-45 & (int)p_15[0][0] / 168)) != 
      (((unsigned long)p_21[0] / 4248024233UL) / (unsigned long)((int)(- p) + 586)) % (unsigned long)(
      (38551 / ((int)v + 412)) / ((int)p_13 * (int)p_21[0] + 30) + 150)) {
    v_4 = (signed char)(~ 18446744070235989806ULL);
    v = (char)((int)v_4 + (int)(! (~ v_6)));
    result = (float)(~ ((int)(- v) / ((int)v / ((int)((char)-1.44058289599e+38) + 48) + 917)));
  }
  else {
    v_11 = (unsigned int)p_15[0][0];
    v_8 = (double)((18446744073709509283ULL ^ (unsigned long long)(v_11 % 3106038528U)) % (unsigned long long)(
                   ! ((int)p_13 - 243) + 782));
    result = (float)((double)(! ((int)((unsigned char)v_8) * (int)p)) - 19064620250.9);
  }
  return result;
}

