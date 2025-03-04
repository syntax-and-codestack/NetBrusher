//veclib.h programmed 
#ifndef VECLIB_H
#define VECLIB_H

#include <string>
#include "mathlib.h"

Vec3 * VectorNormalize(Vec3 _vec);
Vec3 * VectorCopy(void* dest, const void * src, std::size_t VecSize);
Vec3 * VectorScale(Vec3 * _vec);
Vec3 * VectorAlloc(Vec3 vec3){ Vec3 * vec = (Vec3*)malloc(sizeof(Vec3));};

#include <vector>

//vector to hold vector values
std::vector<Vec3> veclst(std::vector<Vec3>& nVecs, Vec3 points);
std::vector<int> g_nVecPoint(std::vector<int> * g_nId, int Id);
std::vector<double> _dist(std::vector<double>& d, double * RealDist);

#endif
