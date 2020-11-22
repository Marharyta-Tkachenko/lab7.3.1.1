#include "pch.h"
#include "CppUnitTest.h"
#include "../Project7.3.1.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int c;
			int rowCount = 2, colCount = 2;
			int** a = new int* [rowCount];
			for (int i = 0; i < rowCount; i++)
				a[i] = new int[colCount];
			a[0][0] = -1, a[0][1] = 23, a[1][0] = 3, a[1][1] = -3;
			int suma = Sum(a, rowCount, colCount);
			Assert::AreEqual(suma, 22);
			delete[] a;
		}
	};
}
