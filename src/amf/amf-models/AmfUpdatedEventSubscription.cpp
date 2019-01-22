/**
* Namf_EventExposure Service
* AMF Event Exposure Service
*
* OpenAPI spec version: 1.R15.0.0
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#include "AmfUpdatedEventSubscription.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

AmfUpdatedEventSubscription::AmfUpdatedEventSubscription()
{
    
}

AmfUpdatedEventSubscription::~AmfUpdatedEventSubscription()
{
}

void AmfUpdatedEventSubscription::validate()
{
    // TODO: implement validation
}

nlohmann::json AmfUpdatedEventSubscription::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    val["subscription"] = ModelBase::toJson(m_Subscription);
    

    return val;
}

void AmfUpdatedEventSubscription::fromJson(const nlohmann::json& val)
{
    
}


AmfEventSubscription AmfUpdatedEventSubscription::getSubscription() const
{
    return m_Subscription;
}
void AmfUpdatedEventSubscription::setSubscription(AmfEventSubscription const& value)
{
    m_Subscription = value;
    
}

}
}
}
}
