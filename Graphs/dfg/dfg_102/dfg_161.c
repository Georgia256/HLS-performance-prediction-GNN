#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 239538242
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(short p, unsigned long long p_11, unsigned short p_13[1][2][5])
{
  unsigned long long v_17;
  unsigned long v_15;
  unsigned long v_9;
  unsigned long long v_7;
  short v_4;
  unsigned char v;
  float result;
  v_17 = 136913140ULL;
  v_7 = (unsigned long long)p_13[0][1][3];
  v_4 = (short)p_13[0][1][2];
  v = (unsigned char)106;
  v_15 = 4294967184UL;
  v_9 = (unsigned long)(v_7 % (unsigned long long)((((int)v + 8) + 318467505) + 187) - 
                        ((p_11 + 242ULL) >> (((unsigned long)p_13[0][0][0] + v_15) & 63UL)) * (
                        ((unsigned long long)v % (v_17 + 399ULL)) * 967430433ULL));
  v = (unsigned char)(-1.30927203156e+38 - (double)((unsigned long long)(- v_4) - 
                                                    ((unsigned long long)p - v_7) / (unsigned long long)(
                                                    ((unsigned long)p + v_9) + 863UL)));
  result = (float)(13857802LL % (long long)((int)v + 835));
  return result;
}

