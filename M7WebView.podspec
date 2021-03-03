

Pod::Spec.new do |s|

  s.name         = "M7WebView"
  s.version      = "0.0.2"
  s.summary      = " An component WebView for iOS base on WKWebView ."
  s.description  = <<-DESC
                   M7WeView is an extensible WebView which is built on top of WKWebView, the modern WebKit framework debuted in iOS 8.0. It provides fast Web for developing sophisticated iOS native or hybrid applications.
                   DESC
 
  s.homepage     = "https://github.com/DevMan7/M7WeView"
  s.license      = { :type => "MIT", :file => "LICENSE" }
  s.author             = { "Man7" => "0x00hl7@gmail.com" }
  s.platform     = :ios, "11.0"
  s.requires_arc = true   
  s.source       = { :git => "https://github.com/DeveloperMan7/M7WeView.git", :tag => s.version}
  s.source_files  ="M7WebView/**/*.{m,h}"
  s.resources = "M7WebView/M7WKNative/views/*.png"


end
