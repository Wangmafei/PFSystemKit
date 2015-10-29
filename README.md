![PFSystemKit logo, Apple-style][logo]

![PFSystemKit features][features]

### OSX Framework for getting system informations  ![License](https://img.shields.io/badge/License-MIT-lightgreen.svg)
OS X (and partially iOS) framework for getting software and hardware informations (such as CPU vendor, RAM size, device model and serial, …) at runtime. Relies on IOKit and SysCtl, as well as on the now-deprecated GestaltManager, for compatibility purposes only.

Here's what you can gather with PFSystemKit:
* CPU informations (vendor, nominal clock speed, caches size, core count, thread count, marketing name)
* RAM infos (size, usage statistics)
* GPU infos (matching framebuffer, model, ports)
* Device infos (device family (e.g. MacBook Pro), model (MacBookPro8,1), version (8,1), serial)
* Battery (voltage, current, serial, manufacturer, age in days, cycle count, temperature)

### Contributing (hehehe, who am I kidding)
Found a bug ? Want a feature ? Don't be shy, pull requests welcome !
Otherwise, just open an issue, I'll have a look.
Have a special request ? Contact me (via issue first) - depending on what it is, it may cost some bucks.

### Roadmap
* Better iOS support
* Cocoapods and Carthage support
* GPU informations enhancements
* Network details

### Story
I started building this library in early 2015, for a project of mine that is now paused - an OSX app providing deep insight on the system, both on hardware and software sides. I choosed to bring this library to a more mature state before continuing the original project, while I'll still be keeping PFSystemKit up-to-date.

### Licensing
You are free to use this library in any of your projects, **provided you reproduce the present LICENSE file**, even for derivatives of this library. You may use the project for closed-source products, **given the source for the library is made available**.
However, you can purchase a special license for 75 Euros. This license allows you to redistribute the library without having to reproduce the LICENSE file nor having to publish the source code of your PFSystemKit version.

### LGPL License
>                    GNU LESSER GENERAL PUBLIC LICENSE
>                        Version 3, 29 June 2007
> 
>  Copyright (C) 2007 Free Software Foundation, Inc. <http://fsf.org/>
>  Everyone is permitted to copy and distribute verbatim copies
>  of this license document, but changing it is not allowed.
> 
> 
>   This version of the GNU Lesser General Public License incorporates
> the terms and conditions of version 3 of the GNU General Public
> License, supplemented by the additional permissions listed below.
> 
>   0. Additional Definitions.
> 
>   As used herein, "this License" refers to version 3 of the GNU Lesser
> General Public License, and the "GNU GPL" refers to version 3 of the GNU
> General Public License.
> 
>   "The Library" refers to a covered work governed by this License,
> other than an Application or a Combined Work as defined below.
> 
>   An "Application" is any work that makes use of an interface provided
> by the Library, but which is not otherwise based on the Library.
> Defining a subclass of a class defined by the Library is deemed a mode
> of using an interface provided by the Library.
> 
>   A "Combined Work" is a work produced by combining or linking an
> Application with the Library.  The particular version of the Library
> with which the Combined Work was made is also called the "Linked
> Version".
> 
>   The "Minimal Corresponding Source" for a Combined Work means the
> Corresponding Source for the Combined Work, excluding any source code
> for portions of the Combined Work that, considered in isolation, are
> based on the Application, and not on the Linked Version.
> 
>   The "Corresponding Application Code" for a Combined Work means the
> object code and/or source code for the Application, including any data
> and utility programs needed for reproducing the Combined Work from the
> Application, but excluding the System Libraries of the Combined Work.
> 
>   1. Exception to Section 3 of the GNU GPL.
> 
>   You may convey a covered work under sections 3 and 4 of this License
> without being bound by section 3 of the GNU GPL.
> 
>   2. Conveying Modified Versions.
> 
>   If you modify a copy of the Library, and, in your modifications, a
> facility refers to a function or data to be supplied by an Application
> that uses the facility (other than as an argument passed when the
> facility is invoked), then you may convey a copy of the modified
> version:
> 
>    a) under this License, provided that you make a good faith effort to
>    ensure that, in the event an Application does not supply the
>    function or data, the facility still operates, and performs
>    whatever part of its purpose remains meaningful, or
> 
>    b) under the GNU GPL, with none of the additional permissions of
>    this License applicable to that copy.
> 
>   3. Object Code Incorporating Material from Library Header Files.
> 
>   The object code form of an Application may incorporate material from
> a header file that is part of the Library.  You may convey such object
> code under terms of your choice, provided that, if the incorporated
> material is not limited to numerical parameters, data structure
> layouts and accessors, or small macros, inline functions and templates
> (ten or fewer lines in length), you do both of the following:
> 
>    a) Give prominent notice with each copy of the object code that the
>    Library is used in it and that the Library and its use are
>    covered by this License.
> 
>    b) Accompany the object code with a copy of the GNU GPL and this license
>    document.
> 
>   4. Combined Works.
> 
>   You may convey a Combined Work under terms of your choice that,
> taken together, effectively do not restrict modification of the
> portions of the Library contained in the Combined Work and reverse
> engineering for debugging such modifications, if you also do each of
> the following:
> 
>    a) Give prominent notice with each copy of the Combined Work that
>    the Library is used in it and that the Library and its use are
>    covered by this License.
> 
>    b) Accompany the Combined Work with a copy of the GNU GPL and this license
>    document.
> 
>    c) For a Combined Work that displays copyright notices during
>    execution, include the copyright notice for the Library among
>    these notices, as well as a reference directing the user to the
>    copies of the GNU GPL and this license document.
> 
>    d) Do one of the following:
> 
> 	   0) Convey the Minimal Corresponding Source under the terms of this
> 	   License, and the Corresponding Application Code in a form
> 	   suitable for, and under terms that permit, the user to
> 	   recombine or relink the Application with a modified version of
> 	   the Linked Version to produce a modified Combined Work, in the
> 	   manner specified by section 6 of the GNU GPL for conveying
> 	   Corresponding Source.
> 
> 	   1) Use a suitable shared library mechanism for linking with the
> 	   Library.  A suitable mechanism is one that (a) uses at run time
> 	   a copy of the Library already present on the user's computer
> 	   system, and (b) will operate properly with a modified version
> 	   of the Library that is interface-compatible with the Linked
> 	   Version.
> 
>    e) Provide Installation Information, but only if you would otherwise
>    be required to provide such information under section 6 of the
>    GNU GPL, and only to the extent that such information is
>    necessary to install and execute a modified version of the
>    Combined Work produced by recombining or relinking the
>    Application with a modified version of the Linked Version. (If
>    you use option 4d0, the Installation Information must accompany
>    the Minimal Corresponding Source and Corresponding Application
>    Code. If you use option 4d1, you must provide the Installation
>    Information in the manner specified by section 6 of the GNU GPL
>    for conveying Corresponding Source.)
> 
>   5. Combined Libraries.
> 
>   You may place library facilities that are a work based on the
> Library side by side in a single library together with other library
> facilities that are not Applications and are not covered by this
> License, and convey such a combined library under terms of your
> choice, if you do both of the following:
> 
>    a) Accompany the combined library with a copy of the same work based
>    on the Library, uncombined with any other library facilities,
>    conveyed under the terms of this License.
> 
>    b) Give prominent notice with the combined library that part of it
>    is a work based on the Library, and explaining where to find the
>    accompanying uncombined form of the same work.
> 
>   6. Revised Versions of the GNU Lesser General Public License.
> 
>   The Free Software Foundation may publish revised and/or new versions
> of the GNU Lesser General Public License from time to time. Such new
> versions will be similar in spirit to the present version, but may
> differ in detail to address new problems or concerns.
> 
>   Each version is given a distinguishing version number. If the
> Library as you received it specifies that a certain numbered version
> of the GNU Lesser General Public License "or any later version"
> applies to it, you have the option of following the terms and
> conditions either of that published version or of any later version
> published by the Free Software Foundation. If the Library as you
> received it does not specify a version number of the GNU Lesser
> General Public License, you may choose any version of the GNU Lesser
> General Public License ever published by the Free Software Foundation.
> 
>   If the Library as you received it specifies that a proxy can decide
> whether future versions of the GNU Lesser General Public License shall
> apply, that proxy's public statement of acceptance of any version is
> permanent authorization for you to choose that version for the
> Library.

### Acknowledgments
##### Main author
* Copyright © 2015 Perceval [**@perfaram**](https://github.com/perfaram) FARAMAZ

##### Portions
* Portions Copyright © 2014 Jake [**@jakepetroules**](https://github.com/jakepetroules) Petroules
* Portions Copyright © 2012 PHPdev32 (firewater2311@yahoo.com)
* Portions Copyright © 2013 John Winter (john@aptonic.com)

##### Snippets
* Portions Copyright © 2008 "Matt" (from Apple-dev mailing list)
* Portions Copyright © 2009 Sahil [**@sahil**](https://github.com/sahil) Desai
* Portions Copyright © 2010 Richard [**@rickmark**](https://github.com/rickmark) Penwell
* Portions Copyright © 2009 The Contributors of the Chromium Project

--------
###### Published in the hope that it will be useful

[logo]: https://raw.githubusercontent.com/perfaram/PFSystemKit/master/logo.png?token=ABntO4wgFbPCjuxGaZDKJfgRrAn8gtUIks5Vi6XuwA%3D%3D "PFSystemKit"
[features]: https://raw.githubusercontent.com/perfaram/PFSystemKit/master/Features.png?token=ABntO9Sr-HblgH04oy3YLH9U8c-KaAzwks5Vi7ZVwA%3D%3D "Features"
