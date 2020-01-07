#pragma once

#include <openmpi/mpi.h>

int MYMPI_Bcast(void *buffer, int count, MPI_Datatype datatype, 
			int root, MPI_Comm communicator);