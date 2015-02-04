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
	enum EnumLightFieldType
	{
		enum_lightfield_short = 0x001,
		enum_lightfield_int = 0x001,
		enum_lightfield_double = 0x001,
		enum_lightfield_float = 0x001,
		enum_lightfield_string = 0x001,
	};
	
}//end namespace LightDB