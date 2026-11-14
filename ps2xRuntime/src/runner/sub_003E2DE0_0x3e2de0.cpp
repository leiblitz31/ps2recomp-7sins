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

// Function: sub_003E2DE0
// Address: 0x3e2de0 - 0x3e2e78
void sub_003E2DE0_0x3e2de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E2DE0_0x3e2de0");
#endif

    switch (ctx->pc) {
        case 0x3e2de0u: goto label_3e2de0;
        case 0x3e2de4u: goto label_3e2de4;
        case 0x3e2de8u: goto label_3e2de8;
        case 0x3e2decu: goto label_3e2dec;
        case 0x3e2df0u: goto label_3e2df0;
        case 0x3e2df4u: goto label_3e2df4;
        case 0x3e2df8u: goto label_3e2df8;
        case 0x3e2dfcu: goto label_3e2dfc;
        case 0x3e2e00u: goto label_3e2e00;
        case 0x3e2e04u: goto label_3e2e04;
        case 0x3e2e08u: goto label_3e2e08;
        case 0x3e2e0cu: goto label_3e2e0c;
        case 0x3e2e10u: goto label_3e2e10;
        case 0x3e2e14u: goto label_3e2e14;
        case 0x3e2e18u: goto label_3e2e18;
        case 0x3e2e1cu: goto label_3e2e1c;
        case 0x3e2e20u: goto label_3e2e20;
        case 0x3e2e24u: goto label_3e2e24;
        case 0x3e2e28u: goto label_3e2e28;
        case 0x3e2e2cu: goto label_3e2e2c;
        case 0x3e2e30u: goto label_3e2e30;
        case 0x3e2e34u: goto label_3e2e34;
        case 0x3e2e38u: goto label_3e2e38;
        case 0x3e2e3cu: goto label_3e2e3c;
        case 0x3e2e40u: goto label_3e2e40;
        case 0x3e2e44u: goto label_3e2e44;
        case 0x3e2e48u: goto label_3e2e48;
        case 0x3e2e4cu: goto label_3e2e4c;
        case 0x3e2e50u: goto label_3e2e50;
        case 0x3e2e54u: goto label_3e2e54;
        case 0x3e2e58u: goto label_3e2e58;
        case 0x3e2e5cu: goto label_3e2e5c;
        case 0x3e2e60u: goto label_3e2e60;
        case 0x3e2e64u: goto label_3e2e64;
        case 0x3e2e68u: goto label_3e2e68;
        case 0x3e2e6cu: goto label_3e2e6c;
        case 0x3e2e70u: goto label_3e2e70;
        case 0x3e2e74u: goto label_3e2e74;
        default: break;
    }

    ctx->pc = 0x3e2de0u;

label_3e2de0:
    // 0x3e2de0: 0x27bdfcd0  addiu       $sp, $sp, -0x330
    ctx->pc = 0x3e2de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966480));
label_3e2de4:
    // 0x3e2de4: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x3e2de4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e2de8:
    // 0x3e2de8: 0x7fb00320  sq          $s0, 0x320($sp)
    ctx->pc = 0x3e2de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 800), GPR_VEC(ctx, 16));
label_3e2dec:
    // 0x3e2dec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e2decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3e2df0:
    // 0x3e2df0: 0x7fb10310  sq          $s1, 0x310($sp)
    ctx->pc = 0x3e2df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 784), GPR_VEC(ctx, 17));
label_3e2df4:
    // 0x3e2df4: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_3e2df8:
    if (ctx->pc == 0x3E2DF8u) {
        ctx->pc = 0x3E2DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2DF4u;
        // 0x3e2df8: 0xffbf0300  sd          $ra, 0x300($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 768), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E2DFCu;
        goto label_3e2dfc;
    }
    ctx->pc = 0x3E2DF4u;
    {
        const bool branch_taken_0x3e2df4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E2DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2DF4u;
        // 0x3e2df8: 0xffbf0300  sd          $ra, 0x300($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 768), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2df4) {
            ctx->pc = 0x3E2E04u;
            goto label_3e2e04;
        }
    }
    ctx->pc = 0x3E2DFCu;
label_3e2dfc:
    // 0x3e2dfc: 0x10000005  b           . + 4 + (0x5 << 2)
label_3e2e00:
    if (ctx->pc == 0x3E2E00u) {
        ctx->pc = 0x3E2E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2DFCu;
        // 0x3e2e00: 0x24110190  addiu       $s1, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E2E04u;
        goto label_3e2e04;
    }
    ctx->pc = 0x3E2DFCu;
    {
        const bool branch_taken_0x3e2dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2DFCu;
        // 0x3e2e00: 0x24110190  addiu       $s1, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2dfc) {
            ctx->pc = 0x3E2E14u;
            goto label_3e2e14;
        }
    }
    ctx->pc = 0x3E2E04u;
label_3e2e04:
    // 0x3e2e04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e2e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e2e08:
    // 0x3e2e08: 0x14820016  bne         $a0, $v0, . + 4 + (0x16 << 2)
label_3e2e0c:
    if (ctx->pc == 0x3E2E0Cu) {
        ctx->pc = 0x3E2E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2E08u;
        // 0x3e2e0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E2E10u;
        goto label_3e2e10;
    }
    ctx->pc = 0x3E2E08u;
    {
        const bool branch_taken_0x3e2e08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E2E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2E08u;
        // 0x3e2e0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2e08) {
            ctx->pc = 0x3E2E64u;
            goto label_3e2e64;
        }
    }
    ctx->pc = 0x3E2E10u;
label_3e2e10:
    // 0x3e2e10: 0x24110300  addiu       $s1, $zero, 0x300
    ctx->pc = 0x3e2e10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
label_3e2e14:
    // 0x3e2e14: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_3e2e18:
    if (ctx->pc == 0x3E2E18u) {
        ctx->pc = 0x3E2E1Cu;
        goto label_3e2e1c;
    }
    ctx->pc = 0x3E2E14u;
    {
        const bool branch_taken_0x3e2e14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e2e14) {
            ctx->pc = 0x3E2E40u;
            goto label_3e2e40;
        }
    }
    ctx->pc = 0x3E2E1Cu;
label_3e2e1c:
    // 0x3e2e1c: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_3e2e20:
    if (ctx->pc == 0x3E2E20u) {
        ctx->pc = 0x3E2E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2E1Cu;
        // 0x3e2e20: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E2E24u;
        goto label_3e2e24;
    }
    ctx->pc = 0x3E2E1Cu;
    {
        const bool branch_taken_0x3e2e1c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2E1Cu;
        // 0x3e2e20: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2e1c) {
            ctx->pc = 0x3E2E2Cu;
            goto label_3e2e2c;
        }
    }
    ctx->pc = 0x3E2E24u;
label_3e2e24:
    // 0x3e2e24: 0x10000002  b           . + 4 + (0x2 << 2)
label_3e2e28:
    if (ctx->pc == 0x3E2E28u) {
        ctx->pc = 0x3E2E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2E24u;
        // 0x3e2e28: 0xafa602e8  sw          $a2, 0x2E8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 744), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E2E2Cu;
        goto label_3e2e2c;
    }
    ctx->pc = 0x3E2E24u;
    {
        const bool branch_taken_0x3e2e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2E24u;
        // 0x3e2e28: 0xafa602e8  sw          $a2, 0x2E8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 744), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2e24) {
            ctx->pc = 0x3E2E30u;
            goto label_3e2e30;
        }
    }
    ctx->pc = 0x3E2E2Cu;
label_3e2e2c:
    // 0x3e2e2c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3e2e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e2e30:
    // 0x3e2e30: 0x60f809  jalr        $v1
label_3e2e34:
    if (ctx->pc == 0x3E2E34u) {
        ctx->pc = 0x3E2E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2E30u;
        // 0x3e2e34: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E2E38u;
        goto label_3e2e38;
    }
    ctx->pc = 0x3E2E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3E2E38u);
        ctx->pc = 0x3E2E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2E30u;
        // 0x3e2e34: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E2E30u, 0x3E2E38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E2E38u;
label_3e2e38:
    // 0x3e2e38: 0x10000004  b           . + 4 + (0x4 << 2)
label_3e2e3c:
    if (ctx->pc == 0x3E2E3Cu) {
        ctx->pc = 0x3E2E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2E38u;
        // 0x3e2e3c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E2E40u;
        goto label_3e2e40;
    }
    ctx->pc = 0x3E2E38u;
    {
        const bool branch_taken_0x3e2e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2E38u;
        // 0x3e2e3c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2e38) {
            ctx->pc = 0x3E2E4Cu;
            goto label_3e2e4c;
        }
    }
    ctx->pc = 0x3E2E40u;
label_3e2e40:
    // 0x3e2e40: 0xc0bb484  jal         func_2ED210
label_3e2e44:
    if (ctx->pc == 0x3E2E44u) {
        ctx->pc = 0x3E2E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2E40u;
        // 0x3e2e44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E2E48u;
        goto label_3e2e48;
    }
    ctx->pc = 0x3E2E40u;
    SET_GPR_U32(ctx, 31, 0x3E2E48u);
    ctx->pc = 0x3E2E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2E40u;
    // 0x3e2e44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED210u, 0x3E2E40u, 0x3E2E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2E48u;
label_3e2e48:
    // 0x3e2e48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3e2e48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e2e4c:
    // 0x3e2e4c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_3e2e50:
    if (ctx->pc == 0x3E2E50u) {
        ctx->pc = 0x3E2E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2E4Cu;
        // 0x3e2e50: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E2E54u;
        goto label_3e2e54;
    }
    ctx->pc = 0x3E2E4Cu;
    {
        const bool branch_taken_0x3e2e4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2E4Cu;
        // 0x3e2e50: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2e4c) {
            ctx->pc = 0x3E2E60u;
            goto label_3e2e60;
        }
    }
    ctx->pc = 0x3E2E54u;
label_3e2e54:
    // 0x3e2e54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e2e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e2e58:
    // 0x3e2e58: 0xc0bb7e6  jal         func_2EDF98
label_3e2e5c:
    if (ctx->pc == 0x3E2E5Cu) {
        ctx->pc = 0x3E2E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2E58u;
        // 0x3e2e5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E2E60u;
        goto label_3e2e60;
    }
    ctx->pc = 0x3E2E58u;
    SET_GPR_U32(ctx, 31, 0x3E2E60u);
    ctx->pc = 0x3E2E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2E58u;
    // 0x3e2e5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x3E2E58u, 0x3E2E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2E60u;
label_3e2e60:
    // 0x3e2e60: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3e2e60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e2e64:
    // 0x3e2e64: 0x7bb00320  lq          $s0, 0x320($sp)
    ctx->pc = 0x3e2e64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 800)));
label_3e2e68:
    // 0x3e2e68: 0x7bb10310  lq          $s1, 0x310($sp)
    ctx->pc = 0x3e2e68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 784)));
label_3e2e6c:
    // 0x3e2e6c: 0xdfbf0300  ld          $ra, 0x300($sp)
    ctx->pc = 0x3e2e6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 768)));
label_3e2e70:
    // 0x3e2e70: 0x3e00008  jr          $ra
label_3e2e74:
    if (ctx->pc == 0x3E2E74u) {
        ctx->pc = 0x3E2E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2E70u;
        // 0x3e2e74: 0x27bd0330  addiu       $sp, $sp, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E2E78u;
        goto label_fallthrough_0x3e2e70;
    }
    ctx->pc = 0x3E2E70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E2E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2E70u;
        // 0x3e2e74: 0x27bd0330  addiu       $sp, $sp, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E2E70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3e2e70:
    ctx->pc = 0x3E2E78u;
}
