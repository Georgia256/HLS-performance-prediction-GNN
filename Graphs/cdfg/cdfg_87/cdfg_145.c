#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 365526145
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(char p, unsigned long long p_4, unsigned int p_6, int p_9, long p_15)
{
  signed char v_21;
  unsigned int v_19;
  long v_17;
  long long v_13;
  unsigned short v_11;
  unsigned long long v;
  char result;
  v_21 = (signed char)-28;
  v_19 = 4294910613U;
  v_13 = 55003LL;
  v = (unsigned long long)p;
  result = (char)p_4;
  if ((unsigned long long)((long long)v_19 & (v_13 + (long long)v_21)) >= ~ (! (~ v))) {
    result = (char)p_9;
    v = (unsigned long long)-428.639284696;
    result = (char)((unsigned long long)((unsigned int)result * p_6) * (
                    v * (unsigned long long)p) - (unsigned long long)-9.32054241661e+37);
  }
  else {
    v_17 = (long)(~ ((unsigned long long)((long long)result % 308273046LL) % (
                     (unsigned long long)p % 18446744073709543693ULL + 680ULL)));
    v_11 = (unsigned short)(! (~ p_15) / (- (~ v_17) + 153L));
    result = (char)(0LL % ((-926420922LL & (long long)v_11 % (v_13 + 560LL)) + 615LL));
  }
  result = (char)((unsigned long long)p / ((p_4 ^ (unsigned long long)(
                                            -74 & (int)result)) + 821ULL));
  return result;
}

