#pragma once
#include <iostream>

#if defined(NTSHENGN_DEBUG)
#define NTSHENGN_CORE_INFO(message) \
	do { \
		std::cerr << "\33[1m\33[39mCORE \33[34mINFO\33[39m\33[0m: " << message << std::endl; \
	} while(0)
#else
#define NTSHENGN_CORE_INFO(message) \
	do { \
	} while(0)
#endif

#if defined(NTSHENGN_DEBUG)
#define NTSHENGN_CORE_WARNING(message) \
	do { \
		std::cerr << "\33[1m\33[39mCORE \33[93mWARNING\33[39m\33[0m: " << message << std::endl; \
	} while(0)
#else
#define NTSHENGN_CORE_WARNING(message) \
	do { \
	} while(0)
#endif

#if defined(NTSHENGN_DEBUG)
#define NTSHENGN_CORE_ERROR(message, code) \
	do { \
		std::cerr << "\33[1m\33[39mCORE \33[31mERROR\33[39m\33[0m: " << message << " (" << #code << ")" << std::endl; \
		exit(1); \
	} while(0)
#else
#define NTSHENGN_CORE_ERROR(message, code) \
	do { \
		exit(1); \
	} while(0)
#endif

#if defined(NTSHENGN_DEBUG)
#define NTSHENGN_NETWORKING_INFO(message) \
	do { \
		std::cerr << "\33[1m\33[93mNETWORKING \33[34mINFO\33[39m\33[0m: " << message << std::endl; \
	} while(0)
#else
#define NTSHENGN_NETWORKING_INFO(message) \
	do { \
	} while(0)
#endif

#if defined(NTSHENGN_DEBUG)
#define NTSHENGN_NETWORKING_WARNING(message) \
	do { \
		std::cerr << "\33[1m\33[93mNETWORKING \33[93mWARNING\33[39m\33[0m: " << message << std::endl; \
	} while(0)
#else
#define NTSHENGN_NETWORKING_WARNING(message) \
	do { \
	} while(0)
#endif

#if defined(NTSHENGN_DEBUG)
#define NTSHENGN_NETWORKING_ERROR(message, code) \
	do { \
		std::cerr << "\33[1m\33[93mNETWORKING \33[31mERROR\33[39m\33[0m: " << message << " (" << #code << ")" << std::endl; \
		exit(1); \
	} while(0)
#else
#define NTSHENGN_NETWORKING_ERROR(message, code) \
	do { \
		exit(1); \
	} while(0)
#endif