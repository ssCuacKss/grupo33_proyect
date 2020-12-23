


#include "visitante.h"
#include "gtest/gtest.h"

TEST(visitante, ConstructorParametrosDefecto) {
  visitante p;
  EXPECT_EQ("", p.getDNI());
  EXPECT_EQ("", p.getNombre());
  EXPECT_EQ("", p.getApellidos());
  EXPECT_EQ("", p.getDireccion());
  EXPECT_EQ("", p.getBirthdate());
  EXPECT_EQ("", p.getEmail());
  EXPECT_EQ("", p.getDisable());
  EXPECT_EQ("", p.getTelefono());
   EXPECT_EQ("", p.getGrupo());
   EXPECT_EQ("", p.getruta());
}


TEST(Visitante, ConstructorCopiaDefecto) {
  visitante p("44XX", "Carlos", "Gutierrez", 911804488, "C/ Mesa 1", "papopepo@gmail.com", "20/11/2000",true, false,"rutaux");
  visitante q(p);
  visitante r=q;

  EXPECT_EQ("44XX", q.getDNI());
  EXPECT_EQ("Carlos", q.getNombre());
  EXPECT_EQ("Gutierrez", q.getApellidos());
  EXPECT_EQ("C/ Mesa 1", q.getDireccion());
  EXPECT_EQ("20/11/2000", q.getBirthdate());
  EXPECT_EQ("papopepo@gmail.com", q.getEmail());
  EXPECT_EQ(911804488, q.getTelefono());
  EXPECT_EQ(911804488, q.getDisable());
  EXPECT_EQ(911804488, q.getGrupo());
  EXPECT_EQ(911804488, q.getruta());

  EXPECT_EQ("44XX", r.getDNI());
  EXPECT_EQ("Carlos", r.getNombre());
  EXPECT_EQ("Gutierrez", r.getApellidos());
  EXPECT_EQ("C/ Mesa 1", r.getDireccion());
  EXPECT_EQ("20/11/2000", r.getBirthdate());
  EXPECT_EQ("papopepo@gmail.com", r.getEmail());
  EXPECT_EQ(911804488, r.getTelefono());
  EXPECT_EQ(911804488, q.getDisable());
  EXPECT_EQ(911804488, q.getGrupo());
  EXPECT_EQ(911804488, q.getruta());

}


