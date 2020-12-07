Pod::Spec.new do |spec|
    spec.name                     = 'Shared'
    spec.version                  = '0.0.8'
    spec.homepage                 = 'https://www.phishar.com'
    spec.source                   = { :git => 'https://github.com/dodsky/shared-pod-test.git', :tag => '0.0.8' }
    spec.authors                  = ''
    spec.license                  = { :type => 'MIT', :text => '' }
    spec.summary                  = 'PhishAR Cocoapod'

    spec.platform                 = :ios
    spec.ios.deployment_target    = '9.0'
    spec.static_framework         = true
    spec.vendored_frameworks      = "shared.xcframework"
    spec.libraries                = "c++"
    spec.module_name              = "#{spec.name}_umbrella"

    spec.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
    spec.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }

    spec.pod_target_xcconfig = {
        'KOTLIN_TARGET[sdk=iphonesimulator*]' => 'ios_x64',
        'KOTLIN_TARGET[sdk=iphoneos*]' => 'ios_arm',
        'KOTLIN_TARGET[sdk=watchsimulator*]' => 'watchos_x86',
        'KOTLIN_TARGET[sdk=watchos*]' => 'watchos_arm',
        'KOTLIN_TARGET[sdk=appletvsimulator*]' => 'tvos_x64',
        'KOTLIN_TARGET[sdk=appletvos*]' => 'tvos_arm64',
        'KOTLIN_TARGET[sdk=macosx*]' => 'macos_x64'
    }
end
