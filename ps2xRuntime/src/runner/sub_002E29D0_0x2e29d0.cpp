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

// Function: sub_002E29D0
// Address: 0x2e29d0 - 0x2e2a70
void sub_002E29D0_0x2e29d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E29D0_0x2e29d0");
#endif

    switch (ctx->pc) {
        case 0x2e29d0u: goto label_2e29d0;
        case 0x2e29d4u: goto label_2e29d4;
        case 0x2e29d8u: goto label_2e29d8;
        case 0x2e29dcu: goto label_2e29dc;
        case 0x2e29e0u: goto label_2e29e0;
        case 0x2e29e4u: goto label_2e29e4;
        case 0x2e29e8u: goto label_2e29e8;
        case 0x2e29ecu: goto label_2e29ec;
        case 0x2e29f0u: goto label_2e29f0;
        case 0x2e29f4u: goto label_2e29f4;
        case 0x2e29f8u: goto label_2e29f8;
        case 0x2e29fcu: goto label_2e29fc;
        case 0x2e2a00u: goto label_2e2a00;
        case 0x2e2a04u: goto label_2e2a04;
        case 0x2e2a08u: goto label_2e2a08;
        case 0x2e2a0cu: goto label_2e2a0c;
        case 0x2e2a10u: goto label_2e2a10;
        case 0x2e2a14u: goto label_2e2a14;
        case 0x2e2a18u: goto label_2e2a18;
        case 0x2e2a1cu: goto label_2e2a1c;
        case 0x2e2a20u: goto label_2e2a20;
        case 0x2e2a24u: goto label_2e2a24;
        case 0x2e2a28u: goto label_2e2a28;
        case 0x2e2a2cu: goto label_2e2a2c;
        case 0x2e2a30u: goto label_2e2a30;
        case 0x2e2a34u: goto label_2e2a34;
        case 0x2e2a38u: goto label_2e2a38;
        case 0x2e2a3cu: goto label_2e2a3c;
        case 0x2e2a40u: goto label_2e2a40;
        case 0x2e2a44u: goto label_2e2a44;
        case 0x2e2a48u: goto label_2e2a48;
        case 0x2e2a4cu: goto label_2e2a4c;
        case 0x2e2a50u: goto label_2e2a50;
        case 0x2e2a54u: goto label_2e2a54;
        case 0x2e2a58u: goto label_2e2a58;
        case 0x2e2a5cu: goto label_2e2a5c;
        case 0x2e2a60u: goto label_2e2a60;
        case 0x2e2a64u: goto label_2e2a64;
        case 0x2e2a68u: goto label_2e2a68;
        case 0x2e2a6cu: goto label_2e2a6c;
        default: break;
    }

    ctx->pc = 0x2e29d0u;

label_2e29d0:
    // 0x2e29d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2e29d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2e29d4:
    // 0x2e29d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e29d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2e29d8:
    // 0x2e29d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e29d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2e29dc:
    // 0x2e29dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e29dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2e29e0:
    // 0x2e29e0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2e29e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_2e29e4:
    // 0x2e29e4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2e29e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2e29e8:
    // 0x2e29e8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2e29ec:
    if (ctx->pc == 0x2E29ECu) {
        ctx->pc = 0x2E29F0u;
        goto label_2e29f0;
    }
    ctx->pc = 0x2E29E8u;
    {
        const bool branch_taken_0x2e29e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e29e8) {
            ctx->pc = 0x2E29F8u;
            goto label_2e29f8;
        }
    }
    ctx->pc = 0x2E29F0u;
label_2e29f0:
    // 0x2e29f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e29f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e29f4:
    // 0x2e29f4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x2e29f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_2e29f8:
    // 0x2e29f8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2e29f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2e29fc:
    // 0x2e29fc: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2e29fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2e2a00:
    // 0x2e2a00: 0xc119b68  jal         func_466DA0
label_2e2a04:
    if (ctx->pc == 0x2E2A04u) {
        ctx->pc = 0x2E2A08u;
        goto label_2e2a08;
    }
    ctx->pc = 0x2E2A00u;
    SET_GPR_U32(ctx, 31, 0x2E2A08u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2E2A00u, 0x2E2A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2A08u;
label_2e2a08:
    // 0x2e2a08: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e2a08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e2a0c:
    // 0x2e2a0c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_2e2a10:
    if (ctx->pc == 0x2E2A10u) {
        ctx->pc = 0x2E2A14u;
        goto label_2e2a14;
    }
    ctx->pc = 0x2E2A0Cu;
    {
        const bool branch_taken_0x2e2a0c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2a0c) {
            ctx->pc = 0x2E2A20u;
            goto label_2e2a20;
        }
    }
    ctx->pc = 0x2E2A14u;
label_2e2a14:
    // 0x2e2a14: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2e2a14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e2a18:
    // 0x2e2a18: 0x1000000e  b           . + 4 + (0xE << 2)
label_2e2a1c:
    if (ctx->pc == 0x2E2A1Cu) {
        ctx->pc = 0x2E2A20u;
        goto label_2e2a20;
    }
    ctx->pc = 0x2E2A18u;
    {
        const bool branch_taken_0x2e2a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2a18) {
            ctx->pc = 0x2E2A54u;
            goto label_2e2a54;
        }
    }
    ctx->pc = 0x2E2A20u;
label_2e2a20:
    // 0x2e2a20: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e2a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e2a24:
    // 0x2e2a24: 0xc0ba088  jal         func_2E8220
label_2e2a28:
    if (ctx->pc == 0x2E2A28u) {
        ctx->pc = 0x2E2A2Cu;
        goto label_2e2a2c;
    }
    ctx->pc = 0x2E2A24u;
    SET_GPR_U32(ctx, 31, 0x2E2A2Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x2E2A24u, 0x2E2A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2A2Cu;
label_2e2a2c:
    // 0x2e2a2c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e2a2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e2a30:
    // 0x2e2a30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e2a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e2a34:
    // 0x2e2a34: 0xc0ba088  jal         func_2E8220
label_2e2a38:
    if (ctx->pc == 0x2E2A38u) {
        ctx->pc = 0x2E2A3Cu;
        goto label_2e2a3c;
    }
    ctx->pc = 0x2E2A34u;
    SET_GPR_U32(ctx, 31, 0x2E2A3Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x2E2A34u, 0x2E2A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2A3Cu;
label_2e2a3c:
    // 0x2e2a3c: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_2e2a40:
    if (ctx->pc == 0x2E2A40u) {
        ctx->pc = 0x2E2A44u;
        goto label_2e2a44;
    }
    ctx->pc = 0x2E2A3Cu;
    {
        const bool branch_taken_0x2e2a3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2a3c) {
            ctx->pc = 0x2E29F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e29f8;
        }
    }
    ctx->pc = 0x2E2A44u;
label_2e2a44:
    // 0x2e2a44: 0x200f809  jalr        $s0
label_2e2a48:
    if (ctx->pc == 0x2E2A48u) {
        ctx->pc = 0x2E2A4Cu;
        goto label_2e2a4c;
    }
    ctx->pc = 0x2E2A44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x2E2A4Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2A44u, 0x2E2A4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E2A4Cu;
label_2e2a4c:
    // 0x2e2a4c: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_2e2a50:
    if (ctx->pc == 0x2E2A50u) {
        ctx->pc = 0x2E2A54u;
        goto label_2e2a54;
    }
    ctx->pc = 0x2E2A4Cu;
    {
        const bool branch_taken_0x2e2a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2a4c) {
            ctx->pc = 0x2E29F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e29f8;
        }
    }
    ctx->pc = 0x2E2A54u;
label_2e2a54:
    // 0x2e2a54: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e2a54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2e2a58:
    // 0x2e2a58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e2a58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e2a5c:
    // 0x2e2a5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e2a5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2e2a60:
    // 0x2e2a60: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2e2a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2e2a64:
    // 0x2e2a64: 0x3e00008  jr          $ra
label_2e2a68:
    if (ctx->pc == 0x2E2A68u) {
        ctx->pc = 0x2E2A6Cu;
        goto label_2e2a6c;
    }
    ctx->pc = 0x2E2A64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2A64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2A6Cu;
label_2e2a6c:
    // 0x2e2a6c: 0x0  nop
    ctx->pc = 0x2e2a6cu;
    // NOP
    ctx->pc = 0x2e2a70u;
}
