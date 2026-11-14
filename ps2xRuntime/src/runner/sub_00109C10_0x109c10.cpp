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

// Function: sub_00109C10
// Address: 0x109c10 - 0x109ca0
void sub_00109C10_0x109c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00109C10_0x109c10");
#endif

    switch (ctx->pc) {
        case 0x109c2cu: goto label_109c2c;
        case 0x109c38u: goto label_109c38;
        case 0x109c48u: goto label_109c48;
        case 0x109c54u: goto label_109c54;
        case 0x109c68u: goto label_109c68;
        case 0x109c7cu: goto label_109c7c;
        default: break;
    }

    ctx->pc = 0x109c10u;

label_109c10:
    // 0x109c10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x109c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x109c14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x109c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x109c18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x109c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x109c1c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x109c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x109c20: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x109c20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x109c24: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x109C24u;
    {
        const bool branch_taken_0x109c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x109c24) {
            ctx->pc = 0x109C80u;
            goto label_109c80;
        }
    }
    ctx->pc = 0x109C2Cu;
label_109c2c:
    // 0x109c2c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x109c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x109c30: 0xc0426c8  jal         func_109B20
    ctx->pc = 0x109C30u;
    SET_GPR_U32(ctx, 31, 0x109C38u);
    ctx->pc = 0x109B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109B20u, 0x109C30u, 0x109C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109C38u;
label_109c38:
    // 0x109c38: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x109c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x109c3c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x109c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x109c40: 0xc042704  jal         func_109C10
    ctx->pc = 0x109C40u;
    SET_GPR_U32(ctx, 31, 0x109C48u);
    ctx->pc = 0x109C10u;
    goto label_109c10;
    ctx->pc = 0x109C48u;
label_109c48:
    // 0x109c48: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x109c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x109c4c: 0xc0426d0  jal         func_109B40
    ctx->pc = 0x109C4Cu;
    SET_GPR_U32(ctx, 31, 0x109C54u);
    ctx->pc = 0x109B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109B40u, 0x109C4Cu, 0x109C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109C54u;
label_109c54:
    // 0x109c54: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x109c54u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x109c58: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x109c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x109c5c: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x109c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x109c60: 0xc042728  jal         func_109CA0
    ctx->pc = 0x109C60u;
    SET_GPR_U32(ctx, 31, 0x109C68u);
    ctx->pc = 0x109CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109CA0u, 0x109C60u, 0x109C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109C68u;
label_109c68:
    // 0x109c68: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x109c68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x109c6c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x109c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x109c70: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x109c70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109c74: 0xc04241c  jal         func_109070
    ctx->pc = 0x109C74u;
    SET_GPR_U32(ctx, 31, 0x109C7Cu);
    ctx->pc = 0x109070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109070u, 0x109C74u, 0x109C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109C7Cu;
label_109c7c:
    // 0x109c7c: 0xafb00030  sw          $s0, 0x30($sp)
    ctx->pc = 0x109c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 16));
label_109c80:
    // 0x109c80: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x109c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x109c84: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x109C84u;
    {
        const bool branch_taken_0x109c84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x109c84) {
            ctx->pc = 0x109C2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109c2c;
        }
    }
    ctx->pc = 0x109C8Cu;
    // 0x109c8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x109c8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x109c90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x109c90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x109c94: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x109c94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x109c98: 0x3e00008  jr          $ra
    ctx->pc = 0x109C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109C98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109CA0u;
}
