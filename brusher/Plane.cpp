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
