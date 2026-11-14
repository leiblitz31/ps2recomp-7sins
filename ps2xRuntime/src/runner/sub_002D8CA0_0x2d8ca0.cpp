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

// Function: sub_002D8CA0
// Address: 0x2d8ca0 - 0x2d8d40
void sub_002D8CA0_0x2d8ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D8CA0_0x2d8ca0");
#endif

    switch (ctx->pc) {
        case 0x2d8ca0u: goto label_2d8ca0;
        case 0x2d8ca4u: goto label_2d8ca4;
        case 0x2d8ca8u: goto label_2d8ca8;
        case 0x2d8cacu: goto label_2d8cac;
        case 0x2d8cb0u: goto label_2d8cb0;
        case 0x2d8cb4u: goto label_2d8cb4;
        case 0x2d8cb8u: goto label_2d8cb8;
        case 0x2d8cbcu: goto label_2d8cbc;
        case 0x2d8cc0u: goto label_2d8cc0;
        case 0x2d8cc4u: goto label_2d8cc4;
        case 0x2d8cc8u: goto label_2d8cc8;
        case 0x2d8cccu: goto label_2d8ccc;
        case 0x2d8cd0u: goto label_2d8cd0;
        case 0x2d8cd4u: goto label_2d8cd4;
        case 0x2d8cd8u: goto label_2d8cd8;
        case 0x2d8cdcu: goto label_2d8cdc;
        case 0x2d8ce0u: goto label_2d8ce0;
        case 0x2d8ce4u: goto label_2d8ce4;
        case 0x2d8ce8u: goto label_2d8ce8;
        case 0x2d8cecu: goto label_2d8cec;
        case 0x2d8cf0u: goto label_2d8cf0;
        case 0x2d8cf4u: goto label_2d8cf4;
        case 0x2d8cf8u: goto label_2d8cf8;
        case 0x2d8cfcu: goto label_2d8cfc;
        case 0x2d8d00u: goto label_2d8d00;
        case 0x2d8d04u: goto label_2d8d04;
        case 0x2d8d08u: goto label_2d8d08;
        case 0x2d8d0cu: goto label_2d8d0c;
        case 0x2d8d10u: goto label_2d8d10;
        case 0x2d8d14u: goto label_2d8d14;
        case 0x2d8d18u: goto label_2d8d18;
        case 0x2d8d1cu: goto label_2d8d1c;
        case 0x2d8d20u: goto label_2d8d20;
        case 0x2d8d24u: goto label_2d8d24;
        case 0x2d8d28u: goto label_2d8d28;
        case 0x2d8d2cu: goto label_2d8d2c;
        case 0x2d8d30u: goto label_2d8d30;
        case 0x2d8d34u: goto label_2d8d34;
        case 0x2d8d38u: goto label_2d8d38;
        case 0x2d8d3cu: goto label_2d8d3c;
        default: break;
    }

    ctx->pc = 0x2d8ca0u;

label_2d8ca0:
    // 0x2d8ca0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2d8ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2d8ca4:
    // 0x2d8ca4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d8ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2d8ca8:
    // 0x2d8ca8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d8ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2d8cac:
    // 0x2d8cac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d8cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2d8cb0:
    // 0x2d8cb0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2d8cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_2d8cb4:
    // 0x2d8cb4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2d8cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2d8cb8:
    // 0x2d8cb8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2d8cbc:
    if (ctx->pc == 0x2D8CBCu) {
        ctx->pc = 0x2D8CC0u;
        goto label_2d8cc0;
    }
    ctx->pc = 0x2D8CB8u;
    {
        const bool branch_taken_0x2d8cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d8cb8) {
            ctx->pc = 0x2D8CC8u;
            goto label_2d8cc8;
        }
    }
    ctx->pc = 0x2D8CC0u;
label_2d8cc0:
    // 0x2d8cc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d8cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d8cc4:
    // 0x2d8cc4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x2d8cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_2d8cc8:
    // 0x2d8cc8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2d8cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2d8ccc:
    // 0x2d8ccc: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2d8cccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2d8cd0:
    // 0x2d8cd0: 0xc119b68  jal         func_466DA0
label_2d8cd4:
    if (ctx->pc == 0x2D8CD4u) {
        ctx->pc = 0x2D8CD8u;
        goto label_2d8cd8;
    }
    ctx->pc = 0x2D8CD0u;
    SET_GPR_U32(ctx, 31, 0x2D8CD8u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2D8CD0u, 0x2D8CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8CD8u;
label_2d8cd8:
    // 0x2d8cd8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d8cd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d8cdc:
    // 0x2d8cdc: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_2d8ce0:
    if (ctx->pc == 0x2D8CE0u) {
        ctx->pc = 0x2D8CE4u;
        goto label_2d8ce4;
    }
    ctx->pc = 0x2D8CDCu;
    {
        const bool branch_taken_0x2d8cdc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8cdc) {
            ctx->pc = 0x2D8CF0u;
            goto label_2d8cf0;
        }
    }
    ctx->pc = 0x2D8CE4u;
label_2d8ce4:
    // 0x2d8ce4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2d8ce4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d8ce8:
    // 0x2d8ce8: 0x1000000e  b           . + 4 + (0xE << 2)
label_2d8cec:
    if (ctx->pc == 0x2D8CECu) {
        ctx->pc = 0x2D8CF0u;
        goto label_2d8cf0;
    }
    ctx->pc = 0x2D8CE8u;
    {
        const bool branch_taken_0x2d8ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8ce8) {
            ctx->pc = 0x2D8D24u;
            goto label_2d8d24;
        }
    }
    ctx->pc = 0x2D8CF0u;
label_2d8cf0:
    // 0x2d8cf0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2d8cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d8cf4:
    // 0x2d8cf4: 0xc0ba088  jal         func_2E8220
label_2d8cf8:
    if (ctx->pc == 0x2D8CF8u) {
        ctx->pc = 0x2D8CFCu;
        goto label_2d8cfc;
    }
    ctx->pc = 0x2D8CF4u;
    SET_GPR_U32(ctx, 31, 0x2D8CFCu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x2D8CF4u, 0x2D8CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8CFCu;
label_2d8cfc:
    // 0x2d8cfc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d8cfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d8d00:
    // 0x2d8d00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d8d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d8d04:
    // 0x2d8d04: 0xc0ba088  jal         func_2E8220
label_2d8d08:
    if (ctx->pc == 0x2D8D08u) {
        ctx->pc = 0x2D8D0Cu;
        goto label_2d8d0c;
    }
    ctx->pc = 0x2D8D04u;
    SET_GPR_U32(ctx, 31, 0x2D8D0Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x2D8D04u, 0x2D8D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8D0Cu;
label_2d8d0c:
    // 0x2d8d0c: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_2d8d10:
    if (ctx->pc == 0x2D8D10u) {
        ctx->pc = 0x2D8D14u;
        goto label_2d8d14;
    }
    ctx->pc = 0x2D8D0Cu;
    {
        const bool branch_taken_0x2d8d0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8d0c) {
            ctx->pc = 0x2D8CC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d8cc8;
        }
    }
    ctx->pc = 0x2D8D14u;
label_2d8d14:
    // 0x2d8d14: 0x200f809  jalr        $s0
label_2d8d18:
    if (ctx->pc == 0x2D8D18u) {
        ctx->pc = 0x2D8D1Cu;
        goto label_2d8d1c;
    }
    ctx->pc = 0x2D8D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x2D8D1Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8D14u, 0x2D8D1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D8D1Cu;
label_2d8d1c:
    // 0x2d8d1c: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_2d8d20:
    if (ctx->pc == 0x2D8D20u) {
        ctx->pc = 0x2D8D24u;
        goto label_2d8d24;
    }
    ctx->pc = 0x2D8D1Cu;
    {
        const bool branch_taken_0x2d8d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8d1c) {
            ctx->pc = 0x2D8CC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d8cc8;
        }
    }
    ctx->pc = 0x2D8D24u;
label_2d8d24:
    // 0x2d8d24: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d8d24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d8d28:
    // 0x2d8d28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d8d28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d8d2c:
    // 0x2d8d2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d8d2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2d8d30:
    // 0x2d8d30: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2d8d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2d8d34:
    // 0x2d8d34: 0x3e00008  jr          $ra
label_2d8d38:
    if (ctx->pc == 0x2D8D38u) {
        ctx->pc = 0x2D8D3Cu;
        goto label_2d8d3c;
    }
    ctx->pc = 0x2D8D34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8D34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D8D3Cu;
label_2d8d3c:
    // 0x2d8d3c: 0x0  nop
    ctx->pc = 0x2d8d3cu;
    // NOP
    ctx->pc = 0x2d8d40u;
}
