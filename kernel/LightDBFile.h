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

#define LGIHTDB_DEFAULT_FILE_SIZE (1024*1024*2)

namespace LightDB
{
	class CLightTableList;
	class CLightDBFile
	{
		public:
			CLightDBFile();
			CLightDBFile(const char* pFile);
			~CLightDBFile();
		
		public:
			bool Create(const char *pFile,long iSize = LGIHTDB_DEFAULT_FILE_SIZE);

			bool ReadFile(const char* pFile) const;

			void SetSize(long iSize);

			long GetSize();

			CLightTableList* GetTables();

			static bool Rebuild();
	};
	
}//end namespace LightDB