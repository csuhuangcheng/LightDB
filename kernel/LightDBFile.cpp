//////////////////////////////////////////////////////////////////////////
//
//             _       _     ______   _     _   _________     
//            | |     | |  /  _____) | |   | | |___   ___|    
//            | |     | | |  |       | |___| |     | |      
//            | |     | | |  |  ___  |  ___  |     | |     
//            | |___  | | |  |__\  | | |   | |     | |     
//            |_____| |_|  \_______| |_|   |_|     |_|      
//     
//   filename                                                      
//   author
//   time
//   version 1.0
//////////////////////////////////////////////////////////////////////////
#include "stdafx.h"
#include "LightDBFile.h"
#include "LightTableList.h"

namespace LightDB
{
	CLightDBFile::CLightDBFile()
	{

	}

	CLightDBFile::CLightDBFile(const char* pFile)
	{

	}

	CLightDBFile::~CLightDBFile()
	{

	}

	//////////////////////////////////////////////////////////////////////////
	bool CLightDBFile::Create(const char *pFile,long iSize /* = LGIHTDB_DEFAULT_FILE_SIZE */)
	{
		return false;
	}

	bool CLightDBFile::ReadFile(const char* pFile) const
	{
		return false;
	}

	void CLightDBFile::SetSize(long iSize)
	{

	}

	long CLightDBFile::GetSize()
	{
		return false;
	}

	CLightTableList* CLightDBFile::GetTables()
	{
		return false;
	}

	bool CLightDBFile::Rebuild()
	{
		return false;
	}
	
}//end namespace LightDB