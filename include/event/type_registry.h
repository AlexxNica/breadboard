// Copyright 2015 Google Inc. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef FPL_EVENT_TYPE_REGISTRY_H_
#define FPL_EVENT_TYPE_REGISTRY_H_

#include "event/type.h"

namespace fpl {
namespace event {

// This class acts as a static type id storage, it is not meant to be
// instantiated.
template <typename T>
struct TypeRegistry {
  static const Type* kType;

 private:
  TypeRegistry();
};

template <typename T>
const Type* TypeRegistry<T>::kType = nullptr;

}  // event
}  // fpl

#endif  // FPL_EVENT_TYPE_REGISTRY_H_
