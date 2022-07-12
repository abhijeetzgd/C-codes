extern  int  printf(const char *,...);

   int main()
     {
         int a = 1, b = 1, d = 1;
         printf("%d %d %d\n", ++a + ++a+a++, a++ + ++b, ++d + d++ + a++);
     }
