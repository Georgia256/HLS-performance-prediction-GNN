#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 485593866
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned long long p, short p_5, unsigned long p_7, char p_17,
          long p_21)
{
  float v_19;
  float v_15;
  float v_13;
  signed char v_11;
  float v_9;
  unsigned int v;
  float result;
  v_19 = 7893561344.f;
  v_15 = -711.75793457f;
  v_13 = (float)p;
  v_11 = (signed char)p_17;
  v = (unsigned int)p_21;
  result = 6.67258621281e+37f;
  if (0.f > ((float)((int)p_5 & (int)v_11) - - v_13) / ((float)(- p_5) + 779.f)) {
    v_11 = (signed char)(! (- (-431056391)));
    v_13 = (float)v;
    result = (float)((unsigned long)(- ((double)v - -2.47356826768e+38)) % (
                     ((unsigned long)(~ p_17) + p_7 * (unsigned long)p_17) + 229UL));
  }
  else {
    v = (unsigned int)(- (- result - v_19));
    v_19 = (float)v_11;
    v_11 = (signed char)(((unsigned int)p_17 - v) / (unsigned int)(((int)((char)v_19) - (int)p_17) + 818) - (unsigned int)(
                         (float)p_21 / (v_15 * 1311.f + 200.f)));
  }
  if ((12697617UL + ~ p_7) * (unsigned long)(~ (! v)) > (unsigned long)(
      254U ^ ((unsigned int)p_17 + 4294966835U % (v + 80U)))) {
    v = (unsigned int)(~ p);
    result = - (41641.f / (result + 588.f) - (float)(v * 258029537U));
    result = (float)((p - (unsigned long long)result) % 1ULL - (209321495ULL / (
                                                                p + 753ULL) + (unsigned long long)(
                                                                result * 917827776.f)));
  }
  else {
    v_15 = (float)(unsigned char)40;
    v_9 = (float)((int)(! v_11) * 28 + (int)(v_13 - v_15) % 570664872);
    result = (float)(((unsigned long)(12631 | (int)p_5) - ~ p_7) + (unsigned long)(- (
                     (double)v_9 / 127.578953797)));
  }
  return result;
}

