#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 746221072
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(long p[1][3][1], signed char p_5, signed char p_7,
          unsigned long p_19)
{
  long v_17;
  double v_15;
  long v_13;
  unsigned long v_11;
  unsigned char v_9;
  short v;
  short result;
  v_17 = (long)p_19;
  v_15 = 3.58884024804e+37;
  v_13 = -574230245L;
  v_11 = 4294914729UL;
  result = (short)p_7;
  if ((unsigned long)(v_17 / (p[0][1][0] + 189L)) / ((p_19 * 59004UL + p_19) + 650UL) == (unsigned long)result) {
    v = (short)10606;
    v_9 = (unsigned char)75;
    v = (short)(((-173 << 1) - (int)(! v_9)) >> (! (737110149UL % (unsigned long)(
                                                    (int)v + 712)) & 31UL));
  }
  else {
    v_11 = (unsigned long)(- ((long)(123 * (int)p_7) + ~ v_13));
    v_9 = (unsigned char)((double)(- p_7) * v_15);
    v = (short)v_11;
  }
  while ((p[0][1][0] + (long)((int)v - (int)p_5)) * ((long)(-2141 * (int)p_7) % (
                                                     p[0][1][0] + 50L)) == (long)(
         ! (-18466 % ((int)v_9 + 910)) % ((int)p_5 + 995))) {
    v_13 = v_11 + 669UL;
    v_11 = (unsigned long)(498735094ULL % (unsigned long long)(- (21646UL + (unsigned long)v_13) + 301UL));
    result = (short)(- (! p_7));
    v_9 = (unsigned char)131;
  }
  while_0_break: ;
  return result;
}

