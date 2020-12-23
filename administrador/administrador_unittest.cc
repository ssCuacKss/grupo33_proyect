/*
 * administrador_unittest.cc
 *
 *      Author: david
 */

#include "persona.h"
#include "administrador.h"
#include "gtest/gtest.h"

TEST(admin, ConstructorParametrosDefecto) {
  admin p;

  EXPECT_EQ("", p.getDNI());
  EXPECT_EQ("", p.getNombre());
  EXPECT_EQ("", p.getApellidos());
  EXPECT_EQ("", p.getDireccion());
  EXPECT_EQ("", p.getBirthdate());
  EXPECT_EQ("", p.getEmail());
  EXPECT_EQ(0, p.getTelefono());

}

TEST(admin, ConstructorParametros) {
  admin p("44XX", "Carlos", "Gutierrez Fernandez", 911804488, "C/ Mesa 1", "sn1990cagufe@sn.es", "20/11/1990");

  EXPECT_EQ("44XX", p.getDNI());
  EXPECT_EQ("Carlos", p.getNombre());
  EXPECT_EQ("Gutierrez Fernandez", p.getApellidos());
  EXPECT_EQ("C/ Mesa 1", p.getDireccion());
  EXPECT_EQ("20/11/1990", p.getBirthdate());
  EXPECT_EQ("sn1990cagufe@sn.es", p.getEmail());
  EXPECT_EQ(911804488, p.getTelefono());

}

TEST(admin, ConstructorCopiaDefecto) {
  admin p("44XX", "Carlos", "Gutierrez Fernandez", 911804488, "C/ Mesa 1", "sn1990cagufe@sn.es", "20/11/1990");
  admin q(p);
  admin r=q;

  EXPECT_EQ("44XX", q.getDNI());
  EXPECT_EQ("Carlos", q.getNombre());
  EXPECT_EQ("Gutierrez Fernandez", q.getApellidos());
  EXPECT_EQ("C/ Mesa 1", q.getDireccion());
  EXPECT_EQ("20/11/1990", q.getBirthdate());
  EXPECT_EQ("sn1990cagufe@sn.es", q.getEmail());
  EXPECT_EQ(911804488, q.getTelefono());

  EXPECT_EQ("44XX", r.getDNI());
  EXPECT_EQ("Carlos", r.getNombre());
  EXPECT_EQ("Gutierrez Fernandez", r.getApellidos());
  EXPECT_EQ("C/ Mesa 1", r.getDireccion());
  EXPECT_EQ("20/11/1990", r.getBirthdate());
  EXPECT_EQ("sn1990cagufe@sn.es", r.getEmail());
  EXPECT_EQ(911804488, r.getTelefono());

}
TEST(admin,setTelefono){
  admin p;
  EXPECT_FALSE(p.setTelefono(1));
  EXPECT_FALSE(p.setTelefono(124523));
  EXPECT_FALSE(p.setTelefono(56345));
  EXPECT_FALSE(p.setTelefono(1663));
  EXPECT_TRUE(p.setTelefono(633304422));
  EXPECT_TRUE(p.setTelefono(957654253));
  EXPECT_FALSE(p.setTelefono(1000000000));
}

