/* Copyright 2020 Alibaba Group Holding Limited. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

#include "euler/common/data_types.h"

namespace euler {
namespace common {

const float DEFAULT_FLOAT = 0;

const int32_t DEFAULT_INT32 = std::numeric_limits<int32_t>::lowest();

const int64_t DEFAULT_INT64 = std::numeric_limits<int64_t>::lowest();

const uint64_t DEFAULT_UINT64 = std::numeric_limits<uint64_t>::lowest();

const char DEFAULT_CHAR = std::numeric_limits<char>::lowest();
}  // namespace common
}  // namespace euler
