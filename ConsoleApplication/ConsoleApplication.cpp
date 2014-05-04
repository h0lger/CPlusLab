// ConsoleApplication.cpp : main project file.

#include "stdafx.h"


using namespace System;

int main(array<System::String ^> ^args)
{
	System::Diagnostics::Stopwatch sw;
	long totTime = 0;
	double z = 0;
	int const iterations = 30;
	CPlusLab::MathTest t;
	for (int i = 0; i < iterations; i++)
	{
		sw.Start();		
		z = t.MyMethod(5, 6, 10000000);
		sw.Stop();
		totTime += sw.ElapsedMilliseconds;
		sw.Reset();
	}
		
		Console::WriteLine(z);
		Console::WriteLine(totTime / iterations);
		Console::ReadLine();
    return 0;
}
