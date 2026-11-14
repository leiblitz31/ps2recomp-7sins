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

// Function: sub_00498DF8
// Address: 0x498df8 - 0x498f00
void sub_00498DF8_0x498df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00498DF8_0x498df8");
#endif

    switch (ctx->pc) {
        case 0x498df8u: goto label_498df8;
        case 0x498dfcu: goto label_498dfc;
        case 0x498e00u: goto label_498e00;
        case 0x498e04u: goto label_498e04;
        case 0x498e08u: goto label_498e08;
        case 0x498e0cu: goto label_498e0c;
        case 0x498e10u: goto label_498e10;
        case 0x498e14u: goto label_498e14;
        case 0x498e18u: goto label_498e18;
        case 0x498e1cu: goto label_498e1c;
        case 0x498e20u: goto label_498e20;
        case 0x498e24u: goto label_498e24;
        case 0x498e28u: goto label_498e28;
        case 0x498e2cu: goto label_498e2c;
        case 0x498e30u: goto label_498e30;
        case 0x498e34u: goto label_498e34;
        case 0x498e38u: goto label_498e38;
        case 0x498e3cu: goto label_498e3c;
        case 0x498e40u: goto label_498e40;
        case 0x498e44u: goto label_498e44;
        case 0x498e48u: goto label_498e48;
        case 0x498e4cu: goto label_498e4c;
        case 0x498e50u: goto label_498e50;
        case 0x498e54u: goto label_498e54;
        case 0x498e58u: goto label_498e58;
        case 0x498e5cu: goto label_498e5c;
        case 0x498e60u: goto label_498e60;
        case 0x498e64u: goto label_498e64;
        case 0x498e68u: goto label_498e68;
        case 0x498e6cu: goto label_498e6c;
        case 0x498e70u: goto label_498e70;
        case 0x498e74u: goto label_498e74;
        case 0x498e78u: goto label_498e78;
        case 0x498e7cu: goto label_498e7c;
        case 0x498e80u: goto label_498e80;
        case 0x498e84u: goto label_498e84;
        case 0x498e88u: goto label_498e88;
        case 0x498e8cu: goto label_498e8c;
        case 0x498e90u: goto label_498e90;
        case 0x498e94u: goto label_498e94;
        case 0x498e98u: goto label_498e98;
        case 0x498e9cu: goto label_498e9c;
        case 0x498ea0u: goto label_498ea0;
        case 0x498ea4u: goto label_498ea4;
        case 0x498ea8u: goto label_498ea8;
        case 0x498eacu: goto label_498eac;
        case 0x498eb0u: goto label_498eb0;
        case 0x498eb4u: goto label_498eb4;
        case 0x498eb8u: goto label_498eb8;
        case 0x498ebcu: goto label_498ebc;
        case 0x498ec0u: goto label_498ec0;
        case 0x498ec4u: goto label_498ec4;
        case 0x498ec8u: goto label_498ec8;
        case 0x498eccu: goto label_498ecc;
        case 0x498ed0u: goto label_498ed0;
        case 0x498ed4u: goto label_498ed4;
        case 0x498ed8u: goto label_498ed8;
        case 0x498edcu: goto label_498edc;
        case 0x498ee0u: goto label_498ee0;
        case 0x498ee4u: goto label_498ee4;
        case 0x498ee8u: goto label_498ee8;
        case 0x498eecu: goto label_498eec;
        case 0x498ef0u: goto label_498ef0;
        case 0x498ef4u: goto label_498ef4;
        case 0x498ef8u: goto label_498ef8;
        case 0x498efcu: goto label_498efc;
        default: break;
    }

    ctx->pc = 0x498df8u;

label_498df8:
    // 0x498df8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x498df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_498dfc:
    // 0x498dfc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x498dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_498e00:
    // 0x498e00: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x498e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_498e04:
    // 0x498e04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x498e04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_498e08:
    // 0x498e08: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x498e08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
label_498e0c:
    // 0x498e0c: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_498e10:
    if (ctx->pc == 0x498E10u) {
        ctx->pc = 0x498E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498E0Cu;
        // 0x498e10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x498E14u;
        goto label_498e14;
    }
    ctx->pc = 0x498E0Cu;
    {
        const bool branch_taken_0x498e0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x498E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498E0Cu;
        // 0x498e10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498e0c) {
            ctx->pc = 0x498E40u;
            goto label_498e40;
        }
    }
    ctx->pc = 0x498E14u;
label_498e14:
    // 0x498e14: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x498e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_498e18:
    // 0x498e18: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x498e18u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_498e1c:
    // 0x498e1c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x498e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_498e20:
    // 0x498e20: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x498e20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_498e24:
    // 0x498e24: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x498e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_498e28:
    // 0x498e28: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x498e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_498e2c:
    // 0x498e2c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x498e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_498e30:
    // 0x498e30: 0x40f809  jalr        $v0
label_498e34:
    if (ctx->pc == 0x498E34u) {
        ctx->pc = 0x498E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498E30u;
        // 0x498e34: 0x94650004  lhu         $a1, 0x4($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x498E38u;
        goto label_498e38;
    }
    ctx->pc = 0x498E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x498E38u);
        ctx->pc = 0x498E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498E30u;
        // 0x498e34: 0x94650004  lhu         $a1, 0x4($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x498E30u, 0x498E38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x498E38u;
label_498e38:
    // 0x498e38: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x498e38u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_498e3c:
    // 0x498e3c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x498e3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_498e40:
    // 0x498e40: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x498e40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_498e44:
    // 0x498e44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x498e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_498e48:
    // 0x498e48: 0x3e00008  jr          $ra
label_498e4c:
    if (ctx->pc == 0x498E4Cu) {
        ctx->pc = 0x498E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498E48u;
        // 0x498e4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x498E50u;
        goto label_498e50;
    }
    ctx->pc = 0x498E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x498E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498E48u;
        // 0x498e4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x498E48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x498E50u;
label_498e50:
    // 0x498e50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x498e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_498e54:
    // 0x498e54: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x498e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_498e58:
    // 0x498e58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x498e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_498e5c:
    // 0x498e5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x498e5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_498e60:
    // 0x498e60: 0xffa70000  sd          $a3, 0x0($sp)
    ctx->pc = 0x498e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 7));
label_498e64:
    // 0x498e64: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_498e68:
    if (ctx->pc == 0x498E68u) {
        ctx->pc = 0x498E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498E64u;
        // 0x498e68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x498E6Cu;
        goto label_498e6c;
    }
    ctx->pc = 0x498E64u;
    {
        const bool branch_taken_0x498e64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x498E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498E64u;
        // 0x498e68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498e64) {
            ctx->pc = 0x498E98u;
            goto label_498e98;
        }
    }
    ctx->pc = 0x498E6Cu;
label_498e6c:
    // 0x498e6c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x498e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_498e70:
    // 0x498e70: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x498e70u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_498e74:
    // 0x498e74: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x498e74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_498e78:
    // 0x498e78: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x498e78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_498e7c:
    // 0x498e7c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x498e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_498e80:
    // 0x498e80: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x498e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_498e84:
    // 0x498e84: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x498e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_498e88:
    // 0x498e88: 0x40f809  jalr        $v0
label_498e8c:
    if (ctx->pc == 0x498E8Cu) {
        ctx->pc = 0x498E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498E88u;
        // 0x498e8c: 0x94650004  lhu         $a1, 0x4($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x498E90u;
        goto label_498e90;
    }
    ctx->pc = 0x498E88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x498E90u);
        ctx->pc = 0x498E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498E88u;
        // 0x498e8c: 0x94650004  lhu         $a1, 0x4($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x498E88u, 0x498E90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x498E90u;
label_498e90:
    // 0x498e90: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x498e90u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_498e94:
    // 0x498e94: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x498e94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_498e98:
    // 0x498e98: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x498e98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_498e9c:
    // 0x498e9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x498e9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_498ea0:
    // 0x498ea0: 0x3e00008  jr          $ra
label_498ea4:
    if (ctx->pc == 0x498EA4u) {
        ctx->pc = 0x498EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498EA0u;
        // 0x498ea4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x498EA8u;
        goto label_498ea8;
    }
    ctx->pc = 0x498EA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x498EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498EA0u;
        // 0x498ea4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x498EA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x498EA8u;
label_498ea8:
    // 0x498ea8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x498ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_498eac:
    // 0x498eac: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x498eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_498eb0:
    // 0x498eb0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x498eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_498eb4:
    // 0x498eb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x498eb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_498eb8:
    // 0x498eb8: 0xffa70000  sd          $a3, 0x0($sp)
    ctx->pc = 0x498eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 7));
label_498ebc:
    // 0x498ebc: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_498ec0:
    if (ctx->pc == 0x498EC0u) {
        ctx->pc = 0x498EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498EBCu;
        // 0x498ec0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x498EC4u;
        goto label_498ec4;
    }
    ctx->pc = 0x498EBCu;
    {
        const bool branch_taken_0x498ebc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x498EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498EBCu;
        // 0x498ec0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498ebc) {
            ctx->pc = 0x498EF0u;
            goto label_498ef0;
        }
    }
    ctx->pc = 0x498EC4u;
label_498ec4:
    // 0x498ec4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x498ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_498ec8:
    // 0x498ec8: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x498ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_498ecc:
    // 0x498ecc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x498eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_498ed0:
    // 0x498ed0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x498ed0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_498ed4:
    // 0x498ed4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x498ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_498ed8:
    // 0x498ed8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x498ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_498edc:
    // 0x498edc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x498edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_498ee0:
    // 0x498ee0: 0x40f809  jalr        $v0
label_498ee4:
    if (ctx->pc == 0x498EE4u) {
        ctx->pc = 0x498EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498EE0u;
        // 0x498ee4: 0x94650004  lhu         $a1, 0x4($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x498EE8u;
        goto label_498ee8;
    }
    ctx->pc = 0x498EE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x498EE8u);
        ctx->pc = 0x498EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498EE0u;
        // 0x498ee4: 0x94650004  lhu         $a1, 0x4($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x498EE0u, 0x498EE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x498EE8u;
label_498ee8:
    // 0x498ee8: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x498ee8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_498eec:
    // 0x498eec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x498eecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_498ef0:
    // 0x498ef0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x498ef0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_498ef4:
    // 0x498ef4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x498ef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_498ef8:
    // 0x498ef8: 0x3e00008  jr          $ra
label_498efc:
    if (ctx->pc == 0x498EFCu) {
        ctx->pc = 0x498EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498EF8u;
        // 0x498efc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x498F00u;
        goto label_fallthrough_0x498ef8;
    }
    ctx->pc = 0x498EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x498EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498EF8u;
        // 0x498efc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x498EF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x498ef8:
    ctx->pc = 0x498F00u;
}
