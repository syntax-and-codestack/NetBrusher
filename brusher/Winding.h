#include "includes/assertglobal.h"

class Winding{
public:
 Winding();
 ~Winding();

    int WindingNumpoints[3];

    //Winding stuff
    Winding * AllocWinding();
    Winding * WindingConcave(int points);
    Winding * WindingLst(Winding * w);
    Winding * MakeWinding_Concave(Winding * winding);

    void WindingSize(Winding * winding){
        std::size_t wSize = sizeof(*winding);
    };

};