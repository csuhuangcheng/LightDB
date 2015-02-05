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
#include "LightTableList.h"
#include "LightTable.h"


namespace LightDB
{
	CLightTableList::CLightTableList()
	{

	}

	CLightTableList::CLightTableList(const CLightTableList &other)
	{

	}

	CLightTableList::~CLightTableList()
	{

	}

	//////////////////////////////////////////////////////////////////////////
	bool CLightTableList::IsEmpty()
	{
		return false;
	}

	int CLightTableList::GetSize()
	{
		return 0;
	}

	bool CLightTableList::Add(CLightTable *pField)
	{
		return false;
	}

	bool CLightTableList::Insert(int index,CLightTable *pTable)
	{
		return false;
	}

	bool CLightTableList::Remove()
	{
		return false;
	}

	bool CLightTableList::RemoveAt(int index)
	{
		return false;
	}

	CLightTable* CLightTableList::GetFirst()
	{
		return NULL;
	}

	CLightTable* CLightTableList::GetNext(CLightTable *pField)
	{
		return NULL;
	}

	CLightTable* CLightTableList::GetLast()
	{
		return NULL;
	}

	CLightTable* CLightTableList::GetAt(int index)
	{
		return NULL;
	}
}//end namespace LightDB