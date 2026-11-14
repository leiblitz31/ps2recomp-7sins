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

// Function: sub_00482DF0
// Address: 0x482df0 - 0x482e60
void sub_00482DF0_0x482df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00482DF0_0x482df0");
#endif

    switch (ctx->pc) {
        case 0x482e0cu: goto label_482e0c;
        default: break;
    }

    ctx->pc = 0x482df0u;

    // 0x482df0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x482df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x482df4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x482df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x482df8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x482df8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x482dfc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x482dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x482e00: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x482e00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x482e04: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x482E04u;
    {
        const bool branch_taken_0x482e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x482e04) {
            ctx->pc = 0x482E34u;
            goto label_482e34;
        }
    }
    ctx->pc = 0x482E0Cu;
label_482e0c:
    // 0x482e0c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x482e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x482e10: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x482e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x482e14: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x482e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x482e18: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x482e18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x482e1c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x482e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x482e20: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x482e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x482e24: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x482e24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x482e28: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x482e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x482e2c: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x482e2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x482e30: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x482e30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
label_482e34:
    // 0x482e34: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x482e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x482e38: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x482E38u;
    {
        const bool branch_taken_0x482e38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x482e38) {
            ctx->pc = 0x482E0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_482e0c;
        }
    }
    ctx->pc = 0x482E40u;
    // 0x482e40: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x482e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x482e44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x482e44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x482e48: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x482e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x482e4c: 0x3e00008  jr          $ra
    ctx->pc = 0x482E4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x482E4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x482E54u;
    // 0x482e54: 0x0  nop
    ctx->pc = 0x482e54u;
    // NOP
    // 0x482e58: 0x0  nop
    ctx->pc = 0x482e58u;
    // NOP
    // 0x482e5c: 0x0  nop
    ctx->pc = 0x482e5cu;
    // NOP
    ctx->pc = 0x482e60u;
}
