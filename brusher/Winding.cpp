#include "Winding.h"

/*Winding Name List*/
const char * WindingName(Winding * winding){
               static char wBuff[2048];
                   if( winding->q_eBrushWindingBegin == true ){
                       for( winding; winding->prev, winding->current, winding->next; winding++ ){
                               sprintf(wBuff, "Winding %i", winding->WindingNumpoints);
                       }

                   }
    return wBuff;
};

/*Print Winding Points*/
void PrintWindingPoints( Winding * winding ){
          int g_nWindingId;
                   for( g_nWindingId = 0; g_nWindingId >= 0; g_nWindingId++ ){
                     printf("%i, %i, %i", winding->WindingNumpoints[0], winding->WindingNumpoints[1],
                       winding->WindingNumpoints[2]);
                   }
};

/*Memory Allocate Winding*/
Winding * AllocWinding(){
         Winding * winding = (Winding*)malloc(sizeof(*winding));
         return winding = AllocWinding();
};

/*Check Winding Malloc*/
void Winding_Malloc(Winding * winding){
    if(winding->AllocWinding()){
       winding = AllocWinding();
    }

    else{
        *winding;
           delete[] winding;
    }

 return winding->prev.Winding_Malloc(winding);
}