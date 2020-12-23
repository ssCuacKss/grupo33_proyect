#include "../codigo/cuenta.h"

#include "../codigo/googletest/include/gtest/gtest.h"
#include "../codigo/persona.h"

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
