#pragma once

// @generated by torchgen/gen.py from NativeFunction.h

#include <c10/core/Scalar.h>
#include <c10/core/Storage.h>
#include <c10/core/TensorOptions.h>
#include <c10/util/Deprecated.h>
#include <c10/util/Optional.h>
#include <c10/core/QScheme.h>
#include <ATen/core/Reduction.h>
#include <ATen/core/Tensor.h>
#include <tuple>
#include <vector>


namespace at {
namespace native {
TORCH_API ::std::vector<at::Tensor> gradient(const at::Tensor & self, const c10::optional<at::Scalar> & spacing=c10::nullopt, c10::optional<int64_t> dim=c10::nullopt, int64_t edge_order=1);
TORCH_API ::std::vector<at::Tensor> gradient(const at::Tensor & self, const at::Scalar & spacing, at::IntArrayRef dim, int64_t edge_order=1);
TORCH_API ::std::vector<at::Tensor> gradient(const at::Tensor & self, at::IntArrayRef dim, int64_t edge_order=1);
TORCH_API ::std::vector<at::Tensor> gradient(const at::Tensor & self, at::ArrayRef<at::Scalar> spacing, c10::optional<int64_t> dim=c10::nullopt, int64_t edge_order=1);
TORCH_API ::std::vector<at::Tensor> gradient(const at::Tensor & self, at::ArrayRef<at::Scalar> spacing, at::IntArrayRef dim, int64_t edge_order=1);
TORCH_API ::std::vector<at::Tensor> gradient(const at::Tensor & self, at::TensorList spacing, c10::optional<int64_t> dim=c10::nullopt, int64_t edge_order=1);
TORCH_API ::std::vector<at::Tensor> gradient(const at::Tensor & self, at::TensorList spacing, at::IntArrayRef dim, int64_t edge_order=1);
} // namespace native
} // namespace at
