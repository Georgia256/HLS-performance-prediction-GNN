#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 410994391
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned char p, unsigned long long p_7, char p_9, signed char p_17,
         double p_19)
{
  long v_25;
  unsigned char v_23;
  unsigned long v_21;
  double v_15;
  signed char v_13;
  signed char v_11;
  long v_5;
  float v;
  long result;
  v_25 = -494443699L;
  v_23 = (unsigned char)167;
  v_21 = 4294951264UL;
  v_15 = -867.836501893;
  v_13 = (signed char)-37;
  v_11 = (signed char)-39;
  v = (float)p_9;
  if ((unsigned long)(~ ((int)((signed char)(v_15 * (double)v_23)) - (int)v_11)) >= 
      ((v_21 >> (v_25 & 31L)) + (unsigned long)(5584752128. - v_15)) % (
      (unsigned long)3.06537068131e+38 + 885UL)) {
    v_5 = (long)((int)(~ (! v_13)) + (int)((signed char)((v_15 * (double)p_17) / (
                                                         (double)(39742 + (int)((unsigned short)p_19)) + 308.))));
    v_11 = (signed char)(! (4294922661U % (unsigned int)(((int)((unsigned char)v) & (int)p) + 928)));
    v_5 = (long)p_9 + (v_5 + (long)((int)v_11 + (int)v_11));
  }
  else {
    v_21 = 4294967247UL;
    v = (float)(- (! ((unsigned long)p & v_21)));
    v_5 = -50311L;
  }
  result = (long)((unsigned long long)((long)(v * (float)p) - v_5) + ~ (
                  (unsigned long long)p % (p_7 + 525ULL)));
  return result;
}

