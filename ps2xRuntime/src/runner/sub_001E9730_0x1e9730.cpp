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

// Function: sub_001E9730
// Address: 0x1e9730 - 0x1e97b0
void sub_001E9730_0x1e9730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E9730_0x1e9730");
#endif

    switch (ctx->pc) {
        case 0x1e9758u: goto label_1e9758;
        case 0x1e9768u: goto label_1e9768;
        default: break;
    }

    ctx->pc = 0x1e9730u;

    // 0x1e9730: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e9730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1e9734: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e9734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e9738: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e9738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e973c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e973cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e9740: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1e9740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1e9744: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1e9744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1e9748: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x1e9748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x1e974c: 0x8fb00050  lw          $s0, 0x50($sp)
    ctx->pc = 0x1e974cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e9750: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1E9750u;
    {
        const bool branch_taken_0x1e9750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9750) {
            ctx->pc = 0x1E977Cu;
            goto label_1e977c;
        }
    }
    ctx->pc = 0x1E9758u;
label_1e9758:
    // 0x1e9758: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e9758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e975c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1e975cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e9760: 0xc07a3e4  jal         func_1E8F90
    ctx->pc = 0x1E9760u;
    SET_GPR_U32(ctx, 31, 0x1E9768u);
    ctx->pc = 0x1E8F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8F90u, 0x1E9760u, 0x1E9768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9768u;
label_1e9768:
    // 0x1e9768: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1e9768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e976c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1e976cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1e9770: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x1e9770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x1e9774: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1e9774u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1e9778: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1e9778u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e977c:
    // 0x1e977c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1e977cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e9780: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1e9780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e9784: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1E9784u;
    {
        const bool branch_taken_0x1e9784 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e9784) {
            ctx->pc = 0x1E9758u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e9758;
        }
    }
    ctx->pc = 0x1E978Cu;
    // 0x1e978c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e978cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9790: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e9790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e9794: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e9794u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9798: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e9798u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e979c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1e979cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1e97a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E97A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E97A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E97A8u;
    // 0x1e97a8: 0x0  nop
    ctx->pc = 0x1e97a8u;
    // NOP
    // 0x1e97ac: 0x0  nop
    ctx->pc = 0x1e97acu;
    // NOP
    ctx->pc = 0x1e97b0u;
}
