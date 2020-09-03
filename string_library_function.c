# include <stdio.h>

int get_string_length(char str[]) {
    int length = strlen(str); // get string length
    return length;
}

void reverse_string(char str[]) {
    strrev(str); // reverse string
    printf("Reversed: %s\n",str);
}

void string_join(char str1[], char str2[]) {
   strcat(str1, str2); // Two string join to one to the first but second remain same
   printf("After contcatenation: %s\n", str1);
}
/*strcpy  = copy to new string */
void string_copy(char str[]) {
  char newStr[100];
  strcpy(newStr /* destination */, str /* Source */); // copy to new string
  printf("Copy String: %s\n", newStr);
}

void string_compare(char str1[], char str2[]) {
  int result = strcmp(str1, str2);
  if(result == 0) {
    printf("%s and %s are same\n", str1, str2);
  }else {
    printf("%s and %s are not same\n", str1, str2);
  }
}

void convertToUpperCase(char str[]) {
    for(int i = 0; str[i] != '\0'; i++) {
      str[i] = toupper(str[i]);
    }
    printf("After converting upper case: %s\n", str);
}

void convertToLowerCase(char str[]) {
    for(int i = 0; str[i] != '\0'; i++) {
      str[i] = tolower(str[i]);
    }
    printf("After converting lower case: %s\n", str);
}

void main() {
  char ss[] = "Dhaka";
  char pabna[] = "Pabna";
  char mixstr[] = "Pabna6 060#";
  printf("Length: %d\n",get_string_length(ss));
  reverse_string(ss);
  string_copy(ss);
  string_join(ss, pabna);
  string_compare("ABCD","XYZq");
  string_compare("ABCD","abcd");
  string_compare("ABCD","ABCD");
  convertToUpperCase(pabna);
  convertToLowerCase(mixstr);
}
