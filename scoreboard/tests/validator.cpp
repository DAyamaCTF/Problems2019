#include "testlib.h"
#include "constraints.h"
#include <iostream>
using namespace std;

void check_case(){
    inf.readInt(MIN_AB, MAX_AB_LARGE, "A");
    inf.readSpace();
    inf.readInt(MIN_AB, MAX_AB_LARGE, "B");
    inf.readEoln();
}

int main(int argc, char* argv[]){
    registerValidation(argc, argv);

    int T = inf.readInt(1, MAX_T, "T");
    inf.readEoln();

    for(int i=0;i<T;++i){
        check_case();
    }

    inf.readEof();
    return 0;
}