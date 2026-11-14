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

// Function: sub_001BD370
// Address: 0x1bd370 - 0x1bd3e0
void sub_001BD370_0x1bd370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BD370_0x1bd370");
#endif

    switch (ctx->pc) {
        case 0x1bd38cu: goto label_1bd38c;
        default: break;
    }

    ctx->pc = 0x1bd370u;

    // 0x1bd370: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1bd370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1bd374: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bd374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bd378: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1bd378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1bd37c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1bd37cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1bd380: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1bd380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1bd384: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1BD384u;
    {
        const bool branch_taken_0x1bd384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd384) {
            ctx->pc = 0x1BD3B4u;
            goto label_1bd3b4;
        }
    }
    ctx->pc = 0x1BD38Cu;
label_1bd38c:
    // 0x1bd38c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1bd38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bd390: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1bd390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bd394: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1bd394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bd398: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1bd398u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1bd39c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1bd39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bd3a0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bd3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bd3a4: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1bd3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1bd3a8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1bd3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bd3ac: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x1bd3acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1bd3b0: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x1bd3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
label_1bd3b4:
    // 0x1bd3b4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1bd3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bd3b8: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1BD3B8u;
    {
        const bool branch_taken_0x1bd3b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bd3b8) {
            ctx->pc = 0x1BD38Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bd38c;
        }
    }
    ctx->pc = 0x1BD3C0u;
    // 0x1bd3c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1bd3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bd3c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bd3c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bd3c8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1bd3c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1bd3cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1BD3CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BD3CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BD3D4u;
    // 0x1bd3d4: 0x0  nop
    ctx->pc = 0x1bd3d4u;
    // NOP
    // 0x1bd3d8: 0x0  nop
    ctx->pc = 0x1bd3d8u;
    // NOP
    // 0x1bd3dc: 0x0  nop
    ctx->pc = 0x1bd3dcu;
    // NOP
    ctx->pc = 0x1bd3e0u;
}
