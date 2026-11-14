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

// Function: sub_001F0AF0
// Address: 0x1f0af0 - 0x1f0b90
void sub_001F0AF0_0x1f0af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F0AF0_0x1f0af0");
#endif

    switch (ctx->pc) {
        case 0x1f0af0u: goto label_1f0af0;
        case 0x1f0af4u: goto label_1f0af4;
        case 0x1f0af8u: goto label_1f0af8;
        case 0x1f0afcu: goto label_1f0afc;
        case 0x1f0b00u: goto label_1f0b00;
        case 0x1f0b04u: goto label_1f0b04;
        case 0x1f0b08u: goto label_1f0b08;
        case 0x1f0b0cu: goto label_1f0b0c;
        case 0x1f0b10u: goto label_1f0b10;
        case 0x1f0b14u: goto label_1f0b14;
        case 0x1f0b18u: goto label_1f0b18;
        case 0x1f0b1cu: goto label_1f0b1c;
        case 0x1f0b20u: goto label_1f0b20;
        case 0x1f0b24u: goto label_1f0b24;
        case 0x1f0b28u: goto label_1f0b28;
        case 0x1f0b2cu: goto label_1f0b2c;
        case 0x1f0b30u: goto label_1f0b30;
        case 0x1f0b34u: goto label_1f0b34;
        case 0x1f0b38u: goto label_1f0b38;
        case 0x1f0b3cu: goto label_1f0b3c;
        case 0x1f0b40u: goto label_1f0b40;
        case 0x1f0b44u: goto label_1f0b44;
        case 0x1f0b48u: goto label_1f0b48;
        case 0x1f0b4cu: goto label_1f0b4c;
        case 0x1f0b50u: goto label_1f0b50;
        case 0x1f0b54u: goto label_1f0b54;
        case 0x1f0b58u: goto label_1f0b58;
        case 0x1f0b5cu: goto label_1f0b5c;
        case 0x1f0b60u: goto label_1f0b60;
        case 0x1f0b64u: goto label_1f0b64;
        case 0x1f0b68u: goto label_1f0b68;
        case 0x1f0b6cu: goto label_1f0b6c;
        case 0x1f0b70u: goto label_1f0b70;
        case 0x1f0b74u: goto label_1f0b74;
        case 0x1f0b78u: goto label_1f0b78;
        case 0x1f0b7cu: goto label_1f0b7c;
        case 0x1f0b80u: goto label_1f0b80;
        case 0x1f0b84u: goto label_1f0b84;
        case 0x1f0b88u: goto label_1f0b88;
        case 0x1f0b8cu: goto label_1f0b8c;
        default: break;
    }

    ctx->pc = 0x1f0af0u;

label_1f0af0:
    // 0x1f0af0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f0af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1f0af4:
    // 0x1f0af4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f0af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1f0af8:
    // 0x1f0af8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f0af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f0afc:
    // 0x1f0afc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f0afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f0b00:
    // 0x1f0b00: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1f0b00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_1f0b04:
    // 0x1f0b04: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1f0b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1f0b08:
    // 0x1f0b08: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1f0b0c:
    if (ctx->pc == 0x1F0B0Cu) {
        ctx->pc = 0x1F0B10u;
        goto label_1f0b10;
    }
    ctx->pc = 0x1F0B08u;
    {
        const bool branch_taken_0x1f0b08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0b08) {
            ctx->pc = 0x1F0B18u;
            goto label_1f0b18;
        }
    }
    ctx->pc = 0x1F0B10u;
label_1f0b10:
    // 0x1f0b10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f0b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f0b14:
    // 0x1f0b14: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1f0b14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_1f0b18:
    // 0x1f0b18: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1f0b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1f0b1c:
    // 0x1f0b1c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1f0b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f0b20:
    // 0x1f0b20: 0xc119b68  jal         func_466DA0
label_1f0b24:
    if (ctx->pc == 0x1F0B24u) {
        ctx->pc = 0x1F0B28u;
        goto label_1f0b28;
    }
    ctx->pc = 0x1F0B20u;
    SET_GPR_U32(ctx, 31, 0x1F0B28u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x1F0B20u, 0x1F0B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0B28u;
label_1f0b28:
    // 0x1f0b28: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f0b28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f0b2c:
    // 0x1f0b2c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_1f0b30:
    if (ctx->pc == 0x1F0B30u) {
        ctx->pc = 0x1F0B34u;
        goto label_1f0b34;
    }
    ctx->pc = 0x1F0B2Cu;
    {
        const bool branch_taken_0x1f0b2c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0b2c) {
            ctx->pc = 0x1F0B40u;
            goto label_1f0b40;
        }
    }
    ctx->pc = 0x1F0B34u;
label_1f0b34:
    // 0x1f0b34: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1f0b34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f0b38:
    // 0x1f0b38: 0x1000000e  b           . + 4 + (0xE << 2)
label_1f0b3c:
    if (ctx->pc == 0x1F0B3Cu) {
        ctx->pc = 0x1F0B40u;
        goto label_1f0b40;
    }
    ctx->pc = 0x1F0B38u;
    {
        const bool branch_taken_0x1f0b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0b38) {
            ctx->pc = 0x1F0B74u;
            goto label_1f0b74;
        }
    }
    ctx->pc = 0x1F0B40u;
label_1f0b40:
    // 0x1f0b40: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f0b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f0b44:
    // 0x1f0b44: 0xc0ba088  jal         func_2E8220
label_1f0b48:
    if (ctx->pc == 0x1F0B48u) {
        ctx->pc = 0x1F0B4Cu;
        goto label_1f0b4c;
    }
    ctx->pc = 0x1F0B44u;
    SET_GPR_U32(ctx, 31, 0x1F0B4Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x1F0B44u, 0x1F0B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0B4Cu;
label_1f0b4c:
    // 0x1f0b4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f0b4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f0b50:
    // 0x1f0b50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f0b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f0b54:
    // 0x1f0b54: 0xc0ba088  jal         func_2E8220
label_1f0b58:
    if (ctx->pc == 0x1F0B58u) {
        ctx->pc = 0x1F0B5Cu;
        goto label_1f0b5c;
    }
    ctx->pc = 0x1F0B54u;
    SET_GPR_U32(ctx, 31, 0x1F0B5Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x1F0B54u, 0x1F0B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0B5Cu;
label_1f0b5c:
    // 0x1f0b5c: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_1f0b60:
    if (ctx->pc == 0x1F0B60u) {
        ctx->pc = 0x1F0B64u;
        goto label_1f0b64;
    }
    ctx->pc = 0x1F0B5Cu;
    {
        const bool branch_taken_0x1f0b5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0b5c) {
            ctx->pc = 0x1F0B18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f0b18;
        }
    }
    ctx->pc = 0x1F0B64u;
label_1f0b64:
    // 0x1f0b64: 0x200f809  jalr        $s0
label_1f0b68:
    if (ctx->pc == 0x1F0B68u) {
        ctx->pc = 0x1F0B6Cu;
        goto label_1f0b6c;
    }
    ctx->pc = 0x1F0B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x1F0B6Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0B64u, 0x1F0B6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F0B6Cu;
label_1f0b6c:
    // 0x1f0b6c: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_1f0b70:
    if (ctx->pc == 0x1F0B70u) {
        ctx->pc = 0x1F0B74u;
        goto label_1f0b74;
    }
    ctx->pc = 0x1F0B6Cu;
    {
        const bool branch_taken_0x1f0b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0b6c) {
            ctx->pc = 0x1F0B18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f0b18;
        }
    }
    ctx->pc = 0x1F0B74u;
label_1f0b74:
    // 0x1f0b74: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f0b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1f0b78:
    // 0x1f0b78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f0b78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f0b7c:
    // 0x1f0b7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f0b7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f0b80:
    // 0x1f0b80: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1f0b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1f0b84:
    // 0x1f0b84: 0x3e00008  jr          $ra
label_1f0b88:
    if (ctx->pc == 0x1F0B88u) {
        ctx->pc = 0x1F0B8Cu;
        goto label_1f0b8c;
    }
    ctx->pc = 0x1F0B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0B84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0B8Cu;
label_1f0b8c:
    // 0x1f0b8c: 0x0  nop
    ctx->pc = 0x1f0b8cu;
    // NOP
    ctx->pc = 0x1f0b90u;
}
