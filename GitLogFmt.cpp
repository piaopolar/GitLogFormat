#include <cstdio>
#include <string>

// ============================================================================
// ==============================================================================

int main(int argc, char *argv[])
{
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	const char *pszFile = argv[1];
	FILE *pFile = fopen(pszFile, "r");
	std::string strFile = pszFile;
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

	strFile += ".log";

	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	FILE *pFileOut = fopen(strFile.c_str(), "w");
	char szBuff[1024];
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

	while (fgets(szBuff, sizeof(szBuff), pFile)) {
		fprintf(pFileOut, "%s", szBuff);
	}

	fclose(pFileOut);
	fclose(pFile);
	return 0;
}
