/*
 * ruta_unittest.cc
 *
 *      Author: david
 */

#include "ruta.h"
#include "gtest/gtest.h"


TEST(ruta, ConstructorParametrosDefecto) {
  ruta r;

  EXPECT_EQ(0, r.getLongitud());
  EXPECT_EQ("", r.getRecorrido());
  EXPECT_EQ(0, r.getTiempo());
  EXPECT_EQ(0, r.getJornada());
  EXPECT_EQ("", r.getPaisaje());
  EXPECT_EQ(0, r.getTransporte());
  EXPECT_EQ(0, r.getAforo());
  EXPECT_EQ(0, r.getDificultad());
  EXPECT_EQ("", r.getNombre());

}

TEST(Persona, ConstructorParametros) {
  ruta r(2, "larga", 5, 2, "escarpado", 1, 20,2,"El sendero de la muerte");

  EXPECT_EQ(2, r.getLongitud());
  EXPECT_EQ("larga", r.getRecorrido());
  EXPECT_EQ(5, r.getTiempo());
  EXPECT_EQ(2, r.getJornada());
  EXPECT_EQ("escarpado", r.getPaisaje());
  EXPECT_EQ(1, r.getTransporte());
  EXPECT_EQ(20, r.getAforo());
  EXPECT_EQ(2, r.getDificultad());
  EXPECT_EQ("El sendero de la muerte", r.getNombre());

}

TEST(Persona, ConstructorCopiaDefecto) {
  ruta r(2, "larga", 5, 2, "escarpado", 1, 20,2,"El sendero de la muerte");
  ruta q(r);
  ruta t=q;

  EXPECT_EQ(2, q.getLongitud());
  EXPECT_EQ("larga", q.getRecorrido());
  EXPECT_EQ(5, q.getTiempo());
  EXPECT_EQ(2, q.getJornada());
  EXPECT_EQ("escarpado", q.getPaisaje());
  EXPECT_EQ(1, q.getTransporte());
  EXPECT_EQ(20, q.getAforo());
  EXPECT_EQ(2, q.getDificultad());
  EXPECT_EQ("El sendero de la muerte", q.getNombre());

  EXPECT_EQ(2, t.getLongitud());
  EXPECT_EQ("larga", t.getRecorrido());
  EXPECT_EQ(5, t.getTiempo());
  EXPECT_EQ(2, t.getJornada());
  EXPECT_EQ("escarpado", t.getPaisaje());
  EXPECT_EQ(1, t.getTransporte());
  EXPECT_EQ(20, t.getAforo());
  EXPECT_EQ(2, t.getDificultad());
  EXPECT_EQ("El sendero de la muerte", t.getNombre());

}
TEST(ruta,setAforo){
  ruta r;
  r.setAforo(20);
  EXPECT_EQ(20, r.getAforo());

}
TEST(ruta,setNombre){
  ruta r;
  r.setNombre("laguna");
  EXPECT_EQ("laguna", r.getNombre());
}


