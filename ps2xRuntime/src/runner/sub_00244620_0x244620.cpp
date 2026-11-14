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

// Function: sub_00244620
// Address: 0x244620 - 0x244690
void sub_00244620_0x244620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244620_0x244620");
#endif

    switch (ctx->pc) {
        case 0x24465cu: goto label_24465c;
        case 0x24467cu: goto label_24467c;
        default: break;
    }

    ctx->pc = 0x244620u;

    // 0x244620: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x244620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x244624: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x244624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x244628: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x244628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x24462c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x24462cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x244630: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x244630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x244634: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x244634u;
    {
        const bool branch_taken_0x244634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x244634) {
            ctx->pc = 0x24467Cu;
            goto label_24467c;
        }
    }
    ctx->pc = 0x24463Cu;
    // 0x24463c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x24463cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x244640: 0x24635740  addiu       $v1, $v1, 0x5740
    ctx->pc = 0x244640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22336));
    // 0x244644: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x244644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x244648: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x244648u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x24464c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x24464cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x244650: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x244650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244654: 0xc084ea4  jal         func_213A90
    ctx->pc = 0x244654u;
    SET_GPR_U32(ctx, 31, 0x24465Cu);
    ctx->pc = 0x213A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213A90u, 0x244654u, 0x24465Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24465Cu;
label_24465c:
    // 0x24465c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x24465cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x244660: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x244660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x244664: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x244664u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x244668: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x244668u;
    {
        const bool branch_taken_0x244668 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x244668) {
            ctx->pc = 0x24467Cu;
            goto label_24467c;
        }
    }
    ctx->pc = 0x244670u;
    // 0x244670: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x244670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x244674: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x244674u;
    SET_GPR_U32(ctx, 31, 0x24467Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x244674u, 0x24467Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24467Cu;
label_24467c:
    // 0x24467c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x24467cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x244680: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x244680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x244684: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x244684u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x244688: 0x3e00008  jr          $ra
    ctx->pc = 0x244688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x244690u;
}
