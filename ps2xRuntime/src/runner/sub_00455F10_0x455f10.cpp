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

// Function: sub_00455F10
// Address: 0x455f10 - 0x455fb0
void sub_00455F10_0x455f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00455F10_0x455f10");
#endif

    switch (ctx->pc) {
        case 0x455f10u: goto label_455f10;
        case 0x455f14u: goto label_455f14;
        case 0x455f18u: goto label_455f18;
        case 0x455f1cu: goto label_455f1c;
        case 0x455f20u: goto label_455f20;
        case 0x455f24u: goto label_455f24;
        case 0x455f28u: goto label_455f28;
        case 0x455f2cu: goto label_455f2c;
        case 0x455f30u: goto label_455f30;
        case 0x455f34u: goto label_455f34;
        case 0x455f38u: goto label_455f38;
        case 0x455f3cu: goto label_455f3c;
        case 0x455f40u: goto label_455f40;
        case 0x455f44u: goto label_455f44;
        case 0x455f48u: goto label_455f48;
        case 0x455f4cu: goto label_455f4c;
        case 0x455f50u: goto label_455f50;
        case 0x455f54u: goto label_455f54;
        case 0x455f58u: goto label_455f58;
        case 0x455f5cu: goto label_455f5c;
        case 0x455f60u: goto label_455f60;
        case 0x455f64u: goto label_455f64;
        case 0x455f68u: goto label_455f68;
        case 0x455f6cu: goto label_455f6c;
        case 0x455f70u: goto label_455f70;
        case 0x455f74u: goto label_455f74;
        case 0x455f78u: goto label_455f78;
        case 0x455f7cu: goto label_455f7c;
        case 0x455f80u: goto label_455f80;
        case 0x455f84u: goto label_455f84;
        case 0x455f88u: goto label_455f88;
        case 0x455f8cu: goto label_455f8c;
        case 0x455f90u: goto label_455f90;
        case 0x455f94u: goto label_455f94;
        case 0x455f98u: goto label_455f98;
        case 0x455f9cu: goto label_455f9c;
        case 0x455fa0u: goto label_455fa0;
        case 0x455fa4u: goto label_455fa4;
        case 0x455fa8u: goto label_455fa8;
        case 0x455facu: goto label_455fac;
        default: break;
    }

    ctx->pc = 0x455f10u;

label_455f10:
    // 0x455f10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x455f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_455f14:
    // 0x455f14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x455f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_455f18:
    // 0x455f18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x455f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_455f1c:
    // 0x455f1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x455f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_455f20:
    // 0x455f20: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x455f20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_455f24:
    // 0x455f24: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x455f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_455f28:
    // 0x455f28: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_455f2c:
    if (ctx->pc == 0x455F2Cu) {
        ctx->pc = 0x455F30u;
        goto label_455f30;
    }
    ctx->pc = 0x455F28u;
    {
        const bool branch_taken_0x455f28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x455f28) {
            ctx->pc = 0x455F38u;
            goto label_455f38;
        }
    }
    ctx->pc = 0x455F30u;
label_455f30:
    // 0x455f30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x455f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_455f34:
    // 0x455f34: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x455f34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_455f38:
    // 0x455f38: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x455f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_455f3c:
    // 0x455f3c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x455f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_455f40:
    // 0x455f40: 0xc119b68  jal         func_466DA0
label_455f44:
    if (ctx->pc == 0x455F44u) {
        ctx->pc = 0x455F48u;
        goto label_455f48;
    }
    ctx->pc = 0x455F40u;
    SET_GPR_U32(ctx, 31, 0x455F48u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x455F40u, 0x455F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x455F48u;
label_455f48:
    // 0x455f48: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x455f48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455f4c:
    // 0x455f4c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_455f50:
    if (ctx->pc == 0x455F50u) {
        ctx->pc = 0x455F54u;
        goto label_455f54;
    }
    ctx->pc = 0x455F4Cu;
    {
        const bool branch_taken_0x455f4c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x455f4c) {
            ctx->pc = 0x455F60u;
            goto label_455f60;
        }
    }
    ctx->pc = 0x455F54u;
label_455f54:
    // 0x455f54: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x455f54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_455f58:
    // 0x455f58: 0x1000000e  b           . + 4 + (0xE << 2)
label_455f5c:
    if (ctx->pc == 0x455F5Cu) {
        ctx->pc = 0x455F60u;
        goto label_455f60;
    }
    ctx->pc = 0x455F58u;
    {
        const bool branch_taken_0x455f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x455f58) {
            ctx->pc = 0x455F94u;
            goto label_455f94;
        }
    }
    ctx->pc = 0x455F60u;
label_455f60:
    // 0x455f60: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x455f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_455f64:
    // 0x455f64: 0xc0ba088  jal         func_2E8220
label_455f68:
    if (ctx->pc == 0x455F68u) {
        ctx->pc = 0x455F6Cu;
        goto label_455f6c;
    }
    ctx->pc = 0x455F64u;
    SET_GPR_U32(ctx, 31, 0x455F6Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x455F64u, 0x455F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x455F6Cu;
label_455f6c:
    // 0x455f6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x455f6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455f70:
    // 0x455f70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x455f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_455f74:
    // 0x455f74: 0xc0ba088  jal         func_2E8220
label_455f78:
    if (ctx->pc == 0x455F78u) {
        ctx->pc = 0x455F7Cu;
        goto label_455f7c;
    }
    ctx->pc = 0x455F74u;
    SET_GPR_U32(ctx, 31, 0x455F7Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x455F74u, 0x455F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x455F7Cu;
label_455f7c:
    // 0x455f7c: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_455f80:
    if (ctx->pc == 0x455F80u) {
        ctx->pc = 0x455F84u;
        goto label_455f84;
    }
    ctx->pc = 0x455F7Cu;
    {
        const bool branch_taken_0x455f7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x455f7c) {
            ctx->pc = 0x455F38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_455f38;
        }
    }
    ctx->pc = 0x455F84u;
label_455f84:
    // 0x455f84: 0x200f809  jalr        $s0
label_455f88:
    if (ctx->pc == 0x455F88u) {
        ctx->pc = 0x455F8Cu;
        goto label_455f8c;
    }
    ctx->pc = 0x455F84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x455F8Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x455F84u, 0x455F8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x455F8Cu;
label_455f8c:
    // 0x455f8c: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_455f90:
    if (ctx->pc == 0x455F90u) {
        ctx->pc = 0x455F94u;
        goto label_455f94;
    }
    ctx->pc = 0x455F8Cu;
    {
        const bool branch_taken_0x455f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x455f8c) {
            ctx->pc = 0x455F38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_455f38;
        }
    }
    ctx->pc = 0x455F94u;
label_455f94:
    // 0x455f94: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x455f94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_455f98:
    // 0x455f98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x455f98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_455f9c:
    // 0x455f9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x455f9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_455fa0:
    // 0x455fa0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x455fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_455fa4:
    // 0x455fa4: 0x3e00008  jr          $ra
label_455fa8:
    if (ctx->pc == 0x455FA8u) {
        ctx->pc = 0x455FACu;
        goto label_455fac;
    }
    ctx->pc = 0x455FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x455FA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x455FACu;
label_455fac:
    // 0x455fac: 0x0  nop
    ctx->pc = 0x455facu;
    // NOP
    ctx->pc = 0x455fb0u;
}
