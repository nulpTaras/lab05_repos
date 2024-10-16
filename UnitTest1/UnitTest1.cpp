#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab5_5/Lab5_5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = g(1 , 2);
			Assert::AreEqual(t , 0);
		}
	};
}
