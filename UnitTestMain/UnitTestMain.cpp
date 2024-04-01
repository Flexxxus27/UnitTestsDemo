#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

#include "..\UnitTestsDemo\MathLib.hpp"
#include <string>

namespace категория_тестов
{
	TEST_CLASS(тестовый_блок)
	{
	public:
		
		TEST_METHOD(конкретный_тестовый_эпизод)
		{
		}

		TEST_METHOD(SimpleSumm){
			Summ(0, 0);
			Assert::AreEqual(
			std::to_string(7).c_str(),
				std::to_string(Summ(0,0)).c_str(),
				std::string("Cant call").c_str()
			);
		}
	};
}
