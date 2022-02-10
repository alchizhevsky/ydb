/** 
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved. 
 * SPDX-License-Identifier: Apache-2.0. 
 */ 
 
#include <aws/s3/model/DeleteObjectTaggingResult.h> 
#include <aws/core/utils/xml/XmlSerializer.h> 
#include <aws/core/AmazonWebServiceResult.h> 
#include <aws/core/utils/StringUtils.h> 
#include <aws/core/utils/memory/stl/AWSStringStream.h> 
 
#include <utility> 
 
using namespace Aws::S3::Model; 
using namespace Aws::Utils::Xml; 
using namespace Aws::Utils; 
using namespace Aws; 
 
DeleteObjectTaggingResult::DeleteObjectTaggingResult() 
{ 
} 
 
DeleteObjectTaggingResult::DeleteObjectTaggingResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) 
{ 
  *this = result; 
} 
 
DeleteObjectTaggingResult& DeleteObjectTaggingResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result) 
{ 
  const XmlDocument& xmlDocument = result.GetPayload(); 
  XmlNode resultNode = xmlDocument.GetRootElement(); 
 
  if(!resultNode.IsNull()) 
  { 
  } 
 
  const auto& headers = result.GetHeaderValueCollection(); 
  const auto& versionIdIter = headers.find("x-amz-version-id"); 
  if(versionIdIter != headers.end()) 
  { 
    m_versionId = versionIdIter->second; 
  } 
 
  return *this; 
} 
