#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 893644967
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(short p, unsigned char p_4, unsigned long p_6, short p_9,
                  short p_11)
{
  unsigned short v_25;
  unsigned int v_23;
  double v_21;
  char v_19;
  signed char v_17;
  unsigned long v_15;
  long long v_13;
  unsigned int v;
  unsigned char result;
  v_25 = (unsigned short)33243;
  v_21 = (double)p_6;
  v_19 = (char)27;
  v_17 = (signed char)p_4;
  v_15 = (unsigned long)p_4;
  v_13 = 852175388LL;
  v = 4294914624U;
  while (~ (v_15 >> ((int)v_17 & 31)) - (unsigned long)((unsigned int)p_9 % 4294944201U) != (unsigned long)(
         0 - ! ((int)p_9 - (int)p_9))) {
    v_23 = v_21 / ((double)v_19 / -4141974385.98 + 768.);
    v = (unsigned int)((unsigned long long)v % (((unsigned long long)(
                                                 v_23 % 764U) | (unsigned long long)v_25 / 18446744073709517411ULL) + 255ULL));
    v_19 = (char)(! (v_15 - (unsigned long)p_9) / ((3404223368UL & (unsigned long)(- v)) + 611UL));
    v_15 = (unsigned long)(- ((v_13 + 944115341LL) * ((long long)v_19 * -43675LL)));
  }
  while_0_break: ;
  if (((unsigned long)((int)p + (int)p_4) & - p_6) + (unsigned long)v <= (unsigned long)(- (
      ((int)p_9 + -38588) >> (((int)p_11 >> (v_13 & 15LL)) & 31)))) result = (unsigned char)-222.398299025;
  else result = (unsigned char)p;
  return result;
}

