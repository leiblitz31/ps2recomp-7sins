#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002FDC10
// Address: 0x2fdc10 - 0x2fdde0
void sub_002FDC10_0x2fdc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FDC10_0x2fdc10");
#endif

    switch (ctx->pc) {
        case 0x2fdc18u: goto label_2fdc18;
        case 0x2fdc28u: goto label_2fdc28;
        case 0x2fdc38u: goto label_2fdc38;
        case 0x2fdc48u: goto label_2fdc48;
        case 0x2fdc58u: goto label_2fdc58;
        case 0x2fdc68u: goto label_2fdc68;
        case 0x2fdc78u: goto label_2fdc78;
        case 0x2fdc88u: goto label_2fdc88;
        case 0x2fdc98u: goto label_2fdc98;
        case 0x2fdca8u: goto label_2fdca8;
        case 0x2fdcb8u: goto label_2fdcb8;
        case 0x2fdcc8u: goto label_2fdcc8;
        case 0x2fdcd8u: goto label_2fdcd8;
        case 0x2fdce8u: goto label_2fdce8;
        case 0x2fdcf8u: goto label_2fdcf8;
        case 0x2fdd08u: goto label_2fdd08;
        case 0x2fdd18u: goto label_2fdd18;
        case 0x2fdd28u: goto label_2fdd28;
        case 0x2fdd38u: goto label_2fdd38;
        case 0x2fdd48u: goto label_2fdd48;
        case 0x2fdd58u: goto label_2fdd58;
        case 0x2fdd68u: goto label_2fdd68;
        case 0x2fdd78u: goto label_2fdd78;
        case 0x2fdd88u: goto label_2fdd88;
        case 0x2fdd98u: goto label_2fdd98;
        case 0x2fdda8u: goto label_2fdda8;
        case 0x2fddb8u: goto label_2fddb8;
        case 0x2fddc8u: goto label_2fddc8;
        case 0x2fddd8u: goto label_2fddd8;
        default: break;
    }

    ctx->pc = 0x2fdc10u;

    // 0x2fdc10: 0x2403004b  addiu       $v1, $zero, 0x4B
    ctx->pc = 0x2fdc10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x2fdc14: 0xc  syscall     0
    ctx->pc = 0x2fdc14u;
    ctx->pc = 0x2FDC18u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fdc18:
    // 0x2fdc18: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDC18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDC18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDC20u;
    // 0x2fdc20: 0x2403004c  addiu       $v1, $zero, 0x4C
    ctx->pc = 0x2fdc20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x2fdc24: 0xc  syscall     0
    ctx->pc = 0x2fdc24u;
    ctx->pc = 0x2FDC28u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fdc28:
    // 0x2fdc28: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDC28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDC28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDC30u;
    // 0x2fdc30: 0x2403004d  addiu       $v1, $zero, 0x4D
    ctx->pc = 0x2fdc30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x2fdc34: 0xc  syscall     0
    ctx->pc = 0x2fdc34u;
    ctx->pc = 0x2FDC38u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fdc38:
    // 0x2fdc38: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDC38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDC38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDC40u;
    // 0x2fdc40: 0x2403004e  addiu       $v1, $zero, 0x4E
    ctx->pc = 0x2fdc40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x2fdc44: 0xc  syscall     0
    ctx->pc = 0x2fdc44u;
    ctx->pc = 0x2FDC48u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fdc48:
    // 0x2fdc48: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDC48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDC48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDC50u;
    // 0x2fdc50: 0x2403004f  addiu       $v1, $zero, 0x4F
    ctx->pc = 0x2fdc50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x2fdc54: 0xc  syscall     0
    ctx->pc = 0x2fdc54u;
    ctx->pc = 0x2FDC58u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fdc58:
    // 0x2fdc58: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDC58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDC58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDC60u;
    // 0x2fdc60: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x2fdc60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2fdc64: 0xc  syscall     0
    ctx->pc = 0x2fdc64u;
    ctx->pc = 0x2FDC68u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fdc68:
    // 0x2fdc68: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDC68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDC68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDC70u;
    // 0x2fdc70: 0x24030051  addiu       $v1, $zero, 0x51
    ctx->pc = 0x2fdc70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x2fdc74: 0xc  syscall     0
    ctx->pc = 0x2fdc74u;
    ctx->pc = 0x2FDC78u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fdc78:
    // 0x2fdc78: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDC78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDC78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDC80u;
    // 0x2fdc80: 0x24030052  addiu       $v1, $zero, 0x52
    ctx->pc = 0x2fdc80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x2fdc84: 0xc  syscall     0
    ctx->pc = 0x2fdc84u;
    ctx->pc = 0x2FDC88u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fdc88:
    // 0x2fdc88: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDC88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDC88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDC90u;
    // 0x2fdc90: 0x2403ffad  addiu       $v1, $zero, -0x53
    ctx->pc = 0x2fdc90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967213));
    // 0x2fdc94: 0xc  syscall     0
    ctx->pc = 0x2fdc94u;
    ctx->pc = 0x2FDC98u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fdc98:
    // 0x2fdc98: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDC98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDC98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDCA0u;
    // 0x2fdca0: 0x24030054  addiu       $v1, $zero, 0x54
    ctx->pc = 0x2fdca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x2fdca4: 0xc  syscall     0
    ctx->pc = 0x2fdca4u;
    ctx->pc = 0x2FDCA8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fdca8:
    // 0x2fdca8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDCA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDCA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDCB0u;
    // 0x2fdcb0: 0x2403ffab  addiu       $v1, $zero, -0x55
    ctx->pc = 0x2fdcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967211));
    // 0x2fdcb4: 0xc  syscall     0
    ctx->pc = 0x2fdcb4u;
    ctx->pc = 0x2FDCB8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fdcb8:
    // 0x2fdcb8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDCB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDCB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDCC0u;
    // 0x2fdcc0: 0x24030056  addiu       $v1, $zero, 0x56
    ctx->pc = 0x2fdcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x2fdcc4: 0xc  syscall     0
    ctx->pc = 0x2fdcc4u;
    ctx->pc = 0x2FDCC8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fdcc8:
    // 0x2fdcc8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDCC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDCC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDCD0u;
    // 0x2fdcd0: 0x24030057  addiu       $v1, $zero, 0x57
    ctx->pc = 0x2fdcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x2fdcd4: 0xc  syscall     0
    ctx->pc = 0x2fdcd4u;
    ctx->pc = 0x2FDCD8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fdcd8:
    // 0x2fdcd8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDCD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDCD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDCE0u;
    // 0x2fdce0: 0x2403ffa8  addiu       $v1, $zero, -0x58
    ctx->pc = 0x2fdce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967208));
    // 0x2fdce4: 0xc  syscall     0
    ctx->pc = 0x2fdce4u;
    ctx->pc = 0x2FDCE8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fdce8:
    // 0x2fdce8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDCE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDCE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDCF0u;
    // 0x2fdcf0: 0x24030059  addiu       $v1, $zero, 0x59
    ctx->pc = 0x2fdcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    // 0x2fdcf4: 0xc  syscall     0
    ctx->pc = 0x2fdcf4u;
    ctx->pc = 0x2FDCF8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fdcf8:
    // 0x2fdcf8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDCF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDCF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDD00u;
    // 0x2fdd00: 0x2403ffa6  addiu       $v1, $zero, -0x5A
    ctx->pc = 0x2fdd00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967206));
    // 0x2fdd04: 0xc  syscall     0
    ctx->pc = 0x2fdd04u;
    ctx->pc = 0x2FDD08u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fdd08:
    // 0x2fdd08: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDD08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDD08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDD10u;
    // 0x2fdd10: 0x2403005b  addiu       $v1, $zero, 0x5B
    ctx->pc = 0x2fdd10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x2fdd14: 0xc  syscall     0
    ctx->pc = 0x2fdd14u;
    ctx->pc = 0x2FDD18u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fdd18:
    // 0x2fdd18: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDD18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDD18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDD20u;
    // 0x2fdd20: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x2fdd20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x2fdd24: 0xc  syscall     0
    ctx->pc = 0x2fdd24u;
    ctx->pc = 0x2FDD28u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fdd28:
    // 0x2fdd28: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDD28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDD28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDD30u;
    // 0x2fdd30: 0x2403ffa4  addiu       $v1, $zero, -0x5C
    ctx->pc = 0x2fdd30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967204));
    // 0x2fdd34: 0xc  syscall     0
    ctx->pc = 0x2fdd34u;
    ctx->pc = 0x2FDD38u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fdd38:
    // 0x2fdd38: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDD38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDD38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDD40u;
    // 0x2fdd40: 0x2403005d  addiu       $v1, $zero, 0x5D
    ctx->pc = 0x2fdd40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x2fdd44: 0xc  syscall     0
    ctx->pc = 0x2fdd44u;
    ctx->pc = 0x2FDD48u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fdd48:
    // 0x2fdd48: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDD48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDD48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDD50u;
    // 0x2fdd50: 0x2403ffa3  addiu       $v1, $zero, -0x5D
    ctx->pc = 0x2fdd50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967203));
    // 0x2fdd54: 0xc  syscall     0
    ctx->pc = 0x2fdd54u;
    ctx->pc = 0x2FDD58u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fdd58:
    // 0x2fdd58: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDD58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDD58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDD60u;
    // 0x2fdd60: 0x2403005e  addiu       $v1, $zero, 0x5E
    ctx->pc = 0x2fdd60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    // 0x2fdd64: 0xc  syscall     0
    ctx->pc = 0x2fdd64u;
    ctx->pc = 0x2FDD68u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fdd68:
    // 0x2fdd68: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDD68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDD68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDD70u;
    // 0x2fdd70: 0x2403ffa2  addiu       $v1, $zero, -0x5E
    ctx->pc = 0x2fdd70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967202));
    // 0x2fdd74: 0xc  syscall     0
    ctx->pc = 0x2fdd74u;
    ctx->pc = 0x2FDD78u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fdd78:
    // 0x2fdd78: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDD78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDD78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDD80u;
    // 0x2fdd80: 0x2403005f  addiu       $v1, $zero, 0x5F
    ctx->pc = 0x2fdd80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x2fdd84: 0xc  syscall     0
    ctx->pc = 0x2fdd84u;
    ctx->pc = 0x2FDD88u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fdd88:
    // 0x2fdd88: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDD88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDD88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDD90u;
    // 0x2fdd90: 0x2403ffa1  addiu       $v1, $zero, -0x5F
    ctx->pc = 0x2fdd90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967201));
    // 0x2fdd94: 0xc  syscall     0
    ctx->pc = 0x2fdd94u;
    ctx->pc = 0x2FDD98u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fdd98:
    // 0x2fdd98: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDD98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDD98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDDA0u;
    // 0x2fdda0: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x2fdda0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2fdda4: 0xc  syscall     0
    ctx->pc = 0x2fdda4u;
    ctx->pc = 0x2FDDA8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fdda8:
    // 0x2fdda8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDDA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDDA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDDB0u;
    // 0x2fddb0: 0x24030061  addiu       $v1, $zero, 0x61
    ctx->pc = 0x2fddb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x2fddb4: 0xc  syscall     0
    ctx->pc = 0x2fddb4u;
    ctx->pc = 0x2FDDB8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fddb8:
    // 0x2fddb8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDDB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDDB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDDC0u;
    // 0x2fddc0: 0x24030062  addiu       $v1, $zero, 0x62
    ctx->pc = 0x2fddc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x2fddc4: 0xc  syscall     0
    ctx->pc = 0x2fddc4u;
    ctx->pc = 0x2FDDC8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fddc8:
    // 0x2fddc8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDDC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDDC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDDD0u;
    // 0x2fddd0: 0x24030063  addiu       $v1, $zero, 0x63
    ctx->pc = 0x2fddd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x2fddd4: 0xc  syscall     0
    ctx->pc = 0x2fddd4u;
    ctx->pc = 0x2FDDD8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fddd8:
    // 0x2fddd8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDDD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDDD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDDE0u;
}
