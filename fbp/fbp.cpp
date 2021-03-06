﻿/// This works with Sinograms.
/// Each row of the sinogram corresponds to a projection angle, because each
/// sinogram is made from the same row in each projection.
/// @param data The input data, expected to be as sinograms
/// @param num_slices The number of images in the input data
/// @param cols The number of columns in the input data, corresponds to the Y
/// dimension
/// @param rows The number of rows in the input data, corresponds to the X
/// dimensinon.
/// @param centers_of_rotation The centers of rotation for each image in the
/// input data
/// @param theta ?? maybe all projection angles
/// @param output_array The output array for the reconstructed data
/// @param output_array_cols The number of columns in the output array
/// @param output_array_rows The number of rows in the output array
/// Maybe move the below to be a function parameter?
/// @param filter_name Name of post-processing filter.
/// @param filter_parameters Parameters for the post-processing filter name

void fbp(const float *data, int num_slices, int cols, int rows,
         const float *centers_of_rotation, const float *theta,
         float *output_array, int output_array_cols, int output_array_rows,
         const char *filter_name, const float *filter_parameters) {

  for (int slice = 0; slice < num_slices; ++slice) {
    // for each row (projection angle)
    for (int row = 0; row < rows; ++row) {
      for (int col = 0; col < cols; ++col) {
      }
    }
  }
}
