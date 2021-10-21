// Copyright (C) <2018> Intel Corporation
//
// SPDX-License-Identifier: Apache-2.0

#include "postprocessing.h"

#include <cstring>

#include "backgroundblur.h"

owt::base::VideoFramePostProcessing* CreatePostProcessing(const char* name) {
  if (strcmp(name, "background_blur") == 0) {
    return new owt::ic::BackgroundBlur;
  } else {
    return nullptr;
  }
}
