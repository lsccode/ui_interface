/* nvtSubscriptionManagerBindingProxy.h
   Generated by gSOAP 2.8.17r from nvtWithSec.hpp

Copyright(C) 2000-2013, Robert van Engelen, Genivia Inc. All Rights Reserved.
The generated code is released under one of the following licenses:
GPL or Genivia's license for commercial use.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
*/

#ifndef nvtSubscriptionManagerBindingProxy_H
#define nvtSubscriptionManagerBindingProxy_H
#include "nvtH.h"

class SOAP_CMAC SubscriptionManagerBindingProxy : public soap
{ public:
	/// Endpoint URL of service 'SubscriptionManagerBindingProxy' (change as needed)
	const char *soap_endpoint;
	/// Constructor
	SubscriptionManagerBindingProxy();
	/// Construct from another engine state
	SubscriptionManagerBindingProxy(const struct soap&);
	/// Constructor with endpoint URL
	SubscriptionManagerBindingProxy(const char *url);
	/// Constructor with engine input+output mode control
	SubscriptionManagerBindingProxy(soap_mode iomode);
	/// Constructor with URL and input+output mode control
	SubscriptionManagerBindingProxy(const char *url, soap_mode iomode);
	/// Constructor with engine input and output mode control
	SubscriptionManagerBindingProxy(soap_mode imode, soap_mode omode);
	/// Destructor frees deserialized data
	virtual	~SubscriptionManagerBindingProxy();
	/// Initializer used by constructors
	virtual	void SubscriptionManagerBindingProxy_init(soap_mode imode, soap_mode omode);
	/// Delete all deserialized data (with soap_destroy and soap_end)
	virtual	void destroy();
	/// Delete all deserialized data and reset to default
	virtual	void reset();
	/// Disables and removes SOAP Header from message
	virtual	void soap_noheader();
	/// Put SOAP Header in message
	virtual	void soap_header(struct _wsse__Security *wsse__Security, char *wsa__MessageID, struct wsa__Relationship *wsa__RelatesTo, struct wsa__EndpointReferenceType *wsa__From, struct wsa__EndpointReferenceType *wsa__ReplyTo, struct wsa__EndpointReferenceType *wsa__FaultTo, char *wsa__To, char *wsa__Action, struct wsdd__AppSequenceType *wsdd__AppSequence, char *wsa5__MessageID, struct wsa5__RelatesToType *wsa5__RelatesTo, struct wsa5__EndpointReferenceType *wsa5__From, struct wsa5__EndpointReferenceType *wsa5__ReplyTo, struct wsa5__EndpointReferenceType *wsa5__FaultTo, char *wsa5__To, char *wsa5__Action, struct chan__ChannelInstanceType *chan__ChannelInstance);
	/// Get SOAP Header structure (NULL when absent)
	virtual	const SOAP_ENV__Header *soap_header();
	/// Get SOAP Fault structure (NULL when absent)
	virtual	const SOAP_ENV__Fault *soap_fault();
	/// Get SOAP Fault string (NULL when absent)
	virtual	const char *soap_fault_string();
	/// Get SOAP Fault detail as string (NULL when absent)
	virtual	const char *soap_fault_detail();
	/// Close connection (normally automatic, except for send_X ops)
	virtual	int soap_close_socket();
	/// Force close connection (can kill a thread blocked on IO)
	virtual	int soap_force_close_socket();
	/// Print fault
	virtual	void soap_print_fault(FILE*);
#ifndef WITH_LEAN
	/// Print fault to stream
#ifndef WITH_COMPAT
	virtual	void soap_stream_fault(std::ostream&);
#endif

	/// Put fault into buffer
	virtual	char *soap_sprint_fault(char *buf, size_t len);
#endif

	/// Web service operation 'Renew' (returns error code or SOAP_OK)
	virtual	int Renew(_wsnt__Renew *wsnt__Renew, _wsnt__RenewResponse *wsnt__RenewResponse) { return this->Renew(NULL, NULL, wsnt__Renew, wsnt__RenewResponse); }
	virtual	int Renew(const char *endpoint, const char *soap_action, _wsnt__Renew *wsnt__Renew, _wsnt__RenewResponse *wsnt__RenewResponse);

	/// Web service operation 'Unsubscribe' (returns error code or SOAP_OK)
	virtual	int Unsubscribe(_wsnt__Unsubscribe *wsnt__Unsubscribe, _wsnt__UnsubscribeResponse *wsnt__UnsubscribeResponse) { return this->Unsubscribe(NULL, NULL, wsnt__Unsubscribe, wsnt__UnsubscribeResponse); }
	virtual	int Unsubscribe(const char *endpoint, const char *soap_action, _wsnt__Unsubscribe *wsnt__Unsubscribe, _wsnt__UnsubscribeResponse *wsnt__UnsubscribeResponse);
};
#endif
