/*
 * administrador_unittest.cc
 *
 *  Created on: 18 dic. 2020
 *      Author: david
 */

#include "persona.h"
#include "administrador.h"
#include "gtest/gtest.h"

TEST(administrador, ConstructorParametrosDefecto) {
  administrador a;

  EXPECT_EQ("", p.getDNI());
  EXPECT_EQ("", p.getNombre());
  EXPECT_EQ("", p.getApellidos());
  EXPECT_EQ("", p.getDireccion());
  EXPECT_EQ("", p.getBirthdate());
  EXPECT_EQ("", p.getEmail());
  EXPECT_EQ(0, p.getTelefono());

}

TEST(Persona, ConstructorParametros) {
  Persona p("44XX", "Carlos", "Gutierrez", 911804488, "C/ Mesa 1", "papopepo@gmail.com", "20/11/2000");

  EXPECT_EQ("44XX", p.getDNI());
  EXPECT_EQ("Carlos", p.getNombre());
  EXPECT_EQ("Gutierrez", p.getApellidos());
  EXPECT_EQ("C/ Mesa 1", p.getDireccion());
  EXPECT_EQ("20/11/2000", p.getBirthdate());
  EXPECT_EQ("papopepo@gmail.com", p.getEmail());
  EXPECT_EQ(911804488, p.getTelefono());

}

TEST(Persona, ConstructorCopiaDefecto) {
  Persona p("44XX", "Carlos", "Gutierrez", 911804488, "C/ Mesa 1", "papopepo@gmail.com", "20/11/2000");
  Persona q(p);
  Persona r=q;

  EXPECT_EQ("44XX", q.getDNI());
  EXPECT_EQ("Carlos", q.getNombre());
  EXPECT_EQ("Gutierrez", q.getApellidos());
  EXPECT_EQ("C/ Mesa 1", q.getDireccion());
  EXPECT_EQ("20/11/2000", q.getBirthdate());
  EXPECT_EQ("papopepo@gmail.com", q.getEmail());
  EXPECT_EQ(911804488, q.getTelefono());

  EXPECT_EQ("44XX", r.getDNI());
  EXPECT_EQ("Carlos", r.getNombre());
  EXPECT_EQ("Gutierrez", r.getApellidos());
  EXPECT_EQ("C/ Mesa 1", r.getDireccion());
  EXPECT_EQ("20/11/2000", r.getBirthdate());
  EXPECT_EQ("papopepo@gmail.com", r.getEmail());
  EXPECT_EQ(911804488, r.getTelefono());

}
TEST(Persona,setTelefono){
  Persona p;
  EXPECT_FALSE(p.setTelefono(1));
  EXPECT_FALSE(p.setTelefono(124523));
  EXPECT_FALSE(p.setTelefono(56345));
  EXPECT_FALSE(p.setTelefono(1663));
  EXPECT_TRUE(p.setTelefono(633304422));
  EXPECT_TRUE(p.setTelefono(957654253));
  EXPECT_FALSE(p.setTelefono(1000000000));
}

