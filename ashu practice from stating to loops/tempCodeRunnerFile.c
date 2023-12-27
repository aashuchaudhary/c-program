
   ptr = fopen("fgetcputc.txt", "r");
   char ch = fgetc(ptr);
   printf("the value of ch is %c \n", ch);
   ch = fgetc(ptr);
   printf("the value of ch is %c \n", ch);
   ch = fgetc(ptr);
   printf("the value of ch is %c \n", ch);
   fclose(ptr);