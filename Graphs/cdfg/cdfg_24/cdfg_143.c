#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 198026074
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned char p[5][4][2])
{
  unsigned long v_15;
  unsigned long long v_13;
  char v_11;
  unsigned char v_9;
  unsigned long long v_7;
  unsigned char v_5;
  float v;
  float result;
  v_15 = 4294919578UL;
  v_11 = (char)p[4][1][1];
  v_9 = p[2][3][0];
  v_7 = (unsigned long long)p[1][1][0];
  v_5 = (unsigned char)174;
  v = (float)p[3][2][0];
  result = 802.818786621f;
  v_13 = (unsigned long long)p[2][3][1];
  while (23308723L * (long)((float)(~ p[2][0][0]) + (v + (float)p[1][2][0])) < (long)(
         (v * (float)(! v_5)) / ((float)v_7 + 280.f))) {
    v_5 = (unsigned char)(- (((int)v_9 % ((int)p[3][2][1] + 338)) % (
                             (int)(- p[2][3][0]) + 578)));
    v = (float)(~ ((unsigned long long)((int)p[1][2][0] / ((int)p[0][1][0] + 343)) ^ v_13));
    v_7 = (unsigned long long)v_11 / ((v_13 << ((unsigned long long)v_15 * v_13 & 63ULL)) + 718ULL);
  }
  while_0_break: ;
  return result;
}

