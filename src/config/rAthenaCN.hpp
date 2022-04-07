// Copyright (c) rAthena Dev Teams - Licensed under GNU GPL
// For more information, see LICENCE in the main folder

#ifndef _RATHENA_CN_CONFIG_H_
#define _RATHENA_CN_CONFIG_H_

#include "renewal.hpp"
#include "packets.hpp"

#define rAthenaCN

#ifdef rAthenaCN
	#define rAthenaCN_Basic
#endif // rAthenaCN

#ifdef rAthenaCN_Basic
	// 定义 rAthenaCN 的版本号
	#define rAthenaCN_Version "v1.0.0"

	// 在启动时显示 rAthenaCN 的 LOGO
	#define rAthenaCN_Show_Logo

	// 在启动时显示免责声明
	#define rAthenaCN_Disclaimer

	// 在启动时显示 rAthenaCN 的版本号
	#define rAthenaCN_Show_Version
#endif // rAthenaCN_Basic


#endif // _RATHENA_CN_CONFIG_H_
