﻿#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 5.0/Lab 5.0.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			double u;
			u = k(2, 3);
			Assert::AreEqual(u, 0.657143, 0.000001);
		}
	};
}
