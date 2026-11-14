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

// Function: sub_00158AE0
// Address: 0x158ae0 - 0x158b80
void sub_00158AE0_0x158ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00158AE0_0x158ae0");
#endif

    switch (ctx->pc) {
        case 0x158ae0u: goto label_158ae0;
        case 0x158ae4u: goto label_158ae4;
        case 0x158ae8u: goto label_158ae8;
        case 0x158aecu: goto label_158aec;
        case 0x158af0u: goto label_158af0;
        case 0x158af4u: goto label_158af4;
        case 0x158af8u: goto label_158af8;
        case 0x158afcu: goto label_158afc;
        case 0x158b00u: goto label_158b00;
        case 0x158b04u: goto label_158b04;
        case 0x158b08u: goto label_158b08;
        case 0x158b0cu: goto label_158b0c;
        case 0x158b10u: goto label_158b10;
        case 0x158b14u: goto label_158b14;
        case 0x158b18u: goto label_158b18;
        case 0x158b1cu: goto label_158b1c;
        case 0x158b20u: goto label_158b20;
        case 0x158b24u: goto label_158b24;
        case 0x158b28u: goto label_158b28;
        case 0x158b2cu: goto label_158b2c;
        case 0x158b30u: goto label_158b30;
        case 0x158b34u: goto label_158b34;
        case 0x158b38u: goto label_158b38;
        case 0x158b3cu: goto label_158b3c;
        case 0x158b40u: goto label_158b40;
        case 0x158b44u: goto label_158b44;
        case 0x158b48u: goto label_158b48;
        case 0x158b4cu: goto label_158b4c;
        case 0x158b50u: goto label_158b50;
        case 0x158b54u: goto label_158b54;
        case 0x158b58u: goto label_158b58;
        case 0x158b5cu: goto label_158b5c;
        case 0x158b60u: goto label_158b60;
        case 0x158b64u: goto label_158b64;
        case 0x158b68u: goto label_158b68;
        case 0x158b6cu: goto label_158b6c;
        case 0x158b70u: goto label_158b70;
        case 0x158b74u: goto label_158b74;
        case 0x158b78u: goto label_158b78;
        case 0x158b7cu: goto label_158b7c;
        default: break;
    }

    ctx->pc = 0x158ae0u;

label_158ae0:
    // 0x158ae0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x158ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_158ae4:
    // 0x158ae4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x158ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_158ae8:
    // 0x158ae8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x158ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_158aec:
    // 0x158aec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x158aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_158af0:
    // 0x158af0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x158af0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_158af4:
    // 0x158af4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x158af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_158af8:
    // 0x158af8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_158afc:
    if (ctx->pc == 0x158AFCu) {
        ctx->pc = 0x158B00u;
        goto label_158b00;
    }
    ctx->pc = 0x158AF8u;
    {
        const bool branch_taken_0x158af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x158af8) {
            ctx->pc = 0x158B08u;
            goto label_158b08;
        }
    }
    ctx->pc = 0x158B00u;
label_158b00:
    // 0x158b00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x158b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_158b04:
    // 0x158b04: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x158b04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_158b08:
    // 0x158b08: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x158b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_158b0c:
    // 0x158b0c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x158b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_158b10:
    // 0x158b10: 0xc119b68  jal         func_466DA0
label_158b14:
    if (ctx->pc == 0x158B14u) {
        ctx->pc = 0x158B18u;
        goto label_158b18;
    }
    ctx->pc = 0x158B10u;
    SET_GPR_U32(ctx, 31, 0x158B18u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x158B10u, 0x158B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158B18u;
label_158b18:
    // 0x158b18: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x158b18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_158b1c:
    // 0x158b1c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_158b20:
    if (ctx->pc == 0x158B20u) {
        ctx->pc = 0x158B24u;
        goto label_158b24;
    }
    ctx->pc = 0x158B1Cu;
    {
        const bool branch_taken_0x158b1c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x158b1c) {
            ctx->pc = 0x158B30u;
            goto label_158b30;
        }
    }
    ctx->pc = 0x158B24u;
label_158b24:
    // 0x158b24: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x158b24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_158b28:
    // 0x158b28: 0x1000000e  b           . + 4 + (0xE << 2)
label_158b2c:
    if (ctx->pc == 0x158B2Cu) {
        ctx->pc = 0x158B30u;
        goto label_158b30;
    }
    ctx->pc = 0x158B28u;
    {
        const bool branch_taken_0x158b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158b28) {
            ctx->pc = 0x158B64u;
            goto label_158b64;
        }
    }
    ctx->pc = 0x158B30u;
label_158b30:
    // 0x158b30: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x158b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_158b34:
    // 0x158b34: 0xc0ba088  jal         func_2E8220
label_158b38:
    if (ctx->pc == 0x158B38u) {
        ctx->pc = 0x158B3Cu;
        goto label_158b3c;
    }
    ctx->pc = 0x158B34u;
    SET_GPR_U32(ctx, 31, 0x158B3Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x158B34u, 0x158B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158B3Cu;
label_158b3c:
    // 0x158b3c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x158b3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_158b40:
    // 0x158b40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x158b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_158b44:
    // 0x158b44: 0xc0ba088  jal         func_2E8220
label_158b48:
    if (ctx->pc == 0x158B48u) {
        ctx->pc = 0x158B4Cu;
        goto label_158b4c;
    }
    ctx->pc = 0x158B44u;
    SET_GPR_U32(ctx, 31, 0x158B4Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x158B44u, 0x158B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158B4Cu;
label_158b4c:
    // 0x158b4c: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_158b50:
    if (ctx->pc == 0x158B50u) {
        ctx->pc = 0x158B54u;
        goto label_158b54;
    }
    ctx->pc = 0x158B4Cu;
    {
        const bool branch_taken_0x158b4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x158b4c) {
            ctx->pc = 0x158B08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_158b08;
        }
    }
    ctx->pc = 0x158B54u;
label_158b54:
    // 0x158b54: 0x200f809  jalr        $s0
label_158b58:
    if (ctx->pc == 0x158B58u) {
        ctx->pc = 0x158B5Cu;
        goto label_158b5c;
    }
    ctx->pc = 0x158B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x158B5Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158B54u, 0x158B5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x158B5Cu;
label_158b5c:
    // 0x158b5c: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_158b60:
    if (ctx->pc == 0x158B60u) {
        ctx->pc = 0x158B64u;
        goto label_158b64;
    }
    ctx->pc = 0x158B5Cu;
    {
        const bool branch_taken_0x158b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158b5c) {
            ctx->pc = 0x158B08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_158b08;
        }
    }
    ctx->pc = 0x158B64u;
label_158b64:
    // 0x158b64: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x158b64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_158b68:
    // 0x158b68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x158b68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_158b6c:
    // 0x158b6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x158b6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_158b70:
    // 0x158b70: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x158b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_158b74:
    // 0x158b74: 0x3e00008  jr          $ra
label_158b78:
    if (ctx->pc == 0x158B78u) {
        ctx->pc = 0x158B7Cu;
        goto label_158b7c;
    }
    ctx->pc = 0x158B74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158B74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158B7Cu;
label_158b7c:
    // 0x158b7c: 0x0  nop
    ctx->pc = 0x158b7cu;
    // NOP
    ctx->pc = 0x158b80u;
}
