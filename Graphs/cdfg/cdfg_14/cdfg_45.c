#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 705363425
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned long long p)
{
  unsigned long v_11;
  unsigned long v_8;
  double v_6;
  unsigned char v_4;
  long long v;
  short result;
  v_11 = (unsigned long)p;
  v_8 = (unsigned long)p;
  v_6 = 262.750082168;
  v_4 = (unsigned char)p;
  v = -1000637935LL;
  result = (short)-26163;
  while (((unsigned long long)(~ v_8) * ! p) * ((p % 1ULL) / ((p - 18446744073709528014ULL) + 562ULL)) == (unsigned long long)result) {
    v_11 |= 4294957228UL;
    v = 599348854LL;
    v_4 = (unsigned char)5475261819.32;
    result = (short)(- (- (18446744073709507288ULL / (p + 248ULL))));
  }
  while_0_break: ;
  if (- (46418LL * ~ v) == (long long)((((int)v_4 + (int)v_4) % 64965606) % (
                                       (int)v_6 + 110))) result = (short)-20760;
  else {
    result = (short)49;
    result = (short)(7382955008.f - (float)(2814U * (883466807U / (unsigned int)(
                                                     (int)result + 247))));
  }
  return result;
}

