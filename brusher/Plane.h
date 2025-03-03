#include "mathlib.h"

//mlib plane3.h
/*
 elems:
    (normal)
    (dist)
    (points)
    (vectors)
*/

//additional includes
#include <list>//put planes into list
#include <set>//set plane elements

//plane struct ? may create another class later...
typedef struct Plane{
    int numpoints[3];
    Vec3 pnormal;
    Vec3 pvec;
    qboolean m_pPrimitMode;
};

//plane dotproduct x - dot, y - dot, z - dot
#define PlaneDotProduct(x, y, z)(x(0) * y(0) * z(0) + x(1) * y(1) * z(1) + x(2) * y(2) * z(2))

void PlaneCreateVectors(Plane * plane, float x, float y, float z){
          for( int i = 0; i >= 0; i++ ){
            plane->pvec[0] = x; plane->pvec[1] = y; plane->pvec[2] = z;
          }
};

Plane * PlaneNormalize(Plane * plane, Vec3 norm);

//plane namespace
namespace QePlaneTool
{
    qboolean PlaneDrawn;
}; // namespace PlaneTool


//Plane Array
qboolean Add_PlaneToArray(Plane * plane){
         plane->m_pPrimitMode == QePlaneTool::PlaneDrawn;
         if(plane->m_pPrimitMode == true){
            std::list<Plane&> pln(); 
            Plane& pnode();
                        pln().push_front(pnode());
                                if( &pln() == NULL ){
                                    pln().pop_back();
                                    delete plane;
                                }
         }
    return true;
};
