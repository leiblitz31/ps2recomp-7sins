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

// Function: sub_002AFC20
// Address: 0x2afc20 - 0x2afc90
void sub_002AFC20_0x2afc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AFC20_0x2afc20");
#endif

    switch (ctx->pc) {
        case 0x2afc3cu: goto label_2afc3c;
        default: break;
    }

    ctx->pc = 0x2afc20u;

    // 0x2afc20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2afc20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2afc24: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2afc24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2afc28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2afc28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2afc2c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2afc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2afc30: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x2afc30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x2afc34: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2AFC34u;
    {
        const bool branch_taken_0x2afc34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2afc34) {
            ctx->pc = 0x2AFC64u;
            goto label_2afc64;
        }
    }
    ctx->pc = 0x2AFC3Cu;
label_2afc3c:
    // 0x2afc3c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2afc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2afc40: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2afc40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2afc44: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2afc44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2afc48: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2afc48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2afc4c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2afc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2afc50: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2afc50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2afc54: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2afc54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x2afc58: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2afc58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2afc5c: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x2afc5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2afc60: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x2afc60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
label_2afc64:
    // 0x2afc64: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2afc64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2afc68: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2AFC68u;
    {
        const bool branch_taken_0x2afc68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2afc68) {
            ctx->pc = 0x2AFC3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2afc3c;
        }
    }
    ctx->pc = 0x2AFC70u;
    // 0x2afc70: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2afc70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2afc74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2afc74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2afc78: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2afc78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2afc7c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AFC7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AFC7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AFC84u;
    // 0x2afc84: 0x0  nop
    ctx->pc = 0x2afc84u;
    // NOP
    // 0x2afc88: 0x0  nop
    ctx->pc = 0x2afc88u;
    // NOP
    // 0x2afc8c: 0x0  nop
    ctx->pc = 0x2afc8cu;
    // NOP
    ctx->pc = 0x2afc90u;
}
