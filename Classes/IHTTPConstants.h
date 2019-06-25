#ifndef IHTTPConstants_h
#define IHTTPConstants_h

/*! @brief HTTP/1.1 header fields
    @link https://tools.ietf.org/html/rfc7231
    @link https://www.iana.org/assignments/http-status-codes/http-status-codes.xhtml
*/
typedef NS_ENUM(NSUInteger, IHTTPStatusCodes) {
    IHTTPStatusCodeUnknown                      = 0,

    // 1xx - Informational response
    IHTTPStatus100Continue                      = 100,
    IHTTPStatus101SwitchingProtocols            = 101,
    
    /*! @link https://tools.ietf.org/html/rfc2518 */
    IHTTPStatus102Processing                    = 102,
    
    /*! @link http://www.iana.org/go/rfc8297 */
    IHTTPStatus103EarlyHints                    = 103,
    
    // 2xx - Success
    IHTTPStatus200OK                            = 200,
    IHTTPStatus201Created                       = 201,
    IHTTPStatus202Accepted                      = 202,
    IHTTPStatus203NonAuthoritativeInformation   = 203,
    IHTTPStatus204NoContent                     = 204,
    IHTTPStatus205ResetContent                  = 205,
    
    /*! @link https://tools.ietf.org/html/rfc7233 */
    IHTTPStatus206PartialContent                = 206,
    
    /*! @link https://tools.ietf.org/html/rfc4918 */
    IHTTPStatus207MultiStatus                   = 207,
    
    /*! @link https://tools.ietf.org/html/rfc5842 */
    IHTTPStatus208AlreadyReported               = 208,
    
    /*! @link https://tools.ietf.org/html/rfc3229 */
    IHTTPStatus226IMUsed                        = 226,

    // 3xx - Redirection
    IHTTPStatus300MultipleChoices               = 300,
    IHTTPStatus301MovedPermanently              = 301,
    IHTTPStatus303SeeOther                      = 303,
    
    /*! @link https://tools.ietf.org/html/rfc7232 */
    IHTTPStatus304NotModified                   = 304,
    IHTTPStatus305UseProxy                      = 305,
    IHTTPStatus306SwitchProxy                   = 306,
    IHTTPStatus307TemporaryRedirect             = 307,
    
    /*! @link https://tools.ietf.org/html/rfc7538 */
    IHTTPStatus308PermanentRedirect             = 308,

    // 4xx Client errors
    IHTTPStatus400BadRequest                    = 400,
    IHTTPStatus401Unauthorized                  = 401,
    IHTTPStatus402PaymentRequired               = 402,
    IHTTPStatus403Forbidden                     = 403,
    IHTTPStatus404NotFound                      = 404,
    IHTTPStatus405MethodNotAllowed              = 405,
    IHTTPStatus406NotAcceptable                 = 406,
    
    /*! @link https://tools.ietf.org/html/rfc7235 */
    IHTTPStatus407ProxyAuthenticationRequired   = 407,
    
    IHTTPStatus408RequestTimeout                = 408,
    IHTTPStatus409Conflict                      = 409,
    IHTTPStatus410Gone                          = 410,
    IHTTPStatus411LengthRequired                = 411,

    /*! @link https://tools.ietf.org/html/rfc7232 */
    IHTTPStatus412PreconditionFailed            = 412,

    /*! @link https://tools.ietf.org/html/rfc7231 */
    IHTTPStatus413PayloadTooLarge               = 413,
    IHTTPStatus414URITooLong                    = 414,
    IHTTPStatus415UnsupportedMediaType          = 415,

    /*! @link https://tools.ietf.org/html/rfc7233 */
    IHTTPStatus416RangeNotSatisfiable           = 416,
    
    IHTTPStatus417ExpectationFailed             = 417,
    
    /*! @link https://tools.ietf.org/html/rfc2324 */
    /*! @link https://tools.ietf.org/html/rfc7168 */
    IHTTPStatus418ImATeapot                     = 418,
    
    /*! https://tools.ietf.org/html/rfc7540 */
    IHTTPStatus421MisdirectedRequest            = 421,
    
    /*! @link https://tools.ietf.org/html/rfc4918 - WebDAV */
    IHTTPStatus422UnprocessableEntity           = 422,
    IHTTPStatus423Locked                        = 423,
    IHTTPStatus424FailedDependency              = 424,
    
    /*! @link https://tools.ietf.org/html/rfc8470 */
    IHTTPStatus425TooEarly                      = 425,
    
    IHTTPStatus426UpgradeRequired               = 426,
    
    /*! @link https://tools.ietf.org/html/rfc6585 */
    IHTTPStatus428PreconditionRequired          = 428,
    IHTTPStatus429TooManyRequests               = 429,
    
    IHTTPStatus431RequestHeaderFieldsTooLarge   = 431,
    
    /*! @link https://tools.ietf.org/html/rfc7725 */
    IHTTPStatus451UnavailableForLegalReasons    = 451,

    // 5xx Server errors
    IHTTPStatus500InternalServerError           = 500,
    IHTTPStatus501NotImplemented                = 501,
    IHTTPStatus502BadGateway                    = 502,
    IHTTPStatus503ServiceUnavailable            = 503,
    IHTTPStatus504GatewayTimeout                = 504,
    IHTTPStatus505HTTPVersionNotSupported       = 505,

    /*! @link https://tools.ietf.org/html/rfc2295 */
    IHTTPStatus506VariantAlsoNegotiates         = 506,
    
    /*! @link https://tools.ietf.org/html/rfc4918 */
    IHTTPStatus507InsufficientStorage           = 507,
    
    /*! @link https://tools.ietf.org/html/rfc5842 */
    IHTTPStatus508LoopDetected                  = 508,
    
    /*! @link https://tools.ietf.org/html/rfc2774 */
    IHTTPStatus510NotExtended                   = 510,
    
    /*! @link https://tools.ietf.org/html/rfc6585 */
    IHTTPStatus511NetworkAuthenticationRequired = 511
};

/*! @brief default and secure ports for the IHTTPServer */
typedef NS_ENUM(NSUInteger, IHTTPDefaultPorts) {
    IHTTPDefaultPort = 8080,
    IHTTPSecurePort = 8443
};

#pragma mark - HTTP Header Fields

static NSString* const IHTTPHeader                              = @"Header";
static NSString* const IHTTPContentTypeHeader                   = @"Content-Type";
static NSString* const IHTTPDateHeader                          = @"Date";
static NSString* const IHTTPPragmaHeader                        = @"Pragma";
static NSString* const IHTTPCacheControlHeader                  = @"Cache-Control";
static NSString* const IHTTPConnectionHeader                    = @"Connection";
static NSString* const IHTTPContentLengthHeader                 = @"Content-Length";
static NSString* const IHTTPContentMD5Header                    = @"Content-MD5";
static NSString* const IHTTPUpgradeHeader                       = @"Upgrade";
static NSString* const IHTTPViaHeader                           = @"Via";
static NSString* const IHTTPWarningHeader                       = @"Warning";

#pragma mark - HTTP Request Header Fields

static NSString* const IHTTPAcceptHeader                        = @"Accept";
static NSString* const IHTTPAcceptCharsetHeader                 = @"Accept-Charset";
static NSString* const IHTTPAcceptDatetimeHeader                = @"Accept-Datetime";
static NSString* const IHTTPAcceptEncodingHeader                = @"Accept-Encoding";
static NSString* const IHTTPAcceptLanguageHeader                = @"Accept-Language";
static NSString* const IHTTPAccessControlRequestMethodHeader    = @"Access-Control-Request-Method";
static NSString* const IHTTPAccessControlRequestHeadersHeader   = @"Access-Control-Request-Headers";
static NSString* const IHTTPAuthorizationHeader                 = @"Authorization";
static NSString* const IHTTPCookieHeader                        = @"Cookie";
static NSString* const IHTTPExpectHeader                        = @"Expect";
static NSString* const IHTTPForwardedHeader                     = @"Forwarded";
static NSString* const IHTTPFromHeader                          = @"From";
static NSString* const IHTTPHostHeader                          = @"Host";
static NSString* const IHTTPIfMatchHeader                       = @"If-Match";
static NSString* const IHTTPIfModifiedSinceHeader               = @"If-Modified-Since";
static NSString* const IHTTPIfNoneMatchHeader                   = @"If-None-Match";
static NSString* const IHTTPIfRangeHeader                       = @"If-Range";
static NSString* const IHTTPIfUnmodifiedSinceHeader             = @"If-Unmodified-Since";
static NSString* const IHTTPMaxForwardsHeader                   = @"Max-Forwards";
static NSString* const IHTTPOriginHeader                        = @"Origin";
static NSString* const IHTTPProxyAuthorizationHeader            = @"Proxy-Authorization";
static NSString* const IHTTPRangeHeader                         = @"Range";
static NSString* const IHTTPRefererHeader                       = @"Referer";
static NSString* const IHTTPReferrerHeader                      = IHTTPRefererHeader;
static NSString* const IHTTPTEHeader                            = @"TE";
static NSString* const IHTTPUserAgentHeader                     = @"User-Agent";

#pragma mark - HTTP Response Header Fields

static NSString* const IHTTPAccessControlAllowOriginHeader      = @"Access-Control-Allow-Origin";
static NSString* const IHTTPAccessControlAllowCredentialsHeader = @"Access-Control-Allow-Credentials";
static NSString* const IHTTPAccessControlExposeHeadersHeader    = @"Access-Control-Expose-Headers";
static NSString* const IHTTPAccessControlMaxAgeHeader           = @"Access-Control-Max-Age";
static NSString* const IHTTPAccessControlAllowMethodsHeader     = @"Access-Control-Allow-Methods";
static NSString* const IHTTPAccessControlAllowHeadersHeader     = @"Access-Control-Allow-Headers";
static NSString* const IHTTPAcceptPatchHeader                   = @"Accept-Patch";
static NSString* const IHTTPAcceptRangesHeader                  = @"Accept-Ranges";
static NSString* const IHTTPAgeHeader                           = @"Age";
static NSString* const IHTTPAllowHeader                         = @"Allow";
static NSString* const IHTTPAltSvcHeader                        = @"Alt-Svc";
static NSString* const IHTTPContentDispositionHeader            = @"Content-Disposition";
static NSString* const IHTTPContentEncodingHeader               = @"Content-Encoding";
static NSString* const IHTTPContentLanguageHeader               = @"Content-Language";
static NSString* const IHTTPContentLocationHeader               = @"Content-Location";
static NSString* const IHTTPContentRangeHeader                  = @"Content-Range";
static NSString* const IHTTPDeltaBaseHeader                     = @"Delta-Base";
static NSString* const IHTTPETagHeader                          = @"ETag";
static NSString* const IHTTPExpiresHeader                       = @"Expires";
static NSString* const IHTTPIMHeader                            = @"IM";
static NSString* const IHTTPLastModifiedHeader                  = @"Last-Modified";
static NSString* const IHTTPLinkHeader                          = @"Link";
static NSString* const IHTTPLocationHeader                      = @"Location";
static NSString* const IHTTPP3PHeader                           = @"P3P";
static NSString* const IHTTPProxyAuthenticateHeader             = @"Pragma";
static NSString* const IHTTPPublicKeyPinsHeader                 = @"Public-Key-Pins";
static NSString* const IHTTPRetryAfterHeader                    = @"Retry-After";
static NSString* const IHTTPServerHeader                        = @"Server";
static NSString* const IHTTPSetCookieHeader                     = @"Set-Cookie";
static NSString* const IHTTPStrictTransportSecurityHeader       = @"Strict-Transport-Security";
static NSString* const IHTTPTrailerHeader                       = @"Trailer";
static NSString* const IHTTPTransferEncodingHeader              = @"Transfer-Encoding";
static NSString* const IHTTPTkHeader                            = @"Tk";
static NSString* const IHTTPVaryHeader                          = @"Vary";
static NSString* const IHTTPWWWAuthenticateHeader               = @"WWW-Authenticate";
static NSString* const IHTTPXFrameOptionsHeader                 = @"X-Frame-Options";

#endif /* IHTTPConstants_h */

// Copyright © 2016-2019 Alf Watt. Available under MIT License (MIT) in README.md