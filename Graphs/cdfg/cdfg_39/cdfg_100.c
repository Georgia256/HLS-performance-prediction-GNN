#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 526756664
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(char p, unsigned int p_5, unsigned long p_7,
                  unsigned long long p_13, unsigned long p_17)
{
  int v_25;
  char v_23;
  double v_21;
  unsigned long v_19;
  short v_15;
  long v_11;
  unsigned char v_9;
  int v;
  unsigned long result;
  v_23 = (char)34;
  v_21 = 2.99563032311e+38;
  v_19 = p_7;
  v_15 = (short)16348;
  v_11 = -5048L;
  v_9 = (unsigned char)p;
  result = (unsigned long)p;
  while (1.21128061193e+38f * (float)(! p_17 * 4294967292UL) > (float)(- (
         ~ result - v_19 % (p_17 + 468UL)))) {
    v_25 = (long long)v_23 * 174684671LL;
    v = v_25;
    v_11 = (long)((p_7 % (result + 625UL)) * (525407384UL - p_17 * (unsigned long)p_5));
    v_19 = (unsigned long)(v_21 - (double)v);
  }
  while_0_break: ;
  if ((unsigned long long)((float)((int)((unsigned char)9318757571.53) - (int)v_9) / (
                           (-1.1665735162e+38f + (float)(3378L - v_11)) + 187.f)) == 
      116ULL / (~ p_13 / (unsigned long long)((int)v_15 + 147) + 316ULL)) {
    v = (int)p;
    result = (unsigned long)(! v) / ((unsigned long)(~ p) % (((unsigned long)p_5 - p_7) + 591UL) + 166UL);
  }
  else result = 32429UL;
  return result;
}

