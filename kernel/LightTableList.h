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
	class CLightTable;
	class CLightTableList
	{
	public:
		CLightTableList();

		virtual ~CLightTableList();

		CLightTableList(const CLightTableList &other);

		CLightTableList &operator=(const CLightTableList& other);

	public:
		bool IsEmpty();

		int GetSize();

		bool Add(CLightTable *pTable);

		bool Insert(int index,CLightTable *pTable);

		bool Remove();

		bool RemoveAt(int index);

		CLightTable *GetFirst();

		CLightTable *GetNext(CLightTable *pTable);

		CLightTable *GetLast();

		CLightTable *GetAt(int index);	
	};
	
}//end namespace LightDB