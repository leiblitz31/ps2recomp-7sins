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

// Function: sub_002E7C90
// Address: 0x2e7c90 - 0x2e7d30
void sub_002E7C90_0x2e7c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E7C90_0x2e7c90");
#endif

    switch (ctx->pc) {
        case 0x2e7c90u: goto label_2e7c90;
        case 0x2e7c94u: goto label_2e7c94;
        case 0x2e7c98u: goto label_2e7c98;
        case 0x2e7c9cu: goto label_2e7c9c;
        case 0x2e7ca0u: goto label_2e7ca0;
        case 0x2e7ca4u: goto label_2e7ca4;
        case 0x2e7ca8u: goto label_2e7ca8;
        case 0x2e7cacu: goto label_2e7cac;
        case 0x2e7cb0u: goto label_2e7cb0;
        case 0x2e7cb4u: goto label_2e7cb4;
        case 0x2e7cb8u: goto label_2e7cb8;
        case 0x2e7cbcu: goto label_2e7cbc;
        case 0x2e7cc0u: goto label_2e7cc0;
        case 0x2e7cc4u: goto label_2e7cc4;
        case 0x2e7cc8u: goto label_2e7cc8;
        case 0x2e7cccu: goto label_2e7ccc;
        case 0x2e7cd0u: goto label_2e7cd0;
        case 0x2e7cd4u: goto label_2e7cd4;
        case 0x2e7cd8u: goto label_2e7cd8;
        case 0x2e7cdcu: goto label_2e7cdc;
        case 0x2e7ce0u: goto label_2e7ce0;
        case 0x2e7ce4u: goto label_2e7ce4;
        case 0x2e7ce8u: goto label_2e7ce8;
        case 0x2e7cecu: goto label_2e7cec;
        case 0x2e7cf0u: goto label_2e7cf0;
        case 0x2e7cf4u: goto label_2e7cf4;
        case 0x2e7cf8u: goto label_2e7cf8;
        case 0x2e7cfcu: goto label_2e7cfc;
        case 0x2e7d00u: goto label_2e7d00;
        case 0x2e7d04u: goto label_2e7d04;
        case 0x2e7d08u: goto label_2e7d08;
        case 0x2e7d0cu: goto label_2e7d0c;
        case 0x2e7d10u: goto label_2e7d10;
        case 0x2e7d14u: goto label_2e7d14;
        case 0x2e7d18u: goto label_2e7d18;
        case 0x2e7d1cu: goto label_2e7d1c;
        case 0x2e7d20u: goto label_2e7d20;
        case 0x2e7d24u: goto label_2e7d24;
        case 0x2e7d28u: goto label_2e7d28;
        case 0x2e7d2cu: goto label_2e7d2c;
        default: break;
    }

    ctx->pc = 0x2e7c90u;

label_2e7c90:
    // 0x2e7c90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2e7c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2e7c94:
    // 0x2e7c94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e7c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2e7c98:
    // 0x2e7c98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e7c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2e7c9c:
    // 0x2e7c9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e7c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2e7ca0:
    // 0x2e7ca0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2e7ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_2e7ca4:
    // 0x2e7ca4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2e7ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2e7ca8:
    // 0x2e7ca8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2e7cac:
    if (ctx->pc == 0x2E7CACu) {
        ctx->pc = 0x2E7CB0u;
        goto label_2e7cb0;
    }
    ctx->pc = 0x2E7CA8u;
    {
        const bool branch_taken_0x2e7ca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e7ca8) {
            ctx->pc = 0x2E7CB8u;
            goto label_2e7cb8;
        }
    }
    ctx->pc = 0x2E7CB0u;
label_2e7cb0:
    // 0x2e7cb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e7cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e7cb4:
    // 0x2e7cb4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x2e7cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_2e7cb8:
    // 0x2e7cb8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2e7cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2e7cbc:
    // 0x2e7cbc: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2e7cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2e7cc0:
    // 0x2e7cc0: 0xc119b68  jal         func_466DA0
label_2e7cc4:
    if (ctx->pc == 0x2E7CC4u) {
        ctx->pc = 0x2E7CC8u;
        goto label_2e7cc8;
    }
    ctx->pc = 0x2E7CC0u;
    SET_GPR_U32(ctx, 31, 0x2E7CC8u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2E7CC0u, 0x2E7CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7CC8u;
label_2e7cc8:
    // 0x2e7cc8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e7cc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e7ccc:
    // 0x2e7ccc: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_2e7cd0:
    if (ctx->pc == 0x2E7CD0u) {
        ctx->pc = 0x2E7CD4u;
        goto label_2e7cd4;
    }
    ctx->pc = 0x2E7CCCu;
    {
        const bool branch_taken_0x2e7ccc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7ccc) {
            ctx->pc = 0x2E7CE0u;
            goto label_2e7ce0;
        }
    }
    ctx->pc = 0x2E7CD4u;
label_2e7cd4:
    // 0x2e7cd4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2e7cd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e7cd8:
    // 0x2e7cd8: 0x1000000e  b           . + 4 + (0xE << 2)
label_2e7cdc:
    if (ctx->pc == 0x2E7CDCu) {
        ctx->pc = 0x2E7CE0u;
        goto label_2e7ce0;
    }
    ctx->pc = 0x2E7CD8u;
    {
        const bool branch_taken_0x2e7cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7cd8) {
            ctx->pc = 0x2E7D14u;
            goto label_2e7d14;
        }
    }
    ctx->pc = 0x2E7CE0u;
label_2e7ce0:
    // 0x2e7ce0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e7ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e7ce4:
    // 0x2e7ce4: 0xc0ba088  jal         func_2E8220
label_2e7ce8:
    if (ctx->pc == 0x2E7CE8u) {
        ctx->pc = 0x2E7CECu;
        goto label_2e7cec;
    }
    ctx->pc = 0x2E7CE4u;
    SET_GPR_U32(ctx, 31, 0x2E7CECu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x2E7CE4u, 0x2E7CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7CECu;
label_2e7cec:
    // 0x2e7cec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e7cecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e7cf0:
    // 0x2e7cf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e7cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e7cf4:
    // 0x2e7cf4: 0xc0ba088  jal         func_2E8220
label_2e7cf8:
    if (ctx->pc == 0x2E7CF8u) {
        ctx->pc = 0x2E7CFCu;
        goto label_2e7cfc;
    }
    ctx->pc = 0x2E7CF4u;
    SET_GPR_U32(ctx, 31, 0x2E7CFCu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x2E7CF4u, 0x2E7CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7CFCu;
label_2e7cfc:
    // 0x2e7cfc: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_2e7d00:
    if (ctx->pc == 0x2E7D00u) {
        ctx->pc = 0x2E7D04u;
        goto label_2e7d04;
    }
    ctx->pc = 0x2E7CFCu;
    {
        const bool branch_taken_0x2e7cfc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7cfc) {
            ctx->pc = 0x2E7CB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e7cb8;
        }
    }
    ctx->pc = 0x2E7D04u;
label_2e7d04:
    // 0x2e7d04: 0x200f809  jalr        $s0
label_2e7d08:
    if (ctx->pc == 0x2E7D08u) {
        ctx->pc = 0x2E7D0Cu;
        goto label_2e7d0c;
    }
    ctx->pc = 0x2E7D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x2E7D0Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E7D04u, 0x2E7D0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E7D0Cu;
label_2e7d0c:
    // 0x2e7d0c: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_2e7d10:
    if (ctx->pc == 0x2E7D10u) {
        ctx->pc = 0x2E7D14u;
        goto label_2e7d14;
    }
    ctx->pc = 0x2E7D0Cu;
    {
        const bool branch_taken_0x2e7d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7d0c) {
            ctx->pc = 0x2E7CB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e7cb8;
        }
    }
    ctx->pc = 0x2E7D14u;
label_2e7d14:
    // 0x2e7d14: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e7d14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2e7d18:
    // 0x2e7d18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e7d18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e7d1c:
    // 0x2e7d1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e7d1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2e7d20:
    // 0x2e7d20: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2e7d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2e7d24:
    // 0x2e7d24: 0x3e00008  jr          $ra
label_2e7d28:
    if (ctx->pc == 0x2E7D28u) {
        ctx->pc = 0x2E7D2Cu;
        goto label_2e7d2c;
    }
    ctx->pc = 0x2E7D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E7D24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E7D2Cu;
label_2e7d2c:
    // 0x2e7d2c: 0x0  nop
    ctx->pc = 0x2e7d2cu;
    // NOP
    ctx->pc = 0x2e7d30u;
}
