
#include <iostream>
#include <graphlab.hpp>

int main(int argc, char *argv[])
{
    global_logger().set_log_to_console(true);
    graphlab::mpi_tools::init(argc, argv);
    graphlab::distributed_control dc;

    dc.cout() << "test" << std::endl;
    graphlab::mpi_tools::finalize();
    return EXIT_SUCCESS;
}
