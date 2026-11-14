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

// Function: sub_00282CB0
// Address: 0x282cb0 - 0x282d40
void sub_00282CB0_0x282cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282CB0_0x282cb0");
#endif

    switch (ctx->pc) {
        case 0x282cccu: goto label_282ccc;
        case 0x282cd8u: goto label_282cd8;
        case 0x282ce8u: goto label_282ce8;
        case 0x282cf4u: goto label_282cf4;
        case 0x282d08u: goto label_282d08;
        case 0x282d1cu: goto label_282d1c;
        default: break;
    }

    ctx->pc = 0x282cb0u;

label_282cb0:
    // 0x282cb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x282cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x282cb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x282cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x282cb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x282cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x282cbc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x282cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x282cc0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x282cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x282cc4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x282CC4u;
    {
        const bool branch_taken_0x282cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x282cc4) {
            ctx->pc = 0x282D20u;
            goto label_282d20;
        }
    }
    ctx->pc = 0x282CCCu;
label_282ccc:
    // 0x282ccc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x282cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x282cd0: 0xc0a0af8  jal         func_282BE0
    ctx->pc = 0x282CD0u;
    SET_GPR_U32(ctx, 31, 0x282CD8u);
    ctx->pc = 0x282BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282BE0u, 0x282CD0u, 0x282CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282CD8u;
label_282cd8:
    // 0x282cd8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x282cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x282cdc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x282cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x282ce0: 0xc0a0b2c  jal         func_282CB0
    ctx->pc = 0x282CE0u;
    SET_GPR_U32(ctx, 31, 0x282CE8u);
    ctx->pc = 0x282CB0u;
    goto label_282cb0;
    ctx->pc = 0x282CE8u;
label_282ce8:
    // 0x282ce8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x282ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x282cec: 0xc0a0b00  jal         func_282C00
    ctx->pc = 0x282CECu;
    SET_GPR_U32(ctx, 31, 0x282CF4u);
    ctx->pc = 0x282C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282C00u, 0x282CECu, 0x282CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282CF4u;
label_282cf4:
    // 0x282cf4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x282cf4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x282cf8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x282cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x282cfc: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x282cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x282d00: 0xc09f8c0  jal         func_27E300
    ctx->pc = 0x282D00u;
    SET_GPR_U32(ctx, 31, 0x282D08u);
    ctx->pc = 0x27E300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E300u, 0x282D00u, 0x282D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282D08u;
label_282d08:
    // 0x282d08: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x282d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x282d0c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x282d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x282d10: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x282d10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x282d14: 0xc0a0810  jal         func_282040
    ctx->pc = 0x282D14u;
    SET_GPR_U32(ctx, 31, 0x282D1Cu);
    ctx->pc = 0x282040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282040u, 0x282D14u, 0x282D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282D1Cu;
label_282d1c:
    // 0x282d1c: 0xafb00030  sw          $s0, 0x30($sp)
    ctx->pc = 0x282d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 16));
label_282d20:
    // 0x282d20: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x282d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x282d24: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x282D24u;
    {
        const bool branch_taken_0x282d24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x282d24) {
            ctx->pc = 0x282CCCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_282ccc;
        }
    }
    ctx->pc = 0x282D2Cu;
    // 0x282d2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x282d2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x282d30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x282d30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282d34: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x282d34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x282d38: 0x3e00008  jr          $ra
    ctx->pc = 0x282D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282D38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x282D40u;
}
