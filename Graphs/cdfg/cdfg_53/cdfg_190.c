#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1011796650
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned long p, signed char p_7[4][5])
{
  unsigned char v_17;
  long v_15;
  short v_13;
  long long v_11;
  float v_9;
  signed char v_5;
  unsigned char v;
  char result;
  v_17 = (unsigned char)p_7[1][4];
  v_15 = (long)p_7[2][3];
  v_13 = (short)13596;
  v_11 = (long long)p_7[2][4];
  v_5 = (signed char)p;
  v = (unsigned char)p_7[1][1];
  if (3U >= (unsigned int)(~ (! v_13)) % (! (4294961581U * (unsigned int)p_7[0][0]) + 1020U)) {
    v_9 = (float)v;
    result = (char)(- (p * 31271UL - ((unsigned long)v_13 - p)));
    v_13 = (short)p_7[0][0];
  }
  else {
    v_9 = (float)((long)p_7[3][1] % ((v_15 + (long)v_17) + 373L) >> (
                  (int)v & 31));
    v_5 = (signed char)v_11;
    result = (char)(- (18446744072807145744ULL % (unsigned long long)(
                       v_15 + 396L)));
  }
  if ((unsigned long long)(~ ((int)(! p_7[3][2]) / (((int)v + (int)((unsigned char)v_9)) + 307))) != 
      ((343941178ULL + (unsigned long long)v_11) - (unsigned long long)v_13) * (unsigned long long)v_5) {
    v_5 = ~ (- (~ (signed char)-85));
    v = (unsigned char)(~ (! (~ result)));
    result = (char)((unsigned long)(43710 % ((int)v + 148)) * - p >> (
                    (int)(~ (! v_5)) & 31));
  }
  else result = (char)6;
  return result;
}

