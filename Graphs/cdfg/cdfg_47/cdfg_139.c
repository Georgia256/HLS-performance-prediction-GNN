#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 316865678
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned long long p, unsigned short p_11, long p_13[2],
         unsigned short p_15, char p_19)
{
  unsigned short v_29;
  short v_27;
  char v_25;
  int v_23;
  long long v_21;
  unsigned char v_17;
  unsigned short v_8;
  unsigned short v_6;
  unsigned char v_4;
  unsigned int v;
  char result;
  v_29 = p_11;
  v_27 = (short)-14745;
  v_25 = (char)p_11;
  v_23 = -17151;
  v_21 = (long long)p_15;
  v_17 = (unsigned char)21;
  v_8 = (unsigned short)14606;
  v_6 = p_11;
  v_4 = (unsigned char)252;
  if ((unsigned long long)((long long)(4097436636UL % (unsigned long)(
                                       (int)v_25 / ((int)v_17 + 645) + 230)) + (
                           5200LL - (-10LL + v_21))) != - (- p) + (unsigned long long)(
                                                        23028U - (unsigned int)(
                                                        (int)v_27 - (int)v_29))) {
    v_8 = (unsigned short)(- v_17);
    v_4 = (unsigned char)p;
    v_6 = (unsigned short)(- ((18446744073709517797ULL + (unsigned long long)v_6) - (unsigned long long)(
                              (long)v_4 % (p_13[0] + 907L))));
  }
  else {
    v_6 = (unsigned short)(~ (0 - (int)(! p_19)));
    v_23 = (int)((unsigned long long)p_13[0] / ((656460ULL + (unsigned long long)(
                                                 394611968L / (long)(
                                                 (int)p_15 + 290))) + 350ULL));
    v_6 = (unsigned short)((-2833453559406657536LL ^ v_21) % (long long)(
                           - ((int)v_6 * (int)p_19) + 596));
  }
  if (- (((int)6638026667.25 + v_23) / ((int)(~ v_6) + 240)) == 0) {
    result = (char)((long)((int)(~ v_6) % 405) / ((((long)p_11 + p_13[0]) + (long)p_15) + 12L));
    v = (unsigned int)(((p + p) - ((unsigned long long)result | p)) + 
                       (p - p) / ((p - (unsigned long long)p_11) + 1006ULL));
    result = (char)(((v + (unsigned int)v_4) - (unsigned int)((float)v_6 / 956.818603516f)) / (
                    (unsigned int)((double)v + -1.26088484848e+38) % (
                    (367354462U << ((int)v_8 & 31)) + 152U) + 102U));
  }
  else {
    v_17 = (unsigned char)(4294906710U % (unsigned int)(((int)(! p_11) & v_23) + 826));
    v = (unsigned int)((long long)(- v_17) % (((long long)p_19 ^ -1069483248LL % (
                                                                 v_21 + 213LL)) + 266LL));
    result = (char)(107.647969999 + (double)v);
  }
  return result;
}

