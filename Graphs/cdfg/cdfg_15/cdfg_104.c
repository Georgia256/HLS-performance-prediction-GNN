#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 921264257
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(long p, short p_5, long p_9, unsigned long long p_11[3][4][1],
           unsigned int p_15)
{
  char v_25;
  double v_23;
  double v_21;
  short v_19;
  unsigned short v_17;
  unsigned short v_13;
  char v_7;
  double v;
  double result;
  v_25 = (char)p_5;
  v_23 = (double)p;
  v_21 = -8116380699.32;
  v_19 = (short)p_15;
  v_17 = (unsigned short)p_9;
  v_13 = (unsigned short)62825;
  v_7 = (char)-84;
  v = (double)p_9;
  result = -102.912587479;
  if ((double)(- ((long)(- v_21) - (p_9 + p_9))) == 9327763456. - (- result - v_23)) {
    v_25 = (char)(- -6.26658358563e+37f);
    v_23 = (double)(- v_19);
    result = (double)(35511L >> ((p_15 - (unsigned int)v_17) & 31U)) * result;
  }
  else {
    v_21 = (double)((unsigned long long)((long)((int)v_7 | (int)p_5) + 
                                         (long)v_13 % (p + 615L)) / 18446744072693805811ULL);
    v_23 = (double)((unsigned long)((int)((char)v_23) - (int)(~ v_25)) / (
                    - ((unsigned long)p_15 + 4294922012UL) + 544UL));
    v_25 = (char)((double)v_7 + 3689140. / ((double)p_9 / (result + 413.) + 279.));
  }
  if ((18446744073709496310ULL * (unsigned long long)3.01215996268e+38 - (unsigned long long)(~ v_13)) % (unsigned long long)(
      ((long)((int)v_7 / ((int)((char)result) + 953)) + 396992913L) + 875L) <= (unsigned long long)(
      - ((unsigned long)p_9 / 310839717UL) - (unsigned long)(- ((int)v_25 & (int)v_25)))) {
    v_13 = (unsigned short)(242 * (((int)v_17 / -86) * (int)v));
    v = (double)(~ p_11[1][1][0] / (((unsigned long long)(-49126LL * (long long)v_13) - 
                                     (unsigned long long)p_15 % (p_11[2][1][0] + 657ULL)) + 254ULL));
    result = (double)((((long)v | p) & (p & (long)8140194806.71)) + (long)(
                                                                    -30918 % (
                                                                    (int)p_5 + 390)) % (
                                                                    (
                                                                    (long)v_7 - p_9) + 224L));
  }
  else {
    result = v_21 - ((double)p_5 / (v_23 + 989.)) * 0.;
    v_19 = (short)((result / ((double)(29996ULL / (unsigned long long)(
                                       (int)v_17 + 942)) + 953.)) / (
                   ((v_21 - v_23) + (double)p_11[1][1][0]) + 874.));
    result = (double)((unsigned long long)v_19 / (p_11[1][2][0] + 163ULL));
  }
  return result;
}

