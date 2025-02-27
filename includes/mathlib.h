#include "assertglobal.h"

#ifndef MATHLIB_H
#define MATHLIB_H

typedef double Vec;
typedef Vec Vec3[3];
typedef Vec Vec4[4];

int point;

Vec3 origin = { 0.0f, 0.0f, 0.0f };

int snap_to_grid( int snap );

class MathStream{
public:
 MathStream& Insert();

 void StreamRotate(Vec3 vec);
 void StreamTranslate(Vec3 &fVec);
 void StreamScale(Vec3 &fVec);
};


#endif