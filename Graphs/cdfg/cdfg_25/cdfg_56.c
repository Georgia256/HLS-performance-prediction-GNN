#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 91274819
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(long long p, short p_4, int p_13, unsigned long long p_15,
                unsigned int p_17)
{
  double v_21;
  float v_19;
  double v_11;
  double v_9;
  long v_7;
  unsigned long long v;
  signed char result;
  v_21 = 5732416484.68;
  v_19 = -19.0939121246f;
  v_11 = 6662389238.75;
  v_7 = 699569172L;
  v = (unsigned long long)p_4;
  result = (signed char)-35;
  while ((unsigned long long)(621151934UL / (unsigned long)((int)p_4 + 194)) + 
         (unsigned long long)(- p_4) % ((18446744073709551537ULL | p_15) + 557ULL) < (unsigned long long)(- result)) {
    v = v_19 / -4.34279500648e+37f;
    v_19 = (float)p_17;
    v_11 = - v_21;
    result = (signed char)(! p_17);
  }
  while_0_break: ;
  if ((unsigned long long)((long)p_13 * (v_7 + (long)(! p_4))) > ((unsigned long long)(
                                                                  v_7 - 112L) & ! p_15) * (
                                                                 (unsigned long long)(
                                                                 82U + p_17) % (
                                                                 18446744073709537141ULL % (
                                                                 p_15 + 279ULL) + 246ULL))) 
    result = (signed char)(-59675LL % (p + 552LL) | (long long)p_4);
  else {
    v_9 = - ((double)(! result) - v_11 * -110843649.977);
    v_7 = (long)((int)((short)(- (v_9 * 13199.))) % ((int)p_4 + 324));
    result = (signed char)(- (v / (unsigned long long)(v_7 + 173L)) % (unsigned long long)(
                           (int)(- p_4) + 144));
  }
  return result;
}

