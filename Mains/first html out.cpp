#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void writeHTMLFile(ostream& outStream, string innerHTML){
  outStream << "<!DOCTYPE html>" << endl;
  outStream << "<html>" << endl;
  outStream << "  <body>" << endl;
  outStream << "    <p>" << innerHTML << "</p>" << endl;
  outStream << "  </body>" << endl;
  outStream << "</html>" << endl;
}

int main() {
  string htmlParagraph = "Hello <b>HTML</b> world!";

  ofstream outFS;
  outFS.open("simple.html");

  if(!outFS.is_open()){
    cout << "Could not oepn file simple.html." << endl;
    return 1;
  }

  writeHTMLFile(outFS, htmlParagraph);
  outFS.close();

  writeHTMLFile(cout, htmlParagraph);
  return 0;
}
