#ifndef UNMIXER_H
#define UNMIXER_H

#include <string>

namespace ColorUnmixing
{

void compute_color_unmixing(const std::string &image_file_path,
							              const std::string &output_directory_path,
                            const double tau,
                            const int neighborhood_radius
                            );


}

#endif // UNMIXER_H
