#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 564052180
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(short p, long p_7, int p_9, unsigned char p_11, unsigned long p_13)
{
  float v_31;
  long v_29;
  unsigned int v_27;
  unsigned char v_25;
  long long v_23;
  short v_21;
  float v_19;
  long v_17;
  short v_15;
  unsigned int v_5;
  unsigned int v;
  char result;
  v_31 = (float)p_7;
  v_29 = 862900350L;
  v_25 = (unsigned char)p_9;
  v_23 = (long long)p_13;
  v_21 = (short)p_13;
  v_19 = (float)p_7;
  v_15 = p;
  if ((long long)(! (! (p_9 ^ (int)p))) > ((long long)(3990551812UL % (unsigned long)(
                                                       p_9 + 417)) + 
                                           v_23 % (long long)((int)p_11 + 977)) << (
                                          ! ((int)((short)2.37701981121e+37f) >> (
                                             (int)p & 15)) & 63)) {
    v_17 = (long)((unsigned long)3.5294390936e+37 - (unsigned long)v_25 % (
                                                    (4294935151UL - p_13) + 681UL));
    v_15 = (short)((unsigned long)((int)((unsigned char)v_19) / ((int)p_11 + 919) + (
                                   81 - (int)p_11)) * (! p_13 % (unsigned long)(
                                                       v_17 + 212L)));
    v_19 = (float)((long long)(16683 - (int)v_21) * (~ v_23 * 142LL));
  }
  else {
    v_27 = (unsigned int)(~ (-716232285LL * (long long)(v_29 + (long)v_31)));
    v_23 = (long long)(~ ((unsigned long)p_7 + (unsigned long)v_27) - 4294433900UL);
    v_19 = (float)(! ((58136LL - v_23) ^ (long long)(53082 * p_9)));
  }
  if (! (- (-36366L << ((int)v_15 & 31))) < (long)((int)p + ~ p_9)) {
    v_5 = (unsigned int)((long long)(((unsigned long)p_7 | 3412834391UL) + (unsigned long)(! p_9)) + 
                         58845LL * (long long)((unsigned long)p_11 - p_13));
    v = (unsigned int)((unsigned long long)(352640893U * (4294915014U % (
                                                          v_5 + 953U))) * - (
                       (unsigned long long)p ^ 50192ULL));
    result = (char)(~ ((unsigned int)(-5.87263530153e+37f + (float)p) - 
                       (unsigned int)p * v));
  }
  else {
    v_17 = (long)v_19;
    v_15 = (short)(! v_17);
    result = (char)(- (! ((long)v_15 * p_7)));
  }
  return result;
}

