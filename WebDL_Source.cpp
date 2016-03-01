#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h> 
#include <direct.h>
using namespace std;

int main()
{
	ofstream outputFile;
	outputFile.open("dlpage.bat");
	
	mkdir("C://Ripped/Webpages/");
	
    int a, llim, hlim, range;
    string url;
    
	cout<<"**************Default Folder :- C:\\Ripped\\**************\n\n\t***MOVE ALL THE FILES AT THIS LOCATION***"<<endl;
    cout<<"\nURL Sample - < www.google.com/page-2 >"<<endl;
    cout<<"\nRemove the dynamic number at the end of the URL.";
   
    cout<<"\n\nEnter URL :-\n"<<endl;
    cin>>url;
    
	cout<<"\nFirst Page No."<<endl;
    cin>>a;
    
	cout<<"\nRange"<<endl;
    cin>>range;
    
	for(int i=0;i<range;i++)
    	{
	        outputFile<<"wget --continue --directory-prefix=\"C:\\Ripped\\Webpages\" --html-extension --no-cookies --output-document=\"C:\\Ripped\\Webpages\\"<<a;
			outputFile<<".html\" --convert-links --user-agent=\"Mozilla/5.0 (Windows; U; Windows NT 5.1; en-US) AppleWebKit/533.4 (KHTML, like Gecko) Chrome/5.0.375.99 Safari/533.4\" \""<<url<<a<<"\""<<endl<<endl;
	        a++;
    	}
    	cout<<"\n\t\tDone!\n"<<endl;
    int choice;	
    CHOOSE: cout<<"Press 1 to Execute BATCH operation.\nPress 2 to Quit."<<endl;
    cin>>choice;
    if (choice==1)
    {
    	system("dlpage.bat");
    	cout<<"Executing BAT"<<endl;
    }
    else if (choice == 2)
    {
    	cout<<"Bye, m8";
    }
    else
    {
    	cout<<"\nCom'on!!\n"<<endl;
    	goto CHOOSE;
    }
	
	return 0;
}
