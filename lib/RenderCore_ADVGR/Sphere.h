#pragma once
#include "platform.h"

using namespace lighthouse2;
class Sphere
{
public:
	Sphere(float3 centerPosition, float radius) : m_CenterPosition(centerPosition), m_Radius(radius) {};
	Sphere() {};

	float3 m_CenterPosition;
	float m_Radius;
};