#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 503533777
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(long long p[2][5][3], short p_4, signed char p_6,
        double p_9[1][5][3], unsigned long p_15[4][3][3])
{
  long v_23;
  long long v_21;
  long v_19;
  signed char v_17;
  unsigned int v_13;
  double v_11;
  double v;
  int result;
  v_23 = 34105L;
  v_21 = p[1][4][0];
  v_19 = -35769L;
  v_11 = -349299849.969;
  v = p_9[0][4][0];
  result = (int)p_4;
  if (~ v_21 % ((p[0][0][1] / (v_21 + 125LL)) * (long long)(- v) + 672LL) <= (long long)(~ (
      (111L - v_23) & -10194L))) {
    v = (double)-54820;
    v_11 = (double)(~ (- (1888ULL | (unsigned long long)-8.80246439894e+37)));
  }
  else {
    v_17 = (signed char)(((unsigned long)((long)result % (v_19 + 738L)) % 3837541319UL) * (unsigned long)p_9[0][3][2]);
    v_11 = - ((double)p[1][1][2] + p_9[0][3][0]) / (- (681779331. + v_11) + 450.);
    v = (double)(~ v_17);
  }
  if ((double)p[1][2][0] <= (952.434692383 + v_11) / (- (p_9[0][1][2] * -451.334116717) + 403.)) {
    v_11 = (double)(4294967229UL % (p_15[1][1][0] + 859UL));
    v_13 = (unsigned int)(- (- -3653203968.f));
    result = (int)((p[0][1][2] + (long long)p_4) * (long long)((int)p_6 + (int)((signed char)v)) + (long long)(
                   - p_9[0][4][1] + v_11 / ((double)v_13 + 194.)));
  }
  else result = 1 >> (21728 % ((int)(! p_4) + 930) & 15);
  return result;
}

