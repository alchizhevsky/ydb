/*
 *
 * Copyright 2015 gRPC authors. 
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
 *
 */

#ifndef GRPC_INTERNAL_CPP_THREAD_POOL_INTERFACE_H
#define GRPC_INTERNAL_CPP_THREAD_POOL_INTERFACE_H

#include <functional>

namespace grpc {

// A thread pool interface for running callbacks.
class ThreadPoolInterface {
 public:
  virtual ~ThreadPoolInterface() {}

  // Schedule the given callback for execution.
  virtual void Add(const std::function<void()>& callback) = 0;
};

// Allows different codebases to use their own thread pool impls 
typedef ThreadPoolInterface* (*CreateThreadPoolFunc)(void); 
void SetCreateThreadPool(CreateThreadPoolFunc func); 
 
ThreadPoolInterface* CreateDefaultThreadPool();

}  // namespace grpc

#endif  // GRPC_INTERNAL_CPP_THREAD_POOL_INTERFACE_H
