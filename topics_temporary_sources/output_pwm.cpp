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

/* Auto-generated by genmsg_cpp from file /home/intrepid/src1210_PixHawk2/Firmware/msg/output_pwm.msg */


#include <px4_config.h>
#include <drivers/drv_orb_dev.h>
#include <microcdr/microCdr.h>
#include <uORB/topics/output_pwm.h>

constexpr char __orb_output_pwm_fields[] = "uint64_t timestamp;uint32_t channel_count;uint16_t[16] values;uint8_t[4] _padding0;";

ORB_DEFINE(output_pwm, struct output_pwm_s, 44,
    __orb_output_pwm_fields);



void serialize_output_pwm(const struct output_pwm_s *input, char *output, uint32_t *length, struct microCDR *microCDRWriter)
{
    if (nullptr == input || nullptr == output || nullptr == length || nullptr == microCDRWriter) return;

    resetStaticMicroCDRForSerialize(microCDRWriter);

	serializeUnsignedInt(input->channel_count, microCDRWriter);
	serializeUnsignedShortArray(input->values, 16, microCDRWriter);


    (*length) = microCDRWriter->m_microBuffer->m_serializedBuffer;
}

void deserialize_output_pwm(struct output_pwm_s *output, char *input, struct microCDR *microCDRReader)
{
    if (nullptr == output || nullptr == input || nullptr == microCDRReader) return;

    resetStaticMicroCDRForDeserialize(microCDRReader);

	deserializeUnsignedInt(&output->channel_count, microCDRReader);
	deserializeUnsignedShort(&output->values[0], microCDRReader);
	deserializeUnsignedShort(&output->values[1], microCDRReader);
	deserializeUnsignedShort(&output->values[2], microCDRReader);
	deserializeUnsignedShort(&output->values[3], microCDRReader);
	deserializeUnsignedShort(&output->values[4], microCDRReader);
	deserializeUnsignedShort(&output->values[5], microCDRReader);
	deserializeUnsignedShort(&output->values[6], microCDRReader);
	deserializeUnsignedShort(&output->values[7], microCDRReader);
	deserializeUnsignedShort(&output->values[8], microCDRReader);
	deserializeUnsignedShort(&output->values[9], microCDRReader);
	deserializeUnsignedShort(&output->values[10], microCDRReader);
	deserializeUnsignedShort(&output->values[11], microCDRReader);
	deserializeUnsignedShort(&output->values[12], microCDRReader);
	deserializeUnsignedShort(&output->values[13], microCDRReader);
	deserializeUnsignedShort(&output->values[14], microCDRReader);
	deserializeUnsignedShort(&output->values[15], microCDRReader);

}