#pragma once
#include "Ray.h"
#include "Sphere.h"

namespace ADVGR
{
	static class Utils
	{
	public:
		static void IntersectSphere(Sphere sphere, Ray ray)
		{
			float3 oc = sphere.m_CenterPosition - ray.m_Origin;
			float t = dot(oc, ray.m_Direction);
			float3 q = oc - t * ray.m_Direction;
			float p2 = dot(q, q);
			float r2 = sphere.m_Radius * sphere.m_Radius;
			
			if (p2 > r2)
			{
				return;
			}
			
			float r2p2 = r2 - p2;
			t -= sqrt(r2p2);
			
			if ((t < ray.t) && (t > 0))
			{
				ray.t = t;
			}
		}
	};
}