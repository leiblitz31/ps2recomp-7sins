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

// Function: sub_002D0310
// Address: 0x2d0310 - 0x2d0370
void sub_002D0310_0x2d0310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D0310_0x2d0310");
#endif

    switch (ctx->pc) {
        case 0x2d033cu: goto label_2d033c;
        case 0x2d035cu: goto label_2d035c;
        default: break;
    }

    ctx->pc = 0x2d0310u;

    // 0x2d0310: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d0310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d0314: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d0314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d0318: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2d0318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2d031c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2d031cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2d0320: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d0320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0324: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2D0324u;
    {
        const bool branch_taken_0x2d0324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0324) {
            ctx->pc = 0x2D035Cu;
            goto label_2d035c;
        }
    }
    ctx->pc = 0x2D032Cu;
    // 0x2d032c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2d032cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0330: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d0330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0334: 0xc0b40dc  jal         func_2D0370
    ctx->pc = 0x2D0334u;
    SET_GPR_U32(ctx, 31, 0x2D033Cu);
    ctx->pc = 0x2D0370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0370u, 0x2D0334u, 0x2D033Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D033Cu;
label_2d033c:
    // 0x2d033c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2d033cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d0340: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2d0340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d0344: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d0344u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2d0348: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D0348u;
    {
        const bool branch_taken_0x2d0348 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d0348) {
            ctx->pc = 0x2D035Cu;
            goto label_2d035c;
        }
    }
    ctx->pc = 0x2D0350u;
    // 0x2d0350: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2d0350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0354: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2D0354u;
    SET_GPR_U32(ctx, 31, 0x2D035Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2D0354u, 0x2D035Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D035Cu;
label_2d035c:
    // 0x2d035c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d035cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0360: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d0360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d0364: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2d0364u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d0368: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0370u;
}
