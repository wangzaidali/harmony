/* Copyright 1991, 2005 The Apache Software Foundation or its licensors, as applicable
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *     http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#if !defined(priority_h)
#define priority_h
#include "thrdsup.h"
void initialize_priority_map PROTOTYPE ((void));
void initialize_priority_range
PROTOTYPE ((int range_start, int range_end, int policy));
void initialize_thread_priority PROTOTYPE ((hythread_t thread));
IDATA set_pthread_priority PROTOTYPE ((pthread_t handle, IDATA priority));
#endif /* priority_h */