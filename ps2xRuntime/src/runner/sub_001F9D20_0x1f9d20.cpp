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

// Function: sub_001F9D20
// Address: 0x1f9d20 - 0x1f9dd0
void sub_001F9D20_0x1f9d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9D20_0x1f9d20");
#endif

    switch (ctx->pc) {
        case 0x1f9d20u: goto label_1f9d20;
        case 0x1f9d24u: goto label_1f9d24;
        case 0x1f9d28u: goto label_1f9d28;
        case 0x1f9d2cu: goto label_1f9d2c;
        case 0x1f9d30u: goto label_1f9d30;
        case 0x1f9d34u: goto label_1f9d34;
        case 0x1f9d38u: goto label_1f9d38;
        case 0x1f9d3cu: goto label_1f9d3c;
        case 0x1f9d40u: goto label_1f9d40;
        case 0x1f9d44u: goto label_1f9d44;
        case 0x1f9d48u: goto label_1f9d48;
        case 0x1f9d4cu: goto label_1f9d4c;
        case 0x1f9d50u: goto label_1f9d50;
        case 0x1f9d54u: goto label_1f9d54;
        case 0x1f9d58u: goto label_1f9d58;
        case 0x1f9d5cu: goto label_1f9d5c;
        case 0x1f9d60u: goto label_1f9d60;
        case 0x1f9d64u: goto label_1f9d64;
        case 0x1f9d68u: goto label_1f9d68;
        case 0x1f9d6cu: goto label_1f9d6c;
        case 0x1f9d70u: goto label_1f9d70;
        case 0x1f9d74u: goto label_1f9d74;
        case 0x1f9d78u: goto label_1f9d78;
        case 0x1f9d7cu: goto label_1f9d7c;
        case 0x1f9d80u: goto label_1f9d80;
        case 0x1f9d84u: goto label_1f9d84;
        case 0x1f9d88u: goto label_1f9d88;
        case 0x1f9d8cu: goto label_1f9d8c;
        case 0x1f9d90u: goto label_1f9d90;
        case 0x1f9d94u: goto label_1f9d94;
        case 0x1f9d98u: goto label_1f9d98;
        case 0x1f9d9cu: goto label_1f9d9c;
        case 0x1f9da0u: goto label_1f9da0;
        case 0x1f9da4u: goto label_1f9da4;
        case 0x1f9da8u: goto label_1f9da8;
        case 0x1f9dacu: goto label_1f9dac;
        case 0x1f9db0u: goto label_1f9db0;
        case 0x1f9db4u: goto label_1f9db4;
        case 0x1f9db8u: goto label_1f9db8;
        case 0x1f9dbcu: goto label_1f9dbc;
        case 0x1f9dc0u: goto label_1f9dc0;
        case 0x1f9dc4u: goto label_1f9dc4;
        case 0x1f9dc8u: goto label_1f9dc8;
        case 0x1f9dccu: goto label_1f9dcc;
        default: break;
    }

    ctx->pc = 0x1f9d20u;

label_1f9d20:
    // 0x1f9d20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f9d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1f9d24:
    // 0x1f9d24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f9d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1f9d28:
    // 0x1f9d28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f9d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f9d2c:
    // 0x1f9d2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f9d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f9d30:
    // 0x1f9d30: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1f9d30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_1f9d34:
    // 0x1f9d34: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1f9d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1f9d38:
    // 0x1f9d38: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1f9d3c:
    if (ctx->pc == 0x1F9D3Cu) {
        ctx->pc = 0x1F9D40u;
        goto label_1f9d40;
    }
    ctx->pc = 0x1F9D38u;
    {
        const bool branch_taken_0x1f9d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f9d38) {
            ctx->pc = 0x1F9D48u;
            goto label_1f9d48;
        }
    }
    ctx->pc = 0x1F9D40u;
label_1f9d40:
    // 0x1f9d40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f9d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f9d44:
    // 0x1f9d44: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1f9d44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_1f9d48:
    // 0x1f9d48: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1f9d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1f9d4c:
    // 0x1f9d4c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1f9d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1f9d50:
    // 0x1f9d50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f9d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f9d54:
    // 0x1f9d54: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1f9d54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f9d58:
    // 0x1f9d58: 0xc119b68  jal         func_466DA0
label_1f9d5c:
    if (ctx->pc == 0x1F9D5Cu) {
        ctx->pc = 0x1F9D60u;
        goto label_1f9d60;
    }
    ctx->pc = 0x1F9D58u;
    SET_GPR_U32(ctx, 31, 0x1F9D60u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x1F9D58u, 0x1F9D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9D60u;
label_1f9d60:
    // 0x1f9d60: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f9d60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f9d64:
    // 0x1f9d64: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_1f9d68:
    if (ctx->pc == 0x1F9D68u) {
        ctx->pc = 0x1F9D6Cu;
        goto label_1f9d6c;
    }
    ctx->pc = 0x1F9D64u;
    {
        const bool branch_taken_0x1f9d64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9d64) {
            ctx->pc = 0x1F9D78u;
            goto label_1f9d78;
        }
    }
    ctx->pc = 0x1F9D6Cu;
label_1f9d6c:
    // 0x1f9d6c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1f9d6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f9d70:
    // 0x1f9d70: 0x1000000e  b           . + 4 + (0xE << 2)
label_1f9d74:
    if (ctx->pc == 0x1F9D74u) {
        ctx->pc = 0x1F9D78u;
        goto label_1f9d78;
    }
    ctx->pc = 0x1F9D70u;
    {
        const bool branch_taken_0x1f9d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9d70) {
            ctx->pc = 0x1F9DACu;
            goto label_1f9dac;
        }
    }
    ctx->pc = 0x1F9D78u;
label_1f9d78:
    // 0x1f9d78: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f9d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f9d7c:
    // 0x1f9d7c: 0xc0ba088  jal         func_2E8220
label_1f9d80:
    if (ctx->pc == 0x1F9D80u) {
        ctx->pc = 0x1F9D84u;
        goto label_1f9d84;
    }
    ctx->pc = 0x1F9D7Cu;
    SET_GPR_U32(ctx, 31, 0x1F9D84u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x1F9D7Cu, 0x1F9D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9D84u;
label_1f9d84:
    // 0x1f9d84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f9d84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f9d88:
    // 0x1f9d88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f9d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f9d8c:
    // 0x1f9d8c: 0xc0ba088  jal         func_2E8220
label_1f9d90:
    if (ctx->pc == 0x1F9D90u) {
        ctx->pc = 0x1F9D94u;
        goto label_1f9d94;
    }
    ctx->pc = 0x1F9D8Cu;
    SET_GPR_U32(ctx, 31, 0x1F9D94u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x1F9D8Cu, 0x1F9D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9D94u;
label_1f9d94:
    // 0x1f9d94: 0x1200ffec  beqz        $s0, . + 4 + (-0x14 << 2)
label_1f9d98:
    if (ctx->pc == 0x1F9D98u) {
        ctx->pc = 0x1F9D9Cu;
        goto label_1f9d9c;
    }
    ctx->pc = 0x1F9D94u;
    {
        const bool branch_taken_0x1f9d94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9d94) {
            ctx->pc = 0x1F9D48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f9d48;
        }
    }
    ctx->pc = 0x1F9D9Cu;
label_1f9d9c:
    // 0x1f9d9c: 0x200f809  jalr        $s0
label_1f9da0:
    if (ctx->pc == 0x1F9DA0u) {
        ctx->pc = 0x1F9DA4u;
        goto label_1f9da4;
    }
    ctx->pc = 0x1F9D9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x1F9DA4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9D9Cu, 0x1F9DA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F9DA4u;
label_1f9da4:
    // 0x1f9da4: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_1f9da8:
    if (ctx->pc == 0x1F9DA8u) {
        ctx->pc = 0x1F9DACu;
        goto label_1f9dac;
    }
    ctx->pc = 0x1F9DA4u;
    {
        const bool branch_taken_0x1f9da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9da4) {
            ctx->pc = 0x1F9D48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f9d48;
        }
    }
    ctx->pc = 0x1F9DACu;
label_1f9dac:
    // 0x1f9dac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f9dacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1f9db0:
    // 0x1f9db0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f9db0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f9db4:
    // 0x1f9db4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f9db4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f9db8:
    // 0x1f9db8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1f9db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1f9dbc:
    // 0x1f9dbc: 0x3e00008  jr          $ra
label_1f9dc0:
    if (ctx->pc == 0x1F9DC0u) {
        ctx->pc = 0x1F9DC4u;
        goto label_1f9dc4;
    }
    ctx->pc = 0x1F9DBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9DBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9DC4u;
label_1f9dc4:
    // 0x1f9dc4: 0x0  nop
    ctx->pc = 0x1f9dc4u;
    // NOP
label_1f9dc8:
    // 0x1f9dc8: 0x0  nop
    ctx->pc = 0x1f9dc8u;
    // NOP
label_1f9dcc:
    // 0x1f9dcc: 0x0  nop
    ctx->pc = 0x1f9dccu;
    // NOP
    ctx->pc = 0x1f9dd0u;
}
