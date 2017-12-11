/****************************************************************************
 *
 *   Copyright (C) 2013-2016 PX4 Development Team. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name PX4 nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/

/* Auto-generated by genmsg_cpp from file /home/intrepid/src1210_PixHawk2/Firmware/msg/vehicle_global_position.msg */


#include <px4_config.h>
#include <drivers/drv_orb_dev.h>
#include <microcdr/microCdr.h>
#include <uORB/topics/vehicle_global_position.h>

constexpr char __orb_vehicle_global_position_fields[] = "uint64_t timestamp;uint64_t time_utc_usec;double lat;double lon;double[2] delta_lat_lon;float alt;float delta_alt;float vel_n;float vel_e;float vel_d;float pos_d_deriv;float yaw;float eph;float epv;float evh;float evv;float terrain_alt;float pressure_alt;uint8_t lat_lon_reset_counter;uint8_t alt_reset_counter;bool terrain_alt_valid;bool dead_reckoning;";

ORB_DEFINE(vehicle_global_position, struct vehicle_global_position_s, 104,
    __orb_vehicle_global_position_fields);
ORB_DEFINE(vehicle_global_position_groundtruth, struct vehicle_global_position_s, 104,
    __orb_vehicle_global_position_fields);



void serialize_vehicle_global_position(const struct vehicle_global_position_s *input, char *output, uint32_t *length, struct microCDR *microCDRWriter)
{
    if (nullptr == input || nullptr == output || nullptr == length || nullptr == microCDRWriter) return;

    resetStaticMicroCDRForSerialize(microCDRWriter);

	serializeUnsignedLong(input->time_utc_usec, microCDRWriter);
	serializeDouble(input->lat, microCDRWriter);
	serializeDouble(input->lon, microCDRWriter);
	serializeDoubleArray(input->delta_lat_lon, 2, microCDRWriter);
	serializeFloat(input->alt, microCDRWriter);
	serializeFloat(input->delta_alt, microCDRWriter);
	serializeFloat(input->vel_n, microCDRWriter);
	serializeFloat(input->vel_e, microCDRWriter);
	serializeFloat(input->vel_d, microCDRWriter);
	serializeFloat(input->pos_d_deriv, microCDRWriter);
	serializeFloat(input->yaw, microCDRWriter);
	serializeFloat(input->eph, microCDRWriter);
	serializeFloat(input->epv, microCDRWriter);
	serializeFloat(input->evh, microCDRWriter);
	serializeFloat(input->evv, microCDRWriter);
	serializeFloat(input->terrain_alt, microCDRWriter);
	serializeFloat(input->pressure_alt, microCDRWriter);
	serializeUnsignedChar(input->lat_lon_reset_counter, microCDRWriter);
	serializeUnsignedChar(input->alt_reset_counter, microCDRWriter);
	serializeBool(input->terrain_alt_valid, microCDRWriter);
	serializeBool(input->dead_reckoning, microCDRWriter);


    (*length) = microCDRWriter->m_microBuffer->m_serializedBuffer;
}

void deserialize_vehicle_global_position(struct vehicle_global_position_s *output, char *input, struct microCDR *microCDRReader)
{
    if (nullptr == output || nullptr == input || nullptr == microCDRReader) return;

    resetStaticMicroCDRForDeserialize(microCDRReader);

	deserializeUnsignedLong(&output->time_utc_usec, microCDRReader);
	deserializeDouble(&output->lat, microCDRReader);
	deserializeDouble(&output->lon, microCDRReader);
	deserializeDouble(&output->delta_lat_lon[0], microCDRReader);
	deserializeDouble(&output->delta_lat_lon[1], microCDRReader);
	deserializeFloat(&output->alt, microCDRReader);
	deserializeFloat(&output->delta_alt, microCDRReader);
	deserializeFloat(&output->vel_n, microCDRReader);
	deserializeFloat(&output->vel_e, microCDRReader);
	deserializeFloat(&output->vel_d, microCDRReader);
	deserializeFloat(&output->pos_d_deriv, microCDRReader);
	deserializeFloat(&output->yaw, microCDRReader);
	deserializeFloat(&output->eph, microCDRReader);
	deserializeFloat(&output->epv, microCDRReader);
	deserializeFloat(&output->evh, microCDRReader);
	deserializeFloat(&output->evv, microCDRReader);
	deserializeFloat(&output->terrain_alt, microCDRReader);
	deserializeFloat(&output->pressure_alt, microCDRReader);
	deserializeUnsignedChar(&output->lat_lon_reset_counter, microCDRReader);
	deserializeUnsignedChar(&output->alt_reset_counter, microCDRReader);
	deserializeBool(&output->terrain_alt_valid, microCDRReader);
	deserializeBool(&output->dead_reckoning, microCDRReader);

}