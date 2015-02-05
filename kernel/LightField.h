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

#include <string>
#include "LightFieldType.h"
namespace LightDB
{
	class CLightField
	{
	public:
		CLightField();
		virtual ~CLightField();

		void SetIndex(int index);

		int GetIndex();

		void SetName(const char* pName);

		char *GetName();

		void SetDesp(const char *pDesp);

		char *GetDesp();

		void SetType(EnumLightFieldType iType);

		EnumLightFieldType GetType();

		void SetSize(int iSize);

		int GetSize();

		void SetDigit(int iDigit);

		int GetDigit();
			
	private:
		int m_iIndex;

		std::string m_strName;

		std::string m_strDesp;

		EnumLightFieldType m_enumFieldType;

		int m_iSize;

		int m_iDigit;
	};
	
}//end namespace LightDB