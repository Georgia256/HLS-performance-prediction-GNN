#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 194243334
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(short p, unsigned long long p_7, unsigned int p_9,
         unsigned long p_11, unsigned int p_15)
{
  unsigned char v_33;
  int v_31;
  float v_29;
  unsigned int v_27;
  long long v_25;
  char v_23;
  unsigned char v_21;
  long v_19;
  float v_17;
  double v_13;
  unsigned int v_5;
  int v;
  char result;
  v_33 = (unsigned char)p;
  v_31 = -31951584;
  v_29 = (float)p;
  v_23 = (char)-83;
  v_19 = (long)p;
  if (0U % ((unsigned int)v_31 / (~ p_9 + 996U) + 608U) > (unsigned int)(
      (int)v_33 / ((int)p + 873) + (int)(! p) * 105)) {
    v_27 = (unsigned int)(~ ((unsigned long long)(~ p) % (((unsigned long long)p - p_7) + 989ULL)));
    v_25 = (long long)(446.f - ((float)(4294943155U - v_27) - ((float)p_9 + 1.43656788225e+38f)));
    v_21 = (unsigned char)(! ((long long)v_23 / (v_25 + 623LL)) + (long long)(
                           p_11 / (p_11 + 465UL) + 3705722619UL));
  }
  else {
    v_21 = (unsigned char)179;
    v_27 = (unsigned int)((unsigned long long)((unsigned long)((unsigned int)v_29 >> (
                                                               p_9 & 31U)) * 4294906289UL) - 
                          ! p_7 % (unsigned long long)((int)(! p) + 120));
    v_19 = (long)(- (22554UL * (4069771620UL - (unsigned long)v_27)));
  }
  if ((unsigned long)(~ ((unsigned int)v_21 % (p_9 + 697U)) >> (p_11 & 31UL)) <= 
      833UL - (unsigned long)(~ p_9 ^ 58U)) {
    v_5 = (unsigned int)((unsigned long)(~ p_9) ^ 18625UL);
    v = (int)((unsigned long long)(~ (! v_5)) / ((p_7 & 102454313ULL) + 391ULL));
    result = (char)(- ((long)(- p) * ((long)v - -31244L)));
  }
  else {
    v_17 = (float)(signed char)-47;
    v_13 = (double)(- (((float)p_15 - v_17) + (float)((unsigned long)v_19 / (unsigned long)(
                                                      p_15 + 761U))));
    result = (char)(~ (~ p_11 * (unsigned long)((int)v_13 + 93412263)));
  }
  return result;
}

