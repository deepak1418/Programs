
Ruby is a pure object-oriented programming language. It was created in 1993 by Yukihiro Matsumoto of Japan.

You can find the name Yukihiro Matsumoto on the Ruby mailing list at www.ruby-lang.org. Matsumoto is also known as Matz in the Ruby community.

Ruby is "A Programmer's Best Friend".

Ruby has features that are similar to those of Smalltalk, Perl, and Python. Perl, Python, and Smalltalk are scripting languages. Smalltalk is a true object-oriented language. Ruby, like Smalltalk, is a perfect object-oriented language. Using Ruby syntax is much easier than using Smalltalk syntax.

Features of Ruby
Ruby is an open-source and is freely available on the Web, but it is subject to a license.

Ruby is a general-purpose, interpreted programming language.

Ruby is a true object-oriented programming language.

Ruby is a server-side scripting language similar to Python and PERL.

Ruby can be used to write Common Gateway Interface (CGI) scripts.

Ruby can be embedded into Hypertext Markup Language (HTML).

Ruby has a clean and easy syntax that allows a new developer to learn very quickly and easily.

Ruby has similar syntax to that of many programming languages such as C++ and Perl.

Ruby is very much scalable and big programs written in Ruby are easily maintainable.

Ruby can be used for developing Internet and intranet applications.

Ruby can be installed in Windows and POSIX environments.

Ruby support many GUI tools such as Tcl/Tk, GTK, and OpenGL.

Ruby can easily be connected to DB2, MySQL, Oracle, and Sybase.

Ruby has a rich set of built-in functions, which can be used directly into Ruby scripts.

Tools You Will Need
For performing the examples discussed in this tutorial, you will need a latest computer like Intel Core i3 or i5 with a minimum of 2GB of RAM (4GB of RAM recommended). You also will need the following software −

Linux or Windows 95/98/2000/NT or Windows 7 operating system.

Apache 1.3.19-5 Web server.

Internet Explorer 5.0 or above Web browser.

Ruby 1.8.5

This tutorial will provide the necessary skills to create GUI, networking, and Web applications using Ruby. It also will talk about extending and embedding Ruby applications.



Choose Your Installation Method
There are several ways to install Ruby:

When you are on a UNIX-like operating system, using your system’s package manager is the easiest way of getting started. However, the packaged Ruby version usually is not the newest one.
Installers can be used to install a specific or multiple Ruby versions. There is also an installer for Windows.
Managers help you to switch between multiple Ruby installations on your system.
And finally, you can also build Ruby from source.
The following overview lists available installation methods for different needs and platforms.

Package Management Systems
Debian, Ubuntu
CentOS, Fedora, RHEL
Gentoo
Arch Linux
OS X
FreeBSD
Solaris, OpenIndiana
Other Distributions
Installers
ruby-build
ruby-install
RubyInstaller (Windows)
RailsInstaller and Ruby Stack
Managers
chruby
rbenv
RVM
uru
Building from source





Package Management Systems
If you cannot compile your own Ruby, and you do not want to use a third-party tool, you can use your system’s package manager to install Ruby.

Certain members in the Ruby community feel very strongly that you should never use a package manager to install Ruby and that you should use tools instead. While the full list of pros and cons is outside of the scope of this page, the most basic reason is that most package managers have older versions of Ruby in their official repositories. If you would like to use the newest Ruby, make sure you use the correct package name, or use the tools described further below instead.

apt (Debian or Ubuntu)
Debian GNU/Linux and Ubuntu use the apt package manager. You can use it like this:

$ sudo apt-get install ruby-full
As of writing, the ruby-full package provides Ruby 2.3.1, which is an old stable release, on Debian and Ubuntu.

yum (CentOS, Fedora, or RHEL)
CentOS, Fedora, and RHEL use the yum package manager. You can use it like this:

$ sudo yum install ruby
The installed version is typically the latest version of Ruby available at the release time of the specific distribution version.

portage (Gentoo)
Gentoo uses the portage package manager.

$ sudo emerge dev-lang/ruby
By default, this will try to install versions 1.9 and 2.0, but more versions are available. To install a specific version, set RUBY_TARGETS in your make.conf. See the Gentoo Ruby Project website for details.

pacman (Arch Linux)
Arch Linux uses a package manager named pacman. To get Ruby, just do this:

$ sudo pacman -S ruby
This should install the latest stable Ruby version.

Homebrew (OS X)
On macOS (High) Sierra and OS X El Capitan, Ruby 2.0 is included.

Many people on OS X use Homebrew as a package manager. It is really easy to get a newer version of Ruby using Homebrew:

$ brew install ruby
This should install the latest Ruby version.

FreeBSD
FreeBSD offers both pre-packaged and source-based methods to install Ruby. Prebuilt packages can be installed via the pkg tool:

$ pkg install ruby
A source-based method can be used to install Ruby using the Ports Collection. This is useful if you want to customize the build configuration options.

More information about Ruby and its surrounding ecosystem on FreeBSD can be found on the FreeBSD Ruby Project website.

Ruby on Solaris and OpenIndiana
Ruby 1.8.7 is available for Solaris 8 through Solaris 10 on Sunfreeware and Ruby 1.8.7 is available at Blastwave. Ruby 1.9.2p0 is also available at Sunfreeware, but this is outdated.

To install Ruby on OpenIndiana, please use the Image Packaging System (IPS) client. This will install the Ruby binaries and RubyGems directly from the OpenIndiana repositories. It’s easy:

$ pkg install runtime/ruby
However, the third-party tools might be a good way to obtain the latest version of Ruby.

Other Distributions
On other systems, you can search the package repository of your Linux distribution’s manager for Ruby, or the third-party tools might be the right choice for you.

Installers
If the version of Ruby provided by your system or package manager is out of date, a newer one can be installed using a third-party installer. Some of them also allow you to install multiple versions on the same system; associated managers can help to switch between the different Rubies. If you are planning to use RVM as a version manager you do not need a separate installer, it comes with its own.

ruby-build
ruby-build is a plugin for rbenv that allows you to compile and install different versions of Ruby into arbitrary directories. ruby-build can also be used as a standalone program without rbenv. It is available for OS X, Linux, and other UNIX-like operating systems.

ruby-install
ruby-install allows you to compile and install different versions of Ruby into arbitrary directories. There is also a sibling, chruby, which handles switching between Ruby versions. It is available for OS X, Linux, and other UNIX-like operating systems.

RubyInstaller
If you are on Windows, there is a great project to help you install Ruby: RubyInstaller. It gives you everything you need to set up a full Ruby development environment on Windows.

Just download it, run it, and you are done!

RailsInstaller and Ruby Stack
If you are installing Ruby in order to use Ruby on Rails, you can use the following installers:

RailsInstaller, which uses RubyInstaller but gives you extra tools that help with Rails development. It supports OS X and Windows.
Bitnami Ruby Stack, which provides a complete development environment for Rails. It supports OS X, Linux, Windows, virtual machines, and cloud images.
Managers
Many Rubyists use Ruby managers to manage multiple Rubies. They confer various advantages but are not officially supported. Their respective communities are very helpful, however.

chruby
chruby allows you to switch between multiple Rubies. chruby can manage Rubies installed by ruby-install or even built from source.

rbenv
rbenv allows you to manage multiple installations of Ruby. It does not support installing Ruby, but there is a popular plugin named ruby-build to install Ruby. Both tools are available for OS X, Linux, or other UNIX-like operating systems.

RVM (“Ruby Version Manager”)
RVM allows you to install and manage multiple installations of Ruby on your system. It can also manage different gemsets. It is available for OS X, Linux, or other UNIX-like operating systems.

uru
Uru is a lightweight, multi-platform command line tool that helps you to use multiple Rubies on OS X, Linux, or Windows systems.

Building from Source
Of course, you can install Ruby from source. Download and unpack a tarball, then just do this:

$ ./configure
$ make
$ sudo make install
By default, this will install Ruby into /usr/local. To change, pass the --prefix=DIR option to the ./configure script.

Using the third-party tools or package managers might be a better idea, though, because the installed Ruby won’t be managed by any tools.




