#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 704756493
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned long p, char p_5, unsigned char p_7, char p_9,
                  float p_11)
{
  long v_15;
  char v_13;
  long v;
  unsigned long result;
  v_15 = (long)p_7;
  v_13 = p_5;
  v = 860448710L;
  result = 740478981UL;
  while (! p / (unsigned long)(v / (long)((int)p_5 + 402) + 880L) + 1UL > (unsigned long)(
         (long)((int)(- p_7) % ((int)(! p_9) + 901)) | (long)(- p_11) / 226762397L)) {
    result = (long long)v_15 * ((long long)v_13 * -1000828884LL);
    v_13 = (char)14;
    v = (long)p_7;
    v = v;
  }
  while_0_break: ;
  return result;
}

