// ------------------------------------------------------------------------------
//
// EmberEngine
//    Copyright 2022 Matthew Rogers
//
//    Licensed under the Apache License, Version 2.0 (the "License");
//    you may not use this file except in compliance with the License.
//    You may obtain a copy of the License at
//
//        http://www.apache.org/licenses/LICENSE-2.0
//
//    Unless required by applicable law or agreed to in writing, software
//    distributed under the License is distributed on an "AS IS" BASIS,
//    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//    See the License for the specific language governing permissions and
//    limitations under the License.
//
// File Name: ember.h
// Date File Created: 10/28/2022
// Author: Matt
//
// ------------------------------------------------------------------------------

#ifndef EMBERENGINE_EMBER_SRC_EMBER_EMBER_H
#define EMBERENGINE_EMBER_SRC_EMBER_EMBER_H

#include <cstdint>

typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;

typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
typedef int64_t s64;

typedef float f32;
typedef double f64;

typedef s8 b8;
typedef s32 b32;
typedef u8 byte;

#if defined(__clang__) || defined(__gcc__)
#define STATIC_ASSERT _Static_assert
#else
#define STATIC_ASSERT static_assert
#endif

// Platform detection
#if defined(WIN32) || defined(_WIN32) || defined(__WIN32__)
#define EPLATFORM_WINDOWS 1
#ifndef _WIN64
#error "64-bit is required on Windows!"
#endif
#elif defined(__linux__) || defined(__gnu_linux__)
// Linux OS
#define EPLATFORM_LINUX 1
#if defined(__ANDROID__)
#define EPLATFORM_ANDROID 1
#endif
#elif defined(__unix__)
    // Catch anything not caught by the above.
#define EPLATFORM_UNIX 1
#elif defined(_POSIX_VERSION)
    // Posix
#define EPLATFORM_POSIX 1
#elif __APPLE__
    // Apple platforms
#define EPLATFORM_APPLE 1
#include <TargetConditionals.h>
#if TARGET_IPHONE_SIMULATOR
        // iOS Simulator
#define EPLATFORM_IOS 1
#define EPLATFORM_IOS_SIMULATOR 1
#elif TARGET_OS_IPHONE
#define EPLATFORM_IOS 1
    // iOS device
#elif TARGET_OS_MAC
    // Other kinds of Mac OS
#else
#error "Unknown Apple platform"
#endif
#else
#error "Unknown platform!"
#endif

#ifdef EMBER_EXPORT
// Exports
#ifdef _MSC_VER
#define EAPI __declspec(dllexport)
#else
#define EAPI __attribute__((visibility("default")))
#endif
#else
// Imports
#ifdef _MSC_VER
#define EAPI __declspec(dllimport)
#else
#define EAPI
#endif
#endif

namespace ember {
EAPI void init();
}

#endif //EMBERENGINE_EMBER_SRC_EMBER_EMBER_H
