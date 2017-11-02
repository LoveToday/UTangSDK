Pod::Spec.new do |s|
  s.name         = "UTangSDK"
  s.version      = "1.0.0"
  s.summary      = "第三方库源文件与自定义组件"
  s.description  = <<-DESC
                     用于存放修改过的第三方库文件
                   DESC
  s.homepage     = "https://github.com/LoveToday/UTangSDK.git"
  s.license      = 'MIT'
  s.author       = { "Arvin.Cheng" => "1215999200@qq.com" }
  s.source       = { :git => "https://github.com/LoveToday/UTangSDK.git", :tag =>  s.version }

  s.platform     = :ios, '8.0'
  s.requires_arc = true

  s.public_header_files = 'UTangSDK/*.h'
  s.source_files = 'UTangSDK/*.{h,m}'
  s.frameworks   = 'Foundation', 'UIKit'

#  s.libraries  = 'sqlite3.0', 'z', 'c++'
  s.vendored_libraries = "UTangSDK/*.{a}"
  s.vendored_frameworks = "UTangSDK/*.{framework}"


end
