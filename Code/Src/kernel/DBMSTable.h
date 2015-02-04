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

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

namespace LightDB
{
	class CDBMSTable : public CLightTable
	{
	public:
		CDBMSTable();
		virtual ~CDBMSTable();

	public:
		virtual EnumTableType GetTableType();

		virtual void SetTableType(EnumTableType type);
	
		virtual void SetFields(CLightFieldList *pFieldList);
		
		virtual CLightFieldList* GetFields();
		
		virtual void AddField(CLightField *pField);
		
		virtual void InsertField(CLightField *pField);
		
		virtual CLightField *GetField(int index);
		
		virtual void DeleteField(int index);
		
		virtual void SetValues(CLightValueList *pVauleList);
		
		virtual CLightValueList* GetVaules();
		
		virtual void AddValue(CLightValue *pVaule);
		
		virtual CLightValue* GetValue(int index);
		
		virtual void DeleteValue(int index);
	}

}//end namespace LightDB