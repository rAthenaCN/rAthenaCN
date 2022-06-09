// Copyright (c) rAthenaCN Dev Teams - Licensed under GNU GPL
// For more information, see LICENCE in the main folder

#ifndef _RATHENA_CN_CONFIG_HPP_
#define _RATHENA_CN_CONFIG_HPP_

#include "renewal.hpp"
#include "packets.hpp"

#define rAthenaCN

#ifdef rAthenaCN
	#define rAthenaCN_Basic							// rAthenaCN 基础配置
	#define rAthenaCN_NpcEvent						// rAthenaCN 触发事件
	#define rAthenaCN_Function						// rAthenaCN 扩展功能
	#define rAthenaCN_Mapflag						// rAthenaCN 地图标记
	#define rAthenaCN_AtCommand						// rAthenaCN 管理员指令
	#define rAthenaCN_ScriptCommand					// rAthenaCN 脚本指令
#endif // rAthenaCN

//======================================
// rAthenaCN 基础配置
//======================================
#ifdef rAthenaCN_Basic
	#define rAthenaCN_Version "v2.0.0"				// 定义 rAthenaCN 的版本号
	#define rAthenaCN_Show_Logo						// 在启动时显示 rAthenaCN 的 LOGO
	#define rAthenaCN_Disclaimer					// 在启动时显示免责声明
	#define rAthenaCN_Show_Version					// 在启动时显示 rAthenaCN 的版本号
#endif // rAthenaCN_Basic

//======================================
// rAthenaCN 触发事件
//======================================
#ifdef rAthenaCN_NpcEvent
	#define rAthenaCN_NpcEvent_KILLMVP				// 杀死 MVP 魔物时触发事件 - OnPCKillMvpEvent
#endif // rAthenaCN_NpcEvent

//======================================
// rAthenaCN 扩展功能
//======================================
#ifdef rAthenaCN_Function
	#if PACKETVER >= 20151001
		#define rAthenaCN_Function_BanDoram			// 禁止创建杜兰族角色
	#endif // PACKETVER >= 20151001
	#define rAthenaCN_Function_MobInfo				// 显示魔物的扩展信息 (比如体型、种族、属性等)
	#define rAthenaCN_Function_MsgConf				// 扩展信息配置文件 (Msg_conf) 的 ID 最大上限
#endif // rAthenaCN_Function

//======================================
// rAthenaCN 地图标记
//======================================
#ifdef rAthenaCN_Mapflag
	#define rAthenaCN_MapFlag_NoAutoLoot			// 此标记的地图上禁止玩家使用自动拾取功能
#endif // rAthenaCN_Mapflag

//======================================
// rAthenaCN 管理员指令
//======================================
#ifdef rAthenaCN_AtCommand
	#define rAthenaCN_AtCommand_RecallMap			// 召唤当前(或指定)地图的玩家来到身边
#endif // rAthenaCN_AtCommand

//======================================
// rAthenaCN 脚本指令
//======================================
#ifdef rAthenaCN_ScriptCommand
	#define rAthenaCN_ScriptCommand_InstanceUsers	// 获取指定的副本实例中已经进入副本地图的人数
	#define rAthenaCN_ScriptCommand_MobRemove		// 依据 GID 移除一个魔物单位 (仅仅移除魔物, 并非使其死亡)
#endif // rAthenaCN_ScriptCommand


#endif // _RATHENA_CN_CONFIG_HPP_
