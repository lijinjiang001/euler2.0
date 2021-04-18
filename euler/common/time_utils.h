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


#ifndef EULER_COMMON_TIME_UTILS_H_
#define EULER_COMMON_TIME_UTILS_H_

#include <sys/time.h>
#include <time.h>
#include <cstdint>

namespace euler {

class TimeUtils {
 public:
  static uint64_t NowMicros() {
    struct timeval  tv;
    gettimeofday(&tv, NULL);
    return static_cast<uint64_t>(tv.tv_sec) * 1000000 + tv.tv_usec;
  }
};

}  // namespace euler

#endif  // EULER_COMMON_TIME_UTILS_H_
