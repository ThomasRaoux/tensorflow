/* Copyright 2021 The TensorFlow Authors. All Rights Reserved.

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

// This file is MACHINE GENERATED! Do not edit.

#ifndef TENSORFLOW_C_EXPERIMENTAL_OPS_ARRAY_OPS_H_
#define TENSORFLOW_C_EXPERIMENTAL_OPS_ARRAY_OPS_H_

#include "tensorflow/c/eager/abstract_context.h"
#include "tensorflow/c/eager/abstract_tensor_handle.h"

namespace tensorflow {
namespace ops {

Status Identity(AbstractContext* ctx, AbstractTensorHandle* const input,
                AbstractTensorHandle** output, const char* name);

Status IdentityN(AbstractContext* ctx,
                 absl::Span<AbstractTensorHandle* const> input,
                 absl::Span<AbstractTensorHandle*> output, const char* name);

Status ZerosLike(AbstractContext* ctx, AbstractTensorHandle* const x,
                 AbstractTensorHandle** y, const char* name);

Status Shape(AbstractContext* ctx, AbstractTensorHandle* const input,
             AbstractTensorHandle** output, const char* name);

Status ExpandDims(AbstractContext* ctx, AbstractTensorHandle* const input,
                  AbstractTensorHandle* const dim,
                  AbstractTensorHandle** output, const char* name);

Status OnesLike(AbstractContext* ctx, AbstractTensorHandle* const x,
                AbstractTensorHandle** y, const char* name);

}  // namespace ops
}  // namespace tensorflow

#endif  // TENSORFLOW_C_EXPERIMENTAL_OPS_ARRAY_OPS_H_
