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

// Function: sub_001E9CF0
// Address: 0x1e9cf0 - 0x1e9da0
void sub_001E9CF0_0x1e9cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E9CF0_0x1e9cf0");
#endif

    switch (ctx->pc) {
        case 0x1e9cf0u: goto label_1e9cf0;
        case 0x1e9cf4u: goto label_1e9cf4;
        case 0x1e9cf8u: goto label_1e9cf8;
        case 0x1e9cfcu: goto label_1e9cfc;
        case 0x1e9d00u: goto label_1e9d00;
        case 0x1e9d04u: goto label_1e9d04;
        case 0x1e9d08u: goto label_1e9d08;
        case 0x1e9d0cu: goto label_1e9d0c;
        case 0x1e9d10u: goto label_1e9d10;
        case 0x1e9d14u: goto label_1e9d14;
        case 0x1e9d18u: goto label_1e9d18;
        case 0x1e9d1cu: goto label_1e9d1c;
        case 0x1e9d20u: goto label_1e9d20;
        case 0x1e9d24u: goto label_1e9d24;
        case 0x1e9d28u: goto label_1e9d28;
        case 0x1e9d2cu: goto label_1e9d2c;
        case 0x1e9d30u: goto label_1e9d30;
        case 0x1e9d34u: goto label_1e9d34;
        case 0x1e9d38u: goto label_1e9d38;
        case 0x1e9d3cu: goto label_1e9d3c;
        case 0x1e9d40u: goto label_1e9d40;
        case 0x1e9d44u: goto label_1e9d44;
        case 0x1e9d48u: goto label_1e9d48;
        case 0x1e9d4cu: goto label_1e9d4c;
        case 0x1e9d50u: goto label_1e9d50;
        case 0x1e9d54u: goto label_1e9d54;
        case 0x1e9d58u: goto label_1e9d58;
        case 0x1e9d5cu: goto label_1e9d5c;
        case 0x1e9d60u: goto label_1e9d60;
        case 0x1e9d64u: goto label_1e9d64;
        case 0x1e9d68u: goto label_1e9d68;
        case 0x1e9d6cu: goto label_1e9d6c;
        case 0x1e9d70u: goto label_1e9d70;
        case 0x1e9d74u: goto label_1e9d74;
        case 0x1e9d78u: goto label_1e9d78;
        case 0x1e9d7cu: goto label_1e9d7c;
        case 0x1e9d80u: goto label_1e9d80;
        case 0x1e9d84u: goto label_1e9d84;
        case 0x1e9d88u: goto label_1e9d88;
        case 0x1e9d8cu: goto label_1e9d8c;
        case 0x1e9d90u: goto label_1e9d90;
        case 0x1e9d94u: goto label_1e9d94;
        case 0x1e9d98u: goto label_1e9d98;
        case 0x1e9d9cu: goto label_1e9d9c;
        default: break;
    }

    ctx->pc = 0x1e9cf0u;

label_1e9cf0:
    // 0x1e9cf0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e9cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1e9cf4:
    // 0x1e9cf4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e9cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1e9cf8:
    // 0x1e9cf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e9cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e9cfc:
    // 0x1e9cfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e9cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e9d00:
    // 0x1e9d00: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1e9d00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_1e9d04:
    // 0x1e9d04: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1e9d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1e9d08:
    // 0x1e9d08: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1e9d0c:
    if (ctx->pc == 0x1E9D0Cu) {
        ctx->pc = 0x1E9D10u;
        goto label_1e9d10;
    }
    ctx->pc = 0x1E9D08u;
    {
        const bool branch_taken_0x1e9d08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9d08) {
            ctx->pc = 0x1E9D18u;
            goto label_1e9d18;
        }
    }
    ctx->pc = 0x1E9D10u;
label_1e9d10:
    // 0x1e9d10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e9d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e9d14:
    // 0x1e9d14: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1e9d14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_1e9d18:
    // 0x1e9d18: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1e9d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1e9d1c:
    // 0x1e9d1c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1e9d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1e9d20:
    // 0x1e9d20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e9d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e9d24:
    // 0x1e9d24: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1e9d24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1e9d28:
    // 0x1e9d28: 0xc119b68  jal         func_466DA0
label_1e9d2c:
    if (ctx->pc == 0x1E9D2Cu) {
        ctx->pc = 0x1E9D30u;
        goto label_1e9d30;
    }
    ctx->pc = 0x1E9D28u;
    SET_GPR_U32(ctx, 31, 0x1E9D30u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x1E9D28u, 0x1E9D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9D30u;
label_1e9d30:
    // 0x1e9d30: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e9d30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e9d34:
    // 0x1e9d34: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_1e9d38:
    if (ctx->pc == 0x1E9D38u) {
        ctx->pc = 0x1E9D3Cu;
        goto label_1e9d3c;
    }
    ctx->pc = 0x1E9D34u;
    {
        const bool branch_taken_0x1e9d34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9d34) {
            ctx->pc = 0x1E9D48u;
            goto label_1e9d48;
        }
    }
    ctx->pc = 0x1E9D3Cu;
label_1e9d3c:
    // 0x1e9d3c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1e9d3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e9d40:
    // 0x1e9d40: 0x1000000e  b           . + 4 + (0xE << 2)
label_1e9d44:
    if (ctx->pc == 0x1E9D44u) {
        ctx->pc = 0x1E9D48u;
        goto label_1e9d48;
    }
    ctx->pc = 0x1E9D40u;
    {
        const bool branch_taken_0x1e9d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9d40) {
            ctx->pc = 0x1E9D7Cu;
            goto label_1e9d7c;
        }
    }
    ctx->pc = 0x1E9D48u;
label_1e9d48:
    // 0x1e9d48: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e9d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e9d4c:
    // 0x1e9d4c: 0xc0ba088  jal         func_2E8220
label_1e9d50:
    if (ctx->pc == 0x1E9D50u) {
        ctx->pc = 0x1E9D54u;
        goto label_1e9d54;
    }
    ctx->pc = 0x1E9D4Cu;
    SET_GPR_U32(ctx, 31, 0x1E9D54u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x1E9D4Cu, 0x1E9D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9D54u;
label_1e9d54:
    // 0x1e9d54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e9d54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e9d58:
    // 0x1e9d58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e9d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e9d5c:
    // 0x1e9d5c: 0xc0ba088  jal         func_2E8220
label_1e9d60:
    if (ctx->pc == 0x1E9D60u) {
        ctx->pc = 0x1E9D64u;
        goto label_1e9d64;
    }
    ctx->pc = 0x1E9D5Cu;
    SET_GPR_U32(ctx, 31, 0x1E9D64u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x1E9D5Cu, 0x1E9D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9D64u;
label_1e9d64:
    // 0x1e9d64: 0x1200ffec  beqz        $s0, . + 4 + (-0x14 << 2)
label_1e9d68:
    if (ctx->pc == 0x1E9D68u) {
        ctx->pc = 0x1E9D6Cu;
        goto label_1e9d6c;
    }
    ctx->pc = 0x1E9D64u;
    {
        const bool branch_taken_0x1e9d64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9d64) {
            ctx->pc = 0x1E9D18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e9d18;
        }
    }
    ctx->pc = 0x1E9D6Cu;
label_1e9d6c:
    // 0x1e9d6c: 0x200f809  jalr        $s0
label_1e9d70:
    if (ctx->pc == 0x1E9D70u) {
        ctx->pc = 0x1E9D74u;
        goto label_1e9d74;
    }
    ctx->pc = 0x1E9D6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x1E9D74u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9D6Cu, 0x1E9D74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E9D74u;
label_1e9d74:
    // 0x1e9d74: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_1e9d78:
    if (ctx->pc == 0x1E9D78u) {
        ctx->pc = 0x1E9D7Cu;
        goto label_1e9d7c;
    }
    ctx->pc = 0x1E9D74u;
    {
        const bool branch_taken_0x1e9d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9d74) {
            ctx->pc = 0x1E9D18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e9d18;
        }
    }
    ctx->pc = 0x1E9D7Cu;
label_1e9d7c:
    // 0x1e9d7c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e9d7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e9d80:
    // 0x1e9d80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e9d80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e9d84:
    // 0x1e9d84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e9d84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e9d88:
    // 0x1e9d88: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1e9d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1e9d8c:
    // 0x1e9d8c: 0x3e00008  jr          $ra
label_1e9d90:
    if (ctx->pc == 0x1E9D90u) {
        ctx->pc = 0x1E9D94u;
        goto label_1e9d94;
    }
    ctx->pc = 0x1E9D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9D94u;
label_1e9d94:
    // 0x1e9d94: 0x0  nop
    ctx->pc = 0x1e9d94u;
    // NOP
label_1e9d98:
    // 0x1e9d98: 0x0  nop
    ctx->pc = 0x1e9d98u;
    // NOP
label_1e9d9c:
    // 0x1e9d9c: 0x0  nop
    ctx->pc = 0x1e9d9cu;
    // NOP
    ctx->pc = 0x1e9da0u;
}
