#include "pch.h"
#include "CppUnitTest.h"
#include "../ConsoleApplication1/FinalExam.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(SUM_MATRIX)
		{
			const int MAX_ROW = 2;
			const int MAX_COL = 3;

			double matrix[MAX_ROW][MAX_COL];

			int sum = sumNumbers(matrix, MAX_ROW, MAX_COL);

			Assert::AreEqual(6, sum);

		}
	};
}
