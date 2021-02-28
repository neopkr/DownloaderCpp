#include "lib.h"

#define openFile ExecuteFileFromDownload
#pragma warning(disable : 4996)
FILE* archivo;

void ExecuteFileFromDownload(const char* _fileName)
{
	errno_t err;

	const char* dir = "C:\0Download";
	const char* dirInstall = "installs/open.bat";

	if ((err = fopen_s(&archivo, dirInstall, "r")) != NULL)
	{
		fprintf(stderr, "cannot open file '%s' : %s\n",
			dir, strerror(err));
	}
	else
	{
		Sleep(800);
		fclose(archivo);
	}
}