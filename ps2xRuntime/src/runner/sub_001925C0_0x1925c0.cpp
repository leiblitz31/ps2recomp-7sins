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

// Function: sub_001925C0
// Address: 0x1925c0 - 0x1926c0
void sub_001925C0_0x1925c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001925C0_0x1925c0");
#endif

    switch (ctx->pc) {
        case 0x192600u: goto label_192600;
        case 0x192614u: goto label_192614;
        case 0x192624u: goto label_192624;
        case 0x192644u: goto label_192644;
        default: break;
    }

    ctx->pc = 0x1925c0u;

    // 0x1925c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1925c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1925c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1925c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1925c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1925c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1925cc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1925ccu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1925d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1925d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1925d4: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1925D4u;
    {
        const bool branch_taken_0x1925d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1925d4) {
            ctx->pc = 0x192644u;
            goto label_192644;
        }
    }
    ctx->pc = 0x1925DCu;
    // 0x1925dc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1925dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1925e0: 0x24634330  addiu       $v1, $v1, 0x4330
    ctx->pc = 0x1925e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17200));
    // 0x1925e4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1925e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1925e8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1925e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1925ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1925ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1925f0: 0x24440064  addiu       $a0, $v0, 0x64
    ctx->pc = 0x1925f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x1925f4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1925f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1925f8: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x1925F8u;
    SET_GPR_U32(ctx, 31, 0x192600u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x1925F8u, 0x192600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192600u;
label_192600:
    // 0x192600: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x192600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192604: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x192604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x192608: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x192608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19260c: 0xc056094  jal         func_158250
    ctx->pc = 0x19260Cu;
    SET_GPR_U32(ctx, 31, 0x192614u);
    ctx->pc = 0x158250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158250u, 0x19260Cu, 0x192614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192614u;
label_192614:
    // 0x192614: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x192614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192618: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x192618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19261c: 0xc08ec24  jal         func_23B090
    ctx->pc = 0x19261Cu;
    SET_GPR_U32(ctx, 31, 0x192624u);
    ctx->pc = 0x23B090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B090u, 0x19261Cu, 0x192624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192624u;
label_192624:
    // 0x192624: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x192624u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x192628: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x192628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x19262c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x19262cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x192630: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x192630u;
    {
        const bool branch_taken_0x192630 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x192630) {
            ctx->pc = 0x192644u;
            goto label_192644;
        }
    }
    ctx->pc = 0x192638u;
    // 0x192638: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x192638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19263c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x19263Cu;
    SET_GPR_U32(ctx, 31, 0x192644u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x19263Cu, 0x192644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192644u;
label_192644:
    // 0x192644: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x192644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192648: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x192648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19264c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x19264cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x192650: 0x3e00008  jr          $ra
    ctx->pc = 0x192650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192658u;
    // 0x192658: 0x0  nop
    ctx->pc = 0x192658u;
    // NOP
    // 0x19265c: 0x0  nop
    ctx->pc = 0x19265cu;
    // NOP
    // 0x192660: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x192660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x192664: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x192664u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x192668: 0x3e00008  jr          $ra
    ctx->pc = 0x192668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192670u;
    // 0x192670: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x192670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x192674: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x192674u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x192678: 0x3e00008  jr          $ra
    ctx->pc = 0x192678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192680u;
    // 0x192680: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x192680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x192684: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x192684u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x192688: 0x3e00008  jr          $ra
    ctx->pc = 0x192688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192690u;
    // 0x192690: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x192690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x192694: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x192694u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x192698: 0x3e00008  jr          $ra
    ctx->pc = 0x192698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1926A0u;
    // 0x1926a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1926a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1926a4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1926a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1926a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1926A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1926A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1926B0u;
    // 0x1926b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1926b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1926b4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1926b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1926b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1926B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1926B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1926C0u;
}
