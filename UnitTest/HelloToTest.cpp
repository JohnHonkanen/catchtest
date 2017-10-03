#define CATCH_CONFIG_MAIN
#include "../CatchTest/HelloTo.cpp"
#include "catch.hpp"

TEST_CASE("Saying Hello to Mark", "[sayHalo]") {
	HelloTo mark = HelloTo();
	mark.SetName("mark");
	//This will pass
	REQUIRE(mark.GetName() == "mark");
	//This will fail
	REQUIRE(mark.SayHello() == "Hmark");
}