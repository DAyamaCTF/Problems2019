#include <bits/stdc++.h>
#include "constraints.h"
#include "testlib.h"
using namespace std;

void generate_random(string filename, int mint, int maxt, int minp, int maxp);

int main(int argc, char* argv[]) {
  registerGen(argc, argv, 1);
  generate_random("small.in",MINT,10,MINP,10);
  generate_random("med.in",MINT,MAXT,MINP,300);
  generate_random("large.in",MINT,MAXT,MINP,MAXP);
  return 0;
}


void generate_random(string filename, int mint, int maxt, int minp, int maxp){
     ofstream ofs(filename);
     int t = rnd.next(mint,maxt);
     ofs << t << endl;
     for(int i=0;i<t;++i)ofs << rnd.next(minp,maxp) << endl;
     ofs.close();
}