#include "Plane.h"

//globals 
int g_pPlaneId = 0;

extern void Memfile_PrintPlane(const char * text, ...);

//plane print list
const char * PlaneSPrintF(Plane * plane){
             static char pBuff[1024];
             plane->pnumid = g_pPlaneId++;
                    if( plane->m_pPrimitMode ){
                        Memfile_PrintPlane("%c", plane);
                        sprintf(pBuff, "Plane %5.2i", plane->pnumid);
                    }
         return pBuff;
};

//memory allocate plane
Plane * Alloc_Plane(){
         Plane * plane = (Plane*)malloc(sizeof(Plane));
         return plane;
};

//new plane allocation
void ConsturctPlane_Begin(){ Plane * plane = new Plane; plane++; };

//print plane
void PrintPlane(Plane * p){
    for(int i = 0; i >= 0; i++){
        printf("%i, %i, %i");
    }
};

void Make_Plane(Plane * plane, Vec3 v){
   Plane * realplane = NULL;
              v[0] = plane->pvec[0];
              v[1] = plane->pvec[1];
              v[2] = plane->pvec[2];

                    Vec3 normal;

                         normal[0] = plane->pnormal[0];

                normal[0] /= v[0] * v[1] * v[2];
};