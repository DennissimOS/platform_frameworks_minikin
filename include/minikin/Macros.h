/*
 * Copyright (C) 2014 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef MINIKIN_MACROS_H
#define MINIKIN_MACROS_H

#define PREVENT_COPY_AND_ASSIGN(Type) \
    Type(const Type&) = delete;       \
    Type& operator=(const Type&) = delete

#define PREVENT_COPY_ASSIGN_AND_MOVE(Type) \
    Type(const Type&) = delete;            \
    Type& operator=(const Type&) = delete; \
    Type(Type&&) = delete;                 \
    Type& operator=(Type&&) = delete
#endif  // MINIKIN_MACROS_H
