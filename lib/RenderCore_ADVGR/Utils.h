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
			float t = dot(oc, ray.m_Direction);
			float3 q = oc - t * ray.m_Direction;
			float p2 = dot(q, q);
			float r2 = sphere.m_Radius * sphere.m_Radius;
			
			if (p2 > r2)
			{
				return false;
			}

			return true;
		}
	};
}