#include <iostream>

#include <vector>
#include <algorithm>

//struct BAR {
//    int a;
//    float b; 
//    std::string c;
//};

#include "Game.h"

int main()
{
    /*std::vector<BAR> rrr;
    rrr.push_back({1,2.5,"sdfsdf"});
    rrr.push_back({34,2.3,"ghjfgjh"});
    rrr.push_back({12,5.,"dfghjdfgh"});
    rrr.push_back({67,7.,"bvnmvbnm"});

    auto res =
        std::find_if(rrr.begin(), rrr.end(),
                     [](const BAR &obj) {
                         if (obj.a == 12) {
                             return true;
                         }
                         else {
                             return false;
                         }
                     }
                     );
    if (res != rrr.end()) {
        (*res).c;
    }*/

    Game obj;

    const iViewerDesk &tmp = obj.CurrentEnvirement();
    auto tmp2 = const_cast<iViewerDesk&>(tmp);

}
