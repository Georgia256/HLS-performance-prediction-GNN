#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 277768192
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(short p[3][1], unsigned int p_11, short p_21, float p_25,
              unsigned char p_27)
{
  unsigned long v_23;
  float v_19;
  unsigned int v_17;
  unsigned short v_15;
  unsigned long long v_13;
  float v_9;
  char v_7;
  double v_5;
  unsigned long v;
  long long result;
  v_23 = 10574UL;
  v_19 = (float)p_11;
  v_15 = (unsigned short)19629;
  v_13 = (unsigned long long)p_25;
  v_9 = -361050624.f;
  v_7 = (char)109;
  v_5 = (double)p_27;
  if (52424702ULL == (unsigned long long)(107 * ((int)((short)v_5) / (
                                                 (int)p_21 + 88)))) {
    v = (unsigned long)(! ((unsigned long long)((unsigned int)v_9 / (
                                                p_11 + 561U)) % ((v_13 - (unsigned long long)v_15) + 195ULL)));
    v_5 = (double)v_7;
    v <<= - (742563481UL + (unsigned long)v_5) & 31UL;
  }
  else {
    v_17 = (unsigned int)((unsigned long)(! (! p_21)) * ((v_23 / (unsigned long)(
                                                          p_11 + 630U)) % (unsigned long)(
                                                         (int)((unsigned char)p_25) * (int)p_27 + 783)));
    v_5 = (double)((unsigned long long)p[1][0] % (((unsigned long long)p_11 | 18446744073161353130ULL) + 858ULL) - (unsigned long long)(
                   40209U % (unsigned int)(((int)p[1][0] + (int)((short)v_19)) + 345)));
    v = (unsigned long)v_17;
  }
  result = (long long)(((v / (unsigned long)((int)p[1][0] + 327)) * (unsigned long)(
                        -32259 & (int)v_5)) / 30704UL);
  return result;
}

