#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 968932126
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned int p, unsigned long long p_11[2],
                  unsigned long long p_19)
{
  float v_21;
  short v_17;
  unsigned char v_15;
  float v_13;
  unsigned int v_9;
  unsigned int v_7;
  float v_4;
  unsigned long long v;
  unsigned char result;
  v_21 = (float)p_19;
  v_17 = (short)p;
  v_15 = (unsigned char)p;
  v_13 = 3.16103990386e+38f;
  v_9 = p;
  v_7 = (unsigned int)p_11[0];
  v_4 = (float)p;
  result = (unsigned char)72;
  while ((unsigned long long)(- ((int)v_17 + 70)) != ! (p_11[0] % (p_11[1] + 957ULL)) << (
                                                     71ULL % ((p_11[1] - p_19) + 765ULL) & 63ULL)) {
    v_7 = (unsigned int)(- (v_21 + (float)(v_9 / (p + 287U))));
    v_15 = (unsigned char)(- ((unsigned long long)v_7 % ((unsigned long long)result * 18446744073168830609ULL + 325ULL)));
    v_17 = (short)((unsigned long long)result / (((unsigned long long)v_15 / 18446744072764700404ULL + 18446744073709494891ULL) + 915ULL));
  }
  while_0_break: ;
  if ((p_11[0] + (unsigned long long)v_13) % 3455724656ULL + ((unsigned long long)(
                                                              (int)v_15 * (int)v_17) + - p_19) >= 
      p_11[1] * (unsigned long long)v_7) {
    result = (unsigned char)(- (0U % (108U * v_7 + 13U)));
    v = (unsigned long long)(v_7 - (v_9 % (v_9 + 24U) - (unsigned int)result / (
                                                        p + 121U)));
    result = (unsigned char)(- ((float)(v / 190ULL) - (v_4 + (float)p)));
  }
  else result = (unsigned char)(-57682L * (long)-2.05908569075e+38);
  return result;
}

