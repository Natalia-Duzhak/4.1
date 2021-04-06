#include "pch.h"
#include "CppUnitTest.h"
#include "../Project4.1/Employee.cpp"
#include "../Project4.1/Salary.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest41
{
	TEST_CLASS(UnitTest41)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Salary a(0,0,0,0);
			bool k = a.GetHours();
			Assert::AreEqual(k, false);
		}
	};
}
