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
// File Name: types.h
// Date File Created: 10/28/2022
// Author: Matt
//
// ------------------------------------------------------------------------------

#ifndef EMBERENGINE_EMBER_SRC_EMBER_CORE_TYPES_H
#define EMBERENGINE_EMBER_SRC_EMBER_CORE_TYPES_H

#include <cstdint>

using u8  = uint8_t;
using u16 = uint16_t;
using u32 = uint32_t;
using u64 = uint64_t;

using s8  = int8_t;
using s16 = int16_t;
using s32 = int32_t;
using s64 = int64_t;

using f32 = float;
using f64 = double;

using byte = u8;
using b8   = s8;
using b32  = s32;

constexpr u8  invalid_idu8  = 0xffui8;
constexpr u16 invalid_idu16 = 0xffffui16;
constexpr u32 invalid_idu32 = 0xffff'ffffui32;
constexpr u64 invalid_idu64 = 0xffff'ffff'ffff'ffffui64;

#endif //EMBERENGINE_EMBER_SRC_EMBER_CORE_TYPES_H
