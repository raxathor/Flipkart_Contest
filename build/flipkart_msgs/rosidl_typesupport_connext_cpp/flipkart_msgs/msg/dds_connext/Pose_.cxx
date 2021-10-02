

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Pose_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif    

#ifndef osapi_heap_h
#include "osapi/osapi_heap.h" 
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "Pose_.h"

#include <new>

namespace flipkart_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *Pose_TYPENAME = "flipkart_msgs::msg::dds_::Pose_";

            DDS_TypeCode* Pose__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member Pose__g_tc_members[16]=
                {

                    {
                        (char *)"id0_",/* Member name */
                        {
                            0,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"x0_",/* Member name */
                        {
                            1,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"y0_",/* Member name */
                        {
                            2,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"yaw0_",/* Member name */
                        {
                            3,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"id1_",/* Member name */
                        {
                            4,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"x1_",/* Member name */
                        {
                            5,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"y1_",/* Member name */
                        {
                            6,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"yaw1_",/* Member name */
                        {
                            7,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"id2_",/* Member name */
                        {
                            8,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"x2_",/* Member name */
                        {
                            9,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"y2_",/* Member name */
                        {
                            10,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"yaw2_",/* Member name */
                        {
                            11,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"id3_",/* Member name */
                        {
                            12,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"x3_",/* Member name */
                        {
                            13,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"y3_",/* Member name */
                        {
                            14,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"yaw3_",/* Member name */
                        {
                            15,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }
                };

                static DDS_TypeCode Pose__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"flipkart_msgs::msg::dds_::Pose_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        16, /* Number of members */
                        Pose__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for Pose_*/

                if (is_initialized) {
                    return &Pose__g_tc;
                }

                Pose__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                Pose__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                Pose__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                Pose__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

                Pose__g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                Pose__g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                Pose__g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                Pose__g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

                Pose__g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                Pose__g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                Pose__g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                Pose__g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

                Pose__g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                Pose__g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                Pose__g_tc_members[14]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                Pose__g_tc_members[15]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

                is_initialized = RTI_TRUE;

                return &Pose__g_tc;
            }

            RTIBool Pose__initialize(
                Pose_* sample) {
                return flipkart_msgs::msg::dds_::Pose__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool Pose__initialize_ex(
                Pose_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return flipkart_msgs::msg::dds_::Pose__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool Pose__initialize_w_params(
                Pose_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initLong(&sample->id0_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initLong(&sample->x0_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initLong(&sample->y0_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initFloat(&sample->yaw0_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initLong(&sample->id1_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initLong(&sample->x1_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initLong(&sample->y1_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initFloat(&sample->yaw1_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initLong(&sample->id2_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initLong(&sample->x2_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initLong(&sample->y2_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initFloat(&sample->yaw2_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initLong(&sample->id3_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initLong(&sample->x3_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initLong(&sample->y3_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initFloat(&sample->yaw3_)) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            void Pose__finalize(
                Pose_* sample)
            {

                flipkart_msgs::msg::dds_::Pose__finalize_ex(sample,RTI_TRUE);
            }

            void Pose__finalize_ex(
                Pose_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                flipkart_msgs::msg::dds_::Pose__finalize_w_params(
                    sample,&deallocParams);
            }

            void Pose__finalize_w_params(
                Pose_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void Pose__finalize_optional_members(
                Pose_* sample, RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParamsTmp =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
                struct DDS_TypeDeallocationParams_t * deallocParams =
                &deallocParamsTmp;

                if (sample==NULL) {
                    return;
                } 
                if (deallocParams) {} /* To avoid warnings */

                deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
                deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

            }

            RTIBool Pose__copy(
                Pose_* dst,
                const Pose_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyLong (
                        &dst->id0_, &src->id0_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyLong (
                        &dst->x0_, &src->x0_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyLong (
                        &dst->y0_, &src->y0_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyFloat (
                        &dst->yaw0_, &src->yaw0_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyLong (
                        &dst->id1_, &src->id1_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyLong (
                        &dst->x1_, &src->x1_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyLong (
                        &dst->y1_, &src->y1_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyFloat (
                        &dst->yaw1_, &src->yaw1_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyLong (
                        &dst->id2_, &src->id2_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyLong (
                        &dst->x2_, &src->x2_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyLong (
                        &dst->y2_, &src->y2_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyFloat (
                        &dst->yaw2_, &src->yaw2_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyLong (
                        &dst->id3_, &src->id3_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyLong (
                        &dst->x3_, &src->x3_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyLong (
                        &dst->y3_, &src->y3_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyFloat (
                        &dst->yaw3_, &src->yaw3_)) { 
                        return RTI_FALSE;
                    }

                    return RTI_TRUE;

                } catch (std::bad_alloc&) {
                    return RTI_FALSE;
                }
            }

            /**
            * <<IMPLEMENTATION>>
            *
            * Defines:  TSeq, T
            *
            * Configure and implement 'Pose_' sequence class.
            */
            #define T Pose_
            #define TSeq Pose_Seq

            #define T_initialize_w_params flipkart_msgs::msg::dds_::Pose__initialize_w_params

            #define T_finalize_w_params   flipkart_msgs::msg::dds_::Pose__finalize_w_params
            #define T_copy       flipkart_msgs::msg::dds_::Pose__copy

            #ifndef NDDS_STANDALONE_TYPE
            #include "dds_c/generic/dds_c_sequence_TSeq.gen"
            #include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
            #else
            #include "dds_c_sequence_TSeq.gen"
            #include "dds_cpp_sequence_TSeq.gen"
            #endif

            #undef T_copy
            #undef T_finalize_w_params

            #undef T_initialize_w_params

            #undef TSeq
            #undef T
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace flipkart_msgs  */

