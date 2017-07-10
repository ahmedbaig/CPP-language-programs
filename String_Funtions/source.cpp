#include <stdio.h>
#include <iostream>
#include <string>
#include <string.h>
#include <cstdio>

using namespace std;
void start();
void strcat();
void strchr();
void strcpy();
void strlen();
void strstr();
void strncpy();
void strspn();
void strcmp();
void strpbrk();
void strncmp();

void start(){

	strcat();
	strcpy();
	strncpy();
	strcmp();
	strncmp();
	strlen();
	strstr();
	strspn();
	strchr();
	strpbrk();
}

void strcat(){
	
	/* strcat example */
	cout << "\n===strcat===" << endl;
  char str[80];
  strcpy (str,"these ");
  strcat (str,"strings ");
  strcat (str,"are ");
  strcat (str,"concatenated.");
  cout << str;
}
void strchr(){
		/* strchr example */
	char str1[]="The Quick brown fox jumped over the lazy dog", w;
	char * search;
	cout << "\n\n===strchr==="<<endl;
	cout << "Enter the letter you want found in this sentence : \n\nDummy text : The Quick brown fox jumped over the lazy dog" << endl;
	cin >> w;
	search=strchr(str1,w);
	while (search != 0){
		cout << "Letter found at : " << search-str1+1 << endl;
		search=strchr(search+1,w);
	}
}
void strcpy(){
	/* strcpy example */
	cout << "\n\n===strcpy==="<<endl;
  char s[]="Sample string";
  char s1[20];
  char s2[20];
  strcpy (s1,s);
  strcpy (s2,"copy successful");
  cout << "string 1:" << s << "\nstrring 2:" << s1 << "\nstring 3:" << s2 << endl;
}
void strlen(){
	/* strlen example */
	cout << "\n===strlen==="<<endl;
  char size[256];
  cout << "Enter anything you want : ";
  cin >> size;
  cout << "The sentence you entered is : " << strlen(size) << endl;
}
void strstr(){
	/* strstr example */
	cout << "\n===strstr==="<<endl;
  char r[] ="This is a simple string";
  char re[10], re1[10];
  char * replace;
  int length;
  cout << r << endl;
  cout << "Enter the word you want to replace : ";
  cin >> re;
  cout << "Enter the word you want to replace it with :";
  cin >> re1;
  length = strlen (re1);
  replace = strstr (r, re);
  strncpy (replace, re1, length);
  cout << r << endl;
 
}
void strncpy(){
	/* strncpy example */
	cout << "\n===strncpy==="<<endl;
	char ncopy[]= "Hi there! This is a sample text";
  	char ncopy1[40];
  	int num;
	cout << ncopy << endl;
	cout << "Limit this sentence to what part you want to view [numbers only]: ";
	cin >> num;
	
  	strncpy ( ncopy1, ncopy, num );
  	ncopy1[num] = '\0';   /* null character manually added */

 	cout << ncopy1 << endl;
}
void strspn(){
	
	/* strspn example */
	cout << "\n===strspn==="<<endl;
	  int i;
	  char strtext[100];
	  char cset[] = "1234567890";
		cout << "Enter your phone number with dashes : ";
		cin >> strtext;
	  i = strspn (strtext,cset);
	  cout << "The initial number has " << i << " digits.\n" ;
}
void strcmp(){
	
	/* strcmp example */
	cout << "\n===strcmp==="<<endl;
	char key[] = "apple";
  	char answer[80];
  do {
     cout << "Guess my favorite fruit? ";
     cin >> answer;
  } while (strcmp (key,answer) != 0);
  cout << "Correct answer!" << endl;
}
void strpbrk(){
	
	/* strpbrk example */
	cout << "\n===strpbrk==="<<endl;
  char str[100];
  char key[] = "aeiou";
  char * search;
  cout << "Enter any and I will find vowels in it :" << endl;
  cin >> str;
  cout << "Vowels in '" << str << "'are :" << endl;
  search = strpbrk (str, key);
  while (search != 0)
  {
    cout << *search << endl;
    search = strpbrk (search+1,key);
  }
  cout << endl;
}
void strncmp(){
	
	/* strncmp example */
	cout << "\n===strncmp==="<<endl;
	char str[][5] = { "R2D2" , "C3PO" , "R2A6" };
  int n;
  puts ("Looking for R2 astromech droids...");
  for (n=0 ; n<3 ; n++)
    if (strncmp (str[n],"R2",2) == 0)
    {
      printf ("found %s\n",str[n]);
    }
}
int main ()
{
   start();
	return 0;
}
