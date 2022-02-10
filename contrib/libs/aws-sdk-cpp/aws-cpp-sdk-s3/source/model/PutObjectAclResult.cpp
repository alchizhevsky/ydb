/** 
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved. 
 * SPDX-License-Identifier: Apache-2.0. 
 */ 
 
#include <aws/s3/model/PutObjectAclResult.h> 
#include <aws/core/utils/xml/XmlSerializer.h> 
#include <aws/core/AmazonWebServiceResult.h> 
#include <aws/core/utils/StringUtils.h> 
#include <aws/core/utils/memory/stl/AWSStringStream.h> 
 
#include <utility> 
 
using namespace Aws::S3::Model; 
using namespace Aws::Utils::Xml; 
using namespace Aws::Utils; 
using namespace Aws; 
 
PutObjectAclResult::PutObjectAclResult() :  
    m_requestCharged(RequestCharged::NOT_SET) 
{ 
} 
 
PutObjectAclResult::PutObjectAclResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) :  
    m_requestCharged(RequestCharged::NOT_SET) 
{ 
  *this = result; 
} 
 
PutObjectAclResult& PutObjectAclResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result) 
{ 
  const XmlDocument& xmlDocument = result.GetPayload(); 
  XmlNode resultNode = xmlDocument.GetRootElement(); 
 
  if(!resultNode.IsNull()) 
  { 
  } 
 
  const auto& headers = result.GetHeaderValueCollection(); 
  const auto& requestChargedIter = headers.find("x-amz-request-charged"); 
  if(requestChargedIter != headers.end()) 
  { 
    m_requestCharged = RequestChargedMapper::GetRequestChargedForName(requestChargedIter->second); 
  } 
 
  return *this; 
} 
