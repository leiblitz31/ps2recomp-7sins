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

// Function: sub_00162D40
// Address: 0x162d40 - 0x162de0
void sub_00162D40_0x162d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00162D40_0x162d40");
#endif

    switch (ctx->pc) {
        case 0x162d40u: goto label_162d40;
        case 0x162d44u: goto label_162d44;
        case 0x162d48u: goto label_162d48;
        case 0x162d4cu: goto label_162d4c;
        case 0x162d50u: goto label_162d50;
        case 0x162d54u: goto label_162d54;
        case 0x162d58u: goto label_162d58;
        case 0x162d5cu: goto label_162d5c;
        case 0x162d60u: goto label_162d60;
        case 0x162d64u: goto label_162d64;
        case 0x162d68u: goto label_162d68;
        case 0x162d6cu: goto label_162d6c;
        case 0x162d70u: goto label_162d70;
        case 0x162d74u: goto label_162d74;
        case 0x162d78u: goto label_162d78;
        case 0x162d7cu: goto label_162d7c;
        case 0x162d80u: goto label_162d80;
        case 0x162d84u: goto label_162d84;
        case 0x162d88u: goto label_162d88;
        case 0x162d8cu: goto label_162d8c;
        case 0x162d90u: goto label_162d90;
        case 0x162d94u: goto label_162d94;
        case 0x162d98u: goto label_162d98;
        case 0x162d9cu: goto label_162d9c;
        case 0x162da0u: goto label_162da0;
        case 0x162da4u: goto label_162da4;
        case 0x162da8u: goto label_162da8;
        case 0x162dacu: goto label_162dac;
        case 0x162db0u: goto label_162db0;
        case 0x162db4u: goto label_162db4;
        case 0x162db8u: goto label_162db8;
        case 0x162dbcu: goto label_162dbc;
        case 0x162dc0u: goto label_162dc0;
        case 0x162dc4u: goto label_162dc4;
        case 0x162dc8u: goto label_162dc8;
        case 0x162dccu: goto label_162dcc;
        case 0x162dd0u: goto label_162dd0;
        case 0x162dd4u: goto label_162dd4;
        case 0x162dd8u: goto label_162dd8;
        case 0x162ddcu: goto label_162ddc;
        default: break;
    }

    ctx->pc = 0x162d40u;

label_162d40:
    // 0x162d40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x162d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_162d44:
    // 0x162d44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x162d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_162d48:
    // 0x162d48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x162d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_162d4c:
    // 0x162d4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x162d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_162d50:
    // 0x162d50: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x162d50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_162d54:
    // 0x162d54: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x162d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_162d58:
    // 0x162d58: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_162d5c:
    if (ctx->pc == 0x162D5Cu) {
        ctx->pc = 0x162D60u;
        goto label_162d60;
    }
    ctx->pc = 0x162D58u;
    {
        const bool branch_taken_0x162d58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x162d58) {
            ctx->pc = 0x162D68u;
            goto label_162d68;
        }
    }
    ctx->pc = 0x162D60u;
label_162d60:
    // 0x162d60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x162d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_162d64:
    // 0x162d64: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x162d64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_162d68:
    // 0x162d68: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x162d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_162d6c:
    // 0x162d6c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x162d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_162d70:
    // 0x162d70: 0xc119b68  jal         func_466DA0
label_162d74:
    if (ctx->pc == 0x162D74u) {
        ctx->pc = 0x162D78u;
        goto label_162d78;
    }
    ctx->pc = 0x162D70u;
    SET_GPR_U32(ctx, 31, 0x162D78u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x162D70u, 0x162D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162D78u;
label_162d78:
    // 0x162d78: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x162d78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_162d7c:
    // 0x162d7c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_162d80:
    if (ctx->pc == 0x162D80u) {
        ctx->pc = 0x162D84u;
        goto label_162d84;
    }
    ctx->pc = 0x162D7Cu;
    {
        const bool branch_taken_0x162d7c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x162d7c) {
            ctx->pc = 0x162D90u;
            goto label_162d90;
        }
    }
    ctx->pc = 0x162D84u;
label_162d84:
    // 0x162d84: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x162d84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_162d88:
    // 0x162d88: 0x1000000e  b           . + 4 + (0xE << 2)
label_162d8c:
    if (ctx->pc == 0x162D8Cu) {
        ctx->pc = 0x162D90u;
        goto label_162d90;
    }
    ctx->pc = 0x162D88u;
    {
        const bool branch_taken_0x162d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162d88) {
            ctx->pc = 0x162DC4u;
            goto label_162dc4;
        }
    }
    ctx->pc = 0x162D90u;
label_162d90:
    // 0x162d90: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x162d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_162d94:
    // 0x162d94: 0xc0ba088  jal         func_2E8220
label_162d98:
    if (ctx->pc == 0x162D98u) {
        ctx->pc = 0x162D9Cu;
        goto label_162d9c;
    }
    ctx->pc = 0x162D94u;
    SET_GPR_U32(ctx, 31, 0x162D9Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x162D94u, 0x162D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162D9Cu;
label_162d9c:
    // 0x162d9c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x162d9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_162da0:
    // 0x162da0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x162da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_162da4:
    // 0x162da4: 0xc0ba088  jal         func_2E8220
label_162da8:
    if (ctx->pc == 0x162DA8u) {
        ctx->pc = 0x162DACu;
        goto label_162dac;
    }
    ctx->pc = 0x162DA4u;
    SET_GPR_U32(ctx, 31, 0x162DACu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x162DA4u, 0x162DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162DACu;
label_162dac:
    // 0x162dac: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_162db0:
    if (ctx->pc == 0x162DB0u) {
        ctx->pc = 0x162DB4u;
        goto label_162db4;
    }
    ctx->pc = 0x162DACu;
    {
        const bool branch_taken_0x162dac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x162dac) {
            ctx->pc = 0x162D68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_162d68;
        }
    }
    ctx->pc = 0x162DB4u;
label_162db4:
    // 0x162db4: 0x200f809  jalr        $s0
label_162db8:
    if (ctx->pc == 0x162DB8u) {
        ctx->pc = 0x162DBCu;
        goto label_162dbc;
    }
    ctx->pc = 0x162DB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x162DBCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162DB4u, 0x162DBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x162DBCu;
label_162dbc:
    // 0x162dbc: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_162dc0:
    if (ctx->pc == 0x162DC0u) {
        ctx->pc = 0x162DC4u;
        goto label_162dc4;
    }
    ctx->pc = 0x162DBCu;
    {
        const bool branch_taken_0x162dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162dbc) {
            ctx->pc = 0x162D68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_162d68;
        }
    }
    ctx->pc = 0x162DC4u;
label_162dc4:
    // 0x162dc4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x162dc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_162dc8:
    // 0x162dc8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x162dc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_162dcc:
    // 0x162dcc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x162dccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_162dd0:
    // 0x162dd0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x162dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_162dd4:
    // 0x162dd4: 0x3e00008  jr          $ra
label_162dd8:
    if (ctx->pc == 0x162DD8u) {
        ctx->pc = 0x162DDCu;
        goto label_162ddc;
    }
    ctx->pc = 0x162DD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162DD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x162DDCu;
label_162ddc:
    // 0x162ddc: 0x0  nop
    ctx->pc = 0x162ddcu;
    // NOP
    ctx->pc = 0x162de0u;
}
