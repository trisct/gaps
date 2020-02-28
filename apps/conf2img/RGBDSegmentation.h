////////////////////////////////////////////////////////////////////////
// Include file for RGBD segmentation functions
////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////
// Parameters
////////////////////////////////////////////////////////////////////////

extern double max_depth;
extern double max_neighbor_distance_factor;
extern double max_neighbor_normal_angle;
extern double max_neighbor_color_difference;



////////////////////////////////////////////////////////////////////////
// Segmentation functions
////////////////////////////////////////////////////////////////////////

extern int
RGBDCreateSegmentationChannel(const R2Grid& depth_image, 
  const R2Grid& px_image, const R2Grid& py_image, const R2Grid& pz_image, const R2Grid& boundary_image, 
  const R2Grid& nx_image, const R2Grid& ny_image, const R2Grid& nz_image, const R2Grid& radius_image, 
  const R2Image& color_image, R2Grid& output_segmentation_image,
  const R3Point& viewpoint, const R3Vector& towards, const R3Vector& up,
  const char *output_segmentation_filename = NULL);