#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 564193973
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(int p[1], signed char p_11, double p_15, double p_19,
                  unsigned short p_21)
{
  float v_23;
  signed char v_17;
  unsigned char v_13;
  signed char v_9;
  long v_7;
  double v_4;
  long v;
  unsigned char result;
  v_23 = (float)p_11;
  v_17 = (signed char)p_15;
  v_13 = (unsigned char)245;
  v_7 = (long)p_15;
  v_4 = p_15;
  if (p_15 - (double)(~ ((int)v_23 + 723744518)) <= ((double)((unsigned int)v_23 * 16949U) - - p_19) / (
                                                    (double)((int)(- p_19) + (
                                                             p[0] ^ p[0])) + 286.)) {
    v_13 = (unsigned char)((0. - p_15) + (double)(((int)v_13 + 109) / (
                                                  (int)v_17 + 730)));
    v_9 = (signed char)(! v_7);
    v = (long)(((int)v_9 - p[0]) / ((int)p_11 + 718) + (int)(- v_13));
  }
  else {
    v_4 = - p_15;
    v = (long)(((18446744073399756363ULL - (unsigned long long)v_4) / (unsigned long long)(
                p[0] + 221)) / ((unsigned long long)(- (- p_15)) + 596ULL));
    v_4 = (39920. + - p_19) + (double)p_21;
  }
  result = (unsigned char)((-77L | 17308L * v) % ((long)(-94. / (v_4 + 494.)) * (
                                                  (long)p[0] ^ v_7) + 778L));
  return result;
}

