#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 979062260
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(long p, short p_11, unsigned long long p_13, long p_19)
{
  unsigned char v_23;
  unsigned short v_21;
  int v_17;
  unsigned long long v_15;
  char v_9;
  double v_7;
  char v_5;
  float v;
  unsigned long result;
  v_23 = (unsigned char)22;
  v_21 = (unsigned short)p;
  v_17 = -704513024;
  v_15 = 7026ULL;
  v_9 = (char)p_11;
  v_7 = (double)p_13;
  v = (float)p_11;
  result = 4101551060UL;
  if (((unsigned long long)p_19 / ((p_13 + (unsigned long long)p_19) + 195ULL)) / (
      (unsigned long long)((v / (v + 158.f)) / 678.f) + 1017ULL) >= (unsigned long long)p_19) {
    v = (float)(54573L / ((long)v_9 / (p_19 + 139L) + 420L) + p);
    v = (float)((p_13 / (v_15 + 191ULL) - (unsigned long long)(98976580UL / (unsigned long)(
                                                               v_17 + 583))) + (unsigned long long)v);
    v_5 = (char)((unsigned int)p_11 - 4294957681U);
  }
  else {
    v_5 = (char)(496.543095916 + (double)((long)v_21 - (p - (long)v_23)));
    result = ~ ((unsigned long)8391044096.f % ((result | 4294916706UL) + 372UL));
    v_7 = (double)((float)(102 ^ ((int)p_11 - v_17)) / (((float)p_13 - v) + 104.f));
  }
  while (0 - (unsigned long)(! (- p)) > - (result * (unsigned long)p - (unsigned long)(- v))) {
    v_9 = (double)v_9 / ((v_7 + (double)((int)v_5 * 378874366)) + 508.);
    result = 3684459545UL;
    v = (float)(! (short)-11922);
    result = ! (result >> 22U) / (~ ((unsigned long)p / (result + 484UL)) + 452UL);
  }
  while_0_break: ;
  return result;
}

