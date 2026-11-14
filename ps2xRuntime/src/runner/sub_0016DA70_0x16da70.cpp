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

// Function: sub_0016DA70
// Address: 0x16da70 - 0x16dad0
void sub_0016DA70_0x16da70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016DA70_0x16da70");
#endif

    switch (ctx->pc) {
        case 0x16dab8u: goto label_16dab8;
        default: break;
    }

    ctx->pc = 0x16da70u;

    // 0x16da70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16da70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16da74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16da74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16da78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x16da78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x16da7c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x16da7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16da80: 0x8c630094  lw          $v1, 0x94($v1)
    ctx->pc = 0x16da80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x16da84: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x16DA84u;
    {
        const bool branch_taken_0x16da84 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x16da84) {
            ctx->pc = 0x16DAB8u;
            goto label_16dab8;
        }
    }
    ctx->pc = 0x16DA8Cu;
    // 0x16da8c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16da8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16da90: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x16da90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x16da94: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16da94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16da98: 0xac430098  sw          $v1, 0x98($v0)
    ctx->pc = 0x16da98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 152), GPR_U32(ctx, 3));
    // 0x16da9c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x16da9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16daa0: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x16daa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x16daa4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x16daa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x16daa8: 0xac620094  sw          $v0, 0x94($v1)
    ctx->pc = 0x16daa8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 148), GPR_U32(ctx, 2));
    // 0x16daac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x16daacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16dab0: 0xc05b778  jal         func_16DDE0
    ctx->pc = 0x16DAB0u;
    SET_GPR_U32(ctx, 31, 0x16DAB8u);
    ctx->pc = 0x16DDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DDE0u, 0x16DAB0u, 0x16DAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DAB8u;
label_16dab8:
    // 0x16dab8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16dab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16dabc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x16dabcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x16dac0: 0x3e00008  jr          $ra
    ctx->pc = 0x16DAC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16DAC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16DAC8u;
    // 0x16dac8: 0x0  nop
    ctx->pc = 0x16dac8u;
    // NOP
    // 0x16dacc: 0x0  nop
    ctx->pc = 0x16daccu;
    // NOP
    ctx->pc = 0x16dad0u;
}
