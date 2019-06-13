#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "maquinadebusca.h"

#include <iostream>

using std::string;

class Teste {
public:

  static int c1_(const maquinadebusca& c) {
    return  c.c1;
  }
  static int c2_(const maquinadebusca& c) {
    return  c.c2;
  }
  static int c3_(const maquinadebusca& c) {
    return  c.c3;
  }
  static int t1_(const maquinadebusca& c) {
    return  c.t1;
  }
  static int t2_(const maquinadebusca& c) {
    return  c.t2;
  }
  static int t3_(const maquinadebusca& c) {
    return  c.t3;
  }
   static string arq1_(const maquinadebusca& c) {
    return  c.arq1;
  }
   static string arq2_(const maquinadebusca& c) {
    return  c.arq2;
  }
   static string arq3_(const maquinadebusca& c) {
    return  c.arq3;
  }
   static string aux_(const maquinadebusca& c) {
    return  c.aux;
  }
  static string aux2_(const maquinadebusca& c) {
    return  c.aux2;
  }
  static string aux3_(const maquinadebusca& c) {
    return  c.aux3;
  }
  static string palavra_(const maquinadebusca& c) {
    return  c.palavra;
  }
  static string tamanho_(const maquinadebusca& c) {
    return  c.tamanho;
  }

};


TEST_SUITE("maquinadebusca") {  
  TEST_CASE("maquinadebusca()") {
    maquinadebusca f;
    CHECK(Teste::c1_(f) == 100);
    CHECK(Teste::c2_(f) == 100);
    CHECK(Teste::c3_(f) == 100);
    CHECK(Teste::t1_(f) == 1);
    CHECK(Teste::t2_(f) == 1);
    CHECK(Teste::arq1_(f) == new string[c1_]);
    CHECK(Teste::arq2_(f) == new string[c2_]);
    CHECK(Teste::arq3_(f) == new string[c3_]);
    f.lerarquivos("d1.txt");
    f.lerarquivos("d2.txt");
    f.lerarquivos("d3.txt");
  }

  TEST_CASE("redimensiona(int)") {
    maquinadebusca f;
    f.redimensiona("0");
    f.redimensiona("1");
    f.redimensiona("2");
    CHECK(Teste::aux_(f) == new string[n]);
    CHECK(Teste::aux2_(f) == new string[n]);
    CHECK(Teste::aux3_(f) == new string[n]);
    CHECK(Teste::j(f) == 0);

  }

   TEST_CASE("lerarquivos()") {
    maquinadebusca f;
    CHECK(Teste::t1_(f) == Teste::c1_(f));
    CHECK(Teste::t2_(f) == Teste::c2_(f));
    CHECK(Teste::t3_(f) == Teste::c3_(f));
  }

  TEST_CASE("criandomap()") {
    maquinadebusca f;
    CHECK(Teste::aux_(f) == Teste::arq1_(f));
    CHECK(Teste::aux_(f) == Teste::arq2_(f));
    CHECK(Teste::aux_(f) == Teste::arq3_(f));

  }

  TEST_CASE("tf()"){
    maquinadebusca f;
    CHECK(f.vazia() == true);
    CHECK(Teste::palavra_(f) == Teste::it->first);

  }
  
   TEST_CASE("coordenada_do_documento()"){
    maquinadebusca f;
	CHECK(f.redimensiona() == true);
    CHECK(Teste::palavra_(f) == Teste::it->first);
  }
   TEST_CASE("busca()"){
    maquinadebusca f;
    REQUIRE(Teste::tamanho_(f) == 1);
    CHECK(Teste::c1_(f) == 100);
    CHECK(Teste::c2_(f) == 100);
    CHECK(Teste::c3_(f) == 100);
    CHECK(f.redimensiona() == true);
  }
  
}
