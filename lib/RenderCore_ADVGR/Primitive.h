#pragma once
#include "Ray.h"

class Primitive
{
public:
	virtual bool Intersect(Ray ray) { return false; };
};