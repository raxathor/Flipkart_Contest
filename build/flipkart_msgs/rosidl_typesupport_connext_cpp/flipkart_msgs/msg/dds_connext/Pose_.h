

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Pose_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Pose__719556566_h
#define Pose__719556566_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace flipkart_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *Pose_TYPENAME;

            struct Pose_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Pose_TypeSupport;
            class Pose_DataWriter;
            class Pose_DataReader;
            #endif

            class Pose_ 
            {
              public:
                typedef struct Pose_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Pose_TypeSupport TypeSupport;
                typedef Pose_DataWriter DataWriter;
                typedef Pose_DataReader DataReader;
                #endif

                DDS_Long   id0_ ;
                DDS_Long   x0_ ;
                DDS_Long   y0_ ;
                DDS_Float   yaw0_ ;
                DDS_Long   id1_ ;
                DDS_Long   x1_ ;
                DDS_Long   y1_ ;
                DDS_Float   yaw1_ ;
                DDS_Long   id2_ ;
                DDS_Long   x2_ ;
                DDS_Long   y2_ ;
                DDS_Float   yaw2_ ;
                DDS_Long   id3_ ;
                DDS_Long   x3_ ;
                DDS_Long   y3_ ;
                DDS_Float   yaw3_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Pose__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Pose_Seq, Pose_);

            NDDSUSERDllExport
            RTIBool Pose__initialize(
                Pose_* self);

            NDDSUSERDllExport
            RTIBool Pose__initialize_ex(
                Pose_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Pose__initialize_w_params(
                Pose_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Pose__finalize(
                Pose_* self);

            NDDSUSERDllExport
            void Pose__finalize_ex(
                Pose_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Pose__finalize_w_params(
                Pose_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Pose__finalize_optional_members(
                Pose_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Pose__copy(
                Pose_* dst,
                const Pose_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace flipkart_msgs  */

#endif /* Pose_ */

