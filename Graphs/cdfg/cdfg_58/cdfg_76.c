#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 606333698
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned long p, unsigned short p_15, double p_17[4])
{
  unsigned char v_13;
  long v_11;
  int v_9;
  signed char v_7;
  int v_4;
  unsigned short v;
  signed char result;
  v_9 = (int)p;
  v_7 = (signed char)p;
  v_4 = -689366389;
  v = (unsigned short)49437;
  result = (signed char)p_17[0];
  if ((long long)v_9 <= ((long long)(! (- v)) | 37206LL)) {
    v_9 = (int)((unsigned long)v % (p + 578UL));
    v_13 = (unsigned char)((unsigned long)v_4 % (! (p ^ (unsigned long)v_7) + 229UL));
    v_7 = (signed char)((16169 % ((int)v_13 + 225)) % ((int)v % ((int)v_7 + 332) + 419) | -41);
  }
  else {
    v_7 = (signed char)(! (p + p));
    v_4 = 26408;
    v = (unsigned short)p;
  }
  while ((unsigned long long)v < (18446744073709540005ULL / (unsigned long long)(
                                  ~ v_4 + 648)) * (unsigned long long)(
                                 - p ^ (unsigned long)((int)((signed char)2.96515847663e+38f) + (int)v_7))) {
    v_11 = v_9 ^ 362955447;
    v_4 = (int)(~ (! (v_11 % (long)((int)v + 795))));
    v_7 = (signed char)p;
    v_4 = (int)((unsigned long)((float)(p / (unsigned long)(v_4 + 815)) / -4.42813070958e+37f) + 
                ((unsigned long)v_7 + p) % (! p + 509UL));
  }
  while_0_break: ;
  return result;
}

