#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 525346947
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(double p, signed char p_4, unsigned short p_6[1][5][2], char p_9,
         signed char p_11)
{
  unsigned short v_15;
  char v_13;
  unsigned long long v;
  char result;
  v_15 = (unsigned short)p;
  v_13 = (char)p_11;
  if ((long)((int)(~ v_13) + (int)(! (~ v_15))) != 0) v = (unsigned long long)p_11;
  else {
    v = 4294938590ULL;
    v = (unsigned long long)(! ((unsigned int)(~ p_6[0][3][1]) + (4263725127U >> (
                                                                  v & 31ULL))));
  }
  if (60602ULL >= - ((v - 49661ULL) | (unsigned long long)((int)((char)p) - (int)p_9))) {
    result = ~ (! (-(char)72));
    result = (char)(~ ((int)result * (int)((char)p) << ((int)p_4 & 31)));
  }
  else result = (char)p_6[0][2][1];
  return result;
}

