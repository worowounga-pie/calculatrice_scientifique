#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int Addition(int a,int b)
{
  int Solution;
  Solution = a + b;
  return Solution ;
}
int Division(int a, int b)
{
  int Solution ;
  Solution = a / b;
  if(b == 0)
 {
  printf("Maths ERROR!!!\n");
 }
 else
 if(b !=0)
  {
   return Solution ;
  }
}
int Multiplication(int a, int b)
{
 int Solution ;
 Solution = a * b;
 return Solution ;
}
int Soustraction(int a,int b)
{
  int Solution ;
  Solution = a - b;
  return Solution ;
}
int m_pow(int a, int b)
{
  return m_pow(a,b);
}
 double m_cos(double x)
{
  return m_cos(x);
}
 double m_sin(double a)
{
 return m_sin(a);
 }
  double m_fabs(double a)
 {
  return m_fabs(a);
 }
 double m_sqrt(double a)
 {
 return m_sqrt(a);
 }
 double m_log10(double a)
 {
 return m_log10(a);
 }
 double m_log(a)
 {
 return m_log(a);
 }
int main()
{
  int a; int b;
  double Solution ; int operateur;
  int MENU;

  printf("##########MENU##########\n");
  printf("## 1: ADDITION       ###\n");
  printf("## 2: DIVISION       ###\n");
  printf("## 3: MULTIPLICATION ###\n");
  printf("## 4: SOUSTRACTION   ###\n");
  printf("## 5: PUISSANCE      ###\n");
  printf("## 6: COS()          ###\n");
  printf("## 7: SIN()          ###\n");
  printf("## 8: VALEUR ABSOLUE ###\n");
  printf("## 9: RACINE CARREE  ###\n");
  printf("## 10: LOGARITHME10  ###\n");
  printf("## 11: LOG_NEPEURIEN ###\n");
  printf("########################\n");
  scanf("%d", &MENU);
  if ( MENU >=1 && MENU <=5 )
  {
  printf("Veuillez entrer deux valeurs\n");
   scanf("%d", &a);
   scanf("%d", &b);
  }
  else
  {
  printf("Veuillez entrer une valeur\n");
  scanf("%d", &a);
  }
   switch(MENU)
   {
    case 1:
     Solution = Addition(a,b);
      printf("Addition de %d + %d = %1.f\n", a, b, Solution);
    break;
    case 2:

       Solution = Division(a,b);
       if(b !=0)
       {
       printf("Division de %d / %d = %1.f\n", a, b, Solution);
       }
       break;
    case 3:
    Solution = Multiplication(a,b);
      printf("Multiplication de %d * %d = %1.f\n", a, b, Solution);
    break;
    case 4:
       Solution = Soustraction(a,b);
      printf("Soustraction de %d - %d = %1.f\n", a, b, Solution);
    break;
    case 5:
      Solution = pow(a,b);
     printf("m_pow(%d,%d)= %2.f\n", a, b, Solution);
    break;
    case 6:
     Solution = cos(a);
     printf("cos(%d) = %2.f\n", a, Solution);
     break;
    case 7:
     Solution = sin(a);
     printf("sun(%d) est %2.f\n", a, Solution);
     break ;
     case 8:
     Solution = fabs(a);
     printf("la |%d| = %2.f\n", a, Solution);
     break;
     case 9:
      Solution = sqrt(a);
      printf("la sqrt(%d) = %2.f\n", a, Solution);
      break;
      case 10:
      Solution = log10(a);
      printf("log10(%d) = %2.f\n", a, Solution);
      break;
      case 11:
      Solution = log(a);
      printf("log(%d) = %2.f\n", a, Solution);
      break;
   default:
     printf("Choix invalide\n");
   }
   return 0;
 }
