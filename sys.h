#include "lib.h"

#define SHELLEXECUTE ShellExecute
#define fp fPrint
#define s system

void fPrint(string text)
{
	cout << text << endl;
}

void WOpenLink(LPCSTR link)
{
	SHELLEXECUTE(NULL, "Open", link, NULL, NULL, SW_SHOWNORMAL);
}
int detect()
{
	system("pidof java");
	return 1;
}
void executeBat(const char* bat)
{
	system(bat);
}
void vsc_write(string dir)
{
	ofstream archivo;
	archivo.open("install_vsc.bat", ios::out);
	if (archivo.fail())
	{
		fp("can't open the file");
		exit(1);
	}

	// put all commands in archive

	string sl = "C:\\Users\\" + dir + "\\Downloads";

	archivo << "echo off" << endl;
	s("cls");
	archivo << "#" << endl;
	archivo << "#Auto-generated from DownloaderCpp" << endl;
	archivo << "#Author: neopkr" << endl;
	archivo << "#" << endl;
	archivo << "title vsc_installer()" << endl;
	archivo << "cd " + sl << endl;
	archivo << "cls" << endl;
	archivo << "echo Open setup: Visual Studio Code x64 v1.53.2 [Last Stable Update, February 2021]" << endl;
	archivo << "VSCodeUserSetup-x64-1.53.2.exe" << endl;
	archivo << "exit" << endl;

	archivo.close();
}
void py_write(string dir)
{
	ofstream archivo;
	archivo.open("install_py.bat", ios::out);
	if (archivo.fail())
	{
		fp("can't open the file");
		exit(1);
	}

	// put all commands in archive

	string sl = "C:\\Users\\" + dir + "\\Downloads";

	archivo << "echo off" << endl;
	archivo << "#" << endl;
	archivo << "#Auto-generated from DownloaderCpp" << endl;
	archivo << "#Author: neopkr" << endl;
	archivo << "#" << endl;
	s("cls");
	archivo << "title py_installer()" << endl;
	archivo << "cd " + sl << endl;
	archivo << "cls" << endl;
	archivo << "echo Open Setup: python-3.9.2-amd64.exe" << endl;
	archivo << "echo Recommend: check 'Add Python 3.9.2 to PATH'" << endl;
	archivo << "echo Recommend 2: When the install finalized, click on" << endl;
	archivo << "echo 'Disable path lenght limit'" << endl;
	archivo << "echo For Python has a special configuration if u want to install good with PATH" << endl;
	archivo << "echo read the README.md in GitHub repository for the guide" << endl;
	archivo << "python-3.9.2-amd64.exe" << endl;
	archivo << "exit" << endl;
	archivo << "" << endl;

	archivo.close();
}
void mingw_write(string dir)
{
	ofstream archivo;
	archivo.open("install_mingw.bat", ios::out);
	if (archivo.fail())
	{
		fp("can't open the file");
		exit(1);
	}

	// put all commands in archive

	string sl = "C:\\Users\\" + dir + "\\Downloads";

	archivo << "echo off" << endl;
	s("cls");
	archivo << "#" << endl;
	archivo << "#Auto-generated from DownloaderCpp" << endl;
	archivo << "#Author: neopkr" << endl;
	archivo << "#" << endl;
	archivo << "title mingw_installer()" << endl;
	archivo << "cd " + sl << endl;
	archivo << "cls" << endl;
	archivo << "echo Open setup: MinGW/G++" << endl;
	archivo << "mingw-get-setup.exe" << endl;
	archivo << "exit" << endl;

	archivo.close();
}
void nodejs_write(string dir)
{
	ofstream archivo;
	archivo.open("install_nodejs.bat", ios::out);
	if (archivo.fail())
	{
		fp("can't open the file");
		exit(1);
	}

	// put all commands in archive

	string sl = "C:\\Users\\" + dir + "\\Downloads";

	archivo << "echo off" << endl;
	s("cls");
	archivo << "#" << endl;
	archivo << "#Auto-generated from DownloaderCpp" << endl;
	archivo << "#Author: neopkr" << endl;
	archivo << "#" << endl;
	archivo << "title nodejs_installer()" << endl;
	archivo << "cd " + sl << endl;
	archivo << "cls" << endl;
	archivo << "echo Open setup: NodeJS [14.16.0 LTS]" << endl;
	archivo << "node.v14.16.0-x64.msi" << endl;
	archivo << "exit" << endl;

	archivo.close();
}
void vs2019_write(string dir)
{
	ofstream archivo;
	archivo.open("install_vs2019.bat", ios::out);
	if (archivo.fail())
	{
		fp("can't open the file");
		exit(1);
	}

	// put all commands in archive

	string sl = "C:\\Users\\" + dir + "\\Downloads";

	archivo << "echo off" << endl;
	s("cls");
	archivo << "#" << endl;
	archivo << "#Auto-generated from DownloaderCpp" << endl;
	archivo << "#Author: neopkr" << endl;
	archivo << "#" << endl;
	archivo << "title vs2019_installer()" << endl;
	archivo << "cd " + sl << endl;
	archivo << "cls" << endl;
	archivo << "echo Open setup: Visual Studio 2019 [Community Version]" << endl;
	archivo << "vs_community__1984774671.1612046292.exe" << endl;
	archivo << "exit" << endl;

	archivo.close();
}