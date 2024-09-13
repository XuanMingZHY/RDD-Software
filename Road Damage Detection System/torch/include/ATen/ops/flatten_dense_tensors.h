#pragma once

// @generated by torchgen/gen.py from Function.h

#include <ATen/Context.h>
#include <ATen/DeviceGuard.h>
#include <ATen/TensorUtils.h>
#include <ATen/TracerMode.h>
#include <ATen/core/Generator.h>
#include <ATen/core/Reduction.h>
#include <ATen/core/Tensor.h>
#include <c10/core/Scalar.h>
#include <c10/core/Storage.h>
#include <c10/core/TensorOptions.h>
#include <c10/util/Deprecated.h>
#include <c10/util/Optional.h>



#include <ATen/ops/flatten_dense_tensors_ops.h>

namespace at {


// aten::flatten_dense_tensors(Tensor[] tensors) -> Tensor
inline at::Tensor flatten_dense_tensors(at::TensorList tensors) {
    return at::_ops::flatten_dense_tensors::call(tensors);
}

}