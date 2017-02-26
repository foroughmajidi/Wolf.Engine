/*
	Project			 : Wolf Engine. Copyright(c) Pooya Eimandar (http://PooyaEimandar.com) . All rights reserved.
	Source			 : Please direct any bug to https://github.com/PooyaEimandar/Wolf.Engine/issues
	Website			 : http://WolfSource.io
	Name			 : w_timer_callback.h
	Description		 : A timer with callback
	Comment          :
*/

#if _MSC_VER > 1000
#pragma once
#endif

#ifndef __W_TIMER_CALLBACK_H__
#define __W_TIMER_CALLBACK_H__

#include "w_timer.h"
#include <thread>

#ifdef __GNUC__
#pragma GCC visibility push(default)
#endif

namespace wolf
{
	namespace system
	{
		class w_timer_callback
		{
		public:
			w_timer_callback() {};
			~w_timer_callback() {};

			template <class T>
			void do_sync(int pIntervalMilliSeconds, T&& pFunc)
			{
				w_game_time _time;
				while (_time.get_total_seconds() * 1000 < pIntervalMilliSeconds)
				{
					_time.tick([]() {});
				}
				pFunc();
			}

			template <class T>
			void do_async(int pIntervalMilliSeconds, T&& pFunc)
			{
				std::thread  t([pIntervalMilliSeconds, pFunc]()
				{
					w_game_time _time;
					while (_time.get_total_seconds() * 1000 < pIntervalMilliSeconds)
					{
						_time.tick([]() {});
					}
					pFunc();
				});
				t.detach();
			}
		};
	}
}
#ifdef __GNUC__
#pragma GCC visibility pop
#endif

#endif //__W_TIMER_CALLBACK_H__
