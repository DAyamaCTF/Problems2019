#include "testlib.h"
#include "constraints.h"
#include <iostream>
using namespace std;

void check_case(){
  int p = inf.readInt(MINP,MAX_LARGEP, "p");
  inf.readEoln();
}

int main(){
  registerValidation();

  int cases = inf.readInt(MINT, MAXT, "cases");
  inf.readEoln();

  for(int i=0; i<cases; ++i){
      check_case();
  }

  inf.readEof();
  return 0;
}
