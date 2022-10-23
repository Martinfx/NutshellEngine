#pragma once
#include <iostream>

#ifdef NTSH_DEBUG
#define NTSH_CORE_INFO(message) \
	do { \
		std::cerr << "\33[1m\33[39mCORE \33[34mINFO\33[39m\33[0m: " << message << std::endl; \
	} while(0)
#else
#define NTSH_CORE_INFO(message) \
	do { \
	} while(0)
#endif

#ifdef NTSH_DEBUG
#define NTSH_CORE_WARNING(message) \
	do { \
		std::cerr << "\33[1m\33[39mCORE \33[93mWARNING\33[39m\33[0m: " << message << std::endl; \
	} while(0)
#else
#define NTSH_CORE_WARNING(message) \
	do { \
	} while(0)
#endif

#ifdef NTSH_DEBUG
#define NTSH_CORE_ERROR(message, code) \
	do { \
		std::cerr << "\33[1m\33[39mCORE \33[31mERROR\33[39m\33[0m: " << message << std::endl; \
		exit(code); \
	} while(0)
#else
#define NTSH_CORE_ERROR(message, code) \
	do { \
		exit(code); \
	} while(0)
#endif

#ifdef NTSH_DEBUG
#define NTSH_ASSET_LOADER_INFO(message) \
	do { \
		std::cerr << "\33[1m\33[94mASSET LOADER \33[34mINFO\33[39m\33[0m: " << message << std::endl; \
	} while(0)
#else
#define NTSH_ASSET_LOADER_INFO(message) \
	do { \
	} while(0)
#endif

#ifdef NTSH_DEBUG
#define NTSH_ASSET_LOADER_WARNING(message) \
	do { \
		std::cerr << "\33[1m\33[94mASSET LOADER \33[93mWARNING\33[39m\33[0m: " << message << std::endl; \
	} while(0)
#else
#define NTSH_ASSET_LOADER_WARNING(message) \
	do { \
	} while(0)
#endif

#ifdef NTSH_DEBUG
#define NTSH_ASSET_LOADER_ERROR(message, code) \
	do { \
		std::cerr << "\33[1m\33[94mASSET LOADER \33[31mERROR\33[39m\33[0m: " << message << std::endl; \
		exit(code); \
	} while(0)
#else
#define NTSH_ASSET_LOADER_ERROR(message, code) \
	do { \
		exit(code); \
	} while(0)
#endif