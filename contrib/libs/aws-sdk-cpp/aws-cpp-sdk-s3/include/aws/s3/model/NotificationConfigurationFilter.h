/** 
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved. 
 * SPDX-License-Identifier: Apache-2.0. 
 */ 
 
#pragma once 
#include <aws/s3/S3_EXPORTS.h> 
#include <aws/s3/model/S3KeyFilter.h> 
#include <utility> 
 
namespace Aws 
{ 
namespace Utils 
{ 
namespace Xml 
{ 
  class XmlNode; 
} // namespace Xml 
} // namespace Utils 
namespace S3 
{ 
namespace Model 
{ 
 
  /** 
   * <p>Specifies object key name filtering rules. For information about key name 
   * filtering, see <a 
   * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/NotificationHowTo.html">Configuring
   * Event Notifications</a> in the <i>Amazon Simple Storage Service Developer
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/NotificationConfigurationFilter">AWS 
   * API Reference</a></p> 
   */ 
  class AWS_S3_API NotificationConfigurationFilter 
  { 
  public: 
    NotificationConfigurationFilter(); 
    NotificationConfigurationFilter(const Aws::Utils::Xml::XmlNode& xmlNode); 
    NotificationConfigurationFilter& operator=(const Aws::Utils::Xml::XmlNode& xmlNode); 
 
    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const; 
 
 
     
    inline const S3KeyFilter& GetKey() const{ return m_key; } 
 
     
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    
    inline void SetKey(const S3KeyFilter& value) { m_keyHasBeenSet = true; m_key = value; } 
 
     
    inline void SetKey(S3KeyFilter&& value) { m_keyHasBeenSet = true; m_key = std::move(value); } 
 
     
    inline NotificationConfigurationFilter& WithKey(const S3KeyFilter& value) { SetKey(value); return *this;} 
 
     
    inline NotificationConfigurationFilter& WithKey(S3KeyFilter&& value) { SetKey(std::move(value)); return *this;} 
 
  private: 
 
    S3KeyFilter m_key; 
    bool m_keyHasBeenSet; 
  }; 
 
} // namespace Model 
} // namespace S3 
} // namespace Aws 
