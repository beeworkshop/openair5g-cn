/**
* AMF Communicaiton Service
* AMF Communication Service
*
* OpenAPI spec version: 1.R15.0.0
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * SubscribedDataFilter.h
 *
 * 
 */

#ifndef SubscribedDataFilter_H_
#define SubscribedDataFilter_H_


#include "ModelBase.h"


namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  SubscribedDataFilter
    : public ModelBase
{
public:
    SubscribedDataFilter();
    virtual ~SubscribedDataFilter();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(const nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// SubscribedDataFilter members


protected:
};

}
}
}
}

#endif /* SubscribedDataFilter_H_ */
