#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 806999535
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(long long p, unsigned int p_4[4], unsigned int p_9,
                char p_13, unsigned int p_15)
{
  unsigned char v_19;
  long long v_17;
  unsigned char v_11;
  unsigned long v_7;
  char v;
  signed char result;
  v_19 = (unsigned char)15;
  v_17 = 52228LL;
  v_7 = (unsigned long)p_9;
  if ((long long)((unsigned long)(- (~ p_4[0])) % (((unsigned long)p_4[2] * v_7 + v_7) + 247UL)) != 
      ((long long)(p_9 / 6724U) - - v_17) * ((long long)v_19 / 5245LL)) {
    v_7 = (unsigned long)((141LL + p / (v_17 + 717LL)) * v_17);
    result = (signed char)-95;
    v = (char)((18446744073431961543ULL ^ (unsigned long long)(~ p_13)) % (unsigned long long)(
               p * (long long)(~ p_15) + 734LL));
  }
  else {
    result = (signed char)((unsigned long long)(- (~ p_15)) * (63991ULL - 
                                                               12349ULL * (unsigned long long)v_17));
    v = (char)((p_9 / (unsigned int)((int)result + 70)) % (p_9 + 681U) + (unsigned int)(- (
               (int)result - (int)result)));
    v_7 = ~ ((unsigned long)((int)((signed char)-2.85312265969e+38) & (int)result) + (
             (unsigned long)result - v_7));
  }
  while (- (p / (long long)((int)result + 920)) % (long long)(p_4[3] + 318U) == (long long)p_4[3]) {
    v_11 = (int)v + 86;
    result = (signed char)((unsigned long)v_11 / 65363UL);
    v = (char)(! (~ v_7 % (unsigned long)(p_9 + 775U)));
    result = result;
  }
  while_0_break: ;
  return result;
}

