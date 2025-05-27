---
description: 'Source: redteamleaders.coursestack.com'
---

# WINDOWS API FOR RED TEAMING

**Windows API**

The Windows API (WinAPI) is a collection of funcations exposed by Microsoft to allow various programs to interact with the Windows Operating System. These WinAPIs give user-mode applications access to the kernel-level features without breaking the limitations or security boundaries. The main goals of WinAPI are:

* Abstract direct hardware / system-level access
* Provide system services to applications
* Maintain compatibility between Windows versions
* Programming consistency for GUI, file systems, memory, threading etc.

**There are 2 major categories:**

* **User-Mode APIs:** Functions in `kernel32.dll`, `user32.dll`, `advapi32.dll` etc.
* **Native-APIs:** Internal system calls in `ntdll.dll`, exported as `Nt*` and `Zw*`functions

&#x20;**API Layers: Win32 APIs, NT API Calls & Syscalls**

**Win32 API (High-Level)**

* Developer friendly & easy to use
* Calls such as CreateFileW, OpenProcess, VirtualAllocEx
* Found in kernel32.dll, user32.dll

**NT API (Middle-Level)**

* Found in ntdll.dll
* Prefixed by `Nt` or `Zw` (e.g., `NtOpenProcess`)
* Direct wrappers over syscalls
* Used for stealthy operations, especially when bypassing EDRs

**Syscalls**

* Low-level interface between `ntdll.dll` and the kernel
* `syscall` instruction in x64, `int 0x2e` in older x86
* Each syscall has a System Service Number (SSN), e.g., `NtOpenProcess` = `0x26`

You can invoke a syscall manually with inline assembly or shellcode this is often used in direct syscall evasion techniques.

