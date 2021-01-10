#include "c-echo.h"
#include "gtest/gtest.h"

TEST(EchoTest, HelloWorld){
	char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] ="world";
	EXPECT_EQ("hello world", echo(3,test_val));
}
TEST(EchoTest, EmptyString){
	char* test_val[1]; test_val[0] = "./c-echo";
	EXPECT_EQ("", echo(1,test_val));
}
///////////////
///////////INDIVIDUAL TEST CASES////
///////////////

TEST(EchoTest, QuotesTest){
	char* test_val[2]; test_val[0] = "./c-echo"; test_val[1] = "\"quotes\"";
	EXPECT_EQ("\"quotes\"", echo(2, test_val));
}

TEST(EchoTest, SymbolTest){
	char* test_val[2]; test_val[0] = "./c-echo"; test_val[1] = "!@#$%^&*)(,.";
	EXPECT_EQ("!@#$%^&*)(,.", echo(2,test_val));
}

TEST(EchoTest, CapsTest){
	char* test_val[2]; test_val[0] = "./c-echo"; test_val[1] = "ABCDEFG";
	EXPECT_EQ("ABCDEFG", echo(2, test_val));
}
int main(int argc, char **argv){
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
