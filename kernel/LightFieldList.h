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
	class CLightField;
	class CLightFieldList
	{
	public:
		CLightFieldList();

		virtual ~CLightFieldList();

		CLightFieldList(const CLightFieldList &other);

		CLightFieldList & operator = (const CLightFieldList& other);

	public:
		bool IsEmpty();

		int GetSize();

		bool Add(CLightField *pField);

		bool Insert(CLightField *pField);

		bool Remove();

		bool RemoveAt(int index);

		CLightField *GetFirst();

		CLightField *GetNext(CLightField *pField);

		CLightField *GetLast();

		CLightField *GetAt(int index);	
	};
	
}//end namespace LightDB