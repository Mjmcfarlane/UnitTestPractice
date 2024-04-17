/**
 * Unit Tests for Password class
**/

#include <gtest/gtest.h>
#include "Password.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

/*
TEST (PasswordTest, single_letter_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("Z");
	ASSERT_EQ(1, actual);
}

TEST (PasswordTest, double_letter_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("ZZ");
	ASSERT_EQ(2, actual);
}

TEST (PasswordTest, space_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("   ");
	ASSERT_EQ(3, actual);
}


TEST (PasswordTest, empty_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("");
	ASSERT_EQ(0, actual);
}
*/


TEST (PasswordTest, lower_then_upper_password){
	Password my_password;
	bool both_cases = my_password.has_mixed_case("zZ");
	ASSERT_EQ(true, both_cases);
}

TEST (PasswordTest, upper_then_lower_password){
	Password my_password;
	bool both_cases = my_password.has_mixed_case("Zz");
	ASSERT_EQ(true, both_cases);
}

TEST (PasswordTest, upper_lower_upper_password){
	Password my_password;
	bool both_cases = my_password.has_mixed_case("ZzABCD");
	ASSERT_EQ(true, both_cases);
}

TEST (PasswordTest, lower_upper_lower_password){
	Password my_password;
	bool both_cases = my_password.has_mixed_case("abcDEFghi");
	ASSERT_EQ(true, both_cases);
}

TEST (PasswordTest, upper_password){
	Password my_password;
	bool both_cases = my_password.has_mixed_case("ZZ");
	ASSERT_EQ(false, both_cases);
}

TEST (PasswordTest, lower_password){
	Password my_password;
	bool both_cases = my_password.has_mixed_case("zz");
	ASSERT_EQ(false, both_cases);
}

TEST (PasswordTest, symbol_lower_password){
	Password my_password;
	bool both_cases = my_password.has_mixed_case("chico_$tate_$tudent");
	ASSERT_EQ(false, both_cases);
}

TEST (PasswordTest, symbol_mixed_password){
	Password my_password;
	bool both_cases = my_password.has_mixed_case("Chico_$tate_$tudent");
	ASSERT_EQ(true, both_cases);
}

TEST (PasswordTest, empt_password){
	Password my_password;
	bool both_cases = my_password.has_mixed_case("");
	ASSERT_EQ(false, both_cases);
}



