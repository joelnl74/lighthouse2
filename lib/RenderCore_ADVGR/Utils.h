#pragma once
#include "Ray.h"
#include "Sphere.h"

namespace ADVGR
{
	static class Utils
	{
	public:
		static bool IntersectSphere(Sphere sphere, Ray ray)
		{
			float3 oc = ray.m_Origin - sphere.m_CenterPosition;
			float a = dot(ray.m_Direction, ray.m_Direction);
			float b = 2.0 * dot(oc, ray.m_Direction);
			float c = dot(oc, oc) - (sphere.m_Radius * sphere.m_Radius);

			float inFront = b * b - (4 * a * c);

			return inFront > 0;
		}
	};
}