#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 926458953
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(signed char p, unsigned short p_4, unsigned long p_6,
        short p_8[4][5][2], long long p_10)
{
  unsigned char v_25;
  unsigned int v_23;
  char v_21;
  long v_19;
  long v_17;
  signed char v_15;
  unsigned long v_13;
  unsigned long v;
  int result;
  v_25 = (unsigned char)p_10;
  v_23 = 32777U;
  v_21 = (char)p;
  v_19 = -1059439807L;
  v_17 = (long)p;
  v_15 = (signed char)98;
  v_13 = p_6;
  v = (unsigned long)p_10;
  result = 10656;
  if ((unsigned int)((float)v * 2.96447850885e+37f) != ((4294967217U + v_23) & (unsigned int)(~ v_15)) << (
                                                       ((long long)(v_13 / (unsigned long)(
                                                                    (int)v_25 + 268)) - 
                                                        p_10 / 3570LL) & 31LL)) {
    v = (unsigned long)(((long long)p_8[3][0][0] % -621153015LL - (long long)(
                         711L % (v_17 + 469L))) / ((long long)(- p_6) % (
                                                   ! p_10 + 238LL) + 639LL));
    v_15 = (signed char)result;
    v_13 = v;
  }
  else {
    v = (unsigned long)(- (! v_19) + (long)(! ((int)v_21 % ((int)((char)-3073135104.f) + 196))));
    v_13 = ~ (- (~ p_6));
    v_15 = (signed char)33;
  }
  if (~ ((unsigned long)((int)p_4 - (int)((unsigned short)1.82477330347e+38f)) * ~ v) <= 
      v_13 / (unsigned long)(61343 * (int)p_4 + 555) << ((int)v_15 & 31)) 
    result = 36874;
  else result = (int)((unsigned long)(- ((int)p - (int)p_4)) / ((p_6 / 33147UL) % (
                                                                (56332UL + (unsigned long)p_8[0][1][1]) + 298UL) + 895UL));
  return result;
}

