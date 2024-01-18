#include <iostream>
#include "MifuncMat.h"

using namespace std;

int main()
{
    cout << "JAJAJAJJAJAJAJAJAJJAJAEJEEJAJ!!" << endl;

    double a,b,c,d;
    c=10;
    d=100;

    MifuncMat(c,d,&a,&b);
    printf("%lf + %lf = %lf \n",c,d,a);
    printf("%lf - %lf = %lf \n",c,d,b);
    return 0;
}
