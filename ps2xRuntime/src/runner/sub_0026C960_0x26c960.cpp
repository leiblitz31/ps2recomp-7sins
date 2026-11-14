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

// Function: sub_0026C960
// Address: 0x26c960 - 0x26c9f0
void sub_0026C960_0x26c960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026C960_0x26c960");
#endif

    switch (ctx->pc) {
        case 0x26c988u: goto label_26c988;
        case 0x26c9b4u: goto label_26c9b4;
        case 0x26c9d4u: goto label_26c9d4;
        default: break;
    }

    ctx->pc = 0x26c960u;

    // 0x26c960: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x26c960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x26c964: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26c964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26c968: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26c968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26c96c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x26c96cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x26c970: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x26c970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x26c974: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x26c974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26c978: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x26c978u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x26c97c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x26c97cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26c980: 0xc04808c  jal         func_120230
    ctx->pc = 0x26C980u;
    SET_GPR_U32(ctx, 31, 0x26C988u);
    ctx->pc = 0x120230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120230u, 0x26C980u, 0x26C988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C988u;
label_26c988:
    // 0x26c988: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x26C988u;
    {
        const bool branch_taken_0x26c988 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x26c988) {
            ctx->pc = 0x26C9B4u;
            goto label_26c9b4;
        }
    }
    ctx->pc = 0x26C990u;
    // 0x26c990: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x26c990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26c994: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x26c994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26c998: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x26c998u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x26c99c: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x26c99cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x26c9a0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x26c9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26c9a4: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x26c9a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26c9a8: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x26c9a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x26c9ac: 0xc0683c8  jal         func_1A0F20
    ctx->pc = 0x26C9ACu;
    SET_GPR_U32(ctx, 31, 0x26C9B4u);
    ctx->pc = 0x1A0F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0F20u, 0x26C9ACu, 0x26C9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C9B4u;
label_26c9b4:
    // 0x26c9b4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x26c9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26c9b8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x26c9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x26c9bc: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x26c9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x26c9c0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x26c9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x26c9c4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x26c9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26c9c8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x26c9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26c9cc: 0xc09b27c  jal         func_26C9F0
    ctx->pc = 0x26C9CCu;
    SET_GPR_U32(ctx, 31, 0x26C9D4u);
    ctx->pc = 0x26C9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C9F0u, 0x26C9CCu, 0x26C9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C9D4u;
label_26c9d4:
    // 0x26c9d4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x26c9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26c9d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26c9d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26c9dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26c9dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26c9e0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x26c9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x26c9e4: 0x3e00008  jr          $ra
    ctx->pc = 0x26C9E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C9E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26C9ECu;
    // 0x26c9ec: 0x0  nop
    ctx->pc = 0x26c9ecu;
    // NOP
    ctx->pc = 0x26c9f0u;
}
