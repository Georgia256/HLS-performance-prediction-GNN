#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 569083098
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(float p, unsigned short p_4[3], unsigned char p_7,
                  short p_9, unsigned char p_11)
{
  long long v_13;
  double v;
  unsigned long result;
  v_13 = (long long)p;
  result = (unsigned long)p;
  if (~ ((v_13 ^ (long long)p_11) * (long long)(result * 18955UL)) != 4427LL) 
    v = (double)((int)p_11 & 152);
  else v = (double)(! 18446744073476967944ULL);
  if (~ ((unsigned int)(v * (double)p_7) << (((unsigned int)p_9 ^ 3776627913U) & 31U)) > (unsigned int)-6949359674.97) 
    result = (unsigned long)(-1857917696.f - p);
  else result = (unsigned long)p_4[1];
  return result;
}

