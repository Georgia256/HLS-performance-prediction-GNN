#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 312991264
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned short p)
{
  int v_15;
  double v_13;
  char v_11;
  double v_9;
  unsigned long v_7;
  unsigned int v_5;
  unsigned long long v;
  long long result;
  v_15 = 55181;
  v_13 = -650.040801144;
  v_11 = (char)68;
  v_9 = (double)p;
  v_7 = 3281733256UL;
  v_5 = (unsigned int)p;
  v = 414472166ULL;
  result = -7500LL;
  if ((unsigned long)((unsigned int)(! ((int)((signed char)v_13) % -117)) % (
                      - v_5 / (v_5 / ((unsigned int)v_9 + 789U) + 927U) + 436U)) >= 
      ((unsigned long)((unsigned int)p + v_5) / (((unsigned long)p - v_7) + 472UL)) * (unsigned long)(~ (
      (int)p / ((int)((unsigned short)v_9) + 85)))) {
    v_13 = (double)p;
    result = (long long)(((long)p - -23824L) / (long)((int)p + 252) + (long)p);
    v_11 = (char)(((v % (v + 309ULL)) * (unsigned long long)(-78081631 / (
                                                             (int)v_11 + 926))) % (unsigned long long)(
                  ((int)p + (int)p % ((int)p + 190)) + 142));
  }
  else {
    v_5 = (unsigned int)(((float)((unsigned long)p % (v_7 + 934UL)) / (
                          ((float)result - 729.283813477f) + 1003.f)) / (
                         (float)(3802524229U * (unsigned int)p) + 782.f));
    result = (long long)(-655.09506814 - (double)v_15);
    v = (unsigned long long)p;
  }
  while (((v - (unsigned long long)p) - 17872ULL) - (unsigned long long)v_5 <= (unsigned long long)(
         (v_7 & (unsigned long)v_9) % 78UL - (unsigned long)(59 + ((int)p + 25)))) {
    v_13 /= -11654.;
    v_7 = (unsigned long)(-15684 * ! ((int)p / 45628));
    v_9 = (double)((unsigned long long)(- ((int)((unsigned short)-602.786315918f) * (int)p)) % (
                   (1595737ULL | (unsigned long long)((int)v_11 % ((int)p + 440))) + 26ULL));
    v = 18446744073135307961ULL;
  }
  while_0_break: ;
  return result;
}

