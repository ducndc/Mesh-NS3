/*
 * Copyright (c) 2008,2009 IITP RAS
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation;
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * Author: Chung Duc Nguyen Dang <nguyendangchungduc1999@gmail.com>
 *
 */

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