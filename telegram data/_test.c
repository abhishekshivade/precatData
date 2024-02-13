#include <stdio.h>
int main(void)
{
  typedef enum qualification
  {
    CSC = -3,
    IT, //-2
    CIVIL, //-1
    ENTC, //0
    MECH = -2,
    CHEM,//-1
    PROD//0
  } QUAL; //typedef enum qualificatio as QUAL
  
  enum qualification q1 = ENTC; // enum Variable(q1) declaration and initialisation
  // value at q1 is ENTC which is 0
  QUAL q2 = PROD;// enum Variable(q2) declaration and initialisation
   // value at q2 is PROD which is 0

  if (q1 == CSC) // (0 == -3) --> (F)Skipped
      printf("Computer Science Engineering"); //(Not Execuate)
  else if (q1 == IT)// (0 == -2) --> (F)Skipped
    printf("Information Technology Engineering");//(Not Execuate)
  else if (q1 == CIVIL)// (0 == -1) --> (F) Skipped
    printf("Civil Engineering");//(Not Execuate)
  else if (q2 == ENTC)// (0 == 0) --> (T)
    printf("Electronics & Communication Engineering");//(Execuate)
  else//Skipped
    printf("Engineering ");//(Not Execuate)

  if (q2 == MECH)// (0 == -2) --> (F)Skipped
    printf(" / Mechanical Engineering");//(Not Execuate)
  else if (q2 == CHEM)// (0 == -1) --> (F)Skipped
    printf(" / Chemical Engineering ");//(Not Execuate)
  else if (q1 == PROD)// (0 == 0) --> (T)
    printf(" / Production Engineering ");//(Execuate)
  else //skipped
    printf(" / Engineering ");//(Not Execuate)

  return 0;
}