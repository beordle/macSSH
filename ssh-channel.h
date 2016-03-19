/*
    This file is part of SSH
    
    Copyright 2016 Daniel Machon

    SSH program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef SSH_CHANNEL_H
#define SSH_CHANNEL_H

typedef struct channel channel_t;

/* Channel data encapsulation */
struct channel {
	
	int channel_id;		//Id of specific channel
	
	int write_fd;		//Local write dile descriptor (STDOUT e.g)
	int read_fd;		//Local read file descriptor (STDIN e.g)
	
	buffer buf_in;
	buffer buf_out;
	
};

#endif /* SSH_CHANNEL_H */
