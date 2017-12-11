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

/* Auto-generated by genmsg_cpp from file /home/intrepid/src1210_PixHawk2/Firmware/msg/actuator_controls.msg */


#include <px4_config.h>
#include <drivers/drv_orb_dev.h>
#include <microcdr/microCdr.h>
#include <uORB/topics/actuator_controls.h>

constexpr char __orb_actuator_controls_fields[] = "uint64_t timestamp;uint64_t timestamp_sample;float[8] control;";

ORB_DEFINE(actuator_controls, struct actuator_controls_s, 48,
    __orb_actuator_controls_fields);
ORB_DEFINE(actuator_controls_0, struct actuator_controls_s, 48,
    __orb_actuator_controls_fields);
ORB_DEFINE(actuator_controls_1, struct actuator_controls_s, 48,
    __orb_actuator_controls_fields);
ORB_DEFINE(actuator_controls_2, struct actuator_controls_s, 48,
    __orb_actuator_controls_fields);
ORB_DEFINE(actuator_controls_3, struct actuator_controls_s, 48,
    __orb_actuator_controls_fields);
ORB_DEFINE(actuator_controls_virtual_fw, struct actuator_controls_s, 48,
    __orb_actuator_controls_fields);
ORB_DEFINE(actuator_controls_virtual_mc, struct actuator_controls_s, 48,
    __orb_actuator_controls_fields);



void serialize_actuator_controls(const struct actuator_controls_s *input, char *output, uint32_t *length, struct microCDR *microCDRWriter)
{
    if (nullptr == input || nullptr == output || nullptr == length || nullptr == microCDRWriter) return;

    resetStaticMicroCDRForSerialize(microCDRWriter);

	serializeUnsignedLong(input->timestamp_sample, microCDRWriter);
	serializeFloatArray(input->control, 8, microCDRWriter);


    (*length) = microCDRWriter->m_microBuffer->m_serializedBuffer;
}

void deserialize_actuator_controls(struct actuator_controls_s *output, char *input, struct microCDR *microCDRReader)
{
    if (nullptr == output || nullptr == input || nullptr == microCDRReader) return;

    resetStaticMicroCDRForDeserialize(microCDRReader);

	deserializeUnsignedLong(&output->timestamp_sample, microCDRReader);
	deserializeFloat(&output->control[0], microCDRReader);
	deserializeFloat(&output->control[1], microCDRReader);
	deserializeFloat(&output->control[2], microCDRReader);
	deserializeFloat(&output->control[3], microCDRReader);
	deserializeFloat(&output->control[4], microCDRReader);
	deserializeFloat(&output->control[5], microCDRReader);
	deserializeFloat(&output->control[6], microCDRReader);
	deserializeFloat(&output->control[7], microCDRReader);

}