#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 854622238
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned char p, short p_4, unsigned int p_6, float p_9,
                  unsigned int p_11)
{
  unsigned long v_27;
  long v_25;
  int v_23;
  unsigned char v_21;
  float v_19;
  double v_17;
  unsigned long v_15;
  unsigned char v_13;
  long v;
  unsigned char result;
  v_27 = 1007283869UL;
  v_25 = (long)p_4;
  v_23 = -844079906;
  v_21 = (unsigned char)p_11;
  v_19 = -4018015744.f;
  v_17 = (double)p_11;
  v_15 = 3840294173UL;
  v_13 = (unsigned char)p_6;
  v = 840040390L;
  while ((double)(! (! (- p_11))) > ((v_17 - (double)p) + (double)((int)((unsigned char)v_19) + (int)v_21)) + 5441535118.87) {
    v_15 = (unsigned long)v_25 ^ ((unsigned long)v_23 - 4294966833UL);
    v_23 = (int)(~ v);
    v_25 = (long)(! (45519LL / (long long)((int)p_4 + 531)) / (long long)(
                  ((unsigned long)(p_6 + p_6) + v_27) + 833UL));
    v_21 = (unsigned char)206;
  }
  while_0_break: ;
  if ((unsigned long)(p_6 & (unsigned int)((int)v_13 >> (v_15 & 7UL))) / (unsigned long)(
      (long)p / 627969531L + 259L) <= 4294959764UL) {
    result = (unsigned char)(! p_6);
    result = (unsigned char)(((int)(! p) - (int)(! p_4)) % ((int)result + 817));
  }
  else {
    v = (long)(! (-4001127824UL));
    result = (unsigned char)(p_11 - (unsigned int)3.64032274701e+38);
    result = (unsigned char)((-2.80461403397e+38 * (double)((long)result * v)) * (double)(- p_9));
  }
  return result;
}

