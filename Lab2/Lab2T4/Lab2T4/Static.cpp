#include <iostream>
using std::cout;
using std::endl;
namespace Myname {
    int stat(int l)
    {
        static int t = 0;
        int h = l + t;
        t = l;
        return h;
    }
}