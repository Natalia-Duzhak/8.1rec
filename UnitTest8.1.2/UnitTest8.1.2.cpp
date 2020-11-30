
#include "pch.h"
#include "CppUnitTest.h"
#include "../Project8.1.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest812
{
	TEST_CLASS(UnitTest812)
	{
	public:
		
		TEST_METHOD(TestMethod1)
#define _CRT_SECURE_NO_WARNINGS
		{


			int i = 0;
			char str[10] = { '+','\0' };

			int m;
			m = Count(str,0);
			Assert::AreEqual(m, 0);
		}
	};
}
