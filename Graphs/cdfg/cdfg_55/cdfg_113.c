#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 921978648
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(short p, float p_4, unsigned char p_7, long long p_13)
{
  double v_11;
  short v_9;
  int v;
  unsigned long result;
  v_11 = -93.3245215245;
  v_9 = (short)-5260;
  v = (int)((double)((97816591LL % (p_13 + 803LL)) * -111LL) / -4604442247.9);
  if (- ((unsigned long long)(- v) % 8618ULL) != (unsigned long long)(
      - (-47 * (int)p_7) + (int)v_9 % ((int)((unsigned short)v_11) / 23713 + 144))) 
    result = (unsigned long)p;
  else {
    result = 3271209235UL;
    result = (unsigned long)p_4 / (- (result * 159UL) + 990UL);
  }
  return result;
}

