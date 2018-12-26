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
* AMFStatusChangeUnSubscribeApiImpl.h
*
* 
*/

#ifndef AMF_STATUS_CHANGE_UN_SUBSCRIBE_API_IMPL_H_
#define AMF_STATUS_CHANGE_UN_SUBSCRIBE_API_IMPL_H_


#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>
#include <memory>

#include <AMFStatusChangeUnSubscribeApi.h>

#include <pistache/optional.h>

#include "ProblemDetails.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class AMFStatusChangeUnSubscribeApiImpl : public org::openapitools::server::api::AMFStatusChangeUnSubscribeApi {
public:
    AMFStatusChangeUnSubscribeApiImpl(std::shared_ptr<Pistache::Rest::Router>);
    ~AMFStatusChangeUnSubscribeApiImpl() {}

    void a_mf_status_change_un_subscribe(const std::string &subscriptionId, Pistache::Http::ResponseWriter &response);

};

}
}
}
}



#endif