#include "stdafx.h"
#include "CppUnitTest.h"
void f() {
	__COUNTER__;
	__COUNTER__;
	__COUNTER__;
	__COUNTER__;
	__COUNTER__;
	__COUNTER__;
	__COUNTER__;
	__COUNTER__;
	__COUNTER__;
	__COUNTER__;
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;


#define JOIN(x, y) JOIN_AGAIN(x, y)
#define JOIN_AGAIN(x, y) x ## y ## _
#define TEST_FUNC(FuncName) TEST_METHOD(JOIN(Case,__COUNTER__)FuncName)
namespace Type
{

	TEST_CLASS(Numeric)
	{
	public:


		//�R���X�g���N�^�e�X�g
		TEST_FUNC(Test)
		{
			Environ::Numeric<> i;
			Assert::AreEqual<int>(i, 0);
		}

		//�R���X�g���N�^�e�X�g
		TEST_FUNC(Constructor2)
		{
			Environ::Numeric<> i(10);
			Assert::AreEqual<int>(i, 10);
		}

		//����e�X�g
		TEST_FUNC(Substitution1)
		{
			Environ::Numeric<> i;
			i = 10;
			Assert::AreEqual<int>(i, 10);
		}

		//����e�X�g
		TEST_FUNC(Substitution2)
		{
			Environ::Numeric<> i;
			i = -10;
			Assert::AreEqual<int>(i, -10);
		}

		//����e�X�g
		TEST_FUNC(Substitution3)
		{
			Environ::Numeric<> i;
			i = INT_MIN;
			Assert::AreEqual<int>(i, INT_MIN);
		}

		//����e�X�g
		TEST_FUNC(Substitution4)
		{
			Environ::Numeric<> i;
			i = INT_MAX;
			Assert::AreEqual<int>(i, INT_MAX);
		}

		//����e�X�g
		TEST_FUNC(Substitution5)
		{
			Environ::Numeric<> i;
			i = 10;
			Assert::AreEqual<int>(i, 10);
		}

		//����e�X�g
		TEST_FUNC(Substitution6)
		{
			Environ::Numeric<> i;
			i = -10;
			Assert::AreEqual<int>(i, -10);
		}

		//����e�X�g
		TEST_FUNC(Substitution7)
		{
			Environ::Numeric<short> i;
			i = SHRT_MIN;
			Assert::AreEqual<int>(i, SHRT_MIN);
		}

		//����e�X�g
		TEST_FUNC(Substitution8)
		{
			Environ::Numeric<> i;
			i = SHRT_MAX;
			Assert::AreEqual<int>(i, SHRT_MAX);
		}

		//���Z����e�X�g
		TEST_FUNC(AddEqual1)
		{
			Environ::Numeric<> i;
			i +=20;
			Assert::AreEqual<int>(i, 20);
		}

		//���Z����e�X�g
		TEST_FUNC(SubEqual1)
		{
			Environ::Numeric<> i;
			i -= 20;
			Assert::AreEqual<int>(i, -20);
		}

		//��Z����e�X�g
		TEST_FUNC(ModEqual1)
		{
			Environ::Numeric<> i(5);
			i *= 20;
			Assert::AreEqual<int>(i, 5*20);
		}

		//���Z����e�X�g
		TEST_FUNC(DivEqual1)
		{
			Environ::Numeric<> i(500);
			i /= 20;
			Assert::AreEqual<int>(i, 500/20);
		}


		//���Z�e�X�g
		TEST_FUNC(Add1)
		{
			Environ::Numeric<> i1(300);
			Environ::Numeric<> i2(20);

			Assert::AreEqual<int>(i1 + i2, 300 + 20);
		}

		//���Z�e�X�g
		TEST_FUNC(Sub1)
		{
			Environ::Numeric<> i1(300);
			Environ::Numeric<> i2(20);

			Assert::AreEqual<int>(i1 - i2, 300 - 20);
		}

		//��Z�e�X�g
		TEST_FUNC(Mod1)
		{
			Environ::Numeric<> i1(300);
			Environ::Numeric<> i2(20);

			Assert::AreEqual<int>(i1*i2, 300 * 20);
		}

		//���Z�e�X�g
		TEST_FUNC(Div1)
		{
			Environ::Numeric<> i1(300);
			Environ::Numeric<> i2(20);

			Assert::AreEqual<int>(i1 / i2, 300 / 20);
		}


		//��r�e�X�g
		TEST_FUNC(Equal1)
		{
			Environ::Numeric<> i1(300);
			Environ::Numeric<> i2(300);

			Assert::AreEqual(i1 == i2, true);
		}

		//��r�e�X�g
		TEST_FUNC(Equal2)
		{
			Environ::Numeric<> i1(300);
			Environ::Numeric<> i2(30);

			Assert::AreEqual(i1 == i2, false);
		}

		//��r�e�X�g
		TEST_FUNC(NotEqual1)
		{
			Environ::Numeric<> i1(300);
			Environ::Numeric<> i2(300);

			Assert::AreEqual(i1 != i2, false);
		}

		//��r�e�X�g
		TEST_FUNC(NotEqual2)
		{
			Environ::Numeric<> i1(300);
			Environ::Numeric<> i2(30);

			Assert::AreEqual(i1 != i2, true);
		}

		//��r�e�X�g
		TEST_FUNC(Graeter1)
		{
			Environ::Numeric<> i1(300);
			Environ::Numeric<> i2(300);

			Assert::AreEqual(i1 < i2, false);
		}

		//��r�e�X�g
		TEST_FUNC(Graeter2)
		{
			Environ::Numeric<> i1(300);
			Environ::Numeric<> i2(30);

			Assert::AreEqual(i1 < i2, false);
		}

		//��r�e�X�g
		TEST_FUNC(Graeter3)
		{
			Environ::Numeric<> i1(30);
			Environ::Numeric<> i2(300);

			Assert::AreEqual(i1 < i2, true);
		}

		//��r�e�X�g
		TEST_FUNC(GraeterThan1)
		{
			Environ::Numeric<> i1(300);
			Environ::Numeric<> i2(300);

			Assert::AreEqual(i1 <= i2, true);
		}

		//��r�e�X�g
		TEST_FUNC(GraeterThan2)
		{
			Environ::Numeric<> i1(300);
			Environ::Numeric<> i2(30);

			Assert::AreEqual(i1 <= i2, false);
		}

		//��r�e�X�g
		TEST_FUNC(GraeterThan3)
		{
			Environ::Numeric<> i1(30);
			Environ::Numeric<> i2(300);

			Assert::AreEqual(i1 <= i2, true);
		}




		//��r�e�X�g
		TEST_FUNC(Less1)
		{
			Environ::Numeric<> i1(300);
			Environ::Numeric<> i2(300);

			Assert::AreEqual(i1 > i2, false);
		}

		//��r�e�X�g
		TEST_FUNC(Less2)
		{
			Environ::Numeric<> i1(300);
			Environ::Numeric<> i2(30);

			Assert::AreEqual(i1 > i2, true);
		}

		//��r�e�X�g
		TEST_FUNC(Less3)
		{
			Environ::Numeric<> i1(30);
			Environ::Numeric<> i2(300);

			Assert::AreEqual(i1 > i2, false);
		}

		//��r�e�X�g
		TEST_FUNC(LessThan1)
		{
			Environ::Numeric<> i1(300);
			Environ::Numeric<> i2(300);

			Assert::AreEqual(i1 >= i2, true);
		}

		//��r�e�X�g
		TEST_FUNC(LessThan2)
		{
			Environ::Numeric<> i1(300);
			Environ::Numeric<> i2(30);

			Assert::AreEqual(i1 >= i2, true);
		}

		//��r�e�X�g
		TEST_FUNC(LessThan3)
		{
			Environ::Numeric<> i1(30);
			Environ::Numeric<> i2(300);

			Assert::AreEqual(i1 >= i2, false);
		}


		//�_���ے�e�X�g
		TEST_FUNC(NOT1)
		{
			Environ::Numeric<> i(30);
			Assert::AreEqual<int>(~i, ~30);
		}


	};
}