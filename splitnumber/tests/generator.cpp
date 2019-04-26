#include <bits/stdc++.h>
#include "constraints.h"
#include "testlib.h"
using namespace std;

void generate_random(string filename, int mint, int maxt, int minp, int maxp);

int main(int argc, char* argv[]) {
  registerGen(argc, argv, 1);
  generate_random("small.in",MINT,10,MINP,10);
  generate_random("med.in",MINT,MAXT,MINP,100);
  generate_random("large.in",MAXT,MAXT,MINP,MAXP);
  return 0;
}


void generate_random(string filename, int mint, int maxt, int minp, int maxp){
     ofstream ofs(filename);
     int t = rnd.next(mint,maxt);
     ofs << t << endl;
     for(int i=1;i<t;++i)ofs << rnd.next(minp,maxp) << endl;
     ofs << maxp << endl;
     ofs.close();
}