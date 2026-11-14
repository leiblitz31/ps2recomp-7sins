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

// Function: sub_0010DC00
// Address: 0x10dc00 - 0x10dcb0
void sub_0010DC00_0x10dc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010DC00_0x10dc00");
#endif

    switch (ctx->pc) {
        case 0x10dc00u: goto label_10dc00;
        case 0x10dc04u: goto label_10dc04;
        case 0x10dc08u: goto label_10dc08;
        case 0x10dc0cu: goto label_10dc0c;
        case 0x10dc10u: goto label_10dc10;
        case 0x10dc14u: goto label_10dc14;
        case 0x10dc18u: goto label_10dc18;
        case 0x10dc1cu: goto label_10dc1c;
        case 0x10dc20u: goto label_10dc20;
        case 0x10dc24u: goto label_10dc24;
        case 0x10dc28u: goto label_10dc28;
        case 0x10dc2cu: goto label_10dc2c;
        case 0x10dc30u: goto label_10dc30;
        case 0x10dc34u: goto label_10dc34;
        case 0x10dc38u: goto label_10dc38;
        case 0x10dc3cu: goto label_10dc3c;
        case 0x10dc40u: goto label_10dc40;
        case 0x10dc44u: goto label_10dc44;
        case 0x10dc48u: goto label_10dc48;
        case 0x10dc4cu: goto label_10dc4c;
        case 0x10dc50u: goto label_10dc50;
        case 0x10dc54u: goto label_10dc54;
        case 0x10dc58u: goto label_10dc58;
        case 0x10dc5cu: goto label_10dc5c;
        case 0x10dc60u: goto label_10dc60;
        case 0x10dc64u: goto label_10dc64;
        case 0x10dc68u: goto label_10dc68;
        case 0x10dc6cu: goto label_10dc6c;
        case 0x10dc70u: goto label_10dc70;
        case 0x10dc74u: goto label_10dc74;
        case 0x10dc78u: goto label_10dc78;
        case 0x10dc7cu: goto label_10dc7c;
        case 0x10dc80u: goto label_10dc80;
        case 0x10dc84u: goto label_10dc84;
        case 0x10dc88u: goto label_10dc88;
        case 0x10dc8cu: goto label_10dc8c;
        case 0x10dc90u: goto label_10dc90;
        case 0x10dc94u: goto label_10dc94;
        case 0x10dc98u: goto label_10dc98;
        case 0x10dc9cu: goto label_10dc9c;
        case 0x10dca0u: goto label_10dca0;
        case 0x10dca4u: goto label_10dca4;
        case 0x10dca8u: goto label_10dca8;
        case 0x10dcacu: goto label_10dcac;
        default: break;
    }

    ctx->pc = 0x10dc00u;

label_10dc00:
    // 0x10dc00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x10dc00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_10dc04:
    // 0x10dc04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10dc04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_10dc08:
    // 0x10dc08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10dc08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_10dc0c:
    // 0x10dc0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10dc0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_10dc10:
    // 0x10dc10: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x10dc10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_10dc14:
    // 0x10dc14: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x10dc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_10dc18:
    // 0x10dc18: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_10dc1c:
    if (ctx->pc == 0x10DC1Cu) {
        ctx->pc = 0x10DC20u;
        goto label_10dc20;
    }
    ctx->pc = 0x10DC18u;
    {
        const bool branch_taken_0x10dc18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10dc18) {
            ctx->pc = 0x10DC28u;
            goto label_10dc28;
        }
    }
    ctx->pc = 0x10DC20u;
label_10dc20:
    // 0x10dc20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10dc20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10dc24:
    // 0x10dc24: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x10dc24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_10dc28:
    // 0x10dc28: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x10dc28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_10dc2c:
    // 0x10dc2c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x10dc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_10dc30:
    // 0x10dc30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10dc30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10dc34:
    // 0x10dc34: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x10dc34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_10dc38:
    // 0x10dc38: 0xc119b68  jal         func_466DA0
label_10dc3c:
    if (ctx->pc == 0x10DC3Cu) {
        ctx->pc = 0x10DC40u;
        goto label_10dc40;
    }
    ctx->pc = 0x10DC38u;
    SET_GPR_U32(ctx, 31, 0x10DC40u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x10DC38u, 0x10DC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DC40u;
label_10dc40:
    // 0x10dc40: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10dc40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10dc44:
    // 0x10dc44: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_10dc48:
    if (ctx->pc == 0x10DC48u) {
        ctx->pc = 0x10DC4Cu;
        goto label_10dc4c;
    }
    ctx->pc = 0x10DC44u;
    {
        const bool branch_taken_0x10dc44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x10dc44) {
            ctx->pc = 0x10DC58u;
            goto label_10dc58;
        }
    }
    ctx->pc = 0x10DC4Cu;
label_10dc4c:
    // 0x10dc4c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x10dc4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10dc50:
    // 0x10dc50: 0x1000000e  b           . + 4 + (0xE << 2)
label_10dc54:
    if (ctx->pc == 0x10DC54u) {
        ctx->pc = 0x10DC58u;
        goto label_10dc58;
    }
    ctx->pc = 0x10DC50u;
    {
        const bool branch_taken_0x10dc50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10dc50) {
            ctx->pc = 0x10DC8Cu;
            goto label_10dc8c;
        }
    }
    ctx->pc = 0x10DC58u;
label_10dc58:
    // 0x10dc58: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x10dc58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10dc5c:
    // 0x10dc5c: 0xc0ba088  jal         func_2E8220
label_10dc60:
    if (ctx->pc == 0x10DC60u) {
        ctx->pc = 0x10DC64u;
        goto label_10dc64;
    }
    ctx->pc = 0x10DC5Cu;
    SET_GPR_U32(ctx, 31, 0x10DC64u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x10DC5Cu, 0x10DC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DC64u;
label_10dc64:
    // 0x10dc64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10dc64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10dc68:
    // 0x10dc68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10dc68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10dc6c:
    // 0x10dc6c: 0xc0ba088  jal         func_2E8220
label_10dc70:
    if (ctx->pc == 0x10DC70u) {
        ctx->pc = 0x10DC74u;
        goto label_10dc74;
    }
    ctx->pc = 0x10DC6Cu;
    SET_GPR_U32(ctx, 31, 0x10DC74u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x10DC6Cu, 0x10DC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DC74u;
label_10dc74:
    // 0x10dc74: 0x1200ffec  beqz        $s0, . + 4 + (-0x14 << 2)
label_10dc78:
    if (ctx->pc == 0x10DC78u) {
        ctx->pc = 0x10DC7Cu;
        goto label_10dc7c;
    }
    ctx->pc = 0x10DC74u;
    {
        const bool branch_taken_0x10dc74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x10dc74) {
            ctx->pc = 0x10DC28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10dc28;
        }
    }
    ctx->pc = 0x10DC7Cu;
label_10dc7c:
    // 0x10dc7c: 0x200f809  jalr        $s0
label_10dc80:
    if (ctx->pc == 0x10DC80u) {
        ctx->pc = 0x10DC84u;
        goto label_10dc84;
    }
    ctx->pc = 0x10DC7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x10DC84u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DC7Cu, 0x10DC84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10DC84u;
label_10dc84:
    // 0x10dc84: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_10dc88:
    if (ctx->pc == 0x10DC88u) {
        ctx->pc = 0x10DC8Cu;
        goto label_10dc8c;
    }
    ctx->pc = 0x10DC84u;
    {
        const bool branch_taken_0x10dc84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10dc84) {
            ctx->pc = 0x10DC28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10dc28;
        }
    }
    ctx->pc = 0x10DC8Cu;
label_10dc8c:
    // 0x10dc8c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10dc8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_10dc90:
    // 0x10dc90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10dc90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10dc94:
    // 0x10dc94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10dc94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_10dc98:
    // 0x10dc98: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x10dc98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_10dc9c:
    // 0x10dc9c: 0x3e00008  jr          $ra
label_10dca0:
    if (ctx->pc == 0x10DCA0u) {
        ctx->pc = 0x10DCA4u;
        goto label_10dca4;
    }
    ctx->pc = 0x10DC9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DC9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10DCA4u;
label_10dca4:
    // 0x10dca4: 0x0  nop
    ctx->pc = 0x10dca4u;
    // NOP
label_10dca8:
    // 0x10dca8: 0x0  nop
    ctx->pc = 0x10dca8u;
    // NOP
label_10dcac:
    // 0x10dcac: 0x0  nop
    ctx->pc = 0x10dcacu;
    // NOP
    ctx->pc = 0x10dcb0u;
}
