#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 344161415
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned short p[3], char p_4, unsigned short p_6,
         long long p_8[3][3][2], float p_10)
{
  long long v;
  char result;
  v = (long long)p_10;
  result = (char)p_6;
  result = (char)(- (- ((long long)result - v)));
  if ((int)p_6 == ((int)result ^ (int)((char)(- ((float)p_8[1][1][1] - p_10))))) 
    result = (char)(- (- ((int)p[2] * (int)p_4)));
  else result = (char)(! 4LL);
  return result;
}

