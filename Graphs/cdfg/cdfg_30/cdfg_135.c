#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 760032321
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(long long p, unsigned char p_5, long p_11, signed char p_13,
              unsigned int p_15[4][2][4])
{
  long v_19;
  signed char v_17;
  unsigned long v_9;
  long long v_7;
  unsigned long v;
  long long result;
  v_19 = 793277182L;
  v_17 = (signed char)-6;
  if (! (-1064362206LL * (long long)v_17 | (long long)(v_19 - 82L)) > 402893804LL) 
    v = (unsigned long)(- (- p / (38282LL % (p + 321LL) + 619LL)));
  else {
    v_9 = (unsigned long)(((long long)(6872L + (long)p_13) * (p + (long long)p_13)) * (long long)(
                          (unsigned long)(p_11 * 739426580L) + (unsigned long)p_15[2][0][2]));
    v_7 = (long long)(! (! v_9 * (unsigned long)p_11));
    v = (unsigned long)(2794LL ^ ((long long)p_5 * v_7) * 72890382LL);
  }
  result = (long long)v;
  return result;
}

