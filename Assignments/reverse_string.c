#include <stdio.h>

char *reverse(char *str); //function takes a pointer to a character (a string) and returns a pointer to a character (the reversed string)

int main(int argc, char* argv[])
{
    char word[] = "Happy Birthday!";
    printf("%s\n", word);
    reverse(word);
    printf("%s\n", word);
    printf("%s\n", reverse(word));
    printf("%s\n", word);
    return 0;
}

char *reverse(char *str)
{ 
//calculate length of string instead of using 'strlen' function
int length = 0;

while (str[length] != '\0') //loop through each character in the string until the null terminator
    {
    length++; //increment the length variable for each character in the string
    }
 
for (int i = 0; i < length / 2; i++) //"i = 0" is the first character at index 0, only need to do "length/2" iterarations
    {
    char temp = str[i]; //current character at index 'i' is stored in the temporary variable 'temp' 
    str[i] = str[length - 1 - i]; //the character at index i is replaced with the character at at index length - 1 - i 
    str[length - 1 - i] = temp; //character at the end position (length - 1 - i) is replaced with the character stored in temp at index i
    }

return str;
}