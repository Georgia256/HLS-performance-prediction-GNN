#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 893980554
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned long p, long p_7, signed char p_9[4][2],
         unsigned short p_13[4], short p_15[5])
{
  long v_17;
  long v_11;
  unsigned int v_4;
  signed char v;
  long result;
  v_17 = (long)p_9[0][0];
  v_11 = (long)p_9[3][1];
  if ((unsigned long)v_11 == 4294934701UL) {
    v_4 = (unsigned int)(- ((double)p_9[1][1] - 701.845927038));
    v = (signed char)((long long)((unsigned long)-360.712738037f - (4166614043UL + p)) + 
                      840664763LL * (long long)(p + (unsigned long)p_7));
  }
  else {
    v_11 = - ((v_17 - (long)-5.13643403188e+37f) % (long)((int)(- p_9[2][1]) + 475));
    v = (signed char)(933404817L * v_11 - (long)((int)p_13[0] % ((int)(- p_15[0]) + 1007)));
    v_4 = 4294936811U;
  }
  result = (long)((unsigned int)v / (- v_4 + 33U));
  return result;
}

