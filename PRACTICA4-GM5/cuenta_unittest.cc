#include "persona.h"
#include "cuenta.h"
#include "gtest/gtest.h"

TEST(cuenta, ConstructorParametrosDefecto){
	cuenta p;
	EXPECT_EQ("", p.getpermission());
}

TEST(cuenta, ConstructorParametros){
	cuenta p("monitor");
	cuenta q(p);
	cuenta r=q;

	EXPECT_EQ("monitor", p.getpermission());
}
