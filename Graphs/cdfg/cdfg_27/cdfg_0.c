#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 282310342
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned short p, float p_5, short p_11, unsigned short p_15,
           long long p_17)
{
  unsigned long v_29;
  unsigned long v_27;
  double v_25;
  char v_23;
  unsigned char v_21;
  unsigned int v_19;
  int v_13;
  short v_9;
  unsigned short v_7;
  unsigned long long v;
  double result;
  v_29 = 3401384404UL;
  v_27 = 3616429342UL;
  v_23 = (char)p_5;
  v_21 = (unsigned char)p;
  v_19 = (unsigned int)p_11;
  v_7 = (unsigned short)35766;
  v = 18446744073074522642ULL;
  if ((((unsigned long)p_11 - (v_29 - (unsigned long)p_11)) ^ 4294962768UL) < (unsigned long)-1.95352076621e+38f) {
    result = (double)((long long)((int)(! p) + (int)(- v_23)) | -52329LL);
    v_7 = (unsigned short)((((long long)v_21 - p_17) * (long long)(- p_5)) * 35111LL);
    v_9 = (short)(18446744073498422420ULL - (19367ULL % (unsigned long long)(
                                             p_17 + 974LL) | (unsigned long long)(
                                             (float)v_19 + p_5)));
  }
  else {
    v_25 = (double)((p_17 + p_17) * (long long)(v_29 * (unsigned long)v_19) + p_17);
    result = (double)(((unsigned long)(505504118L + (long)p_5) & (unsigned long)(
                       v_19 & (unsigned int)p)) ^ (unsigned long)(4216831377. * v_25) / (
                                                  v_27 + 676UL));
    v_9 = (short)((int)p_15 | ((int)((short)1.22294985064e+38) * -20360 ^ 
                               (int)v_7 / -27800));
  }
  while ((double)(~ ((v & v) % (unsigned long long)(((int)p & (int)p) + 572))) <= 
         (result + (double)((float)v * p_5)) * (double)p_5) {
    v_7 = (long)v_9 ^ (long)v_7 % -534750888L;
    v_13 = (int)(- ((double)v - (double)p_17 / (result + 947.)));
    v = v;
    result = (double)((unsigned long long)p_11 - (18446744073709505910ULL * (unsigned long long)v_13) / (
                                                 (unsigned long long)(
                                                 p_5 - (float)p_15) + 393ULL));
  }
  while_0_break: ;
  return result;
}

