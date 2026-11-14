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

// Function: sub_003B3DE0
// Address: 0x3b3de0 - 0x3b3e78
void sub_003B3DE0_0x3b3de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B3DE0_0x3b3de0");
#endif

    switch (ctx->pc) {
        case 0x3b3de0u: goto label_3b3de0;
        case 0x3b3de4u: goto label_3b3de4;
        case 0x3b3de8u: goto label_3b3de8;
        case 0x3b3decu: goto label_3b3dec;
        case 0x3b3df0u: goto label_3b3df0;
        case 0x3b3df4u: goto label_3b3df4;
        case 0x3b3df8u: goto label_3b3df8;
        case 0x3b3dfcu: goto label_3b3dfc;
        case 0x3b3e00u: goto label_3b3e00;
        case 0x3b3e04u: goto label_3b3e04;
        case 0x3b3e08u: goto label_3b3e08;
        case 0x3b3e0cu: goto label_3b3e0c;
        case 0x3b3e10u: goto label_3b3e10;
        case 0x3b3e14u: goto label_3b3e14;
        case 0x3b3e18u: goto label_3b3e18;
        case 0x3b3e1cu: goto label_3b3e1c;
        case 0x3b3e20u: goto label_3b3e20;
        case 0x3b3e24u: goto label_3b3e24;
        case 0x3b3e28u: goto label_3b3e28;
        case 0x3b3e2cu: goto label_3b3e2c;
        case 0x3b3e30u: goto label_3b3e30;
        case 0x3b3e34u: goto label_3b3e34;
        case 0x3b3e38u: goto label_3b3e38;
        case 0x3b3e3cu: goto label_3b3e3c;
        case 0x3b3e40u: goto label_3b3e40;
        case 0x3b3e44u: goto label_3b3e44;
        case 0x3b3e48u: goto label_3b3e48;
        case 0x3b3e4cu: goto label_3b3e4c;
        case 0x3b3e50u: goto label_3b3e50;
        case 0x3b3e54u: goto label_3b3e54;
        case 0x3b3e58u: goto label_3b3e58;
        case 0x3b3e5cu: goto label_3b3e5c;
        case 0x3b3e60u: goto label_3b3e60;
        case 0x3b3e64u: goto label_3b3e64;
        case 0x3b3e68u: goto label_3b3e68;
        case 0x3b3e6cu: goto label_3b3e6c;
        case 0x3b3e70u: goto label_3b3e70;
        case 0x3b3e74u: goto label_3b3e74;
        default: break;
    }

    ctx->pc = 0x3b3de0u;

label_3b3de0:
    // 0x3b3de0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3b3de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3b3de4:
    // 0x3b3de4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3b3de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3b3de8:
    // 0x3b3de8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3b3de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3b3dec:
    // 0x3b3dec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b3decu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b3df0:
    // 0x3b3df0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3b3df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_3b3df4:
    // 0x3b3df4: 0x11802b  sltu        $s0, $zero, $s1
    ctx->pc = 0x3b3df4u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3b3df8:
    // 0x3b3df8: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_3b3dfc:
    if (ctx->pc == 0x3B3DFCu) {
        ctx->pc = 0x3B3DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3DF8u;
        // 0x3b3dfc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3E00u;
        goto label_3b3e00;
    }
    ctx->pc = 0x3B3DF8u;
    {
        const bool branch_taken_0x3b3df8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3DF8u;
        // 0x3b3dfc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3df8) {
            ctx->pc = 0x3B3E54u;
            goto label_3b3e54;
        }
    }
    ctx->pc = 0x3B3E00u;
label_3b3e00:
    // 0x3b3e00: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x3b3e00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_3b3e04:
    // 0x3b3e04: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x3b3e04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b3e08:
    // 0x3b3e08: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_3b3e0c:
    if (ctx->pc == 0x3B3E0Cu) {
        ctx->pc = 0x3B3E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3E08u;
        // 0x3b3e0c: 0x3c100062  lui         $s0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3E10u;
        goto label_3b3e10;
    }
    ctx->pc = 0x3B3E08u;
    {
        const bool branch_taken_0x3b3e08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3E08u;
        // 0x3b3e0c: 0x3c100062  lui         $s0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3e08) {
            ctx->pc = 0x3B3E20u;
            goto label_3b3e20;
        }
    }
    ctx->pc = 0x3B3E10u;
label_3b3e10:
    // 0x3b3e10: 0x2602e880  addiu       $v0, $s0, -0x1780
    ctx->pc = 0x3b3e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961280));
label_3b3e14:
    // 0x3b3e14: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x3b3e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_3b3e18:
    // 0x3b3e18: 0x60f809  jalr        $v1
label_3b3e1c:
    if (ctx->pc == 0x3B3E1Cu) {
        ctx->pc = 0x3B3E20u;
        goto label_3b3e20;
    }
    ctx->pc = 0x3B3E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3B3E20u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B3E18u, 0x3B3E20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B3E20u;
label_3b3e20:
    // 0x3b3e20: 0x8e2400b4  lw          $a0, 0xB4($s1)
    ctx->pc = 0x3b3e20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
label_3b3e24:
    // 0x3b3e24: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_3b3e28:
    if (ctx->pc == 0x3B3E28u) {
        ctx->pc = 0x3B3E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3E24u;
        // 0x3b3e28: 0x2603e880  addiu       $v1, $s0, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3E2Cu;
        goto label_3b3e2c;
    }
    ctx->pc = 0x3B3E24u;
    {
        const bool branch_taken_0x3b3e24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3E24u;
        // 0x3b3e28: 0x2603e880  addiu       $v1, $s0, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3e24) {
            ctx->pc = 0x3B3E3Cu;
            goto label_3b3e3c;
        }
    }
    ctx->pc = 0x3B3E2Cu;
label_3b3e2c:
    // 0x3b3e2c: 0xc0e9e5c  jal         func_3A7970
label_3b3e30:
    if (ctx->pc == 0x3B3E30u) {
        ctx->pc = 0x3B3E34u;
        goto label_3b3e34;
    }
    ctx->pc = 0x3B3E2Cu;
    SET_GPR_U32(ctx, 31, 0x3B3E34u);
    ctx->pc = 0x3A7970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7970u, 0x3B3E2Cu, 0x3B3E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3E34u;
label_3b3e34:
    // 0x3b3e34: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3b3e34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b3e38:
    // 0x3b3e38: 0x2603e880  addiu       $v1, $s0, -0x1780
    ctx->pc = 0x3b3e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961280));
label_3b3e3c:
    // 0x3b3e3c: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x3b3e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
label_3b3e40:
    // 0x3b3e40: 0x8ca4d3ac  lw          $a0, -0x2C54($a1)
    ctx->pc = 0x3b3e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294955948)));
label_3b3e44:
    // 0x3b3e44: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x3b3e44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b3e48:
    // 0x3b3e48: 0x8c62011c  lw          $v0, 0x11C($v1)
    ctx->pc = 0x3b3e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_3b3e4c:
    // 0x3b3e4c: 0x40f809  jalr        $v0
label_3b3e50:
    if (ctx->pc == 0x3B3E50u) {
        ctx->pc = 0x3B3E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3E4Cu;
        // 0x3b3e50: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3E54u;
        goto label_3b3e54;
    }
    ctx->pc = 0x3B3E4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B3E54u);
        ctx->pc = 0x3B3E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3E4Cu;
        // 0x3b3e50: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B3E4Cu, 0x3B3E54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B3E54u;
label_3b3e54:
    // 0x3b3e54: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3b3e54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b3e58:
    // 0x3b3e58: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3b3e58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b3e5c:
    // 0x3b3e5c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3b3e5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3b3e60:
    // 0x3b3e60: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3b3e60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b3e64:
    // 0x3b3e64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b3e64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b3e68:
    // 0x3b3e68: 0x3e00008  jr          $ra
label_3b3e6c:
    if (ctx->pc == 0x3B3E6Cu) {
        ctx->pc = 0x3B3E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3E68u;
        // 0x3b3e6c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3E70u;
        goto label_3b3e70;
    }
    ctx->pc = 0x3B3E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B3E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3E68u;
        // 0x3b3e6c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B3E68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B3E70u;
label_3b3e70:
    // 0x3b3e70: 0x3e00008  jr          $ra
label_3b3e74:
    if (ctx->pc == 0x3B3E74u) {
        ctx->pc = 0x3B3E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3E70u;
        // 0x3b3e74: 0x8c8200b4  lw          $v0, 0xB4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 180)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3E78u;
        goto label_fallthrough_0x3b3e70;
    }
    ctx->pc = 0x3B3E70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B3E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3E70u;
        // 0x3b3e74: 0x8c8200b4  lw          $v0, 0xB4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 180)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B3E70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3b3e70:
    ctx->pc = 0x3B3E78u;
}
