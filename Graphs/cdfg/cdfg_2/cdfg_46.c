#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 557920955
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned char p, unsigned short p_4, unsigned char p_7,
          unsigned long p_9, char p_13)
{
  unsigned int v_19;
  long long v_17;
  signed char v_15;
  long v_11;
  long v;
  short result;
  v_19 = 22836U;
  v_17 = -25022LL;
  if ((unsigned long)(! ((v_19 * 3871225946U) * 4294958759U)) == 858684752UL) 
    v = (long)(298299109UL * (31UL * ((unsigned long)p_7 * 4294960948UL)));
  else {
    v_15 = (signed char)v_17;
    v_11 = (long)(720078111ULL * (unsigned long long)((int)p_13 / 174));
    v = (long)((p_9 - (unsigned long)v_11) * (unsigned long)(- p_13) << (
               (int)v_15 & 31));
  }
  result = (short)((long)((int)p / ((int)((unsigned char)1.79758815782e+38) + 510) + (
                          (int)p & (int)p_4)) % (- v + 883L));
  return result;
}

