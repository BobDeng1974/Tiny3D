//
//  TinyRenderable.h
//  proj_mac
//
//  Created by reuben chao on 2/2/15.
//  Copyright (c) 2015 reuben chao. All rights reserved.
//

#ifndef proj_mac_TinyRenderable_h
#define proj_mac_TinyRenderable_h

#include "TinyMaterial.h"
#include "TinyRenderOperation.h"

namespace Tiny
{
    class TinyRenderable : public TinyObject
    {
    public:
        TinyRenderable();
        virtual ~TinyRenderable();
        virtual void getRenderOperation(TinyRenderOperation* ro) = 0;
        virtual void setMaterial(TinyMaterial* material);
        TinyMaterial* getMaterial();
    protected:
        TinyMaterial* mMaterial;
    };
}

#endif
