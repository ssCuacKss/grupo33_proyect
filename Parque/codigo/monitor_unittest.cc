#include "../codigo/monitor.h"

#include "../codigo/googletest/include/gtest/gtest.h"

TEST(monitor, ConstructorParametrosDefecto) {
  monitor p;
  EXPECT_EQ("", p.getDNI());
  EXPECT_EQ("", p.getNombre());
  EXPECT_EQ("", p.getApellidos());
  EXPECT_EQ("", p.getDireccion());
  EXPECT_EQ("", p.getBirthdate());
  EXPECT_EQ("", p.getEmail());
  EXPECT_EQ("", p.getNomina());
  EXPECT_EQ("", p.getTelefono());
   EXPECT_EQ("", p.getRuta());
}


TEST(monitor, ConstructorCopiaDefecto) {
  monitor p("44XX", "Carlos", "Gutierrez Fernandez", 911804488, "C/ Mesa 1", "sn1990cagufe@sn.es"", "20/11/1990",true, false,"rutaux");
  monitor q(p);
  monitor r=q;
  EXPECT_EQ("44XX", q.getDNI());
  EXPECT_EQ("Carlos", q.getNombre());
  EXPECT_EQ("Gutierrez Fernandez", q.getApellidos());
  EXPECT_EQ("C/ Mesa 1", q.getDireccion());
  EXPECT_EQ("20/11/1990", q.getBirthdate());
  EXPECT_EQ("sn1990cagufe@sn.es", q.getEmail());
  EXPECT_EQ(911804488, q.getTelefono());
  EXPECT_EQ(911804488, q.getNomina());
  EXPECT_EQ(911804488, q.getRuta());
  EXPECT_EQ("44XX", r.getDNI());
  EXPECT_EQ("Carlos", r.getNombre());
  EXPECT_EQ("Gutierrez Fernandez", r.getApellidos());
  EXPECT_EQ("C/ Mesa 1", r.getDireccion());
  EXPECT_EQ("20/11/1990", r.getBirthdate());
  EXPECT_EQ("sn1990cagufe@sn.es", r.getEmail());
  EXPECT_EQ(911804488, r.getTelefono());
  EXPECT_EQ(911804488, q.getNomina());
  EXPECT_EQ(911804488, q.getRuta());
}
