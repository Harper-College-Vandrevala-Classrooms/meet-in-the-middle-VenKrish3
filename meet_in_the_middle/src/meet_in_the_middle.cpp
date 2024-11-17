/*
 * meet_in_the_middle.cpp
 *
 *  Created on: Nov 7, 2024
 *      Author: Turbo
 */

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void middleMan(string fileName)
{
//	ifstream fileOpen(fileName);
//	if(!fileOpen.is_open())
//	{
//		cout << "error, file does not exist or cannot open" << endl;
//	}
//	else
//	{
		string file = fileName;
//		getline(fileOpen,file);];
		string temp;
		bool comma = true;
		for(int i = (int)(file.length()-4)/2; i > 0 && comma; i--)
		{
			if(file[i] != ',')
				{
					temp += file[i];
					if(file[i-1] == ',')
					{
						comma = false;
					}
				}
		}

		cout << file.length() << endl;
		cout << "the middle of the dataset is " << temp;
	}
//}


int main()
{
//	string fileName;
//	cout << "please enter file name :";
//	cin >> fileName;

	middleMan("1,2,6,8,9,11,27,45,71,90,104");
}



