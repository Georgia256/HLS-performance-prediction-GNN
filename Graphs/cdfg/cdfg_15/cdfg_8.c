#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 758295376
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned short p, unsigned short p_9[5][2][5], short p_11, int p_19)
{
  long long v_17;
  unsigned long v_15;
  signed char v_13;
  double v_6;
  long v_4;
  double v;
  int result;
  v_17 = (long long)p_19;
  v_15 = 65108UL;
  v_13 = (signed char)p_19;
  v_6 = (double)p;
  v_6 = (double)((33107LL / (v_17 + 649LL)) % ((long long)(v_6 - 12968.) + 509LL) - (long long)p_19);
  if ((unsigned long)((((int)p_9[3][0][0] - (int)p_11) | (int)p_11) << 30ULL) > - (
      ((unsigned long)v_13 + v_15) - (unsigned long)((int)((short)5184820736.f) * -11452))) {
    v_4 = (long)(~ (~ (~ (signed char)9)));
    v = (double)(unsigned short)52245;
    result = (int)(v * ((double)(-222.053390503f * (float)v_4) + v_6 / (
                                                                 (double)p + 700.)));
  }
  else result = (int)p;
  return result;
}

