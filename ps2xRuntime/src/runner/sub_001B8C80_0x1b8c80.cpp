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

// Function: sub_001B8C80
// Address: 0x1b8c80 - 0x1b8d30
void sub_001B8C80_0x1b8c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8C80_0x1b8c80");
#endif

    switch (ctx->pc) {
        case 0x1b8c80u: goto label_1b8c80;
        case 0x1b8c84u: goto label_1b8c84;
        case 0x1b8c88u: goto label_1b8c88;
        case 0x1b8c8cu: goto label_1b8c8c;
        case 0x1b8c90u: goto label_1b8c90;
        case 0x1b8c94u: goto label_1b8c94;
        case 0x1b8c98u: goto label_1b8c98;
        case 0x1b8c9cu: goto label_1b8c9c;
        case 0x1b8ca0u: goto label_1b8ca0;
        case 0x1b8ca4u: goto label_1b8ca4;
        case 0x1b8ca8u: goto label_1b8ca8;
        case 0x1b8cacu: goto label_1b8cac;
        case 0x1b8cb0u: goto label_1b8cb0;
        case 0x1b8cb4u: goto label_1b8cb4;
        case 0x1b8cb8u: goto label_1b8cb8;
        case 0x1b8cbcu: goto label_1b8cbc;
        case 0x1b8cc0u: goto label_1b8cc0;
        case 0x1b8cc4u: goto label_1b8cc4;
        case 0x1b8cc8u: goto label_1b8cc8;
        case 0x1b8cccu: goto label_1b8ccc;
        case 0x1b8cd0u: goto label_1b8cd0;
        case 0x1b8cd4u: goto label_1b8cd4;
        case 0x1b8cd8u: goto label_1b8cd8;
        case 0x1b8cdcu: goto label_1b8cdc;
        case 0x1b8ce0u: goto label_1b8ce0;
        case 0x1b8ce4u: goto label_1b8ce4;
        case 0x1b8ce8u: goto label_1b8ce8;
        case 0x1b8cecu: goto label_1b8cec;
        case 0x1b8cf0u: goto label_1b8cf0;
        case 0x1b8cf4u: goto label_1b8cf4;
        case 0x1b8cf8u: goto label_1b8cf8;
        case 0x1b8cfcu: goto label_1b8cfc;
        case 0x1b8d00u: goto label_1b8d00;
        case 0x1b8d04u: goto label_1b8d04;
        case 0x1b8d08u: goto label_1b8d08;
        case 0x1b8d0cu: goto label_1b8d0c;
        case 0x1b8d10u: goto label_1b8d10;
        case 0x1b8d14u: goto label_1b8d14;
        case 0x1b8d18u: goto label_1b8d18;
        case 0x1b8d1cu: goto label_1b8d1c;
        case 0x1b8d20u: goto label_1b8d20;
        case 0x1b8d24u: goto label_1b8d24;
        case 0x1b8d28u: goto label_1b8d28;
        case 0x1b8d2cu: goto label_1b8d2c;
        default: break;
    }

    ctx->pc = 0x1b8c80u;

label_1b8c80:
    // 0x1b8c80: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1b8c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1b8c84:
    // 0x1b8c84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b8c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1b8c88:
    // 0x1b8c88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b8c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b8c8c:
    // 0x1b8c8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b8c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1b8c90:
    // 0x1b8c90: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1b8c90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_1b8c94:
    // 0x1b8c94: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b8c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1b8c98:
    // 0x1b8c98: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1b8c9c:
    if (ctx->pc == 0x1B8C9Cu) {
        ctx->pc = 0x1B8CA0u;
        goto label_1b8ca0;
    }
    ctx->pc = 0x1B8C98u;
    {
        const bool branch_taken_0x1b8c98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b8c98) {
            ctx->pc = 0x1B8CA8u;
            goto label_1b8ca8;
        }
    }
    ctx->pc = 0x1B8CA0u;
label_1b8ca0:
    // 0x1b8ca0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b8ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b8ca4:
    // 0x1b8ca4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1b8ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_1b8ca8:
    // 0x1b8ca8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1b8ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1b8cac:
    // 0x1b8cac: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1b8cacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1b8cb0:
    // 0x1b8cb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b8cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b8cb4:
    // 0x1b8cb4: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1b8cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1b8cb8:
    // 0x1b8cb8: 0xc119b68  jal         func_466DA0
label_1b8cbc:
    if (ctx->pc == 0x1B8CBCu) {
        ctx->pc = 0x1B8CC0u;
        goto label_1b8cc0;
    }
    ctx->pc = 0x1B8CB8u;
    SET_GPR_U32(ctx, 31, 0x1B8CC0u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x1B8CB8u, 0x1B8CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8CC0u;
label_1b8cc0:
    // 0x1b8cc0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b8cc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b8cc4:
    // 0x1b8cc4: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_1b8cc8:
    if (ctx->pc == 0x1B8CC8u) {
        ctx->pc = 0x1B8CCCu;
        goto label_1b8ccc;
    }
    ctx->pc = 0x1B8CC4u;
    {
        const bool branch_taken_0x1b8cc4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8cc4) {
            ctx->pc = 0x1B8CD8u;
            goto label_1b8cd8;
        }
    }
    ctx->pc = 0x1B8CCCu;
label_1b8ccc:
    // 0x1b8ccc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1b8cccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b8cd0:
    // 0x1b8cd0: 0x1000000e  b           . + 4 + (0xE << 2)
label_1b8cd4:
    if (ctx->pc == 0x1B8CD4u) {
        ctx->pc = 0x1B8CD8u;
        goto label_1b8cd8;
    }
    ctx->pc = 0x1B8CD0u;
    {
        const bool branch_taken_0x1b8cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8cd0) {
            ctx->pc = 0x1B8D0Cu;
            goto label_1b8d0c;
        }
    }
    ctx->pc = 0x1B8CD8u;
label_1b8cd8:
    // 0x1b8cd8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b8cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8cdc:
    // 0x1b8cdc: 0xc0ba088  jal         func_2E8220
label_1b8ce0:
    if (ctx->pc == 0x1B8CE0u) {
        ctx->pc = 0x1B8CE4u;
        goto label_1b8ce4;
    }
    ctx->pc = 0x1B8CDCu;
    SET_GPR_U32(ctx, 31, 0x1B8CE4u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x1B8CDCu, 0x1B8CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8CE4u;
label_1b8ce4:
    // 0x1b8ce4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b8ce4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b8ce8:
    // 0x1b8ce8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b8ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b8cec:
    // 0x1b8cec: 0xc0ba088  jal         func_2E8220
label_1b8cf0:
    if (ctx->pc == 0x1B8CF0u) {
        ctx->pc = 0x1B8CF4u;
        goto label_1b8cf4;
    }
    ctx->pc = 0x1B8CECu;
    SET_GPR_U32(ctx, 31, 0x1B8CF4u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x1B8CECu, 0x1B8CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8CF4u;
label_1b8cf4:
    // 0x1b8cf4: 0x1200ffec  beqz        $s0, . + 4 + (-0x14 << 2)
label_1b8cf8:
    if (ctx->pc == 0x1B8CF8u) {
        ctx->pc = 0x1B8CFCu;
        goto label_1b8cfc;
    }
    ctx->pc = 0x1B8CF4u;
    {
        const bool branch_taken_0x1b8cf4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8cf4) {
            ctx->pc = 0x1B8CA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b8ca8;
        }
    }
    ctx->pc = 0x1B8CFCu;
label_1b8cfc:
    // 0x1b8cfc: 0x200f809  jalr        $s0
label_1b8d00:
    if (ctx->pc == 0x1B8D00u) {
        ctx->pc = 0x1B8D04u;
        goto label_1b8d04;
    }
    ctx->pc = 0x1B8CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x1B8D04u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8CFCu, 0x1B8D04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B8D04u;
label_1b8d04:
    // 0x1b8d04: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_1b8d08:
    if (ctx->pc == 0x1B8D08u) {
        ctx->pc = 0x1B8D0Cu;
        goto label_1b8d0c;
    }
    ctx->pc = 0x1B8D04u;
    {
        const bool branch_taken_0x1b8d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8d04) {
            ctx->pc = 0x1B8CA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b8ca8;
        }
    }
    ctx->pc = 0x1B8D0Cu;
label_1b8d0c:
    // 0x1b8d0c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b8d0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b8d10:
    // 0x1b8d10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b8d10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b8d14:
    // 0x1b8d14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b8d14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b8d18:
    // 0x1b8d18: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1b8d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1b8d1c:
    // 0x1b8d1c: 0x3e00008  jr          $ra
label_1b8d20:
    if (ctx->pc == 0x1B8D20u) {
        ctx->pc = 0x1B8D24u;
        goto label_1b8d24;
    }
    ctx->pc = 0x1B8D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8D1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B8D24u;
label_1b8d24:
    // 0x1b8d24: 0x0  nop
    ctx->pc = 0x1b8d24u;
    // NOP
label_1b8d28:
    // 0x1b8d28: 0x0  nop
    ctx->pc = 0x1b8d28u;
    // NOP
label_1b8d2c:
    // 0x1b8d2c: 0x0  nop
    ctx->pc = 0x1b8d2cu;
    // NOP
    ctx->pc = 0x1b8d30u;
}
