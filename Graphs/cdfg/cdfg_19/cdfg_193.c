#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 77075177
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned short p[2], unsigned long p_5, signed char p_11,
         signed char p_13, char p_17)
{
  unsigned long v_19;
  long v_15;
  int v_9;
  int v_7;
  double v;
  char result;
  v_19 = 28096UL;
  v_15 = 1047221154L;
  v_9 = 866557190;
  v_7 = 21356;
  v = (double)p_13;
  result = (char)-113;
  if ((int)(! result) != (int)((char)(- (- v)))) {
    v_9 = (int)((long)((187 * (int)p_13) * ((int)p_11 / (v_9 + 144))) / (
                (v_15 | (long)(~ p_17)) + 339L));
    v = (double)((unsigned int)(1.69334937396e+38f - (float)v_9) % ((
                                                                    (unsigned int)p_11 - 54572U) + 780U) - (unsigned int)(
                 79 / ((-13358 - v_9) + 678)));
    result = (char)((long long)(160 >> 3L) * (-945150566LL / (long long)(
                                              v_7 + 826)) ^ (long long)((unsigned long)v));
  }
  else {
    v_7 = -1000548;
    result = (char)((1.84467440727e+19 + v * (double)p[1]) / (double)(
                    ((-487.688446045f + (float)v_9) + (float)((unsigned long)p_11 + v_19)) + 371.f));
    v = (double)(! v_7 / -47672 >> ((135279351ULL - (unsigned long long)(
                                     -833173542L * (long)p[0])) & 31ULL));
  }
  result = (char)((unsigned long)((unsigned int)((int)((signed char)v) << 1) + 4168059388U) | (
                  (unsigned long)p[1] | (p_5 + (unsigned long)result)));
  return result;
}

