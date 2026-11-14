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

// Function: sub_001E9AF0
// Address: 0x1e9af0 - 0x1e9b90
void sub_001E9AF0_0x1e9af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E9AF0_0x1e9af0");
#endif

    switch (ctx->pc) {
        case 0x1e9af0u: goto label_1e9af0;
        case 0x1e9af4u: goto label_1e9af4;
        case 0x1e9af8u: goto label_1e9af8;
        case 0x1e9afcu: goto label_1e9afc;
        case 0x1e9b00u: goto label_1e9b00;
        case 0x1e9b04u: goto label_1e9b04;
        case 0x1e9b08u: goto label_1e9b08;
        case 0x1e9b0cu: goto label_1e9b0c;
        case 0x1e9b10u: goto label_1e9b10;
        case 0x1e9b14u: goto label_1e9b14;
        case 0x1e9b18u: goto label_1e9b18;
        case 0x1e9b1cu: goto label_1e9b1c;
        case 0x1e9b20u: goto label_1e9b20;
        case 0x1e9b24u: goto label_1e9b24;
        case 0x1e9b28u: goto label_1e9b28;
        case 0x1e9b2cu: goto label_1e9b2c;
        case 0x1e9b30u: goto label_1e9b30;
        case 0x1e9b34u: goto label_1e9b34;
        case 0x1e9b38u: goto label_1e9b38;
        case 0x1e9b3cu: goto label_1e9b3c;
        case 0x1e9b40u: goto label_1e9b40;
        case 0x1e9b44u: goto label_1e9b44;
        case 0x1e9b48u: goto label_1e9b48;
        case 0x1e9b4cu: goto label_1e9b4c;
        case 0x1e9b50u: goto label_1e9b50;
        case 0x1e9b54u: goto label_1e9b54;
        case 0x1e9b58u: goto label_1e9b58;
        case 0x1e9b5cu: goto label_1e9b5c;
        case 0x1e9b60u: goto label_1e9b60;
        case 0x1e9b64u: goto label_1e9b64;
        case 0x1e9b68u: goto label_1e9b68;
        case 0x1e9b6cu: goto label_1e9b6c;
        case 0x1e9b70u: goto label_1e9b70;
        case 0x1e9b74u: goto label_1e9b74;
        case 0x1e9b78u: goto label_1e9b78;
        case 0x1e9b7cu: goto label_1e9b7c;
        case 0x1e9b80u: goto label_1e9b80;
        case 0x1e9b84u: goto label_1e9b84;
        case 0x1e9b88u: goto label_1e9b88;
        case 0x1e9b8cu: goto label_1e9b8c;
        default: break;
    }

    ctx->pc = 0x1e9af0u;

label_1e9af0:
    // 0x1e9af0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e9af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1e9af4:
    // 0x1e9af4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e9af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1e9af8:
    // 0x1e9af8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e9af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e9afc:
    // 0x1e9afc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e9afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e9b00:
    // 0x1e9b00: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1e9b00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_1e9b04:
    // 0x1e9b04: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1e9b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1e9b08:
    // 0x1e9b08: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1e9b0c:
    if (ctx->pc == 0x1E9B0Cu) {
        ctx->pc = 0x1E9B10u;
        goto label_1e9b10;
    }
    ctx->pc = 0x1E9B08u;
    {
        const bool branch_taken_0x1e9b08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9b08) {
            ctx->pc = 0x1E9B18u;
            goto label_1e9b18;
        }
    }
    ctx->pc = 0x1E9B10u;
label_1e9b10:
    // 0x1e9b10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e9b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e9b14:
    // 0x1e9b14: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1e9b14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_1e9b18:
    // 0x1e9b18: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1e9b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1e9b1c:
    // 0x1e9b1c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1e9b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1e9b20:
    // 0x1e9b20: 0xc119b68  jal         func_466DA0
label_1e9b24:
    if (ctx->pc == 0x1E9B24u) {
        ctx->pc = 0x1E9B28u;
        goto label_1e9b28;
    }
    ctx->pc = 0x1E9B20u;
    SET_GPR_U32(ctx, 31, 0x1E9B28u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x1E9B20u, 0x1E9B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9B28u;
label_1e9b28:
    // 0x1e9b28: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e9b28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e9b2c:
    // 0x1e9b2c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_1e9b30:
    if (ctx->pc == 0x1E9B30u) {
        ctx->pc = 0x1E9B34u;
        goto label_1e9b34;
    }
    ctx->pc = 0x1E9B2Cu;
    {
        const bool branch_taken_0x1e9b2c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9b2c) {
            ctx->pc = 0x1E9B40u;
            goto label_1e9b40;
        }
    }
    ctx->pc = 0x1E9B34u;
label_1e9b34:
    // 0x1e9b34: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1e9b34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e9b38:
    // 0x1e9b38: 0x1000000e  b           . + 4 + (0xE << 2)
label_1e9b3c:
    if (ctx->pc == 0x1E9B3Cu) {
        ctx->pc = 0x1E9B40u;
        goto label_1e9b40;
    }
    ctx->pc = 0x1E9B38u;
    {
        const bool branch_taken_0x1e9b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9b38) {
            ctx->pc = 0x1E9B74u;
            goto label_1e9b74;
        }
    }
    ctx->pc = 0x1E9B40u;
label_1e9b40:
    // 0x1e9b40: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e9b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e9b44:
    // 0x1e9b44: 0xc0ba088  jal         func_2E8220
label_1e9b48:
    if (ctx->pc == 0x1E9B48u) {
        ctx->pc = 0x1E9B4Cu;
        goto label_1e9b4c;
    }
    ctx->pc = 0x1E9B44u;
    SET_GPR_U32(ctx, 31, 0x1E9B4Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x1E9B44u, 0x1E9B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9B4Cu;
label_1e9b4c:
    // 0x1e9b4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e9b4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e9b50:
    // 0x1e9b50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e9b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e9b54:
    // 0x1e9b54: 0xc0ba088  jal         func_2E8220
label_1e9b58:
    if (ctx->pc == 0x1E9B58u) {
        ctx->pc = 0x1E9B5Cu;
        goto label_1e9b5c;
    }
    ctx->pc = 0x1E9B54u;
    SET_GPR_U32(ctx, 31, 0x1E9B5Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x1E9B54u, 0x1E9B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9B5Cu;
label_1e9b5c:
    // 0x1e9b5c: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_1e9b60:
    if (ctx->pc == 0x1E9B60u) {
        ctx->pc = 0x1E9B64u;
        goto label_1e9b64;
    }
    ctx->pc = 0x1E9B5Cu;
    {
        const bool branch_taken_0x1e9b5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9b5c) {
            ctx->pc = 0x1E9B18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e9b18;
        }
    }
    ctx->pc = 0x1E9B64u;
label_1e9b64:
    // 0x1e9b64: 0x200f809  jalr        $s0
label_1e9b68:
    if (ctx->pc == 0x1E9B68u) {
        ctx->pc = 0x1E9B6Cu;
        goto label_1e9b6c;
    }
    ctx->pc = 0x1E9B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x1E9B6Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9B64u, 0x1E9B6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E9B6Cu;
label_1e9b6c:
    // 0x1e9b6c: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_1e9b70:
    if (ctx->pc == 0x1E9B70u) {
        ctx->pc = 0x1E9B74u;
        goto label_1e9b74;
    }
    ctx->pc = 0x1E9B6Cu;
    {
        const bool branch_taken_0x1e9b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9b6c) {
            ctx->pc = 0x1E9B18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e9b18;
        }
    }
    ctx->pc = 0x1E9B74u;
label_1e9b74:
    // 0x1e9b74: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e9b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e9b78:
    // 0x1e9b78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e9b78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e9b7c:
    // 0x1e9b7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e9b7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e9b80:
    // 0x1e9b80: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1e9b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1e9b84:
    // 0x1e9b84: 0x3e00008  jr          $ra
label_1e9b88:
    if (ctx->pc == 0x1E9B88u) {
        ctx->pc = 0x1E9B8Cu;
        goto label_1e9b8c;
    }
    ctx->pc = 0x1E9B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9B84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9B8Cu;
label_1e9b8c:
    // 0x1e9b8c: 0x0  nop
    ctx->pc = 0x1e9b8cu;
    // NOP
    ctx->pc = 0x1e9b90u;
}
