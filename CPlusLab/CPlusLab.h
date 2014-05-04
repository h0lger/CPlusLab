// CPlusLab.h

#pragma once
#include<iostream>
using namespace System;
using namespace std;

namespace CPlusLab {

	public ref class MathTest
	{
	public: double MyMethod(double a, double b, int no)
		{
			double z = 0;
			for (int i = 0; i < no; i++)
			{
				z =+  Math::Sqrt((a+b+i) * 3.14);
			}

			return z;						
		}		
	};
}
