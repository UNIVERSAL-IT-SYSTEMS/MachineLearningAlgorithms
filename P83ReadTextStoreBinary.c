/*Owner & Copyrights: Vance King Saxbe. A.*///Program P8.3

#include <stdio.h>
int main() {
   FILE *intFile;
   int num;

   if ((intFile = fopen("num.bin", "wb")) == NULL) {
      printf("Cannot open file\n");
      return -1;
   }
   while (scanf("%d", &num) == 1)
      fwrite(&num, sizeof(int), 1, intFile);
   fclose (intFile);
} //end main
/*email to provide support at vancekingsaxbe@powerdominionenterprise.com, businessaffairs@powerdominionenterprise.com, For donations please write to fundraising@powerdominionenterprise.com*/