/************************************************************************************
qwertyuiopasdfghjklzxcvbnm QWERTYUIOPASDFGHJKLZXCVBNM 0123456789 !@#$%^&*()~-+=\<>?/
************************************************************************************/
#include <iostream>

using namespace std;

int main(void)
{
     printf ("qwertyuiopasdfghjklzxcvbnm QWERTYUIOPASDFGHJKLZXCVBNM 0123456789 !@#$%^&*()~-+=\<>?/")
     printf ("Characters: %c %c %c \n", 'a', 122 , 57);
   printf ("Decimals: %d %ld\n", 1999, 1220000L);
   printf ("Preceding with blanks: %10d \n", 1999);
   printf ("Preceding with zeros : %010d \n", 1999);
   printf ("Some different radices: %d %x %o %#x %#o \n", 100, 100, 100, 100, 100);
   printf ("floats: %4.2f %+.0e %E \n", 3.14159, 3.14159, 3.14159);
   printf ("Width trick: %*d \n", 5, 10);
   printf ("%s \n", "A string");
   return 0;
}
