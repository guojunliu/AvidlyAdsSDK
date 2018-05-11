Pod::Spec.new do |s|
  s.name             = 'AvidlyAdsSDK'
  s.version          = '0.0.1'
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
  s.author           = { "steve" => "steve.liu@avid.ly" }
  s.source           = { :git => 'https://github.com/guojunliu/AvidlyAdsSDK.git', :tag => s.version }

  s.ios.deployment_target = '8.0'

  # s.source_files = 'Framework/Appnext/include/*', 'Framework/Chance/include/*', 'Framework/GDT/include/*'
  
  s.resources = "Framework/Tapjoy/Resources/*"

  # s.public_header_files = 'Framework/Appnext/include/*', 'Framework/Chance/include/*', 'Framework/GDT/include/*'

  s.library = 'sqlite3', 'z', 'c++', 'xml2'

  s.frameworks = 'QuartzCore', 'MediaPlayer', 'CoreMedia', 'CoreGraphics', 'CFNetwork', 'WebKit', 'WatchConnectivity', 'SystemConfiguration', 'StoreKit', 'Social', 'MessageUI','JavaScriptCore','EventKit','CoreTelephony','AVFoundation','AudioToolbox','AdSupport','GLKit','CoreMotion','SafariServices','CoreLocation','EventKitUI','EventKit','MobileCoreServices'

  # s.vendored_libraries = "Framework/Appnext/libAppnextLib.a", "Framework/Appnext/libAppnextSDKCore.a", "Framework/Chance/libChanceAd_Video.a", "Framework/GDT/libGDTMobSDK.a"

  s.vendored_frameworks = 'Framework/Tapjoy/Tapjoy.framework'

end