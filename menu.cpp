#include "lib.h"
#include "sys.h"
#include "OpenArchive.h"
#define INFO_BUFFER_SIZE 16384


bool file_exist(const std::string& name)
{
	std::ifstream f(name.c_str());
	return f.good();
}

bool findConfigFile(std::string& configFile)
{
	std::list<string> paths = { "VSCodeUserSetup-x64-1.53.2.exe", "\installs\VSCodeUserSetup-x64-1.53.2.exe", "C:\0"};
	for (auto p : paths)
	{
		if (file_exist(p) == 1)
		{
			configFile = p;
			return true;
		}
	}
	return false;
}

void onMenu()
{
	TCHAR  infoBuf[INFO_BUFFER_SIZE];
	DWORD  bufCharCount = INFO_BUFFER_SIZE;
	if (!GetUserName(infoBuf, &bufCharCount))
		cout << (TEXT("GetUserName"));
	system("cls");
	menu:
	int select;
	fPrint("Welcome to DownloaderCpp");
	fPrint("Select what program do you want: ");
	fPrint("1.- Visual Studio Code");
	fPrint("2.- Python");
	fPrint("3.- Java and JDK (Not working yet, read the README for more details)");
	fPrint("4.- G++ / MinGW (Compiler C/C++)");
	fPrint("5.- NodeJS");
	fPrint("6.- Visual Studio 2019");
	fp("7.- Introduction / How to Use");
	fp("8.- GitHub Repository (for changes and updates)");
	fp("");
	fp("0- Exit");
	cin >> select;
	
	switch (select)
	{
	case 0:
		exit(1);
	case 1:
		system("cls");
		fPrint("Downloading Visual Studio Code x64 v1.53.2 [Last Stable Update, February 2021]");
		WOpenLink("https://az764295.vo.msecnd.net/stable/622cb03f7e070a9670c94bae1a45d78d7181fbd4/VSCodeUserSetup-x64-1.53.2.exe");
		fp("Download has begin!");
		fp("");
		fp("The program will freeze 10 seconds, please don't close");
		Sleep(10000);
		vsc_write(infoBuf);
		executeBat("install_vsc.bat");
		s("cls");
		goto menu;
		break;
	case 2:
		system("cls");
		fp("Downloading Python 3.9.2 [Last Stable Build, February, 19, 2021]");
		WOpenLink("https://www.python.org/ftp/python/3.9.2/python-3.9.2-amd64.exe");
		fp("Download has begin!");
		fp("");
		fp("The program will freeze 10 seconds, please don't close");
		Sleep(10000);
		py_write(infoBuf);
		executeBat("install_py.bat");
		s("cls");
		goto menu;
		break;
	case 3:
		system("cls");
		detect();
		if (detect() == 0)
		{
			fp("You alredy have Java");
		}
		break;
	case 4:
		system("cls");
		fp("Downloading MinGW/G++ [2013 setup]");
		WOpenLink("https://razaoinfo.dl.sourceforge.net/project/mingw/Installer/mingw-get-setup.exe");
		fp("Download has begin!");
		fp("");
		fp("The program will freeze 10 seconds, please don't close the program");
		Sleep(10000);
		mingw_write(infoBuf);
		executeBat("install_mingw.bat");
		s("cls");
		goto menu;
		break;
	case 5:
		system("cls");
		fp("Downloading NodeJS [14.16.0 LTS]");
		WOpenLink("https://nodejs.org/dist/v14.16.0/node-v14.16.0-x64.msi");
		fp("Download has begin!");
		fp("");
		fp("The program will freeze 10 seconds, please don't close the program");
		Sleep(10000);
		nodejs_write(infoBuf);
		executeBat("install_nodejs.bat");
		s("cls");
		goto menu;
		break;
	case 6:
		system("cls");
		fp("Downloading Visual Studio 2019 [Community Version]");
		WOpenLink("blob:https://visualstudio.microsoft.com/b7a7dc27-d737-4283-be96-916857dc3180");
		fp("Download has begin!");
		fp("");
		fp("The program will freeze 10 seconds, please don't close the program");
		Sleep(10000);
		vs2019_write(infoBuf);
		executeBat("install_vs2019.bat");
		s("cls");
		goto menu;
		break;
	case 7:
		WOpenLink("https://github.com/neopkr/DownloaderCpp#how-to-use--introduction");
		goto menu;
		break;
	case 8:
		WOpenLink("https://github.com/neopkr/DownloaderCpp");
		goto menu;
		break;
	case 99: //Use only for debugs, test functions
		vsc_write(infoBuf);
		py_write(infoBuf);
		mingw_write(infoBuf);
		nodejs_write(infoBuf);
		vs2019_write(infoBuf);
		break;
	}
}