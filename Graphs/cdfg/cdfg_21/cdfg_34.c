#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 217878730
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned char p[1][1], signed char p_5,
                 unsigned long p_7[2][5], char p_9, unsigned short p_13)
{
  unsigned short v_25;
  int v_23;
  short v_21;
  unsigned int v_19;
  unsigned short v_17;
  unsigned short v_15;
  unsigned long v_11;
  unsigned short v;
  unsigned int result;
  v_25 = (unsigned short)39405;
  v_23 = 63805;
  v_21 = (short)20717;
  v_19 = (unsigned int)p_9;
  v_17 = (unsigned short)p_9;
  v_15 = (unsigned short)p_9;
  v_11 = (unsigned long)p_5;
  v = (unsigned short)38314;
  result = (unsigned int)p[0][0];
  while ((int)((-2.06825540159e+38 * (double)v_15 - (double)((float)v_17 * 2775320064.f)) / (
               (double)((18871U / (v_19 + 128U)) / (unsigned int)(((int)v_21 | (int)p_9) + 182)) + 44.)) < 
         (~ v_23 % -807) * 51370) {
    v_15 = (double)v_25 * 6401236495.86;
    v_25 = (unsigned short)(! (30847U - v_19));
    v_11 = (unsigned long)(~ ((unsigned long long)(v_19 & (unsigned int)p_13) & 
                              18446744073709528756ULL * (unsigned long long)p_13));
    v_19 = (unsigned int)((int)((signed char)((float)v_25 / 195806336.f))) + ! (- result);
  }
  while_0_break: ;
  if ((unsigned long)(~ (! v)) - (p_7[0][0] - (unsigned long)p_9) <= 
      (- v_11 >> ((int)p_13 & 31)) % (unsigned long)((int)p[0][0] + 135)) 
    result = 3531768371U;
  else {
    v = (unsigned short)p_5;
    result = (unsigned int)((int)v ^ (int)p[0][0]);
  }
  return result;
}

