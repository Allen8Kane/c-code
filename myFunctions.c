#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "myFunctions.h"

void getName()
{
  printf("What's your name ?\n");
  char name[20];
  scanf("%s", name);
  if (strcmp(name, "Allen") == 0)
  {
    printf("Hello King");
  }
  else
  {
    printf("Hello %s", name);
  }
}

bool isPalindrome(char word[])
{
  const int length = strlen(word);
  char w[255]; // Спецификация C запрещяет использовать переменные в качестве размера массива, так что lenght я не могу использовать
  strcpy(w,word);
  toLowerCase(w);
  for (int i = 0, j = length - 1; i < (length / 2), j >= (length / 2); i++, j--)
  {
    if (w[i] != w[j])
    {
      return false;
    }
  }
  return true;
}

void toLowerCase(char word[])
{
  for (int i = 0; i < strlen(word); i++)
  {
    if (word[i] >= 65 && word[i] <= 90)
    {
      word[i] = word[i] + 32;// можно и через функцию tolower() 
    }
    else
    {
      word[i] = word[i];
    }
  }
}

void toUpperCase(char word[])
{
  for (int i = 0; i < strlen(word); i++)
  {
    if (word[i] >= 97 && word[i] <= 122)
    {
      word[i] = word[i] - 32; // можно и через функцию toupper()
    }
    else
    {
      word[i] = word[i];
    }
  }
}