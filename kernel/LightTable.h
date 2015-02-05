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
	enum EnumTableType
	{
		enum_tabletype_normal  = 0x001,
		enum_tabletype_spatial = 0x002,
	};
	
	class CLightFieldList;
	class CLightField;
	class CLightValueList;
	class CLightValue;

	class CLightTable
	{
	public:
		virtual EnumTableType GetTableType() = 0;
		
		virtual void SetTableType(EnumTableType type) = 0;
		
		virtual void SetFields(CLightFieldList *pFieldList) = 0;
		
		virtual CLightFieldList* GetFields() = 0;
		
		virtual void AddField(CLightField *pField) = 0;
		
		virtual void InsertField(CLightField *pField) = 0;
		
		virtual CLightField *GetField(int index) = 0;
		
		virtual void DeleteField(int index) = 0;
		
		virtual void SetValues(CLightValueList *pVauleList) = 0;
		
		virtual CLightValueList* GetVaules() = 0;
		
		virtual void AddValue(CLightValue *pVaule) = 0;
		
		virtual CLightValue* GetValue(int index) = 0;
		
		virtual void DeleteValue(int index) = 0;
	};
	
}//end namespace LightDB