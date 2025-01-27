// Licensed to the Apache Software Foundation (ASF) under one
// or more contributor license agreements.  See the NOTICE file
// distributed with this work for additional information
// regarding copyright ownership.  The ASF licenses this file
// to you under the Apache License, Version 2.0 (the
// "License"); you may not use this file except in compliance
// with the License.  You may obtain a copy of the License at
//
//   http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing,
// software distributed under the License is distributed on an
// "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied.  See the License for the
// specific language governing permissions and limitations
// under the License.

#include "ppl/nn/engines/riscv/riscv_engine_options.h"
#include "pybind11/pybind11.h"

namespace ppl { namespace nn { namespace python {

void RegisterRiscvEngineOptions(pybind11::module* m) {
    pybind11::class_<RiscvEngineOptions>(*m, "RiscvEngineOptions")
        .def(pybind11::init<>())
        .def_readwrite("forward_precision", &RiscvEngineOptions::forward_precision);

    m->attr("RISCV_USE_FP16") = (uint32_t)RISCV_USE_FP16;
    m->attr("RISCV_USE_FP32") = (uint32_t)RISCV_USE_FP32;
}

}}} // namespace ppl::nn::python
