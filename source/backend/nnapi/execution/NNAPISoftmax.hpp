//
//  NNAPISoftmax.hpp
//  MNN
//
//  Created by MNN on 2022/09/06.
//  Copyright © 2018, Alibaba Group Holding Limited
//

#ifndef MNN_NNAPISOFTMAX_HPP
#define MNN_NNAPISOFTMAX_HPP

#include "NNAPIBackend.hpp"
#include "NNAPICommonExecution.hpp"
#include "core/ConvolutionCommon.hpp"

namespace MNN {

class NNAPISoftmax : public NNAPICommonExecution {
public:
    NNAPISoftmax(Backend *b, const Op *op, const std::vector<Tensor *> &inputs, const std::vector<Tensor *> &outputs);
    ErrorCode onResize(const std::vector<Tensor *> &inputs, const std::vector<Tensor *> &outputs);
    virtual ~NNAPISoftmax() = default;
};
} // namespace MNN

#endif // MNN_NNAPISOFTMAX_HPP
