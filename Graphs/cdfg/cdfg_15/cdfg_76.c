#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 324930171
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(long p, char p_7[1][1], unsigned short p_9,
                   unsigned short p_13, long p_15)
{
  short v_25;
  int v_23;
  double v_21;
  long v_19;
  long long v_17;
  short v_11;
  int v_5;
  long v;
  unsigned short result;
  v_25 = (short)22266;
  v_23 = (int)p_15;
  v_21 = 3431745689.27;
  v_19 = -395400017L;
  v_17 = 114738177LL;
  v_11 = (short)p_7[0][0];
  v_5 = -27520;
  result = (unsigned short)16450;
  if (125980214UL == (57372UL & (unsigned long)(- ((int)result / ((int)((unsigned short)v_21) + 906))))) {
    v_21 = (double)(! (0 % ((int)v_11 + 267)));
    result = (unsigned short)((long long)(((long)p_13 - -43114L) % (long)(
                                          (55883 & (int)result) + 327)) + 
                              (v_17 * (long long)v_5) * (long long)v_23);
    v = (long)(- v_21 * (double)((int)v_11 % ((int)p_13 + 618)) - (double)(! (
               v_19 & p)));
  }
  else {
    result = (unsigned short)(! (! (! v_25)));
    v_11 = (short)(~ (! (~ -874913931L)));
    v = (long)(- (- (! result)));
  }
  if (((unsigned long long)(p_15 / (long)((int)p_9 + 433)) + 18446744073709488615ULL) * (unsigned long long)(
      (long long)v / (v_17 + 591LL)) < (unsigned long long)((long)((int)p_13 % (
                                                                   (int)p_9 + 603)) / (
                                                            v_19 / (long)(
                                                            (int)p_9 + 951) + 815L) + 
                                                            (p_15 % (long)(
                                                             (int)p_9 + 624)) % (long)(
                                                            (int)result + 989))) 
    result = (unsigned short)(! (! p));
  else {
    v_5 = (int)(((long)((int)v_11 + 87) - (long)p_13 % (p + 591L)) + (long)(
                (double)(! p_15) + -121.976924869));
    v = (long)(! (- (~ p_9)));
    result = (unsigned short)(~ (! v | (long)(v_5 % ((int)p_7[0][0] + 363))));
  }
  return result;
}

