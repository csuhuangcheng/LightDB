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
	class CDBHead;
	class CDBTableList;
	class CLightDBFile
	{
		public:
			CLightDBFile();
			CLightDBFile(const char* pFile);
			~CLightDBFile();
		
		public:
			bool ReadFile(const char* pFile) const;

			CDBTableList* GetDatasets();

			CDBHead* GetHead();

			static bool Rebuild();
			
		private:
			CDBTableList *m_pArrDataset;
			
	}
	
}//end namespace LightDB