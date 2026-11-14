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

// Function: sub_0020E060
// Address: 0x20e060 - 0x20e0d0
void sub_0020E060_0x20e060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020E060_0x20e060");
#endif

    switch (ctx->pc) {
        case 0x20e07cu: goto label_20e07c;
        default: break;
    }

    ctx->pc = 0x20e060u;

    // 0x20e060: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20e060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20e064: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20e064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20e068: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x20e068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x20e06c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x20e06cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x20e070: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x20e070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x20e074: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x20E074u;
    {
        const bool branch_taken_0x20e074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e074) {
            ctx->pc = 0x20E0A4u;
            goto label_20e0a4;
        }
    }
    ctx->pc = 0x20E07Cu;
label_20e07c:
    // 0x20e07c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20e07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20e080: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20e080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20e084: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x20e084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20e088: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x20e088u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x20e08c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x20e08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20e090: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x20e090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x20e094: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x20e094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x20e098: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x20e098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20e09c: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x20e09cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x20e0a0: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x20e0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
label_20e0a4:
    // 0x20e0a4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x20e0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20e0a8: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x20E0A8u;
    {
        const bool branch_taken_0x20e0a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20e0a8) {
            ctx->pc = 0x20E07Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20e07c;
        }
    }
    ctx->pc = 0x20E0B0u;
    // 0x20e0b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x20e0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20e0b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20e0b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20e0b8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x20e0b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x20e0bc: 0x3e00008  jr          $ra
    ctx->pc = 0x20E0BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E0BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20E0C4u;
    // 0x20e0c4: 0x0  nop
    ctx->pc = 0x20e0c4u;
    // NOP
    // 0x20e0c8: 0x0  nop
    ctx->pc = 0x20e0c8u;
    // NOP
    // 0x20e0cc: 0x0  nop
    ctx->pc = 0x20e0ccu;
    // NOP
    ctx->pc = 0x20e0d0u;
}
