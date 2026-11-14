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

// Function: sub_003C8E28
// Address: 0x3c8e28 - 0x3c94c8
void sub_003C8E28_0x3c8e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C8E28_0x3c8e28");
#endif

    switch (ctx->pc) {
        case 0x3c8e58u: goto label_3c8e58;
        case 0x3c8e68u: goto label_3c8e68;
        case 0x3c8e70u: goto label_3c8e70;
        case 0x3c8e7cu: goto label_3c8e7c;
        case 0x3c8e94u: goto label_3c8e94;
        case 0x3c8ec0u: goto label_3c8ec0;
        case 0x3c8ec8u: goto label_3c8ec8;
        case 0x3c8ee4u: goto label_3c8ee4;
        case 0x3c8efcu: goto label_3c8efc;
        case 0x3c8f18u: goto label_3c8f18;
        case 0x3c9048u: goto label_3c9048;
        case 0x3c92a0u: goto label_3c92a0;
        case 0x3c9460u: goto label_3c9460;
        default: break;
    }

    ctx->pc = 0x3c8e28u;

    // 0x3c8e28: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3c8e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3c8e2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c8e2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c8e30: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3c8e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3c8e34: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3c8e34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c8e38: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3c8e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x3c8e3c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3c8e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x3c8e40: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3c8e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c8e44: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3c8e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x3c8e48: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3c8e48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c8e4c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3c8e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3c8e50: 0xc0f4df6  jal         func_3D37D8
    ctx->pc = 0x3C8E50u;
    SET_GPR_U32(ctx, 31, 0x3C8E58u);
    ctx->pc = 0x3C8E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8E50u;
    // 0x3c8e54: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D37D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D37D8u, 0x3C8E50u, 0x3C8E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8E58u;
label_3c8e58:
    // 0x3c8e58: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x3c8e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x3c8e5c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3C8E5Cu;
    {
        const bool branch_taken_0x3c8e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8E5Cu;
        // 0x3c8e60: 0x3c12003d  lui         $s2, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8e5c) {
            ctx->pc = 0x3C8EA8u;
            goto label_3c8ea8;
        }
    }
    ctx->pc = 0x3C8E64u;
    // 0x3c8e64: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3c8e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3c8e68:
    // 0x3c8e68: 0xc1036da  jal         func_40DB68
    ctx->pc = 0x3C8E68u;
    SET_GPR_U32(ctx, 31, 0x3C8E70u);
    ctx->pc = 0x3C8E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8E68u;
    // 0x3c8e6c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3C8E68u, 0x3C8E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8E70u;
label_3c8e70:
    // 0x3c8e70: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x3c8e70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3c8e74: 0xc0f5314  jal         func_3D4C50
    ctx->pc = 0x3C8E74u;
    SET_GPR_U32(ctx, 31, 0x3C8E7Cu);
    ctx->pc = 0x3C8E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8E74u;
    // 0x3c8e78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4C50u, 0x3C8E74u, 0x3C8E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8E7Cu;
label_3c8e7c:
    // 0x3c8e7c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3c8e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3c8e80: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C8E80u;
    {
        const bool branch_taken_0x3c8e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8E80u;
        // 0x3c8e84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8e80) {
            ctx->pc = 0x3C8E94u;
            goto label_3c8e94;
        }
    }
    ctx->pc = 0x3C8E88u;
    // 0x3c8e88: 0x26459528  addiu       $a1, $s2, -0x6AD8
    ctx->pc = 0x3c8e88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294939944));
    // 0x3c8e8c: 0xc0e6390  jal         func_398E40
    ctx->pc = 0x3C8E8Cu;
    SET_GPR_U32(ctx, 31, 0x3C8E94u);
    ctx->pc = 0x3C8E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8E8Cu;
    // 0x3c8e90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398E40u, 0x3C8E8Cu, 0x3C8E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8E94u;
label_3c8e94:
    // 0x3c8e94: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x3c8e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x3c8e98: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3c8e98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3c8e9c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x3c8e9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3c8ea0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x3C8EA0u;
    {
        const bool branch_taken_0x3c8ea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C8EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8EA0u;
        // 0x3c8ea4: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8ea0) {
            ctx->pc = 0x3C8E68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c8e68;
        }
    }
    ctx->pc = 0x3C8EA8u;
label_3c8ea8:
    // 0x3c8ea8: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x3c8ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3c8eac: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3C8EACu;
    {
        const bool branch_taken_0x3c8eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8EACu;
        // 0x3c8eb0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8eac) {
            ctx->pc = 0x3C8F10u;
            goto label_3c8f10;
        }
    }
    ctx->pc = 0x3C8EB4u;
    // 0x3c8eb4: 0x3c12003d  lui         $s2, 0x3D
    ctx->pc = 0x3c8eb4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)61 << 16));
    // 0x3c8eb8: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x3c8eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3c8ebc: 0x0  nop
    ctx->pc = 0x3c8ebcu;
    // NOP
label_3c8ec0:
    // 0x3c8ec0: 0xc1036da  jal         func_40DB68
    ctx->pc = 0x3C8EC0u;
    SET_GPR_U32(ctx, 31, 0x3C8EC8u);
    ctx->pc = 0x3C8EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8EC0u;
    // 0x3c8ec4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3C8EC0u, 0x3C8EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8EC8u;
label_3c8ec8:
    // 0x3c8ec8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x3c8ec8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3c8ecc: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x3c8eccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3c8ed0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3c8ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x3c8ed4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3C8ED4u;
    {
        const bool branch_taken_0x3c8ed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8ED4u;
        // 0x3c8ed8: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8ed4) {
            ctx->pc = 0x3C8F00u;
            goto label_3c8f00;
        }
    }
    ctx->pc = 0x3C8EDCu;
    // 0x3c8edc: 0xc0f52f8  jal         func_3D4BE0
    ctx->pc = 0x3C8EDCu;
    SET_GPR_U32(ctx, 31, 0x3C8EE4u);
    ctx->pc = 0x3C8EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8EDCu;
    // 0x3c8ee0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4BE0u, 0x3C8EDCu, 0x3C8EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8EE4u;
label_3c8ee4:
    // 0x3c8ee4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3c8ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3c8ee8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C8EE8u;
    {
        const bool branch_taken_0x3c8ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8EE8u;
        // 0x3c8eec: 0x264594c8  addiu       $a1, $s2, -0x6B38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294939848));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8ee8) {
            ctx->pc = 0x3C8EFCu;
            goto label_3c8efc;
        }
    }
    ctx->pc = 0x3C8EF0u;
    // 0x3c8ef0: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x3c8ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3c8ef4: 0xc0e3396  jal         func_38CE58
    ctx->pc = 0x3C8EF4u;
    SET_GPR_U32(ctx, 31, 0x3C8EFCu);
    ctx->pc = 0x3C8EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8EF4u;
    // 0x3c8ef8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CE58u, 0x3C8EF4u, 0x3C8EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8EFCu;
label_3c8efc:
    // 0x3c8efc: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x3c8efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_3c8f00:
    // 0x3c8f00: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3c8f00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3c8f04: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x3c8f04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3c8f08: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x3C8F08u;
    {
        const bool branch_taken_0x3c8f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C8F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8F08u;
        // 0x3c8f0c: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8f08) {
            ctx->pc = 0x3C8EC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c8ec0;
        }
    }
    ctx->pc = 0x3C8F10u;
label_3c8f10:
    // 0x3c8f10: 0xc0f5238  jal         func_3D48E0
    ctx->pc = 0x3C8F10u;
    SET_GPR_U32(ctx, 31, 0x3C8F18u);
    ctx->pc = 0x3C8F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8F10u;
    // 0x3c8f14: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D48E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D48E0u, 0x3C8F10u, 0x3C8F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8F18u;
label_3c8f18:
    // 0x3c8f18: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3c8f18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c8f1c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3c8f1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3c8f20: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3c8f20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3c8f24: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3c8f24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3c8f28: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3c8f28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c8f2c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3c8f2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c8f30: 0x3e00008  jr          $ra
    ctx->pc = 0x3C8F30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C8F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8F30u;
        // 0x3c8f34: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C8F30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C8F38u;
    // 0x3c8f38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3c8f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3c8f3c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3c8f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x3c8f40: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x3c8f40u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c8f44: 0xc78b8104  lwc1        $f11, -0x7EFC($gp)
    ctx->pc = 0x3c8f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934788)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x3c8f48: 0x2447c748  addiu       $a3, $v0, -0x38B8
    ctx->pc = 0x3c8f48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952776));
    // 0x3c8f4c: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x3c8f4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x3c8f50: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x3c8f50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x3c8f54: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x3c8f54u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5FC750u));
    // 0x3c8f58: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x3c8f58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3c8f5c: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x3c8f5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3c8f60: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x3c8f60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x3c8f64: 0x10a0008a  beqz        $a1, . + 4 + (0x8A << 2)
    ctx->pc = 0x3C8F64u;
    {
        const bool branch_taken_0x3c8f64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8F64u;
        // 0x3c8f68: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8f64) {
            ctx->pc = 0x3C9190u;
            goto label_3c9190;
        }
    }
    ctx->pc = 0x3C8F6Cu;
    // 0x3c8f6c: 0xc7a80000  lwc1        $f8, 0x0($sp)
    ctx->pc = 0x3c8f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x3c8f70: 0x180302d  daddu       $a2, $t4, $zero
    ctx->pc = 0x3c8f70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c8f74: 0xc7a70004  lwc1        $f7, 0x4($sp)
    ctx->pc = 0x3c8f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x3c8f78: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x3c8f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3c8f7c: 0x44805000  mtc1        $zero, $f10
    ctx->pc = 0x3c8f7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x3c8f80: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x3c8f80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x3c8f84: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x3c8f84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x3c8f88: 0x18a00003  blez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C8F88u;
    {
        const bool branch_taken_0x3c8f88 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x3C8F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8F88u;
        // 0x3c8f8c: 0xc7a60008  lwc1        $f6, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8f88) {
            ctx->pc = 0x3C8F98u;
            goto label_3c8f98;
        }
    }
    ctx->pc = 0x3C8F90u;
    // 0x3c8f90: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x3C8F90u;
    {
        const bool branch_taken_0x3c8f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8F90u;
        // 0x3c8f94: 0xc0502d  daddu       $t2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8f90) {
            ctx->pc = 0x3C903Cu;
            goto label_3c903c;
        }
    }
    ctx->pc = 0x3C8F98u;
label_3c8f98:
    // 0x3c8f98: 0x91820003  lbu         $v0, 0x3($t4)
    ctx->pc = 0x3c8f98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 3)));
    // 0x3c8f9c: 0x50400023  beql        $v0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x3C8F9Cu;
    {
        const bool branch_taken_0x3c8f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c8f9c) {
            ctx->pc = 0x3C8FA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C8F9Cu;
            // 0x3c8fa0: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C902Cu;
            goto label_3c902c;
        }
    }
    ctx->pc = 0x3C8FA4u;
    // 0x3c8fa4: 0x91820000  lbu         $v0, 0x0($t4)
    ctx->pc = 0x3c8fa4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x3c8fa8: 0x91840001  lbu         $a0, 0x1($t4)
    ctx->pc = 0x3c8fa8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 1)));
    // 0x3c8fac: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x3c8facu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x3c8fb0: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x3c8fb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x3c8fb4: 0x91830002  lbu         $v1, 0x2($t4)
    ctx->pc = 0x3c8fb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 2)));
    // 0x3c8fb8: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x3c8fb8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3c8fbc: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x3c8fbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x3c8fc0: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x3c8fc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3c8fc4: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x3c8fc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x3c8fc8: 0x46082802  mul.s       $f0, $f5, $f8
    ctx->pc = 0x3c8fc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[8]);
    // 0x3c8fcc: 0x46071842  mul.s       $f1, $f3, $f7
    ctx->pc = 0x3c8fccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x3c8fd0: 0x46062082  mul.s       $f2, $f4, $f6
    ctx->pc = 0x3c8fd0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x3c8fd4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3c8fd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3c8fd8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3c8fd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3c8fdc: 0x46005034  c.lt.s      $f10, $f0
    ctx->pc = 0x3c8fdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[10], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c8fe0: 0x0  nop
    ctx->pc = 0x3c8fe0u;
    // NOP
    // 0x3c8fe4: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x3C8FE4u;
    {
        const bool branch_taken_0x3c8fe4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C8FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8FE4u;
        // 0x3c8fe8: 0x46002806  mov.s       $f0, $f5 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8fe4) {
            ctx->pc = 0x3C9018u;
            goto label_3c9018;
        }
    }
    ctx->pc = 0x3C8FECu;
    // 0x3c8fec: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x3c8fecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c8ff0: 0x0  nop
    ctx->pc = 0x3c8ff0u;
    // NOP
    // 0x3c8ff4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3C8FF4u;
    {
        const bool branch_taken_0x3c8ff4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c8ff4) {
            ctx->pc = 0x3C8FF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C8FF4u;
            // 0x3c8ff8: 0x46001806  mov.s       $f0, $f3 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C8FFCu;
            goto label_3c8ffc;
        }
    }
    ctx->pc = 0x3C8FFCu;
label_3c8ffc:
    // 0x3c8ffc: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x3c8ffcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c9000: 0x0  nop
    ctx->pc = 0x3c9000u;
    // NOP
    // 0x3c9004: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3C9004u;
    {
        const bool branch_taken_0x3c9004 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c9004) {
            ctx->pc = 0x3C9008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C9004u;
            // 0x3c9008: 0x46002006  mov.s       $f0, $f4 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C900Cu;
            goto label_3c900c;
        }
    }
    ctx->pc = 0x3C900Cu;
label_3c900c:
    // 0x3c900c: 0x460b0002  mul.s       $f0, $f0, $f11
    ctx->pc = 0x3c900cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[11]);
    // 0x3c9010: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3C9010u;
    {
        const bool branch_taken_0x3c9010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C9014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9010u;
        // 0x3c9014: 0x46090000  add.s       $f0, $f0, $f9 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9010) {
            ctx->pc = 0x3C901Cu;
            goto label_3c901c;
        }
    }
    ctx->pc = 0x3C9018u;
label_3c9018:
    // 0x3c9018: 0x46004806  mov.s       $f0, $f9
    ctx->pc = 0x3c9018u;
    ctx->f[0] = FPU_MOV_S(ctx->f[9]);
label_3c901c:
    // 0x3c901c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c901cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3c9020: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3c9020u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3c9024: 0xa0c20003  sb          $v0, 0x3($a2)
    ctx->pc = 0x3c9024u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x3c9028: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x3c9028u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_3c902c:
    // 0x3c902c: 0x165102b  sltu        $v0, $t3, $a1
    ctx->pc = 0x3c902cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x3c9030: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x3C9030u;
    {
        const bool branch_taken_0x3c9030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C9034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9030u;
        // 0x3c9034: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9030) {
            ctx->pc = 0x3C9190u;
            goto label_3c9190;
        }
    }
    ctx->pc = 0x3C9038u;
    // 0x3c9038: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x3c9038u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3c903c:
    // 0x3c903c: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x3c903cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c9040: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x3c9040u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c9044: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x3c9044u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3c9048:
    // 0x3c9048: 0x90e20003  lbu         $v0, 0x3($a3)
    ctx->pc = 0x3c9048u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x3c904c: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x3C904Cu;
    {
        const bool branch_taken_0x3c904c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c904c) {
            ctx->pc = 0x3C9050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C904Cu;
            // 0x3c9050: 0x90e20007  lbu         $v0, 0x7($a3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C90E0u;
            goto label_3c90e0;
        }
    }
    ctx->pc = 0x3C9054u;
    // 0x3c9054: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3c9054u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3c9058: 0x91240001  lbu         $a0, 0x1($t1)
    ctx->pc = 0x3c9058u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x3c905c: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x3c905cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x3c9060: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x3c9060u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x3c9064: 0x91430002  lbu         $v1, 0x2($t2)
    ctx->pc = 0x3c9064u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 2)));
    // 0x3c9068: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x3c9068u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3c906c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x3c906cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x3c9070: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x3c9070u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3c9074: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x3c9074u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x3c9078: 0x46082802  mul.s       $f0, $f5, $f8
    ctx->pc = 0x3c9078u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[8]);
    // 0x3c907c: 0x46071842  mul.s       $f1, $f3, $f7
    ctx->pc = 0x3c907cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x3c9080: 0x46062082  mul.s       $f2, $f4, $f6
    ctx->pc = 0x3c9080u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x3c9084: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3c9084u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3c9088: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3c9088u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3c908c: 0x46005034  c.lt.s      $f10, $f0
    ctx->pc = 0x3c908cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[10], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c9090: 0x0  nop
    ctx->pc = 0x3c9090u;
    // NOP
    // 0x3c9094: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x3C9094u;
    {
        const bool branch_taken_0x3c9094 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C9098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9094u;
        // 0x3c9098: 0x46002806  mov.s       $f0, $f5 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9094) {
            ctx->pc = 0x3C90C8u;
            goto label_3c90c8;
        }
    }
    ctx->pc = 0x3C909Cu;
    // 0x3c909c: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x3c909cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c90a0: 0x0  nop
    ctx->pc = 0x3c90a0u;
    // NOP
    // 0x3c90a4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3C90A4u;
    {
        const bool branch_taken_0x3c90a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c90a4) {
            ctx->pc = 0x3C90A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C90A4u;
            // 0x3c90a8: 0x46001806  mov.s       $f0, $f3 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C90ACu;
            goto label_3c90ac;
        }
    }
    ctx->pc = 0x3C90ACu;
label_3c90ac:
    // 0x3c90ac: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x3c90acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c90b0: 0x0  nop
    ctx->pc = 0x3c90b0u;
    // NOP
    // 0x3c90b4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3C90B4u;
    {
        const bool branch_taken_0x3c90b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c90b4) {
            ctx->pc = 0x3C90B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C90B4u;
            // 0x3c90b8: 0x46002006  mov.s       $f0, $f4 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C90BCu;
            goto label_3c90bc;
        }
    }
    ctx->pc = 0x3C90BCu;
label_3c90bc:
    // 0x3c90bc: 0x460b0002  mul.s       $f0, $f0, $f11
    ctx->pc = 0x3c90bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[11]);
    // 0x3c90c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3C90C0u;
    {
        const bool branch_taken_0x3c90c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C90C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C90C0u;
        // 0x3c90c4: 0x46090000  add.s       $f0, $f0, $f9 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c90c0) {
            ctx->pc = 0x3C90D0u;
            goto label_3c90d0;
        }
    }
    ctx->pc = 0x3C90C8u;
label_3c90c8:
    // 0x3c90c8: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x3c90c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x3c90cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3c90ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c90d0:
    // 0x3c90d0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c90d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3c90d4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3c90d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3c90d8: 0xa0c20003  sb          $v0, 0x3($a2)
    ctx->pc = 0x3c90d8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x3c90dc: 0x90e20007  lbu         $v0, 0x7($a3)
    ctx->pc = 0x3c90dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 7)));
label_3c90e0:
    // 0x3c90e0: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x3C90E0u;
    {
        const bool branch_taken_0x3c90e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c90e0) {
            ctx->pc = 0x3C90E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C90E0u;
            // 0x3c90e4: 0x256b0002  addiu       $t3, $t3, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C9174u;
            goto label_3c9174;
        }
    }
    ctx->pc = 0x3C90E8u;
    // 0x3c90e8: 0x91020004  lbu         $v0, 0x4($t0)
    ctx->pc = 0x3c90e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x3c90ec: 0x91240005  lbu         $a0, 0x5($t1)
    ctx->pc = 0x3c90ecu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 5)));
    // 0x3c90f0: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x3c90f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x3c90f4: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x3c90f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x3c90f8: 0x91430006  lbu         $v1, 0x6($t2)
    ctx->pc = 0x3c90f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 6)));
    // 0x3c90fc: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x3c90fcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3c9100: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x3c9100u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x3c9104: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x3c9104u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3c9108: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x3c9108u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x3c910c: 0x46082802  mul.s       $f0, $f5, $f8
    ctx->pc = 0x3c910cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[8]);
    // 0x3c9110: 0x46071842  mul.s       $f1, $f3, $f7
    ctx->pc = 0x3c9110u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x3c9114: 0x46062082  mul.s       $f2, $f4, $f6
    ctx->pc = 0x3c9114u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x3c9118: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3c9118u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3c911c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3c911cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3c9120: 0x46005034  c.lt.s      $f10, $f0
    ctx->pc = 0x3c9120u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[10], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c9124: 0x0  nop
    ctx->pc = 0x3c9124u;
    // NOP
    // 0x3c9128: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x3C9128u;
    {
        const bool branch_taken_0x3c9128 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C912Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9128u;
        // 0x3c912c: 0x46002806  mov.s       $f0, $f5 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9128) {
            ctx->pc = 0x3C915Cu;
            goto label_3c915c;
        }
    }
    ctx->pc = 0x3C9130u;
    // 0x3c9130: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x3c9130u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c9134: 0x0  nop
    ctx->pc = 0x3c9134u;
    // NOP
    // 0x3c9138: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3C9138u;
    {
        const bool branch_taken_0x3c9138 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c9138) {
            ctx->pc = 0x3C913Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C9138u;
            // 0x3c913c: 0x46001806  mov.s       $f0, $f3 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C9140u;
            goto label_3c9140;
        }
    }
    ctx->pc = 0x3C9140u;
label_3c9140:
    // 0x3c9140: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x3c9140u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c9144: 0x0  nop
    ctx->pc = 0x3c9144u;
    // NOP
    // 0x3c9148: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3C9148u;
    {
        const bool branch_taken_0x3c9148 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c9148) {
            ctx->pc = 0x3C914Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C9148u;
            // 0x3c914c: 0x46002006  mov.s       $f0, $f4 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C9150u;
            goto label_3c9150;
        }
    }
    ctx->pc = 0x3C9150u;
label_3c9150:
    // 0x3c9150: 0x460b0002  mul.s       $f0, $f0, $f11
    ctx->pc = 0x3c9150u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[11]);
    // 0x3c9154: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3C9154u;
    {
        const bool branch_taken_0x3c9154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C9158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9154u;
        // 0x3c9158: 0x46090000  add.s       $f0, $f0, $f9 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9154) {
            ctx->pc = 0x3C9164u;
            goto label_3c9164;
        }
    }
    ctx->pc = 0x3C915Cu;
label_3c915c:
    // 0x3c915c: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x3c915cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x3c9160: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3c9160u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c9164:
    // 0x3c9164: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c9164u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3c9168: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3c9168u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3c916c: 0xa0c20007  sb          $v0, 0x7($a2)
    ctx->pc = 0x3c916cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x3c9170: 0x256b0002  addiu       $t3, $t3, 0x2
    ctx->pc = 0x3c9170u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
label_3c9174:
    // 0x3c9174: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x3c9174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x3c9178: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x3c9178u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x3c917c: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x3c917cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x3c9180: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x3c9180u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x3c9184: 0x165102b  sltu        $v0, $t3, $a1
    ctx->pc = 0x3c9184u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x3c9188: 0x1440ffaf  bnez        $v0, . + 4 + (-0x51 << 2)
    ctx->pc = 0x3C9188u;
    {
        const bool branch_taken_0x3c9188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C918Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9188u;
        // 0x3c918c: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9188) {
            ctx->pc = 0x3C9048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c9048;
        }
    }
    ctx->pc = 0x3C9190u;
label_3c9190:
    // 0x3c9190: 0x180102d  daddu       $v0, $t4, $zero
    ctx->pc = 0x3c9190u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c9194: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C9198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9194u;
        // 0x3c9198: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C919Cu;
    // 0x3c919c: 0x0  nop
    ctx->pc = 0x3c919cu;
    // NOP
    // 0x3c91a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3c91a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3c91a4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3c91a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x3c91a8: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x3c91a8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c91ac: 0xc78d8104  lwc1        $f13, -0x7EFC($gp)
    ctx->pc = 0x3c91acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934788)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3c91b0: 0x2447c748  addiu       $a3, $v0, -0x38B8
    ctx->pc = 0x3c91b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952776));
    // 0x3c91b4: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x3c91b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x3c91b8: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x3c91b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x3c91bc: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x3c91bcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5FC750u));
    // 0x3c91c0: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x3c91c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3c91c4: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x3c91c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3c91c8: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x3c91c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x3c91cc: 0x10a00080  beqz        $a1, . + 4 + (0x80 << 2)
    ctx->pc = 0x3C91CCu;
    {
        const bool branch_taken_0x3c91cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C91D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C91CCu;
        // 0x3c91d0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c91cc) {
            ctx->pc = 0x3C93D0u;
            goto label_3c93d0;
        }
    }
    ctx->pc = 0x3C91D4u;
    // 0x3c91d4: 0xc7aa0000  lwc1        $f10, 0x0($sp)
    ctx->pc = 0x3c91d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x3c91d8: 0x180302d  daddu       $a2, $t4, $zero
    ctx->pc = 0x3c91d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c91dc: 0xc7a90004  lwc1        $f9, 0x4($sp)
    ctx->pc = 0x3c91dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x3c91e0: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x3c91e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3c91e4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3c91e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3c91e8: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x3c91e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x3c91ec: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x3c91ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x3c91f0: 0x18a00003  blez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C91F0u;
    {
        const bool branch_taken_0x3c91f0 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x3C91F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C91F0u;
        // 0x3c91f4: 0xc7a80008  lwc1        $f8, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c91f0) {
            ctx->pc = 0x3C9200u;
            goto label_3c9200;
        }
    }
    ctx->pc = 0x3C91F8u;
    // 0x3c91f8: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x3C91F8u;
    {
        const bool branch_taken_0x3c91f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C91FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C91F8u;
        // 0x3c91fc: 0xc0502d  daddu       $t2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c91f8) {
            ctx->pc = 0x3C9294u;
            goto label_3c9294;
        }
    }
    ctx->pc = 0x3C9200u;
label_3c9200:
    // 0x3c9200: 0x91820003  lbu         $v0, 0x3($t4)
    ctx->pc = 0x3c9200u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 3)));
    // 0x3c9204: 0x5040001f  beql        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x3C9204u;
    {
        const bool branch_taken_0x3c9204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c9204) {
            ctx->pc = 0x3C9208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C9204u;
            // 0x3c9208: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C9284u;
            goto label_3c9284;
        }
    }
    ctx->pc = 0x3C920Cu;
    // 0x3c920c: 0x91820000  lbu         $v0, 0x0($t4)
    ctx->pc = 0x3c920cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x3c9210: 0x91840001  lbu         $a0, 0x1($t4)
    ctx->pc = 0x3c9210u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 1)));
    // 0x3c9214: 0x44823800  mtc1        $v0, $f7
    ctx->pc = 0x3c9214u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x3c9218: 0x468039e0  cvt.s.w     $f7, $f7
    ctx->pc = 0x3c9218u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[7], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
    // 0x3c921c: 0x91830002  lbu         $v1, 0x2($t4)
    ctx->pc = 0x3c921cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 2)));
    // 0x3c9220: 0x44842800  mtc1        $a0, $f5
    ctx->pc = 0x3c9220u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x3c9224: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x3c9224u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x3c9228: 0x44833000  mtc1        $v1, $f6
    ctx->pc = 0x3c9228u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x3c922c: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x3c922cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x3c9230: 0x460a3902  mul.s       $f4, $f7, $f10
    ctx->pc = 0x3c9230u;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[10]);
    // 0x3c9234: 0x46092842  mul.s       $f1, $f5, $f9
    ctx->pc = 0x3c9234u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[9]);
    // 0x3c9238: 0x46083082  mul.s       $f2, $f6, $f8
    ctx->pc = 0x3c9238u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[8]);
    // 0x3c923c: 0x46012000  add.s       $f0, $f4, $f1
    ctx->pc = 0x3c923cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x3c9240: 0x460200c0  add.s       $f3, $f0, $f2
    ctx->pc = 0x3c9240u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3c9244: 0x46036034  c.lt.s      $f12, $f3
    ctx->pc = 0x3c9244u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c9248: 0x0  nop
    ctx->pc = 0x3c9248u;
    // NOP
    // 0x3c924c: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x3C924Cu;
    {
        const bool branch_taken_0x3c924c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c924c) {
            ctx->pc = 0x3C9250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C924Cu;
            // 0x3c9250: 0x46005806  mov.s       $f0, $f11 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[11]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C9274u;
            goto label_3c9274;
        }
    }
    ctx->pc = 0x3C9254u;
    // 0x3c9254: 0x46072002  mul.s       $f0, $f4, $f7
    ctx->pc = 0x3c9254u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x3c9258: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x3c9258u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x3c925c: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x3c925cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x3c9260: 0x460368c3  div.s       $f3, $f13, $f3
    ctx->pc = 0x3c9260u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[13], ctx->f[3]); }
    // 0x3c9264: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3c9264u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3c9268: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3c9268u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3c926c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x3c926cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x3c9270: 0x460b0000  add.s       $f0, $f0, $f11
    ctx->pc = 0x3c9270u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[11]);
label_3c9274:
    // 0x3c9274: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c9274u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3c9278: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3c9278u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3c927c: 0xa0c20003  sb          $v0, 0x3($a2)
    ctx->pc = 0x3c927cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x3c9280: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x3c9280u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_3c9284:
    // 0x3c9284: 0x165102b  sltu        $v0, $t3, $a1
    ctx->pc = 0x3c9284u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x3c9288: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x3C9288u;
    {
        const bool branch_taken_0x3c9288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C928Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9288u;
        // 0x3c928c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9288) {
            ctx->pc = 0x3C93D0u;
            goto label_3c93d0;
        }
    }
    ctx->pc = 0x3C9290u;
    // 0x3c9290: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x3c9290u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3c9294:
    // 0x3c9294: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x3c9294u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c9298: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x3c9298u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c929c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x3c929cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3c92a0:
    // 0x3c92a0: 0x90e20003  lbu         $v0, 0x3($a3)
    ctx->pc = 0x3c92a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x3c92a4: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x3C92A4u;
    {
        const bool branch_taken_0x3c92a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c92a4) {
            ctx->pc = 0x3C92A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C92A4u;
            // 0x3c92a8: 0x90e20007  lbu         $v0, 0x7($a3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C932Cu;
            goto label_3c932c;
        }
    }
    ctx->pc = 0x3C92ACu;
    // 0x3c92ac: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3c92acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3c92b0: 0x91240001  lbu         $a0, 0x1($t1)
    ctx->pc = 0x3c92b0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x3c92b4: 0x44823800  mtc1        $v0, $f7
    ctx->pc = 0x3c92b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x3c92b8: 0x468039e0  cvt.s.w     $f7, $f7
    ctx->pc = 0x3c92b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[7], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
    // 0x3c92bc: 0x91430002  lbu         $v1, 0x2($t2)
    ctx->pc = 0x3c92bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 2)));
    // 0x3c92c0: 0x44842800  mtc1        $a0, $f5
    ctx->pc = 0x3c92c0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x3c92c4: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x3c92c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x3c92c8: 0x44833000  mtc1        $v1, $f6
    ctx->pc = 0x3c92c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x3c92cc: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x3c92ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x3c92d0: 0x460a3902  mul.s       $f4, $f7, $f10
    ctx->pc = 0x3c92d0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[10]);
    // 0x3c92d4: 0x46092842  mul.s       $f1, $f5, $f9
    ctx->pc = 0x3c92d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[9]);
    // 0x3c92d8: 0x46083082  mul.s       $f2, $f6, $f8
    ctx->pc = 0x3c92d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[8]);
    // 0x3c92dc: 0x46012000  add.s       $f0, $f4, $f1
    ctx->pc = 0x3c92dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x3c92e0: 0x460200c0  add.s       $f3, $f0, $f2
    ctx->pc = 0x3c92e0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3c92e4: 0x46036034  c.lt.s      $f12, $f3
    ctx->pc = 0x3c92e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c92e8: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x3C92E8u;
    {
        const bool branch_taken_0x3c92e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c92e8) {
            ctx->pc = 0x3C9314u;
            goto label_3c9314;
        }
    }
    ctx->pc = 0x3C92F0u;
    // 0x3c92f0: 0x46072002  mul.s       $f0, $f4, $f7
    ctx->pc = 0x3c92f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x3c92f4: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x3c92f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x3c92f8: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x3c92f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x3c92fc: 0x460368c3  div.s       $f3, $f13, $f3
    ctx->pc = 0x3c92fcu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[13], ctx->f[3]); }
    // 0x3c9300: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3c9300u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3c9304: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3c9304u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3c9308: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x3c9308u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x3c930c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3C930Cu;
    {
        const bool branch_taken_0x3c930c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C9310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C930Cu;
        // 0x3c9310: 0x460b0000  add.s       $f0, $f0, $f11 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[11]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c930c) {
            ctx->pc = 0x3C931Cu;
            goto label_3c931c;
        }
    }
    ctx->pc = 0x3C9314u;
label_3c9314:
    // 0x3c9314: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x3c9314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x3c9318: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3c9318u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c931c:
    // 0x3c931c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c931cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3c9320: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3c9320u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3c9324: 0xa0c20003  sb          $v0, 0x3($a2)
    ctx->pc = 0x3c9324u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x3c9328: 0x90e20007  lbu         $v0, 0x7($a3)
    ctx->pc = 0x3c9328u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 7)));
label_3c932c:
    // 0x3c932c: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x3C932Cu;
    {
        const bool branch_taken_0x3c932c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c932c) {
            ctx->pc = 0x3C9330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C932Cu;
            // 0x3c9330: 0x256b0002  addiu       $t3, $t3, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C93B4u;
            goto label_3c93b4;
        }
    }
    ctx->pc = 0x3C9334u;
    // 0x3c9334: 0x91020004  lbu         $v0, 0x4($t0)
    ctx->pc = 0x3c9334u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x3c9338: 0x91240005  lbu         $a0, 0x5($t1)
    ctx->pc = 0x3c9338u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 5)));
    // 0x3c933c: 0x44823800  mtc1        $v0, $f7
    ctx->pc = 0x3c933cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x3c9340: 0x468039e0  cvt.s.w     $f7, $f7
    ctx->pc = 0x3c9340u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[7], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
    // 0x3c9344: 0x91430006  lbu         $v1, 0x6($t2)
    ctx->pc = 0x3c9344u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 6)));
    // 0x3c9348: 0x44842800  mtc1        $a0, $f5
    ctx->pc = 0x3c9348u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x3c934c: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x3c934cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x3c9350: 0x44833000  mtc1        $v1, $f6
    ctx->pc = 0x3c9350u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x3c9354: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x3c9354u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x3c9358: 0x460a3902  mul.s       $f4, $f7, $f10
    ctx->pc = 0x3c9358u;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[10]);
    // 0x3c935c: 0x46092842  mul.s       $f1, $f5, $f9
    ctx->pc = 0x3c935cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[9]);
    // 0x3c9360: 0x46083082  mul.s       $f2, $f6, $f8
    ctx->pc = 0x3c9360u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[8]);
    // 0x3c9364: 0x46012000  add.s       $f0, $f4, $f1
    ctx->pc = 0x3c9364u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x3c9368: 0x460200c0  add.s       $f3, $f0, $f2
    ctx->pc = 0x3c9368u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3c936c: 0x46036034  c.lt.s      $f12, $f3
    ctx->pc = 0x3c936cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c9370: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x3C9370u;
    {
        const bool branch_taken_0x3c9370 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c9370) {
            ctx->pc = 0x3C939Cu;
            goto label_3c939c;
        }
    }
    ctx->pc = 0x3C9378u;
    // 0x3c9378: 0x46072002  mul.s       $f0, $f4, $f7
    ctx->pc = 0x3c9378u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x3c937c: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x3c937cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x3c9380: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x3c9380u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x3c9384: 0x460368c3  div.s       $f3, $f13, $f3
    ctx->pc = 0x3c9384u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[13], ctx->f[3]); }
    // 0x3c9388: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3c9388u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3c938c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3c938cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3c9390: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x3c9390u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x3c9394: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3C9394u;
    {
        const bool branch_taken_0x3c9394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C9398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9394u;
        // 0x3c9398: 0x460b0000  add.s       $f0, $f0, $f11 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[11]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9394) {
            ctx->pc = 0x3C93A4u;
            goto label_3c93a4;
        }
    }
    ctx->pc = 0x3C939Cu;
label_3c939c:
    // 0x3c939c: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x3c939cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x3c93a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3c93a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c93a4:
    // 0x3c93a4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c93a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3c93a8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3c93a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3c93ac: 0xa0c20007  sb          $v0, 0x7($a2)
    ctx->pc = 0x3c93acu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x3c93b0: 0x256b0002  addiu       $t3, $t3, 0x2
    ctx->pc = 0x3c93b0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
label_3c93b4:
    // 0x3c93b4: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x3c93b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x3c93b8: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x3c93b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x3c93bc: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x3c93bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x3c93c0: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x3c93c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x3c93c4: 0x165102b  sltu        $v0, $t3, $a1
    ctx->pc = 0x3c93c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x3c93c8: 0x1440ffb5  bnez        $v0, . + 4 + (-0x4B << 2)
    ctx->pc = 0x3C93C8u;
    {
        const bool branch_taken_0x3c93c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C93CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C93C8u;
        // 0x3c93cc: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c93c8) {
            ctx->pc = 0x3C92A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c92a0;
        }
    }
    ctx->pc = 0x3C93D0u;
label_3c93d0:
    // 0x3c93d0: 0x180102d  daddu       $v0, $t4, $zero
    ctx->pc = 0x3c93d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c93d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3C93D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C93D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C93D4u;
        // 0x3c93d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C93D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C93DCu;
    // 0x3c93dc: 0x0  nop
    ctx->pc = 0x3c93dcu;
    // NOP
    // 0x3c93e0: 0x10a0002f  beqz        $a1, . + 4 + (0x2F << 2)
    ctx->pc = 0x3C93E0u;
    {
        const bool branch_taken_0x3c93e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C93E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C93E0u;
        // 0x3c93e4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c93e0) {
            ctx->pc = 0x3C94A0u;
            goto label_3c94a0;
        }
    }
    ctx->pc = 0x3C93E8u;
    // 0x3c93e8: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x3c93e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3c93ec: 0x24830003  addiu       $v1, $a0, 0x3
    ctx->pc = 0x3c93ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x3c93f0: 0x18a00013  blez        $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x3C93F0u;
    {
        const bool branch_taken_0x3c93f0 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x3C93F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C93F0u;
        // 0x3c93f4: 0x30a60003  andi        $a2, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c93f0) {
            ctx->pc = 0x3C9440u;
            goto label_3c9440;
        }
    }
    ctx->pc = 0x3C93F8u;
    // 0x3c93f8: 0x50c0001a  beql        $a2, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x3C93F8u;
    {
        const bool branch_taken_0x3c93f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c93f8) {
            ctx->pc = 0x3C93FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C93F8u;
            // 0x3c93fc: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C9464u;
            goto label_3c9464;
        }
    }
    ctx->pc = 0x3C9400u;
    // 0x3c9400: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x3c9400u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3c9404: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x3C9404u;
    {
        const bool branch_taken_0x3c9404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c9404) {
            ctx->pc = 0x3C9408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C9404u;
            // 0x3c9408: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C9444u;
            goto label_3c9444;
        }
    }
    ctx->pc = 0x3C940Cu;
    // 0x3c940c: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x3c940cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3c9410: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3C9410u;
    {
        const bool branch_taken_0x3c9410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c9410) {
            ctx->pc = 0x3C9414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C9410u;
            // 0x3c9414: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C9430u;
            goto label_3c9430;
        }
    }
    ctx->pc = 0x3C9418u;
    // 0x3c9418: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x3c9418u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x3c941c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3C941Cu;
    {
        const bool branch_taken_0x3c941c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c941c) {
            ctx->pc = 0x3C9420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C941Cu;
            // 0x3c9420: 0xa0880003  sb          $t0, 0x3($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C9424u;
            goto label_3c9424;
        }
    }
    ctx->pc = 0x3C9424u;
label_3c9424:
    // 0x3c9424: 0x24830007  addiu       $v1, $a0, 0x7
    ctx->pc = 0x3c9424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
    // 0x3c9428: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3c9428u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c942c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3c942cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_3c9430:
    // 0x3c9430: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3C9430u;
    {
        const bool branch_taken_0x3c9430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c9430) {
            ctx->pc = 0x3C9434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C9430u;
            // 0x3c9434: 0xa0680000  sb          $t0, 0x0($v1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C9438u;
            goto label_3c9438;
        }
    }
    ctx->pc = 0x3C9438u;
label_3c9438:
    // 0x3c9438: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x3c9438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x3c943c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3c943cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3c9440:
    // 0x3c9440: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3c9440u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_3c9444:
    // 0x3c9444: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3C9444u;
    {
        const bool branch_taken_0x3c9444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c9444) {
            ctx->pc = 0x3C9448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C9444u;
            // 0x3c9448: 0xa0680000  sb          $t0, 0x0($v1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C944Cu;
            goto label_3c944c;
        }
    }
    ctx->pc = 0x3C944Cu;
label_3c944c:
    // 0x3c944c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3c944cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3c9450: 0xe5102b  sltu        $v0, $a3, $a1
    ctx->pc = 0x3c9450u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x3c9454: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3C9454u;
    {
        const bool branch_taken_0x3c9454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C9458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9454u;
        // 0x3c9458: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9454) {
            ctx->pc = 0x3C94A0u;
            goto label_3c94a0;
        }
    }
    ctx->pc = 0x3C945Cu;
    // 0x3c945c: 0x0  nop
    ctx->pc = 0x3c945cu;
    // NOP
label_3c9460:
    // 0x3c9460: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3c9460u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_3c9464:
    // 0x3c9464: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3C9464u;
    {
        const bool branch_taken_0x3c9464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c9464) {
            ctx->pc = 0x3C9468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C9464u;
            // 0x3c9468: 0xa0680000  sb          $t0, 0x0($v1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C946Cu;
            goto label_3c946c;
        }
    }
    ctx->pc = 0x3C946Cu;
label_3c946c:
    // 0x3c946c: 0x90620004  lbu         $v0, 0x4($v1)
    ctx->pc = 0x3c946cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3c9470: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3C9470u;
    {
        const bool branch_taken_0x3c9470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c9470) {
            ctx->pc = 0x3C9474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C9470u;
            // 0x3c9474: 0xa0680004  sb          $t0, 0x4($v1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C9478u;
            goto label_3c9478;
        }
    }
    ctx->pc = 0x3C9478u;
label_3c9478:
    // 0x3c9478: 0x90620008  lbu         $v0, 0x8($v1)
    ctx->pc = 0x3c9478u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3c947c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3C947Cu;
    {
        const bool branch_taken_0x3c947c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c947c) {
            ctx->pc = 0x3C9480u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C947Cu;
            // 0x3c9480: 0xa0680008  sb          $t0, 0x8($v1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 3), 8), (uint8_t)GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C9484u;
            goto label_3c9484;
        }
    }
    ctx->pc = 0x3C9484u;
label_3c9484:
    // 0x3c9484: 0x9062000c  lbu         $v0, 0xC($v1)
    ctx->pc = 0x3c9484u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x3c9488: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3C9488u;
    {
        const bool branch_taken_0x3c9488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c9488) {
            ctx->pc = 0x3C948Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C9488u;
            // 0x3c948c: 0xa068000c  sb          $t0, 0xC($v1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 3), 12), (uint8_t)GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C9490u;
            goto label_3c9490;
        }
    }
    ctx->pc = 0x3C9490u;
label_3c9490:
    // 0x3c9490: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x3c9490u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x3c9494: 0xe5102b  sltu        $v0, $a3, $a1
    ctx->pc = 0x3c9494u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x3c9498: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x3C9498u;
    {
        const bool branch_taken_0x3c9498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C949Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9498u;
        // 0x3c949c: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9498) {
            ctx->pc = 0x3C9460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c9460;
        }
    }
    ctx->pc = 0x3C94A0u;
label_3c94a0:
    // 0x3c94a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3C94A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C94A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C94A0u;
        // 0x3c94a4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C94A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C94A8u;
    // 0x3c94a8: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x3c94a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x3c94ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c94acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c94b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3C94B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C94B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C94B0u;
        // 0x3c94b4: 0xac64b358  sw          $a0, -0x4CA8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294947672), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C94B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C94B8u;
    // 0x3c94b8: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x3c94b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x3c94bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3C94BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C94C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C94BCu;
        // 0x3c94c0: 0x8c62b358  lw          $v0, -0x4CA8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947672)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C94BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C94C4u;
    // 0x3c94c4: 0x0  nop
    ctx->pc = 0x3c94c4u;
    // NOP
    ctx->pc = 0x3c94c8u;
}
