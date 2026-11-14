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

// Function: sub_002E4C20
// Address: 0x2e4c20 - 0x2e4c90
void sub_002E4C20_0x2e4c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4C20_0x2e4c20");
#endif

    switch (ctx->pc) {
        case 0x2e4c3cu: goto label_2e4c3c;
        default: break;
    }

    ctx->pc = 0x2e4c20u;

    // 0x2e4c20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e4c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e4c24: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e4c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e4c28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2e4c28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2e4c2c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2e4c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2e4c30: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x2e4c30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x2e4c34: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E4C34u;
    {
        const bool branch_taken_0x2e4c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4c34) {
            ctx->pc = 0x2E4C64u;
            goto label_2e4c64;
        }
    }
    ctx->pc = 0x2E4C3Cu;
label_2e4c3c:
    // 0x2e4c3c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2e4c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e4c40: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2e4c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e4c44: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e4c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e4c48: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2e4c48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2e4c4c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e4c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e4c50: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2e4c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e4c54: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2e4c54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x2e4c58: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e4c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e4c5c: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x2e4c5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2e4c60: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x2e4c60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
label_2e4c64:
    // 0x2e4c64: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e4c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e4c68: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2E4C68u;
    {
        const bool branch_taken_0x2e4c68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e4c68) {
            ctx->pc = 0x2E4C3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e4c3c;
        }
    }
    ctx->pc = 0x2E4C70u;
    // 0x2e4c70: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e4c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e4c74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e4c74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e4c78: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2e4c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2e4c7c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4C7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4C84u;
    // 0x2e4c84: 0x0  nop
    ctx->pc = 0x2e4c84u;
    // NOP
    // 0x2e4c88: 0x0  nop
    ctx->pc = 0x2e4c88u;
    // NOP
    // 0x2e4c8c: 0x0  nop
    ctx->pc = 0x2e4c8cu;
    // NOP
    ctx->pc = 0x2e4c90u;
}
