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
* N1N2MessageSubscribeApiImpl.h
*
* 
*/

#ifndef N1_N2_MESSAGE_SUBSCRIBE_API_IMPL_H_
#define N1_N2_MESSAGE_SUBSCRIBE_API_IMPL_H_


#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>
#include <memory>

#include <N1N2MessageSubscribeApi.h>

#include <pistache/optional.h>

#include "UeN1N2InfoSubscriptionCreateData.h"
#include "UeN1N2InfoSubscriptionCreatedData.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class N1N2MessageSubscribeApiImpl : public org::openapitools::server::api::N1N2MessageSubscribeApi {
public:
    N1N2MessageSubscribeApiImpl(std::shared_ptr<Pistache::Rest::Router>);
    ~N1N2MessageSubscribeApiImpl() {}

    void n1_n2_message_subscribe(const std::string &ueContextId, const UeN1N2InfoSubscriptionCreateData &ueN1N2InfoSubscriptionCreateData, Pistache::Http::ResponseWriter &response);

};

}
}
}
}



#endif