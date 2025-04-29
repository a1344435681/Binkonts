Pod::Spec.new do |s|
  s.name             = 'Binkonts'
  s.version          = '0.1.0'
  s.summary          = 'A utility tool for getting iOS device information easily.'
  s.description      = <<-DESC
Binkonts is a lightweight and efficient Objective-C library that provides simple APIs 
to retrieve iOS device information, such as model name, system version, and other hardware details.
  DESC
  s.homepage         = 'https://github.com/a1344435681/Binkonts'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'a1344435681' => '1344435681@qq.com' }
  s.source           = { :git => 'https://github.com/a1344435681/Binkonts.git', :tag => s.version }
  s.platform         = :ios, '12.0'
  s.requires_arc     = true
  s.source_files     = 'Binkonts/Classes/**/*'
end
