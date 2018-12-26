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
 * NonUEN2InfoUnSubscribeApi.h
 *
 * 
 */

#ifndef NonUEN2InfoUnSubscribeApi_H_
#define NonUEN2InfoUnSubscribeApi_H_


#include <pistache/http.h>
#include <pistache/router.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>
#include "json.hpp"

#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {



class  NonUEN2InfoUnSubscribeApi {
public:
    NonUEN2InfoUnSubscribeApi(std::shared_ptr<Pistache::Rest::Router>);
    virtual ~NonUEN2InfoUnSubscribeApi() {}
    void init();

    const std::string base = "/namf-comm/v1";

private:
    void setupRoutes();

    void non_ue_n2_info_un_subscribe_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void non_uen2_info_un_subscribe_api_default_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);

    std::shared_ptr<Pistache::Rest::Router> router;

    /// <summary>
    /// Namf_Communication Non UE N2 Info UnSubscribe service Operation
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="n2NotifySubscriptionId">N2 info Subscription Identifier</param>
    virtual void non_ue_n2_info_un_subscribe(const std::string &n2NotifySubscriptionId, Pistache::Http::ResponseWriter &response) = 0;

};

}
}
}
}

#endif /* NonUEN2InfoUnSubscribeApi_H_ */

