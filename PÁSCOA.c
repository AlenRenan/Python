int main (){

   int ano;
   int a, b,c, d, e;
    int pascoa;
  int mpascoa;
  printf  ("Qual o ano?: ");
  scanf ("%d", &ano);


  a = ano % 19;

  b = ano % 4;

  c = ano % 7;

  d = (19*a + 24)% 30;

  e = ((2 * b) + (4 * c) + (6 * d) + 5) % 7;

  if (d + e > 9){
        pascoa = d + e - 9;
        mpascoa = 4;

  } else if (d + e <= 9){
      pascoa = d + e + 22;0
      mpascoa = 3;

  }
  printf ("A pascoa sera no dia %d, e no mes %d", pascoa, mpascoa);





}
