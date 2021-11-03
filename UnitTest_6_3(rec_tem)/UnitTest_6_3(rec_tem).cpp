#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Home\source\repos\Lab_6_3(rec_tem)\Lab_6_3(rec_tem)\Lab_6_3(rec_tem).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest63rectem
{
	TEST_CLASS(UnitTest63rectem)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int n = 3;
			int a[n];
			a[0] = -1;
			a[1] = 1;
			a[2] = 0;

			Assert::AreEqual(MinElem(a, n, a[0], 1), -1);
		}
	};
}
