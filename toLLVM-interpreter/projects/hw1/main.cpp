#include <iostream>
#include <stdio.h>
#include <string>
#include <fstream>
#include <cstring>
#include <vector>
#include <cctype>

using namespace std;

int main(int argc, char** argv) {
	if (argc == 1) {
		cerr << "you should provide statement file " << endl;
	} 
	else if (argc == 2) {
		string input_file_name = argv[1];
		ifstream infile(argv[1]);
		string outname = input_file_name.substr(0,input_file_name.find("."));
		outname.append(".ll");
		ofstream outfile(outname.c_str());
 	
 	string line;
	getline(infile,line);
        outfile<<line;

    tokenizer(line,tokenized);



	}


	return 0;
}/*
class Parser{
public:
void Parser::tokenizer(string &line, vector<string> tokenized){

strcpy(linecopy, line);  // copy the given expression to expr
	        p = linecopy;
	while(*p!='\0'){
		gettoken();
		tokenized.push(token);
	}



}
private:
 	 char *p;
     char token[];
     char linecopy[];

     TOKENTYPE ttype;
     enum TOKENTYPE {NOTHING = -1,  NUMBER, VARIABLE,OTHERS};
     void gettoken(){

    	    ttype = NOTHING;
    	     char* t;           // points to a character in token
    	     t = token;         // let t point to the first character in token
    	     *t = '\0';         // set token empty
    	     while (*p == ' ' || *p == '\t')     // space or tab
    	     {
    	         p++;
    	     }

    	     // check for end of expression
    	     if (*p == '\0')
    	     {
    	         // token is still empty
    	         token_type = DELIMETER;
    	         return;
    	     }

    	     // check for minus
    	     if (*e == '-')
    	     {
    	         token_type = DELIMETER;
    	         *t = *e;
    	         e++;
    	         t++;
    	         *t = '\0';  // add a null character at the end of token
    	         return;
    	     }

    	     // check for parentheses
    	     if (*e == '(' || *e == ')')
    	     {
    	         token_type = DELIMETER;
    	         *t = *e;
    	         e++;
    	         t++;
    	         *t = '\0';
    	         return;
    	     }

    	     // check for operators (delimeters)
    	     if (isDelimeter(*e))
    	     {
    	         token_type = DELIMETER;
    	         while (isDelimeter(*e))
    	         {
    	             *t = *e;
    	             e++;
    	             t++;
    	         }
    	         *t = '\0';  // add a null character at the end of token
    	         return;
    	     }

    	     // check for a value
    	     if (isDigitDot(*e))
    	     {
    	         token_type = NUMBER;
    	         while (isDigitDot(*e))
    	         {
    	             *t = *e;
    	             e++;
    	             t++;
    	         }

    	         // check for scientific notation like "2.3e-4" or "1.23e50"
    	         if (toupper(*e) == 'E')
    	         {
    	             *t = *e;
    	             e++;
    	             t++;

    	             if (*e == '+' || *e == '-')
    	             {
    	                 *t = *e;
    	                 e++;
    	                 t++;
    	             }

    	             while (isDigit(*e))
    	             {
    	                 *t = *e;
    	                 e++;
    	                 t++;
    	             }
    	         }

    	         *t = '\0';
    	         return;
    	     }

     }





bool isMinus(const char c)
{
   if(c=='-')
	   return true;
   else
	   return false;

}
};
*/

/*
 * checks if the given char c is whitespace
 * whitespace when space chr(32) or tab chr(9)
 *//*
bool isWhiteSpace(const char c)
{
    if (c == ' ')
        return true;
    else
    	return false;// space or tab
}
*/
/*
 * checks if the given char c is a delimeter
 * minus is checked apart, can be unary minus
 *//*
bool isDelimeter(const char c)
{
    if (c ==('('|')'|'='|'+'|'-'|'%'|'*'))
    	return true;
    else
    	 return false;
}
bool isNumorLetter(const char c){
	if(isalpha(c)||isdigit(c))
		return true;
	else
		return false;
}
*/

