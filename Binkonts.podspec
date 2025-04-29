Pod::Spec.new do |s|
  s.name             = 'Binkonts'
  s.version          = '0.1.0'
  s.summary          = 'A useful DeviceTool utility class.'

  s.description      = <<-DESC
  DeviceTool provides various device-related utility functions.
  DESC

  s.homepage         = 'https://github.com/a1344435681/Binkonts'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'a1344435681' => '1344435681@qq.com' }
  s.source           = { :git => 'https://github.com/a1344435681/Binkonts.git', :tag => s.version.to_s }

  s.platform     = :ios, '9.0'
  s.source_files  = 'DeviceTool.{h,m}'
end
