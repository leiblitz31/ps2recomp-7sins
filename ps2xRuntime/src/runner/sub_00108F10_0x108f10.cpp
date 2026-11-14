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

// Function: sub_00108F10
// Address: 0x108f10 - 0x108fc0
void sub_00108F10_0x108f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108F10_0x108f10");
#endif

    switch (ctx->pc) {
        case 0x108f40u: goto label_108f40;
        case 0x108f74u: goto label_108f74;
        default: break;
    }

    ctx->pc = 0x108f10u;

    // 0x108f10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x108f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x108f14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x108f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x108f18: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x108f18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x108f1c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x108f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108f20: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x108f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x108f24: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x108F24u;
    {
        const bool branch_taken_0x108f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x108f24) {
            ctx->pc = 0x108F64u;
            goto label_108f64;
        }
    }
    ctx->pc = 0x108F2Cu;
    // 0x108f2c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x108f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108f30: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x108f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x108f34: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x108f34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x108f38: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x108F38u;
    {
        const bool branch_taken_0x108f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x108f38) {
            ctx->pc = 0x108F4Cu;
            goto label_108f4c;
        }
    }
    ctx->pc = 0x108F40u;
label_108f40:
    // 0x108f40: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x108f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108f44: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x108f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x108f48: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x108f48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_108f4c:
    // 0x108f4c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x108f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108f50: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x108f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x108f54: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x108F54u;
    {
        const bool branch_taken_0x108f54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x108f54) {
            ctx->pc = 0x108F40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_108f40;
        }
    }
    ctx->pc = 0x108F5Cu;
    // 0x108f5c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x108F5Cu;
    {
        const bool branch_taken_0x108f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x108f5c) {
            ctx->pc = 0x108FA4u;
            goto label_108fa4;
        }
    }
    ctx->pc = 0x108F64u;
label_108f64:
    // 0x108f64: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x108f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108f68: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x108f68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x108f6c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x108F6Cu;
    {
        const bool branch_taken_0x108f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x108f6c) {
            ctx->pc = 0x108F7Cu;
            goto label_108f7c;
        }
    }
    ctx->pc = 0x108F74u;
label_108f74:
    // 0x108f74: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x108f74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
    // 0x108f78: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x108f78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_108f7c:
    // 0x108f7c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x108f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108f80: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x108f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x108f84: 0x0  nop
    ctx->pc = 0x108f84u;
    // NOP
    // 0x108f88: 0x1062fffa  beq         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x108F88u;
    {
        const bool branch_taken_0x108f88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x108f88) {
            ctx->pc = 0x108F74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_108f74;
        }
    }
    ctx->pc = 0x108F90u;
    // 0x108f90: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x108f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108f94: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x108f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x108f98: 0x10500002  beq         $v0, $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x108F98u;
    {
        const bool branch_taken_0x108f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x108f98) {
            ctx->pc = 0x108FA4u;
            goto label_108fa4;
        }
    }
    ctx->pc = 0x108FA0u;
    // 0x108fa0: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x108fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
label_108fa4:
    // 0x108fa4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x108fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108fa8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x108fa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108fac: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x108facu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x108fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x108FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108FB8u;
    // 0x108fb8: 0x0  nop
    ctx->pc = 0x108fb8u;
    // NOP
    // 0x108fbc: 0x0  nop
    ctx->pc = 0x108fbcu;
    // NOP
    ctx->pc = 0x108fc0u;
}
