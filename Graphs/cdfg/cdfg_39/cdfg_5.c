#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 761084863
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned short p, unsigned long p_4, signed char p_7,
                unsigned short p_9)
{
  char v;
  signed char result;
  v = (char)89;
  if ((long)((int)(- (~ v)) * ((int)p_7 / 9)) > -47335L * (long)(- (! p_9))) 
    result = (signed char)(0UL / (p_4 + 155UL));
  else result = (signed char)51;
  return result;
}

