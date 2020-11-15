#include "Triangle.h"

bool Triangle::Intersect(Ray ray)
{
	float3 e1 = point2 - point1;
	float3 e2 = point3 - point1;

	float u = dot((ray.m_Origin - point1), cross(ray.m_Direction, e2)) / dot(e1, (cross(ray.m_Direction, e2)));
	float v = dot(ray.m_Direction, (cross((ray.m_Origin - point1), e1)) / dot(e1, cross(ray.m_Direction, e2)));
	float w = 1 - u - v;

	float t0 = dot(e2, cross((ray.m_Origin - point1), e1)) / dot(e1, cross(ray.m_Direction, e2));

	if ((u < 0) || (u > 1)) {
		return false;
	}
	else if ((v < 0) || (u + v > 1)) {
		return false;
	}
	else {
		return true;
	}
}
