/*
	Project			 : Wolf Engine. Copyright(c) Pooya Eimandar (http://PooyaEimandar.com) . All rights reserved.
	Source			 : Please direct any bug to https://github.com/PooyaEimandar/Wolf.Engine/issues
	Website			 : http://WolfSource.io
	Name			 : w_vulkan_export.h
	Description		 : Dynamic library linkage header
	Comment          : 
*/


#ifndef __W_VULKAN_EXPORT_H__
#define __W_VULKAN_EXPORT_H__

#if _MSC_VER > 1000
#pragma once
#endif

#if defined(__WIN32)

#ifndef WVK_EXP

	#ifdef __WOLF_VULKAN__
		#define WVK_EXP __declspec(dllexport)
	#else
		#define WVK_EXP __declspec(dllimport)
	#endif

#endif


#elif defined(__ANDROID) || defined(__linux) || defined(__APPLE__)

#ifndef WVK_EXP
#define WVK_EXP //dump
#endif

#endif

#endif //__W_VULKAN_EXPORT_H__
