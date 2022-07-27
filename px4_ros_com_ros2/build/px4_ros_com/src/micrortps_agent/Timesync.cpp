// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file Timesync.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace { char dummy; }
#endif

#include "Timesync.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

px4_msgs::msg::Timesync::Timesync()
{
    // m_timestamp com.eprosima.idl.parser.typecode.PrimitiveTypeCode@2d2ffcb7
    m_timestamp = 0;
    // m_seq com.eprosima.idl.parser.typecode.PrimitiveTypeCode@762ef0ea
    m_seq = 0;
    // m_tc1 com.eprosima.idl.parser.typecode.PrimitiveTypeCode@31f9b85e
    m_tc1 = 0;
    // m_ts1 com.eprosima.idl.parser.typecode.PrimitiveTypeCode@424e1977
    m_ts1 = 0;

}

px4_msgs::msg::Timesync::~Timesync()
{




}

px4_msgs::msg::Timesync::Timesync(const Timesync &x)
{
    m_timestamp = x.m_timestamp;
    m_seq = x.m_seq;
    m_tc1 = x.m_tc1;
    m_ts1 = x.m_ts1;
}

px4_msgs::msg::Timesync::Timesync(Timesync &&x)
{
    m_timestamp = x.m_timestamp;
    m_seq = x.m_seq;
    m_tc1 = x.m_tc1;
    m_ts1 = x.m_ts1;
}

px4_msgs::msg::Timesync& px4_msgs::msg::Timesync::operator=(const Timesync &x)
{

    m_timestamp = x.m_timestamp;
    m_seq = x.m_seq;
    m_tc1 = x.m_tc1;
    m_ts1 = x.m_ts1;

    return *this;
}

px4_msgs::msg::Timesync& px4_msgs::msg::Timesync::operator=(Timesync &&x)
{

    m_timestamp = x.m_timestamp;
    m_seq = x.m_seq;
    m_tc1 = x.m_tc1;
    m_ts1 = x.m_ts1;

    return *this;
}

size_t px4_msgs::msg::Timesync::getMaxCdrSerializedSize(size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);



    return current_alignment - initial_alignment;
}

size_t px4_msgs::msg::Timesync::getCdrSerializedSize(const px4_msgs::msg::Timesync& data, size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);



    return current_alignment - initial_alignment;
}

void px4_msgs::msg::Timesync::serialize(eprosima::fastcdr::Cdr &scdr) const
{

    scdr << m_timestamp;
    scdr << m_seq;
    scdr << m_tc1;
    scdr << m_ts1;
}

void px4_msgs::msg::Timesync::deserialize(eprosima::fastcdr::Cdr &dcdr)
{

    dcdr >> m_timestamp;
    dcdr >> m_seq;
    dcdr >> m_tc1;
    dcdr >> m_ts1;
}

/*!
 * @brief This function sets a value in member timestamp
 * @param _timestamp New value for member timestamp
 */
void px4_msgs::msg::Timesync::timestamp(uint64_t _timestamp)
{
m_timestamp = _timestamp;
}

/*!
 * @brief This function returns the value of member timestamp
 * @return Value of member timestamp
 */
uint64_t px4_msgs::msg::Timesync::timestamp() const
{
    return m_timestamp;
}

/*!
 * @brief This function returns a reference to member timestamp
 * @return Reference to member timestamp
 */
uint64_t& px4_msgs::msg::Timesync::timestamp()
{
    return m_timestamp;
}

/*!
 * @brief This function sets a value in member seq
 * @param _seq New value for member seq
 */
void px4_msgs::msg::Timesync::seq(uint8_t _seq)
{
m_seq = _seq;
}

/*!
 * @brief This function returns the value of member seq
 * @return Value of member seq
 */
uint8_t px4_msgs::msg::Timesync::seq() const
{
    return m_seq;
}

/*!
 * @brief This function returns a reference to member seq
 * @return Reference to member seq
 */
uint8_t& px4_msgs::msg::Timesync::seq()
{
    return m_seq;
}

/*!
 * @brief This function sets a value in member tc1
 * @param _tc1 New value for member tc1
 */
void px4_msgs::msg::Timesync::tc1(int64_t _tc1)
{
m_tc1 = _tc1;
}

/*!
 * @brief This function returns the value of member tc1
 * @return Value of member tc1
 */
int64_t px4_msgs::msg::Timesync::tc1() const
{
    return m_tc1;
}

/*!
 * @brief This function returns a reference to member tc1
 * @return Reference to member tc1
 */
int64_t& px4_msgs::msg::Timesync::tc1()
{
    return m_tc1;
}

/*!
 * @brief This function sets a value in member ts1
 * @param _ts1 New value for member ts1
 */
void px4_msgs::msg::Timesync::ts1(int64_t _ts1)
{
m_ts1 = _ts1;
}

/*!
 * @brief This function returns the value of member ts1
 * @return Value of member ts1
 */
int64_t px4_msgs::msg::Timesync::ts1() const
{
    return m_ts1;
}

/*!
 * @brief This function returns a reference to member ts1
 * @return Reference to member ts1
 */
int64_t& px4_msgs::msg::Timesync::ts1()
{
    return m_ts1;
}


size_t px4_msgs::msg::Timesync::getKeyMaxCdrSerializedSize(size_t current_alignment)
{
    size_t current_align = current_alignment;







    return current_align;
}

bool px4_msgs::msg::Timesync::isKeyDefined()
{
   return false;
}

void px4_msgs::msg::Timesync::serializeKey(eprosima::fastcdr::Cdr &scdr) const
{
    (void) scdr;
     
     
     
     
}


