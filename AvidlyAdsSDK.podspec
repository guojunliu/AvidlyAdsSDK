Pod::Spec.new do |s|
  s.name             = 'AvidlyAdsSDK'
  s.version          = '2.0.19'
  s.summary          = 'Avidly Ad SDK'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
Avidly Ad SDK.
                       DESC

  s.homepage         = 'http://ads-sdk-doc.haloapps.com/docs/show/2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { "steve" => "steve.liu@holaverse.com" }
  s.source           = { :git => 'https://github.com/guojunliu/AvidlyAdsSDK', :tag => s.version }

  s.ios.deployment_target = '8.0'

#  s.source_files = 'TGSDK/Classes/**/*'
  
  s.resources = "3rdFramework/ChanceAd-SDK-6.4.3/ChanceAdRes.bundle", "3rdFramework/Domob-SDK-3.6.0/Resource/*", "3rdFramework/Vungle-SDK-4.0.9/Resources/*", "Framework/AvidlyAdsSDK/AvidlyAdsSDK.bundle",

  s.public_header_files = '3rdFramework/Appnext-SDK-1.8.2/include/**/*', '3rdFramework/ChanceAd-SDK-6.4.3/*.h', '3rdFramework/Domob-SDK-3.6.0/Headers/*.h', '3rdFramework/OneWaySDK-1.3.0/*.h', 

  s.library = 'libsqlite3', 'libz'

  s.frameworks = 'QuartzCore', 'MediaPlayer', 'CoreMedia', 'CoreGraphics', 'CFNetwork', 'WebKit', 'WatchConnectivity', 'SystemConfiguration', 'StoreKit', 'Social', 'MessageUI','JavaScriptCore','EventKit','CoreTelephony','AVFoundation','AudioToolbox','AdSupport'

  s.vendored_libraries = "3rdFramework/Appnext-SDK-1.8.2/libAppnextLib.a", "3rdFramework/Appnext-SDK-1.8.2/libAppnextSDKCore.a", "3rdFramework/ChanceAd-SDK-6.4.3/libChanceAd_Video.a", "3rdFramework/Domob-SDK-3.6.0/libIndependentVideoSDK.a", "3rdFramework/OneWaySDK-1.3.0/OnewaySDK.a"

  s.vendored_frameworks = '3rdFramework/AdColony-iOS-SDK-3.1.0/AdColony.framework', '3rdFramework/Mobvista-SDK-1.9.0/MVSDK.framework', '3rdFramework/Mobvista-SDK-1.9.0/MVSDKReward.framework', '3rdFramework/Unity-SDK-2.1.0/UnityAds.framework', '3rdFramework/Vungle-SDK-4.0.9/VungleSDK.framework', 'Framework/AvidlyAdsSDK/AvidlyAdsSDK.framework', 'Framework/FBAudienceNetwork-4.22.0/FBAudienceNetwork.framework', 'Framework/GoogleMobileAdsSdkiOS-7.19.0/GoogleMobileAds.framework', 'Framework/HolaStatisticalSDK/HolaStatisticalSDK.framework'
end