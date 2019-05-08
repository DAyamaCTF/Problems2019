#include <bits/stdc++.h>
#include "constraints.h"
#include "testlib.h"
using namespace std;

void generate_random(string filename, int mint, int maxt,
                     int minp, int maxp, int minab,
                     int maxab);

int main(int argc, char* argv[]) {
  registerGen(argc, argv, 1);
  generate_random("small.in", MAX_SMALLT, MAX_SMALLT, MINP,
                  MAX_SMALLP, MINAB, MAXAB);
  generate_random("med.in", MAXT, MAXT, MINP, MAX_MEDP,
                  MINAB, MAXAB);
  generate_random("large.in", MAXT, MAXT, MINP, MAX_LARGEP,
                  MINAB, MAXAB);
  for(int i = 0; i < 10; ++i)
    generate_random("random_" + to_string(i) + ".in", MINT,
                    MAXT, MINP, MAX_LARGEP, MINAB, MAXAB);
  return 0;
}

void generate_random(string filename, int mint, int maxt,
                     int minp, int maxp, int minab,
                     int maxab) {
  ofstream ofs(filename);
  int t = rnd.next(mint, maxt);
  ofs << t << endl;
  for(int i = 1; i < t; ++i) {
    int a, b, p;
    a = rnd.next(minab, maxab);
    b = a;
    while(a == b) b = rnd.next(minab, maxab);
    if(a > b) swap(a, b);
    p = rnd.next(minp, maxp);
    ofs << a << " " << b << " " << p << endl;
  }
  ofs << 1 << " " << 2 << " " << maxp << endl;
  ofs.close();
}