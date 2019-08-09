Pod::Spec.new do |s|
  s.name             = 'UPSDK'
  s.version          = '3.0.07'
  s.summary          = 'UPLTV SDK'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
Avidly Ad SDK.
                       DESC

  s.homepage         = 'http://docs.upltv.com/zh/master/chapters/chapter00.html'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { "steve" => "steve.liu@upltv.com" }
  s.source           = { :git => 'https://github.com/guojunliu/AvidlyAdsSDK.git', :tag => s.version }

  s.ios.deployment_target = '9.0'

  s.source_files = 'Framework/GDT/include/*'
  
  s.resources = "Framework/UPSDK/resource/*", "Framework/Baidu/resource/*", "Framework/PlayableAds/resource/*", "Framework/Toutiao/resource/*"

  s.public_header_files = 'Framework/GDT/include/*'

  s.library = 'sqlite3', 'z', 'c++', 'xml2', 'resolv'

  s.frameworks = 'QuartzCore', 'MediaPlayer', 'CoreMedia', 'CoreGraphics', 'CFNetwork', 'WebKit', 'WatchConnectivity', 'SystemConfiguration', 'StoreKit', 'Social', 'MessageUI','JavaScriptCore','EventKit','CoreTelephony','AVFoundation','AudioToolbox','AdSupport','GLKit','CoreMotion','SafariServices','CoreLocation','EventKitUI','EventKit','MobileCoreServices', 'VideoToolbox', 'PhotosUI', 'Photos'

  s.vendored_libraries = "Framework/GDT/libGDTMobSDK.a"

  s.vendored_frameworks = 'Framework/UPSDK/UPSDK.framework', 'Framework/AdColony/AdColony.framework', 'Framework/AppLovin/AppLovinSDK.framework', 'Framework/AppLovin/AppLovinAdapter.framework', 'Framework/Baidu/BaiduMobAdSDK.framework', 'Framework/Chartboost/Chartboost.framework', 'Framework/FBAudienceNetwork/FBAudienceNetwork.framework', 'Framework/FBAudienceNetwork/FBAudienceNetworkBiddingKit.framework', 'Framework/FBAudienceNetwork/FacebookAdapter.framework', 'Framework/GoogleMobileAds/GoogleMobileAds.framework', 'Framework/GoogleMobileAds/GoogleAppMeasurement.framework', 'Framework/GoogleMobileAds/GoogleUtilities.framework', 'Framework/GoogleMobileAds/nanopb.framework', 'Framework/IronSource/IronSource.framework', 'Framework/IronSource/IronSourceAdapter.framework', 'Framework/Mintegral/MTGSDK.framework', 'Framework/Mintegral/MTGSDKReward.framework', 'Framework/Mintegral/MTGSDKInterActive.framework', 'Framework/MyTarget/MyTargetSDK.framework', 'Framework/PlayableAds/PlayableAdsSDK.framework', 'Framework/Unity/UnityAds.framework', 'Framework/Vungle/VungleSDK.framework', 'Framework/OneWay/OneWaySDK.framework', 'Framework/Toutiao/BUAdSDK.framework', 'Framework/Sigmob/WindSDK.framework'

end
