#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 814499564
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(long p, int p_7, short p_9[4][3], long p_13, short p_17)
{
  int v_25;
  long v_23;
  short v_21;
  long long v_19;
  int v_15;
  char v_11;
  unsigned long v_4;
  long v;
  long result;
  v_25 = -218736734;
  v_23 = p_13;
  v_21 = (short)p_7;
  v_19 = (long long)p_17;
  v_15 = 8907;
  v_11 = (char)-23;
  v_4 = (unsigned long)p_7;
  v = p;
  while ((int)(~ (! (~ v_11))) >= ~ (! (v_15 << ((int)p_17 & 31)))) {
    v_19 = (long long)v_21 + (v_19 - -2142439040LL);
    v_21 = - (- (! p_17));
    v_21 = (short)((long)((int)v_21 * (int)p_9[1][2] | ~ p_7) - ((v_23 + (long)v_25) & 95903084L));
    v_11 = (char)-105;
  }
  while_0_break: ;
  if (113UL > ((unsigned long)v / (v_4 + 398UL)) % (unsigned long)((p - (long)p_7) + 687L) << (
              ((long)((int)p_9[2][1] % ((int)v_11 + 99)) - ~ p_13) & 31L)) 
    result = -2L;
  else result = (long)-2.79255435961e+38f;
  return result;
}

