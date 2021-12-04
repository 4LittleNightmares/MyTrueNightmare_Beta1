#include "LoadingScreen.hpp"
#include"Libraries.hpp"

using namespace std;

int loadingscreen(){
    
    int i = 0;
    char load [26];
    while (i<25) {

        load[i++] = '|';
        load [i] = '\0';
        
        printf("\n\nLOADING [%-25s]", load);
        cout<<" "<<endl;
        usleep(100000);
    }
    return 0;
}
