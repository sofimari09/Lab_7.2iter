#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_7.2/7.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int Low = -10;
			int High = 10;
			int n = 3;
			int k = 3;
			int** a = new int* [n];
			for (int i = 0; i < n; i++)
				a[i] = new int[k];
			a[0][0] = -7;
			a[0][1] = 7;
			a[0][2] = 1;

			a[1][0] = -7;
			a[1][1] = 4;
			a[1][2] = -2;

			a[2][0] = 10;
			a[2][1] = -3;
			a[2][2] = -9;
			int x = Max(a, n, k);

			Assert::AreEqual(x, 17);
		}
	};
}
