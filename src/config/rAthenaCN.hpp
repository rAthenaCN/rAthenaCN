// Copyright (c) rAthenaCN Dev Teams - Licensed under GNU GPL
// For more information, see LICENCE in the main folder

#ifndef _RATHENA_CN_CONFIG_HPP_
#define _RATHENA_CN_CONFIG_HPP_

#include "renewal.hpp"
#include "packets.hpp"

#define rAthenaCN

#ifdef rAthenaCN
	#define rAthenaCN_Basic					// rAthenaCN 基础配置
	#define rAthenaCN_NpcEvent				// rAthenaCN 触发事件
	#define rAthenaCN_function				// rAthenaCN 扩展功能
#endif // rAthenaCN

//======================================
// rAthenaCN 基础配置
//======================================
#ifdef rAthenaCN_Basic
	#define rAthenaCN_Version "v1.0.0"		// 定义 rAthenaCN 的版本号
	#define rAthenaCN_Show_Logo				// 在启动时显示 rAthenaCN 的 LOGO
	#define rAthenaCN_Disclaimer			// 在启动时显示免责声明
	#define rAthenaCN_Show_Version			// 在启动时显示 rAthenaCN 的版本号
#endif // rAthenaCN_Basic

//======================================
// rAthenaCN 触发事件
//======================================
#ifdef rAthenaCN_NpcEvent
	#define rAthenaCN_NpcEvent_KILLMVP		// 杀死 MVP 魔物时触发事件 - OnPCKillMvpEvent
#endif // rAthenaCN_NpcEvent

//======================================
// rAthenaCN 扩展功能
//======================================
#ifdef rAthenaCN_function
	#if PACKETVER >= 20151001
		#define rAthenaCN_function_BanDoram	// 是否禁止创建杜兰族角色
	#endif // PACKETVER >= 20151001
#endif // rAthenaCN_function

#endif // _RATHENA_CN_CONFIG_HPP_
