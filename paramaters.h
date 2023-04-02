#define X_SIZE 3 ///Number of nodes in a row grid
#define Y_SIZE 3 ///Number of rows in a grid

#define STEP_NUM 50 ///Size of edge in our grid (meters)
#define RANDOM_START 0.1 ///Maximum random start delay for beacon jitter (sec)

#define TOTAL_TIME 100.0 ///Simulation time (sec)
#define PACKET_INTERVAL 1 ///Interval between packets in UDP ping (sec)
#define PACKET_SIZE 1024 ///Size of packets in UDP ping (bytes)

#define IFACE_NUM 1 ///Number of radio interfaces used by each mesh point

#define PORT_NUM 9

#define SERVER_APP_START 1.0

#define CLIENT_APP_START 1.0

#define SERVER_APP_STOP_INTERVAL 1
#define CLIENT_APP_STOP_INTERVAL 1.5

#define SIMULATOR_STOP_INTERVAL 2