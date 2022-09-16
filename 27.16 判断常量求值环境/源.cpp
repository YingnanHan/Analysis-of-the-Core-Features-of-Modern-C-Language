#include <cmath>
#include <type_traits>
constexpr double power(double b, int x) {
    if (std::is_constant_evaluated() && x >= 0) {
        double r = 1.0, p = b;
        unsigned u = (unsigned)x;
        while (u != 0) {
            if (u & 1) r *= p;
            u /= 2;
            p *= p;
        }
        return r;
    }
    else {
        return std::pow(b, (double)x);
    }
}

int main()
{
    constexpr double kilo = power(10.0, 3);  // 常量求值
    int n = 3;
    double mucho = power(10.0, n); // 非常量求值
    return 0;
}

/* GIMPLE

main ()
{
  int D.25877;

  {
    const double kilo;
    int n;
    double mucho;

    kilo = 1.0e+3;
    n = 3;
    mucho = power (1.0e+1, n);
    D.25877 = 0;
    return D.25877;
  }
  D.25877 = 0;
  return D.25877;
}


power (double b, int x)
{
  bool retval.0;
  bool iftmp.1;
  double D.25892;

  {
    _1 = std::is_constant_evaluated ();
    if (_1 != 0) goto <D.25883>; else goto <D.25881>;
    <D.25883>:
    if (x >= 0) goto <D.25884>; else goto <D.25881>;
    <D.25884>:
    iftmp.1 = 1;
    goto <D.25882>;
    <D.25881>:
    iftmp.1 = 0;
    <D.25882>:
    retval.0 = iftmp.1;
    if (retval.0 != 0) goto <D.25885>; else goto <D.25886>;
    <D.25885>:
    {
      double r;
      double p;
      unsigned int u;

      r = 1.0e+0;
      p = b;
      u = (unsigned int) x;
      <D.25887>:
      if (u == 0) goto <D.24379>; else goto <D.25888>;
      <D.25888>:
      _2 = u & 1;
      if (_2 != 0) goto <D.25889>; else goto <D.25890>;
      <D.25889>:
      r = r * p;
      goto <D.25891>;
      <D.25890>:
      <D.25891>:
      u = u / 2;
      p = p * p;
      goto <D.25887>;
      <D.24379>:
      D.25892 = r;
      // predicted unlikely by early return (on trees) predictor.
      return D.25892;
    }
    <D.25886>:
    _3 = (double) x;
    D.25892 = pow (b, _3);
    return D.25892;
  }
}


std::is_constant_evaluated ()
{
  bool D.25894;

  try
    {
      D.25894 = 0;
      return D.25894;
    }
  catch
    {
      <<<eh_must_not_throw (terminate)>>>
    }
}

*/
