////////////////////////////////////////////////////////////////////////
// Include file for RGBD classes
////////////////////////////////////////////////////////////////////////

#ifndef __RGBD__H__
#define __RGBD__H__



////////////////////////////////////////////////////////////////////////
// Dependency include files
////////////////////////////////////////////////////////////////////////

#include "R3Shapes/R3Shapes.h"



////////////////////////////////////////////////////////////////////////
// RGBD pre-declarations
////////////////////////////////////////////////////////////////////////

namespace gaps {
class RGBDImage;
class RGBDSurface;
class RGBDConfiguration;
}



////////////////////////////////////////////////////////////////////////
// Constant definitions
////////////////////////////////////////////////////////////////////////

#define RGBD_RED_CHANNEL    0
#define RGBD_GREEN_CHANNEL  1
#define RGBD_BLUE_CHANNEL   2
#define RGBD_DEPTH_CHANNEL  3
#define RGBD_USER_CHANNEL  4

#define RGBD_BORDER_BOUNDARY        0x1
#define RGBD_SILHOUETTE_BOUNDARY    0x2
#define RGBD_SHADOW_BOUNDARY        0x4

#define RGBD_NO_COLOR_SCHEME          0
#define RGBD_PHOTO_COLOR_SCHEME       1
#define RGBD_RENDER_COLOR_SCHEME      2
#define RGBD_INDEX_COLOR_SCHEME       3
#define RGBD_HIGHLIGHT_COLOR_SCHEME   4

#define RGBD_NO_SELECTION        0
#define RGBD_IMAGE_SELECTION     1
#define RGBD_SURFACE_SELECTION   2



////////////////////////////////////////////////////////////////////////
// RGBD include files
////////////////////////////////////////////////////////////////////////

#include "RGBDCamera.h"
#include "RGBDImage.h"
#include "RGBDSurface.h"
#include "RGBDConfiguration.h"
#include "RGBDTransform.h"
#include "RGBDUtil.h"



#endif
