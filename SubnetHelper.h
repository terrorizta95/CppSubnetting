/*
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The ASF licenses this file to You under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


#include"csubnet.h"
//@autor Salvador Vera Franco 
// SubnetHelper.h v 1.0

csubnetutils* helper;

            static const int MASK_ADDRESS_FORMAT=1;
            static const int SLASH_MASK_FORMAT=-1;


    /**
     * @brief Returns the TOTALHOST to NHOST
     * @param NHOST Can be any number less than 2^32
     * @param ADD_ID_AND_BROADCAST if it's true sum 2 at NHOST
     * @return TOTALHOST or zero if HOST is wrong
     */
long getTotalHost(long NHOST,bool ADD_ID_AND_BROADCAST){
return helper->get_Total_Host(NHOST,ADD_ID_AND_BROADCAST);
}


    /**
     * @brief Return Default mask.
     * @param ipaddress An IP address, e.g. "192.168.0.1"
     * @return  Default mask or "Not defined"
     */
string DefaultMask(string ipaddress){
return helper->DefaultMask(ipaddress);
}

    /**
     * Returns the NETMASK
     * @param NHOST Can be any number less than 2^32
     * @param FORMAT Use variable SLASH_FORMAT_MASK or MASK_ADDRESS
     * @return TOTALHOST or zero if HOST is wrong
     */
string getNetMask(long NHOST,const int FORMAT){
return helper->getNetMask(NHOST,FORMAT);
}

