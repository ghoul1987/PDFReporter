//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/apache/harmony/xml/dom/AttrImpl.java
//

#ifndef _OrgApacheHarmonyXmlDomAttrImpl_H_
#define _OrgApacheHarmonyXmlDomAttrImpl_H_

@class OrgApacheHarmonyXmlDomDocumentImpl;
@class OrgApacheHarmonyXmlDomElementImpl;
@protocol OrgW3cDomElement;
@protocol OrgW3cDomTypeInfo;

#include "J2ObjC_header.h"
#include "org/apache/harmony/xml/dom/NodeImpl.h"
#include "org/w3c/dom/Attr.h"

@interface OrgApacheHarmonyXmlDomAttrImpl : OrgApacheHarmonyXmlDomNodeImpl < OrgW3cDomAttr > {
 @public
  OrgApacheHarmonyXmlDomElementImpl *ownerElement_;
  jboolean isId__;
  jboolean namespaceAware_;
  NSString *namespaceURI_;
  NSString *prefix_;
  NSString *localName_;
}

- (instancetype)initWithOrgApacheHarmonyXmlDomDocumentImpl:(OrgApacheHarmonyXmlDomDocumentImpl *)document
                                              withNSString:(NSString *)namespaceURI
                                              withNSString:(NSString *)qualifiedName;

- (instancetype)initWithOrgApacheHarmonyXmlDomDocumentImpl:(OrgApacheHarmonyXmlDomDocumentImpl *)document
                                              withNSString:(NSString *)name;

- (NSString *)getLocalName;

- (NSString *)getName;

- (NSString *)getNamespaceURI;

- (NSString *)getNodeName;

- (jshort)getNodeType;

- (NSString *)getNodeValue;

- (id<OrgW3cDomElement>)getOwnerElement;

- (NSString *)getPrefix;

- (jboolean)getSpecified;

- (NSString *)getValue;

- (void)setPrefixWithNSString:(NSString *)prefix;

- (void)setValueWithNSString:(NSString *)value;

- (id<OrgW3cDomTypeInfo>)getSchemaTypeInfo;

- (jboolean)isId;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheHarmonyXmlDomAttrImpl)

J2OBJC_FIELD_SETTER(OrgApacheHarmonyXmlDomAttrImpl, ownerElement_, OrgApacheHarmonyXmlDomElementImpl *)
J2OBJC_FIELD_SETTER(OrgApacheHarmonyXmlDomAttrImpl, namespaceURI_, NSString *)
J2OBJC_FIELD_SETTER(OrgApacheHarmonyXmlDomAttrImpl, prefix_, NSString *)
J2OBJC_FIELD_SETTER(OrgApacheHarmonyXmlDomAttrImpl, localName_, NSString *)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheHarmonyXmlDomAttrImpl)

#endif // _OrgApacheHarmonyXmlDomAttrImpl_H_