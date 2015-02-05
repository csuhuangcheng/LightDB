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
#include "LightFieldList.h"
#include "LightField.h"

namespace LightDB
{
	CLightFieldList::CLightFieldList()
	{

	}

	CLightFieldList::CLightFieldList(const CLightFieldList &other)
	{

	}

	CLightFieldList::~CLightFieldList()
	{

	}

	//////////////////////////////////////////////////////////////////////////
	bool CLightFieldList::IsEmpty()
	{
		return false;
	}

	int CLightFieldList::GetSize()
	{
		return 0;
	}

	bool CLightFieldList::Add(CLightField *pField)
	{
		return false;
	}

	bool CLightFieldList::Insert(CLightField *pField)
	{
		return false;
	}

	bool CLightFieldList::Remove()
	{
		return false;
	}

	bool CLightFieldList::RemoveAt(int index)
	{
		return false;
	}

	CLightField* CLightFieldList::GetFirst()
	{
		return NULL;
	}

	CLightField* CLightFieldList::GetNext(CLightField *pField)
	{
		return NULL;
	}

	CLightField* CLightFieldList::GetLast()
	{
		return NULL;
	}

	CLightField* CLightFieldList::GetAt(int index)
	{
		return NULL;
	}
}//end namespace LightDB