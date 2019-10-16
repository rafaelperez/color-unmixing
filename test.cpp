#include <string>
#include "unmixing/unmixing.h"

int main(int argc, char** argv)
{
    if (argc < 3) {
        std::cerr << "Usage: " << argv[0] << "sourcefile outdirectory [tau] [neighborhood_radius] [number_of_bins]" << std::endl;
        return 1;
    }
    const std::string image_file_path(argv[1]);
    const std::string output_directory_path(argv[2]);

    const double 	tau 				= (argc >= 4) ? std::stod(argv[3]) : 5.0;	// The value used in the original paper is 5.
    const int 		neighborhood_radius = (argc >= 5) ? std::stoi(argv[4]) : 10;	// In the paper, this value is fixed to 10 (i.e., 20 x 20 neighborhood) for any input image.
    const int 		number_of_bins 		= (argc >= 6) ? std::stoi(argv[5]) : 10;	// The value used in the original paper is 10.

    ColorUnmixing::compute_color_unmixing(image_file_path, output_directory_path, tau, neighborhood_radius); // passing last param was causing compiler errors

    return 0;
}

