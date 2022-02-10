/** 
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved. 
 * SPDX-License-Identifier: Apache-2.0. 
 */ 
 
#include <aws/s3/model/GetBucketNotificationConfigurationRequest.h> 
#include <aws/core/utils/xml/XmlSerializer.h> 
#include <aws/core/utils/memory/stl/AWSStringStream.h> 
#include <aws/core/http/URI.h> 
#include <aws/core/utils/memory/stl/AWSStringStream.h> 
 
#include <utility> 
 
using namespace Aws::S3::Model; 
using namespace Aws::Utils::Xml; 
using namespace Aws::Utils; 
using namespace Aws::Http; 
 
GetBucketNotificationConfigurationRequest::GetBucketNotificationConfigurationRequest() :  
    m_bucketHasBeenSet(false), 
    m_expectedBucketOwnerHasBeenSet(false), 
    m_customizedAccessLogTagHasBeenSet(false) 
{ 
} 
 
Aws::String GetBucketNotificationConfigurationRequest::SerializePayload() const 
{ 
  return {};
} 
 
void GetBucketNotificationConfigurationRequest::AddQueryStringParameters(URI& uri) const 
{ 
    Aws::StringStream ss; 
    if(!m_customizedAccessLogTag.empty()) 
    { 
        // only accept customized LogTag which starts with "x-" 
        Aws::Map<Aws::String, Aws::String> collectedLogTags; 
        for(const auto& entry: m_customizedAccessLogTag) 
        { 
            if (!entry.first.empty() && !entry.second.empty() && entry.first.substr(0, 2) == "x-") 
            { 
                collectedLogTags.emplace(entry.first, entry.second); 
            } 
        } 
 
        if (!collectedLogTags.empty()) 
        { 
            uri.AddQueryStringParameter(collectedLogTags); 
        } 
    } 
} 
 
Aws::Http::HeaderValueCollection GetBucketNotificationConfigurationRequest::GetRequestSpecificHeaders() const 
{ 
  Aws::Http::HeaderValueCollection headers; 
  Aws::StringStream ss; 
  if(m_expectedBucketOwnerHasBeenSet) 
  { 
    ss << m_expectedBucketOwner; 
    headers.emplace("x-amz-expected-bucket-owner",  ss.str()); 
    ss.str(""); 
  } 
 
  return headers; 
} 
