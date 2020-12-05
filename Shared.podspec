Pod::Spec.new do |s|  
    s.name              = 'Shared'
    s.version           = '0.0.1'
    s.summary           = 'Shared library.'
    s.homepage          = 'http://phishar.com'

    s.author            = { 'PhishAR' => 'support@phishar.com' }
    s.license           = 'MIT'

    s.platform          = :ios
    s.source            = { :http => 'https://github.com/dodsky/shared-pod-test/archive/0.0.1.zip' }

    s.ios.deployment_target = '9.0'
    s.ios.vendored_frameworks = 'Shared.xcframework'
end
