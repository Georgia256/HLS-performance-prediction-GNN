//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 146910143
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(double p, signed char p_5)
{
  int v_9;
  signed char v_7;
  unsigned short v;
  double result;
  v_9 = (int)p;
  v_7 = (signed char)p;
  v = (unsigned short)21230;
  result = 3.99642266257e+36;
  v = (unsigned short)((int)v_7 / (- (~ (v_9 - (int)v)) + 131));
  v = ~ (- (! (! v)));
  result = (double)((unsigned long long)(((int)v - 1553) * (int)(result + 54159.) & (int)v) * (
                    - (18446744073709508816ULL * (unsigned long long)p) / (
                    ~ ((unsigned long long)p_5 - 42806ULL) + 261ULL)));
  result = - (- (- (-98. / (result + 94.))));
  return result;
}

