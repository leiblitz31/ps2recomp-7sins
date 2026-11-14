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

// Function: sub_002DF310
// Address: 0x2df310 - 0x2df380
void sub_002DF310_0x2df310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF310_0x2df310");
#endif

    switch (ctx->pc) {
        case 0x2df344u: goto label_2df344;
        case 0x2df364u: goto label_2df364;
        default: break;
    }

    ctx->pc = 0x2df310u;

    // 0x2df310: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2df310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2df314: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2df314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2df318: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2df318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2df31c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2df31cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2df320: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2df320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df324: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2DF324u;
    {
        const bool branch_taken_0x2df324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df324) {
            ctx->pc = 0x2DF364u;
            goto label_2df364;
        }
    }
    ctx->pc = 0x2DF32Cu;
    // 0x2df32c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2df32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df330: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2df330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df334: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2df334u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2df338: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2df338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2df33c: 0xc0b8adc  jal         func_2E2B70
    ctx->pc = 0x2DF33Cu;
    SET_GPR_U32(ctx, 31, 0x2DF344u);
    ctx->pc = 0x2E2B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2B70u, 0x2DF33Cu, 0x2DF344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF344u;
label_2df344:
    // 0x2df344: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2df344u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2df348: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2df348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2df34c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2df34cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2df350: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DF350u;
    {
        const bool branch_taken_0x2df350 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2df350) {
            ctx->pc = 0x2DF364u;
            goto label_2df364;
        }
    }
    ctx->pc = 0x2DF358u;
    // 0x2df358: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2df358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df35c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2DF35Cu;
    SET_GPR_U32(ctx, 31, 0x2DF364u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2DF35Cu, 0x2DF364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF364u;
label_2df364:
    // 0x2df364: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2df364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df368: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2df368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2df36c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2df36cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2df370: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF378u;
    // 0x2df378: 0x0  nop
    ctx->pc = 0x2df378u;
    // NOP
    // 0x2df37c: 0x0  nop
    ctx->pc = 0x2df37cu;
    // NOP
    ctx->pc = 0x2df380u;
}
