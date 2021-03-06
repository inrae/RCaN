# CaN
<img src="app-icon.png" align="right" width="220" />

## RCaNconstructor installation
There are two way for installing RCaNconstructor.

### Binaries
We provide binaries for different platforms that can be used to facilitate the installation:
* [linux deb](binaries/rcanconstructor_1.0-1_amd64.deb)
* [mac os](binaries/RCaNconstructor.dmg)
* [windows](binaries/RCaNconstructor-21.17.51715.msi)

For windows, you need to be administrator of the machine to install the software. Depending on your OS configuration, you might need to open a consol prompt as an administrator and then enter to the command `msiexec /i path\to\RCaNconstructor-21.17.51715.msi install` 

### From source
To build RCaNconstructor from source, the easiest solution is to use maven to manage all dependencies.
The procedure will automatically build appropriate binaires for your platform. This was made possible thanks to the template provided [here](https://github.com/wiverson/maven-jpackage-template):
* install maven (at least version 3.3.2) and ensure that the maven/bin folder is in your system path
* install java (at least version 16)
* macOS: verify XCode is installed and needed agreements accepted.
    - Launch XCode and accept the license, or verify in Terminal with the command `sudo xcodebuild -license`.
* Windows: install [Wix 3 binaries](https://github.com/wixtoolset/wix3/releases/).
    - Installing Wix via the installer should be sufficient for jpackage to find it.
* download the RCaNconstructor folder from this repository
* After cloning the RCaNconstructor folder
* run `mvn clean install` in the the RCaNconstructor folder
* this will generate a binary in the target folder

