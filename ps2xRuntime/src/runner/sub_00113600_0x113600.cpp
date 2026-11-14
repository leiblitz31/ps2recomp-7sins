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

// Function: sub_00113600
// Address: 0x113600 - 0x113690
void sub_00113600_0x113600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113600_0x113600");
#endif

    switch (ctx->pc) {
        case 0x113644u: goto label_113644;
        case 0x113654u: goto label_113654;
        case 0x113674u: goto label_113674;
        default: break;
    }

    ctx->pc = 0x113600u;

    // 0x113600: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x113600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x113604: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x113604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x113608: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x113608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x11360c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x11360cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x113610: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x113610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113614: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x113614u;
    {
        const bool branch_taken_0x113614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x113614) {
            ctx->pc = 0x113674u;
            goto label_113674;
        }
    }
    ctx->pc = 0x11361Cu;
    // 0x11361c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x11361cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x113620: 0x24633330  addiu       $v1, $v1, 0x3330
    ctx->pc = 0x113620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13104));
    // 0x113624: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x113624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113628: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x113628u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x11362c: 0xaf80b9b0  sw          $zero, -0x4650($gp)
    ctx->pc = 0x11362cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949296), GPR_U32(ctx, 0));
    // 0x113630: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x113630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113634: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x113634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x113638: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x113638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11363c: 0xc044c34  jal         func_1130D0
    ctx->pc = 0x11363Cu;
    SET_GPR_U32(ctx, 31, 0x113644u);
    ctx->pc = 0x1130D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1130D0u, 0x11363Cu, 0x113644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113644u;
label_113644:
    // 0x113644: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x113644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113648: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x113648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11364c: 0xc08ec24  jal         func_23B090
    ctx->pc = 0x11364Cu;
    SET_GPR_U32(ctx, 31, 0x113654u);
    ctx->pc = 0x23B090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B090u, 0x11364Cu, 0x113654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113654u;
label_113654:
    // 0x113654: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x113654u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x113658: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x113658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x11365c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x11365cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x113660: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x113660u;
    {
        const bool branch_taken_0x113660 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x113660) {
            ctx->pc = 0x113674u;
            goto label_113674;
        }
    }
    ctx->pc = 0x113668u;
    // 0x113668: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x113668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11366c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x11366Cu;
    SET_GPR_U32(ctx, 31, 0x113674u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x11366Cu, 0x113674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113674u;
label_113674:
    // 0x113674: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x113674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113678: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x113678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11367c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x11367cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x113680: 0x3e00008  jr          $ra
    ctx->pc = 0x113680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113688u;
    // 0x113688: 0x0  nop
    ctx->pc = 0x113688u;
    // NOP
    // 0x11368c: 0x0  nop
    ctx->pc = 0x11368cu;
    // NOP
    ctx->pc = 0x113690u;
}
