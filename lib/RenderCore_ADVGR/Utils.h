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

			return false;
		}
	};
}