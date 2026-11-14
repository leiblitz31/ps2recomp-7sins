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

// Function: sub_00218D30
// Address: 0x218d30 - 0x218df0
void sub_00218D30_0x218d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218D30_0x218d30");
#endif

    switch (ctx->pc) {
        case 0x218d60u: goto label_218d60;
        case 0x218d6cu: goto label_218d6c;
        case 0x218d78u: goto label_218d78;
        case 0x218d90u: goto label_218d90;
        case 0x218da8u: goto label_218da8;
        case 0x218dc4u: goto label_218dc4;
        default: break;
    }

    ctx->pc = 0x218d30u;

    // 0x218d30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x218d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x218d34: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x218d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x218d38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x218d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x218d3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x218d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x218d40: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x218d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x218d44: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x218d44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x218d48: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x218d48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x218d4c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x218d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x218d50: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x218d50u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x218d54: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x218d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x218d58: 0xc0863ac  jal         func_218EB0
    ctx->pc = 0x218D58u;
    SET_GPR_U32(ctx, 31, 0x218D60u);
    ctx->pc = 0x218EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218EB0u, 0x218D58u, 0x218D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218D60u;
label_218d60:
    // 0x218d60: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x218d60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x218d64: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x218D64u;
    {
        const bool branch_taken_0x218d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x218d64) {
            ctx->pc = 0x218DC8u;
            goto label_218dc8;
        }
    }
    ctx->pc = 0x218D6Cu;
label_218d6c:
    // 0x218d6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x218d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218d70: 0xc08638c  jal         func_218E30
    ctx->pc = 0x218D70u;
    SET_GPR_U32(ctx, 31, 0x218D78u);
    ctx->pc = 0x218E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218E30u, 0x218D70u, 0x218D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218D78u;
label_218d78:
    // 0x218d78: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x218d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x218d7c: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x218d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x218d80: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x218d80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218d84: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x218d84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x218d88: 0xc0426d8  jal         func_109B60
    ctx->pc = 0x218D88u;
    SET_GPR_U32(ctx, 31, 0x218D90u);
    ctx->pc = 0x109B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109B60u, 0x218D88u, 0x218D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218D90u;
label_218d90:
    // 0x218d90: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x218D90u;
    {
        const bool branch_taken_0x218d90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x218d90) {
            ctx->pc = 0x218DB8u;
            goto label_218db8;
        }
    }
    ctx->pc = 0x218D98u;
    // 0x218d98: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x218d98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218d9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x218d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218da0: 0xc086384  jal         func_218E10
    ctx->pc = 0x218DA0u;
    SET_GPR_U32(ctx, 31, 0x218DA8u);
    ctx->pc = 0x218E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218E10u, 0x218DA0u, 0x218DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218DA8u;
label_218da8:
    // 0x218da8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x218da8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x218dac: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x218dacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218db0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x218DB0u;
    {
        const bool branch_taken_0x218db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x218db0) {
            ctx->pc = 0x218DC8u;
            goto label_218dc8;
        }
    }
    ctx->pc = 0x218DB8u;
label_218db8:
    // 0x218db8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x218db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218dbc: 0xc08637c  jal         func_218DF0
    ctx->pc = 0x218DBCu;
    SET_GPR_U32(ctx, 31, 0x218DC4u);
    ctx->pc = 0x218DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218DF0u, 0x218DBCu, 0x218DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218DC4u;
label_218dc4:
    // 0x218dc4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x218dc4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_218dc8:
    // 0x218dc8: 0x1600ffe8  bnez        $s0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x218DC8u;
    {
        const bool branch_taken_0x218dc8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x218dc8) {
            ctx->pc = 0x218D6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_218d6c;
        }
    }
    ctx->pc = 0x218DD0u;
    // 0x218dd0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x218dd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218dd4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x218dd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x218dd8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x218dd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x218ddc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x218ddcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x218de0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x218de0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218de4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x218de4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x218de8: 0x3e00008  jr          $ra
    ctx->pc = 0x218DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218DE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218DF0u;
}
