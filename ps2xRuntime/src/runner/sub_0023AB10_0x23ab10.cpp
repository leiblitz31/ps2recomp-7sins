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

// Function: sub_0023AB10
// Address: 0x23ab10 - 0x23ab70
void sub_0023AB10_0x23ab10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023AB10_0x23ab10");
#endif

    switch (ctx->pc) {
        case 0x23ab3cu: goto label_23ab3c;
        case 0x23ab5cu: goto label_23ab5c;
        default: break;
    }

    ctx->pc = 0x23ab10u;

    // 0x23ab10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23ab10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23ab14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23ab14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23ab18: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x23ab18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23ab1c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x23ab1cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x23ab20: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23ab20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23ab24: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x23AB24u;
    {
        const bool branch_taken_0x23ab24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ab24) {
            ctx->pc = 0x23AB5Cu;
            goto label_23ab5c;
        }
    }
    ctx->pc = 0x23AB2Cu;
    // 0x23ab2c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23ab2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23ab30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23ab30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ab34: 0xc08eadc  jal         func_23AB70
    ctx->pc = 0x23AB34u;
    SET_GPR_U32(ctx, 31, 0x23AB3Cu);
    ctx->pc = 0x23AB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AB70u, 0x23AB34u, 0x23AB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AB3Cu;
label_23ab3c:
    // 0x23ab3c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x23ab3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23ab40: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x23ab40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x23ab44: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x23ab44u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x23ab48: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23AB48u;
    {
        const bool branch_taken_0x23ab48 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x23ab48) {
            ctx->pc = 0x23AB5Cu;
            goto label_23ab5c;
        }
    }
    ctx->pc = 0x23AB50u;
    // 0x23ab50: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23ab50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23ab54: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x23AB54u;
    SET_GPR_U32(ctx, 31, 0x23AB5Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x23AB54u, 0x23AB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AB5Cu;
label_23ab5c:
    // 0x23ab5c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23ab5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23ab60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23ab60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23ab64: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x23ab64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23ab68: 0x3e00008  jr          $ra
    ctx->pc = 0x23AB68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23AB68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23AB70u;
}
