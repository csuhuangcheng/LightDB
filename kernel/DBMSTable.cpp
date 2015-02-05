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
#include "DBMSTable.h"

namespace LightDB
{
	CDBMSTable::CDBMSTable()
	{

	}

	CDBMSTable::~CDBMSTable()
	{

	}

	//////////////////////////////////////////////////////////////////////////
	EnumTableType CDBMSTable::GetTableType()
	{
		return enum_tabletype_normal;
	}

	void CDBMSTable::SetTableType(EnumTableType type)
	{

	}

	void CDBMSTable::SetFields(CLightFieldList *pFieldList)
	{

	}

	CLightFieldList* CDBMSTable::GetFields()
	{
		return NULL;
	}

	void CDBMSTable::AddField(CLightField *pField)
	{

	}

	void CDBMSTable::InsertField(CLightField *pField)
	{

	}

	CLightField* CDBMSTable::GetField(int index)
	{
		return NULL;
	}

	void CDBMSTable::DeleteField(int index)
	{

	}

	void CDBMSTable::SetValues(CLightValueList *pVauleList)
	{

	}

	CLightValueList* CDBMSTable::GetVaules()
	{
		return NULL;
	}

	void CDBMSTable::AddValue(CLightValue *pVaule)
	{

	}

	CLightValue* CDBMSTable::GetValue(int index)
	{
		return NULL;
	}

	void CDBMSTable::DeleteValue(int index)
	{

	}
}//end namespace LightDB