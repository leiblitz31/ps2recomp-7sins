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

// Function: sub_00245E40
// Address: 0x245e40 - 0x245eb0
void sub_00245E40_0x245e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245E40_0x245e40");
#endif

    switch (ctx->pc) {
        case 0x245e5cu: goto label_245e5c;
        default: break;
    }

    ctx->pc = 0x245e40u;

    // 0x245e40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x245e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x245e44: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x245e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x245e48: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x245e48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x245e4c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x245e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x245e50: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x245e50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x245e54: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x245E54u;
    {
        const bool branch_taken_0x245e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x245e54) {
            ctx->pc = 0x245E84u;
            goto label_245e84;
        }
    }
    ctx->pc = 0x245E5Cu;
label_245e5c:
    // 0x245e5c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x245e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x245e60: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x245e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x245e64: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x245e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x245e68: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x245e68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x245e6c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x245e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x245e70: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x245e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x245e74: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x245e74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x245e78: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x245e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x245e7c: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x245e7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x245e80: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x245e80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
label_245e84:
    // 0x245e84: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x245e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x245e88: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x245E88u;
    {
        const bool branch_taken_0x245e88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x245e88) {
            ctx->pc = 0x245E5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_245e5c;
        }
    }
    ctx->pc = 0x245E90u;
    // 0x245e90: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x245e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x245e94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x245e94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x245e98: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x245e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x245e9c: 0x3e00008  jr          $ra
    ctx->pc = 0x245E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245E9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x245EA4u;
    // 0x245ea4: 0x0  nop
    ctx->pc = 0x245ea4u;
    // NOP
    // 0x245ea8: 0x0  nop
    ctx->pc = 0x245ea8u;
    // NOP
    // 0x245eac: 0x0  nop
    ctx->pc = 0x245eacu;
    // NOP
    ctx->pc = 0x245eb0u;
}
