#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 33538765
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned int p)
{
  char v_16;
  char v_14;
  float v_12;
  float v_10;
  long long v_8;
  unsigned long v_6;
  int v_4;
  long v;
  unsigned short result;
  v_14 = (char)-7;
  v_12 = (float)p;
  v_10 = (float)p;
  v_8 = -7311LL;
  v_6 = (unsigned long)p;
  v_4 = -36887;
  v = (long)p;
  result = (unsigned short)p;
  if (~ (v_8 & (long long)v_10) < (long long)((unsigned int)v_4 + p)) {
    result = (unsigned short)(! (char)-73);
    v_10 = (float)(! ((long)(59407180.7856 - (double)v_6) + ~ v));
    v_4 = (int)((double)v_14 - 515937704.739);
  }
  else {
    v_16 = (char)(4294967295UL / (~ ((unsigned long)v / (unsigned long)(
                                     p + 700U)) + 995UL));
    v_10 = (float)v_16;
    v_8 = 428283063LL;
  }
  while ((unsigned long long)((long long)((v / -36535L) / 424412595L) + 
                              (61457LL % (long long)(v_4 + 161)) * (long long)(
                              41083 >> (v & 15L))) >= (18446743903277074156ULL / (unsigned long long)(
                                                       ((unsigned long)result + v_6) + 416UL)) / (unsigned long long)(
                                                      ~ v_8 + 726LL)) {
    v_6 = (int)((unsigned char)v_10) * 107;
    v = (long)v_12;
    v_10 = (float)(4294916701. / (430700.530771 * (double)(~ v_8) + 287.));
    result = (unsigned short)v;
  }
  while_0_break: ;
  return result;
}

