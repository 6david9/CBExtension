Pod::Spec.new do |s|
  s.name         = "CBExtension"
  s.version      = "0.1"
  s.summary      = "CBExtension is an Extension of cocoa Foundation."

  s.homepage     = "https://github.com/6david9/CBExtension"
  s.license      = 'Free to use'

  s.author       = { "ly" => "6david9@163.com" }
  s.source       = { :git => "https://github.com/6david9/CBExtension.git" }

  s.source_files = 'CBExtension/CBExtension'

  s.framework  = 'Foundation'
  # s.frameworks = 'SomeFramework', 'AnotherFramework'

  s.requires_arc = true
end
