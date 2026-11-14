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

// Function: sub_0023FE50
// Address: 0x23fe50 - 0x23fed0
void sub_0023FE50_0x23fe50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023FE50_0x23fe50");
#endif

    switch (ctx->pc) {
        case 0x23fe78u: goto label_23fe78;
        case 0x23fe88u: goto label_23fe88;
        default: break;
    }

    ctx->pc = 0x23fe50u;

    // 0x23fe50: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x23fe50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x23fe54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x23fe54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x23fe58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23fe58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23fe5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23fe5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23fe60: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x23fe60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x23fe64: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x23fe64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x23fe68: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x23fe68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x23fe6c: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x23fe6cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23fe70: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x23FE70u;
    {
        const bool branch_taken_0x23fe70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23fe70) {
            ctx->pc = 0x23FE9Cu;
            goto label_23fe9c;
        }
    }
    ctx->pc = 0x23FE78u;
label_23fe78:
    // 0x23fe78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23fe78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fe7c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x23fe7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23fe80: 0xc08ffe4  jal         func_23FF90
    ctx->pc = 0x23FE80u;
    SET_GPR_U32(ctx, 31, 0x23FE88u);
    ctx->pc = 0x23FF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FF90u, 0x23FE80u, 0x23FE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FE88u;
label_23fe88:
    // 0x23fe88: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x23fe88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23fe8c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23fe8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23fe90: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x23fe90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x23fe94: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x23fe94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x23fe98: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x23fe98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23fe9c:
    // 0x23fe9c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x23fe9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23fea0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x23FEA0u;
    {
        const bool branch_taken_0x23fea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23fea0) {
            ctx->pc = 0x23FE78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23fe78;
        }
    }
    ctx->pc = 0x23FEA8u;
    // 0x23fea8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23fea8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23feac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23feacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23feb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23feb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23feb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23feb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23feb8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x23feb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x23febc: 0x3e00008  jr          $ra
    ctx->pc = 0x23FEBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23FEBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23FEC4u;
    // 0x23fec4: 0x0  nop
    ctx->pc = 0x23fec4u;
    // NOP
    // 0x23fec8: 0x0  nop
    ctx->pc = 0x23fec8u;
    // NOP
    // 0x23fecc: 0x0  nop
    ctx->pc = 0x23feccu;
    // NOP
    ctx->pc = 0x23fed0u;
}
