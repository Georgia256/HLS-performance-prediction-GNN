#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 704145917
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(int p, unsigned short p_7, unsigned long long p_9, float p_11,
          int p_17)
{
  double v_15;
  long v_13;
  long long v_5;
  unsigned char v;
  short result;
  v_15 = -5592055964.05;
  v_13 = 995291855L;
  v_5 = (long long)p_17;
  v = (unsigned char)70;
  result = (short)2490;
  if (31017LL / ((long long)((int)((short)4143512622.23) + (int)result) % (
                 (long long)p_17 * v_5 + 806LL) + 938LL) == (long long)p_11) {
    v = (unsigned char)p_9;
    v_5 = (long long)(~ (~ (p % ((int)p_7 + 778))));
  }
  else {
    v_15 = - ((v_15 / ((double)p_7 + 344.)) * (double)(v_13 + (long)p_17));
    v_13 = (long)(- (- ((float)result + p_11)));
    v_5 = (long long)((61291.f / (p_11 + 557.f)) / ((float)v_13 + 632.f) - (float)(
                      (int)((unsigned char)(v_15 - (double)p_17)) % (
                      (int)v + 1011)));
  }
  result = (short)((47119ULL & 18446744073286239267ULL / (unsigned long long)(
                               (int)v + 661)) / (unsigned long long)(
                   (long long)((long)p - 49728L) % (v_5 + 707LL) + 827LL));
  return result;
}

