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

// Function: sub_0028DDD0
// Address: 0x28ddd0 - 0x28de80
void sub_0028DDD0_0x28ddd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028DDD0_0x28ddd0");
#endif

    switch (ctx->pc) {
        case 0x28ddd0u: goto label_28ddd0;
        case 0x28ddd4u: goto label_28ddd4;
        case 0x28ddd8u: goto label_28ddd8;
        case 0x28dddcu: goto label_28dddc;
        case 0x28dde0u: goto label_28dde0;
        case 0x28dde4u: goto label_28dde4;
        case 0x28dde8u: goto label_28dde8;
        case 0x28ddecu: goto label_28ddec;
        case 0x28ddf0u: goto label_28ddf0;
        case 0x28ddf4u: goto label_28ddf4;
        case 0x28ddf8u: goto label_28ddf8;
        case 0x28ddfcu: goto label_28ddfc;
        case 0x28de00u: goto label_28de00;
        case 0x28de04u: goto label_28de04;
        case 0x28de08u: goto label_28de08;
        case 0x28de0cu: goto label_28de0c;
        case 0x28de10u: goto label_28de10;
        case 0x28de14u: goto label_28de14;
        case 0x28de18u: goto label_28de18;
        case 0x28de1cu: goto label_28de1c;
        case 0x28de20u: goto label_28de20;
        case 0x28de24u: goto label_28de24;
        case 0x28de28u: goto label_28de28;
        case 0x28de2cu: goto label_28de2c;
        case 0x28de30u: goto label_28de30;
        case 0x28de34u: goto label_28de34;
        case 0x28de38u: goto label_28de38;
        case 0x28de3cu: goto label_28de3c;
        case 0x28de40u: goto label_28de40;
        case 0x28de44u: goto label_28de44;
        case 0x28de48u: goto label_28de48;
        case 0x28de4cu: goto label_28de4c;
        case 0x28de50u: goto label_28de50;
        case 0x28de54u: goto label_28de54;
        case 0x28de58u: goto label_28de58;
        case 0x28de5cu: goto label_28de5c;
        case 0x28de60u: goto label_28de60;
        case 0x28de64u: goto label_28de64;
        case 0x28de68u: goto label_28de68;
        case 0x28de6cu: goto label_28de6c;
        case 0x28de70u: goto label_28de70;
        case 0x28de74u: goto label_28de74;
        case 0x28de78u: goto label_28de78;
        case 0x28de7cu: goto label_28de7c;
        default: break;
    }

    ctx->pc = 0x28ddd0u;

label_28ddd0:
    // 0x28ddd0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x28ddd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_28ddd4:
    // 0x28ddd4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x28ddd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_28ddd8:
    // 0x28ddd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28ddd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_28dddc:
    // 0x28dddc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28dddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_28dde0:
    // 0x28dde0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x28dde0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_28dde4:
    // 0x28dde4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x28dde4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_28dde8:
    // 0x28dde8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_28ddec:
    if (ctx->pc == 0x28DDECu) {
        ctx->pc = 0x28DDF0u;
        goto label_28ddf0;
    }
    ctx->pc = 0x28DDE8u;
    {
        const bool branch_taken_0x28dde8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28dde8) {
            ctx->pc = 0x28DDF8u;
            goto label_28ddf8;
        }
    }
    ctx->pc = 0x28DDF0u;
label_28ddf0:
    // 0x28ddf0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28ddf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28ddf4:
    // 0x28ddf4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x28ddf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_28ddf8:
    // 0x28ddf8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x28ddf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_28ddfc:
    // 0x28ddfc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x28ddfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_28de00:
    // 0x28de00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28de00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28de04:
    // 0x28de04: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x28de04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_28de08:
    // 0x28de08: 0xc119b68  jal         func_466DA0
label_28de0c:
    if (ctx->pc == 0x28DE0Cu) {
        ctx->pc = 0x28DE10u;
        goto label_28de10;
    }
    ctx->pc = 0x28DE08u;
    SET_GPR_U32(ctx, 31, 0x28DE10u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x28DE08u, 0x28DE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DE10u;
label_28de10:
    // 0x28de10: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28de10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28de14:
    // 0x28de14: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_28de18:
    if (ctx->pc == 0x28DE18u) {
        ctx->pc = 0x28DE1Cu;
        goto label_28de1c;
    }
    ctx->pc = 0x28DE14u;
    {
        const bool branch_taken_0x28de14 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x28de14) {
            ctx->pc = 0x28DE28u;
            goto label_28de28;
        }
    }
    ctx->pc = 0x28DE1Cu;
label_28de1c:
    // 0x28de1c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x28de1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28de20:
    // 0x28de20: 0x1000000e  b           . + 4 + (0xE << 2)
label_28de24:
    if (ctx->pc == 0x28DE24u) {
        ctx->pc = 0x28DE28u;
        goto label_28de28;
    }
    ctx->pc = 0x28DE20u;
    {
        const bool branch_taken_0x28de20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28de20) {
            ctx->pc = 0x28DE5Cu;
            goto label_28de5c;
        }
    }
    ctx->pc = 0x28DE28u;
label_28de28:
    // 0x28de28: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28de28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28de2c:
    // 0x28de2c: 0xc0ba088  jal         func_2E8220
label_28de30:
    if (ctx->pc == 0x28DE30u) {
        ctx->pc = 0x28DE34u;
        goto label_28de34;
    }
    ctx->pc = 0x28DE2Cu;
    SET_GPR_U32(ctx, 31, 0x28DE34u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x28DE2Cu, 0x28DE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DE34u;
label_28de34:
    // 0x28de34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28de34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28de38:
    // 0x28de38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28de38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28de3c:
    // 0x28de3c: 0xc0ba088  jal         func_2E8220
label_28de40:
    if (ctx->pc == 0x28DE40u) {
        ctx->pc = 0x28DE44u;
        goto label_28de44;
    }
    ctx->pc = 0x28DE3Cu;
    SET_GPR_U32(ctx, 31, 0x28DE44u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x28DE3Cu, 0x28DE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DE44u;
label_28de44:
    // 0x28de44: 0x1200ffec  beqz        $s0, . + 4 + (-0x14 << 2)
label_28de48:
    if (ctx->pc == 0x28DE48u) {
        ctx->pc = 0x28DE4Cu;
        goto label_28de4c;
    }
    ctx->pc = 0x28DE44u;
    {
        const bool branch_taken_0x28de44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x28de44) {
            ctx->pc = 0x28DDF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28ddf8;
        }
    }
    ctx->pc = 0x28DE4Cu;
label_28de4c:
    // 0x28de4c: 0x200f809  jalr        $s0
label_28de50:
    if (ctx->pc == 0x28DE50u) {
        ctx->pc = 0x28DE54u;
        goto label_28de54;
    }
    ctx->pc = 0x28DE4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x28DE54u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28DE4Cu, 0x28DE54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28DE54u;
label_28de54:
    // 0x28de54: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_28de58:
    if (ctx->pc == 0x28DE58u) {
        ctx->pc = 0x28DE5Cu;
        goto label_28de5c;
    }
    ctx->pc = 0x28DE54u;
    {
        const bool branch_taken_0x28de54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28de54) {
            ctx->pc = 0x28DDF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28ddf8;
        }
    }
    ctx->pc = 0x28DE5Cu;
label_28de5c:
    // 0x28de5c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x28de5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_28de60:
    // 0x28de60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28de60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28de64:
    // 0x28de64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28de64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_28de68:
    // 0x28de68: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x28de68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_28de6c:
    // 0x28de6c: 0x3e00008  jr          $ra
label_28de70:
    if (ctx->pc == 0x28DE70u) {
        ctx->pc = 0x28DE74u;
        goto label_28de74;
    }
    ctx->pc = 0x28DE6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28DE6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28DE74u;
label_28de74:
    // 0x28de74: 0x0  nop
    ctx->pc = 0x28de74u;
    // NOP
label_28de78:
    // 0x28de78: 0x0  nop
    ctx->pc = 0x28de78u;
    // NOP
label_28de7c:
    // 0x28de7c: 0x0  nop
    ctx->pc = 0x28de7cu;
    // NOP
    ctx->pc = 0x28de80u;
}
