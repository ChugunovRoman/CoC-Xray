// This code is in the public domain -- castanyo@yahoo.es

#ifndef NV_IMAGE_NORMALMIPMAP_H
#define NV_IMAGE_NORMALMIPMAP_H

#include <nvimage/nvimage.h>

namespace nv {
class FloatImage;

FloatImage *createNormalMipmapMap(const FloatImage *img);

} // namespace nv

#endif // NV_IMAGE_NORMALMIPMAP_H
