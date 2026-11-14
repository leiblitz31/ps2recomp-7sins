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

// Function: sub_001B8D30
// Address: 0x1b8d30 - 0x1b8dd0
void sub_001B8D30_0x1b8d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8D30_0x1b8d30");
#endif

    switch (ctx->pc) {
        case 0x1b8d30u: goto label_1b8d30;
        case 0x1b8d34u: goto label_1b8d34;
        case 0x1b8d38u: goto label_1b8d38;
        case 0x1b8d3cu: goto label_1b8d3c;
        case 0x1b8d40u: goto label_1b8d40;
        case 0x1b8d44u: goto label_1b8d44;
        case 0x1b8d48u: goto label_1b8d48;
        case 0x1b8d4cu: goto label_1b8d4c;
        case 0x1b8d50u: goto label_1b8d50;
        case 0x1b8d54u: goto label_1b8d54;
        case 0x1b8d58u: goto label_1b8d58;
        case 0x1b8d5cu: goto label_1b8d5c;
        case 0x1b8d60u: goto label_1b8d60;
        case 0x1b8d64u: goto label_1b8d64;
        case 0x1b8d68u: goto label_1b8d68;
        case 0x1b8d6cu: goto label_1b8d6c;
        case 0x1b8d70u: goto label_1b8d70;
        case 0x1b8d74u: goto label_1b8d74;
        case 0x1b8d78u: goto label_1b8d78;
        case 0x1b8d7cu: goto label_1b8d7c;
        case 0x1b8d80u: goto label_1b8d80;
        case 0x1b8d84u: goto label_1b8d84;
        case 0x1b8d88u: goto label_1b8d88;
        case 0x1b8d8cu: goto label_1b8d8c;
        case 0x1b8d90u: goto label_1b8d90;
        case 0x1b8d94u: goto label_1b8d94;
        case 0x1b8d98u: goto label_1b8d98;
        case 0x1b8d9cu: goto label_1b8d9c;
        case 0x1b8da0u: goto label_1b8da0;
        case 0x1b8da4u: goto label_1b8da4;
        case 0x1b8da8u: goto label_1b8da8;
        case 0x1b8dacu: goto label_1b8dac;
        case 0x1b8db0u: goto label_1b8db0;
        case 0x1b8db4u: goto label_1b8db4;
        case 0x1b8db8u: goto label_1b8db8;
        case 0x1b8dbcu: goto label_1b8dbc;
        case 0x1b8dc0u: goto label_1b8dc0;
        case 0x1b8dc4u: goto label_1b8dc4;
        case 0x1b8dc8u: goto label_1b8dc8;
        case 0x1b8dccu: goto label_1b8dcc;
        default: break;
    }

    ctx->pc = 0x1b8d30u;

label_1b8d30:
    // 0x1b8d30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1b8d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1b8d34:
    // 0x1b8d34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b8d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1b8d38:
    // 0x1b8d38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b8d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b8d3c:
    // 0x1b8d3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b8d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1b8d40:
    // 0x1b8d40: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1b8d40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_1b8d44:
    // 0x1b8d44: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b8d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1b8d48:
    // 0x1b8d48: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1b8d4c:
    if (ctx->pc == 0x1B8D4Cu) {
        ctx->pc = 0x1B8D50u;
        goto label_1b8d50;
    }
    ctx->pc = 0x1B8D48u;
    {
        const bool branch_taken_0x1b8d48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b8d48) {
            ctx->pc = 0x1B8D58u;
            goto label_1b8d58;
        }
    }
    ctx->pc = 0x1B8D50u;
label_1b8d50:
    // 0x1b8d50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b8d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b8d54:
    // 0x1b8d54: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1b8d54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_1b8d58:
    // 0x1b8d58: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b8d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1b8d5c:
    // 0x1b8d5c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1b8d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1b8d60:
    // 0x1b8d60: 0xc119b68  jal         func_466DA0
label_1b8d64:
    if (ctx->pc == 0x1B8D64u) {
        ctx->pc = 0x1B8D68u;
        goto label_1b8d68;
    }
    ctx->pc = 0x1B8D60u;
    SET_GPR_U32(ctx, 31, 0x1B8D68u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x1B8D60u, 0x1B8D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8D68u;
label_1b8d68:
    // 0x1b8d68: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b8d68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b8d6c:
    // 0x1b8d6c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_1b8d70:
    if (ctx->pc == 0x1B8D70u) {
        ctx->pc = 0x1B8D74u;
        goto label_1b8d74;
    }
    ctx->pc = 0x1B8D6Cu;
    {
        const bool branch_taken_0x1b8d6c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8d6c) {
            ctx->pc = 0x1B8D80u;
            goto label_1b8d80;
        }
    }
    ctx->pc = 0x1B8D74u;
label_1b8d74:
    // 0x1b8d74: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1b8d74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b8d78:
    // 0x1b8d78: 0x1000000e  b           . + 4 + (0xE << 2)
label_1b8d7c:
    if (ctx->pc == 0x1B8D7Cu) {
        ctx->pc = 0x1B8D80u;
        goto label_1b8d80;
    }
    ctx->pc = 0x1B8D78u;
    {
        const bool branch_taken_0x1b8d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8d78) {
            ctx->pc = 0x1B8DB4u;
            goto label_1b8db4;
        }
    }
    ctx->pc = 0x1B8D80u;
label_1b8d80:
    // 0x1b8d80: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b8d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8d84:
    // 0x1b8d84: 0xc0ba088  jal         func_2E8220
label_1b8d88:
    if (ctx->pc == 0x1B8D88u) {
        ctx->pc = 0x1B8D8Cu;
        goto label_1b8d8c;
    }
    ctx->pc = 0x1B8D84u;
    SET_GPR_U32(ctx, 31, 0x1B8D8Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x1B8D84u, 0x1B8D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8D8Cu;
label_1b8d8c:
    // 0x1b8d8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b8d8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b8d90:
    // 0x1b8d90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b8d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b8d94:
    // 0x1b8d94: 0xc0ba088  jal         func_2E8220
label_1b8d98:
    if (ctx->pc == 0x1B8D98u) {
        ctx->pc = 0x1B8D9Cu;
        goto label_1b8d9c;
    }
    ctx->pc = 0x1B8D94u;
    SET_GPR_U32(ctx, 31, 0x1B8D9Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x1B8D94u, 0x1B8D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8D9Cu;
label_1b8d9c:
    // 0x1b8d9c: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_1b8da0:
    if (ctx->pc == 0x1B8DA0u) {
        ctx->pc = 0x1B8DA4u;
        goto label_1b8da4;
    }
    ctx->pc = 0x1B8D9Cu;
    {
        const bool branch_taken_0x1b8d9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8d9c) {
            ctx->pc = 0x1B8D58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b8d58;
        }
    }
    ctx->pc = 0x1B8DA4u;
label_1b8da4:
    // 0x1b8da4: 0x200f809  jalr        $s0
label_1b8da8:
    if (ctx->pc == 0x1B8DA8u) {
        ctx->pc = 0x1B8DACu;
        goto label_1b8dac;
    }
    ctx->pc = 0x1B8DA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x1B8DACu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8DA4u, 0x1B8DACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B8DACu;
label_1b8dac:
    // 0x1b8dac: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_1b8db0:
    if (ctx->pc == 0x1B8DB0u) {
        ctx->pc = 0x1B8DB4u;
        goto label_1b8db4;
    }
    ctx->pc = 0x1B8DACu;
    {
        const bool branch_taken_0x1b8dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8dac) {
            ctx->pc = 0x1B8D58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b8d58;
        }
    }
    ctx->pc = 0x1B8DB4u;
label_1b8db4:
    // 0x1b8db4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b8db4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b8db8:
    // 0x1b8db8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b8db8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b8dbc:
    // 0x1b8dbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b8dbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b8dc0:
    // 0x1b8dc0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1b8dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1b8dc4:
    // 0x1b8dc4: 0x3e00008  jr          $ra
label_1b8dc8:
    if (ctx->pc == 0x1B8DC8u) {
        ctx->pc = 0x1B8DCCu;
        goto label_1b8dcc;
    }
    ctx->pc = 0x1B8DC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8DC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B8DCCu;
label_1b8dcc:
    // 0x1b8dcc: 0x0  nop
    ctx->pc = 0x1b8dccu;
    // NOP
    ctx->pc = 0x1b8dd0u;
}
