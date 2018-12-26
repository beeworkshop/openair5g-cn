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
/*
 * ModifySubscriptionApi.h
 *
 * 
 */

#ifndef ModifySubscriptionApi_H_
#define ModifySubscriptionApi_H_


#include <pistache/http.h>
#include <pistache/router.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>


#include "AmfUpdatedEventSubscription.h"
//#include "Object.h"
#include "ProblemDetails.h"
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class  ModifySubscriptionApi {
public:
    ModifySubscriptionApi(std::shared_ptr<Pistache::Rest::Router>);
    virtual ~ModifySubscriptionApi() {}
    void init();

    const std::string base = "/namf-evts/v1";

private:
    void setupRoutes();

    void modify_subscription_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void modify_subscription_api_default_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);

    std::shared_ptr<Pistache::Rest::Router> router;

    /// <summary>
    /// Namf_EventExposure Subscribe Modify service Operation
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="subscriptionId">Unique ID of the subscription to be modified</param>
    /// <param name="object"></param>
    virtual void modify_subscription(const std::string &subscriptionId, const std::vector<Object> &object, Pistache::Http::ResponseWriter &response) = 0;

};

}
}
}
}

#endif /* ModifySubscriptionApi_H_ */

