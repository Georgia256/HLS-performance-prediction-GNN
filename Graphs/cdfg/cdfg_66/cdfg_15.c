#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 416039340
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(long p, unsigned long p_5, float p_7, double p_13,
                   long long p_15)
{
  float v_25;
  long v_23;
  char v_21;
  double v_19;
  unsigned char v_17;
  float v_11;
  unsigned long long v_9;
  unsigned long v;
  unsigned short result;
  v_25 = -6522467840.f;
  v_23 = 182819863L;
  v_19 = -1.17055227498e+38;
  v_17 = (unsigned char)p_13;
  v_11 = 1.4118500139e+38f;
  v = (unsigned long)p_13;
  result = (unsigned short)p;
  if (v_11 <= (float)((int)result + (int)((unsigned short)((double)(v_25 * (float)p_5) - -864.779840706)))) {
    v = (unsigned long)(- ((double)(425664672.f + v_11) / (p_13 / ((double)p + 392.) + 365.)));
    v_9 = (unsigned long long)(! (! (- (char)-61)));
    result = (unsigned short)(! (! (! p)));
  }
  else {
    v_21 = (char)(p_7 * (float)v_23);
    v_9 = (unsigned long long)((int)((char)(- v_19)) - (int)v_21);
    result = (unsigned short)(((unsigned long long)p_15 - 63607ULL) % (unsigned long long)(
                              (int)(- v_17) + 434) | 18446744072599370819ULL);
  }
  if ((float)((int)result / 628) - ((9824252928.f + (float)v) + ((float)p_5 + p_7)) > (float)(- (
      965247260ULL + v_9))) result = (unsigned short)(~ p);
  else result = (unsigned short)(~ (p + 4760L));
  return result;
}

