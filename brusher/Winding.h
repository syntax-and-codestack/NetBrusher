#include "includes/assertglobal.h"

class Winding{
public:
 Winding();
 ~Winding();

    int WindingNumpoints[3];

    Winding ** next;
    Winding * current;
    Winding &prev;

    qboolean q_eBrushWindingBegin;

    //Winding stuff
    Winding * AllocWinding();
    Winding * WindingConcave(int points);
    Winding * WindingLst(Winding * w);
    Winding * MakeWinding_Concave(Winding * winding);

    void Winding_Concave(Winding * winding, int conpoints);
    void Winding_Malloc(Winding * winding);
    void PrintWinding_List(Winding * winding);

    void WindingSize(Winding * winding){
        std::size_t wSize = sizeof(*winding);
    };

};