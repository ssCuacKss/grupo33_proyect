


#include "../codigo/visitante.h"
#include "../codigo/persona.h"
#include "../codigo/googletest/include/gtest/gtest.h"

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
}


TEST(Visitante, ConstructorCopiaDefecto) {
  visitante p("44XX", "Carlos", "Gutierrez Fernandez", 911804488, "C/ Mesa 1", "sn1990cagufe@sn.es", "20/11/2000");
  visitante q(p);
  visitante r=q;

  EXPECT_EQ("44XX", q.getDNI());
  EXPECT_EQ("Carlos", q.getNombre());
  EXPECT_EQ("Gutierrez Fernandez", q.getApellidos());
  EXPECT_EQ("C/ Mesa 1", q.getDireccion());
  EXPECT_EQ("20/11/1990", q.getBirthdate());
  EXPECT_EQ("sn1990cagufe@sn.es", q.getEmail());
  EXPECT_EQ(911804488, q.getTelefono());
  EXPECT_EQ(true, q.getDisable());
  EXPECT_EQ(false, q.getGrupo());

  EXPECT_EQ("44XX", r.getDNI());
  EXPECT_EQ("Carlos", r.getNombre());
  EXPECT_EQ("Gutierrez Fernandez", r.getApellidos());
  EXPECT_EQ("C/ Mesa 1", r.getDireccion());
  EXPECT_EQ("20/11/1990", r.getBirthdate());
  EXPECT_EQ("sn1990cagufe@sn.es", r.getEmail());
  EXPECT_EQ(911804488, r.getTelefono());
  EXPECT_EQ(true, q.getDisable());
  EXPECT_EQ(false, q.getGrupo());

}


