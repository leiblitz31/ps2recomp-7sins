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

// Function: sub_0028ED20
// Address: 0x28ed20 - 0x28edb0
void sub_0028ED20_0x28ed20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028ED20_0x28ed20");
#endif

    switch (ctx->pc) {
        case 0x28ed3cu: goto label_28ed3c;
        case 0x28ed48u: goto label_28ed48;
        case 0x28ed58u: goto label_28ed58;
        case 0x28ed64u: goto label_28ed64;
        case 0x28ed78u: goto label_28ed78;
        case 0x28ed8cu: goto label_28ed8c;
        default: break;
    }

    ctx->pc = 0x28ed20u;

label_28ed20:
    // 0x28ed20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28ed20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28ed24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28ed24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28ed28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28ed28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28ed2c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x28ed2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x28ed30: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x28ed30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x28ed34: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x28ED34u;
    {
        const bool branch_taken_0x28ed34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ed34) {
            ctx->pc = 0x28ED90u;
            goto label_28ed90;
        }
    }
    ctx->pc = 0x28ED3Cu;
label_28ed3c:
    // 0x28ed3c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x28ed3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28ed40: 0xc0a3b00  jal         func_28EC00
    ctx->pc = 0x28ED40u;
    SET_GPR_U32(ctx, 31, 0x28ED48u);
    ctx->pc = 0x28EC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EC00u, 0x28ED40u, 0x28ED48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28ED48u;
label_28ed48:
    // 0x28ed48: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x28ed48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28ed4c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x28ed4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28ed50: 0xc0a3b48  jal         func_28ED20
    ctx->pc = 0x28ED50u;
    SET_GPR_U32(ctx, 31, 0x28ED58u);
    ctx->pc = 0x28ED20u;
    goto label_28ed20;
    ctx->pc = 0x28ED58u;
label_28ed58:
    // 0x28ed58: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x28ed58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28ed5c: 0xc0a3b08  jal         func_28EC20
    ctx->pc = 0x28ED5Cu;
    SET_GPR_U32(ctx, 31, 0x28ED64u);
    ctx->pc = 0x28EC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EC20u, 0x28ED5Cu, 0x28ED64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28ED64u;
label_28ed64:
    // 0x28ed64: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x28ed64u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28ed68: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x28ed68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28ed6c: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x28ed6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x28ed70: 0xc0a20e0  jal         func_288380
    ctx->pc = 0x28ED70u;
    SET_GPR_U32(ctx, 31, 0x28ED78u);
    ctx->pc = 0x288380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288380u, 0x28ED70u, 0x28ED78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28ED78u;
label_28ed78:
    // 0x28ed78: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x28ed78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28ed7c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x28ed7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28ed80: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x28ed80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28ed84: 0xc0a3830  jal         func_28E0C0
    ctx->pc = 0x28ED84u;
    SET_GPR_U32(ctx, 31, 0x28ED8Cu);
    ctx->pc = 0x28E0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E0C0u, 0x28ED84u, 0x28ED8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28ED8Cu;
label_28ed8c:
    // 0x28ed8c: 0xafb00030  sw          $s0, 0x30($sp)
    ctx->pc = 0x28ed8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 16));
label_28ed90:
    // 0x28ed90: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x28ed90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28ed94: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x28ED94u;
    {
        const bool branch_taken_0x28ed94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28ed94) {
            ctx->pc = 0x28ED3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28ed3c;
        }
    }
    ctx->pc = 0x28ED9Cu;
    // 0x28ed9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28ed9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28eda0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28eda0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28eda4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x28eda4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x28eda8: 0x3e00008  jr          $ra
    ctx->pc = 0x28EDA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28EDA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28EDB0u;
}
