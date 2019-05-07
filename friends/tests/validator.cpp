#include "testlib.h"
#include "constraints.h"
#include <iostream>
using namespace std;

void check_case(){
    string s = inf.readToken("[a-z*]{7}","s");
    inf.readEoln();
}

int main(){
  registerValidation();

  int cases = inf.readInt(1, MAX_T, "cases");
  inf.readEoln();

  for(int i=0; i<cases; ++i){
      check_case();
  }

  inf.readEof();
  return 0;
}
