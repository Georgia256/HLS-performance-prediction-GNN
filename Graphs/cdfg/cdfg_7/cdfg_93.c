#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 16137652
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(long long p, unsigned short p_9, int p_13, float p_15[4][4])
{
  signed char v_21;
  long v_19;
  long v_17;
  unsigned long v_11;
  int v_6;
  unsigned int v_4;
  signed char v;
  unsigned char result;
  v_21 = (signed char)-73;
  v_19 = -191497314L;
  v_17 = (long)p_13;
  v = (signed char)((-1353062064L + 47463L % (v_19 + 872L)) - (long)v_21);
  if ((double)p_15[3][2] > - ((1797826828.42 - (double)v_17) - -6116.)) {
    v_6 = (int)(! ((long long)(54094 * (int)v) - (22087LL + (long long)p_9)));
    v_4 = (unsigned int)(876701990LL / (p + 266LL));
    result = (unsigned char)(((unsigned int)v / (v_4 + 338U)) * (v_4 * v_4) - (
                             (unsigned int)(- v_6) + v_4));
  }
  else {
    v_11 = (unsigned long)(- (~ (! p)));
    result = (unsigned char)(v_11 >> (p_13 & 31));
  }
  return result;
}

