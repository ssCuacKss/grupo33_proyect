


#include "../codigo/parque.h"

#include "../codigo/googletest/include/gtest/gtest.h"

TEST(parque, ConstructorParametrosDefecto) {
  visitante p;
  EXPECT_EQ("", p.getLocal());
  EXPECT_EQ("", p.getProv());
  EXPECT_EQ("", p.getgetFecha());
  EXPECT_EQ("", p.getSurface());
  EXPECT_EQ("", p.getInauguracion());
}


TEST(Visitante, ConstructorCopiaDefecto) {
  parque p("Sierra Nevada", "Granada", 85.883, "14/diciembre/1996", sierranevada_premios, "20/11/2020");
  parque q(p);
  parque r=q;

  EXPECT_EQ("Sierra Nevada", q.getLocal());
  EXPECT_EQ("Granada", q.getProv());
  EXPECT_EQ(85.883, q.getSurface());
  EXPECT_EQ("14/diciembre/1996", q.getInauguracion());
  EXPECT_EQ("20/11/2020", q.getFecha());
  EXPECT_EQ(sierranevada_premios, q.getPremios());
}


