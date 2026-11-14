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

// Function: sub_003A0A58
// Address: 0x3a0a58 - 0x3a0bc0
void sub_003A0A58_0x3a0a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A0A58_0x3a0a58");
#endif

    switch (ctx->pc) {
        case 0x3a0ab4u: goto label_3a0ab4;
        case 0x3a0b04u: goto label_3a0b04;
        case 0x3a0b1cu: goto label_3a0b1c;
        case 0x3a0b34u: goto label_3a0b34;
        case 0x3a0b40u: goto label_3a0b40;
        case 0x3a0b54u: goto label_3a0b54;
        case 0x3a0b68u: goto label_3a0b68;
        case 0x3a0b7cu: goto label_3a0b7c;
        case 0x3a0b90u: goto label_3a0b90;
        default: break;
    }

    ctx->pc = 0x3a0a58u;

    // 0x3a0a58: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3a0a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3a0a5c: 0x8f82bd78  lw          $v0, -0x4288($gp)
    ctx->pc = 0x3a0a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950264)));
    // 0x3a0a60: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3a0a60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0a64: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3a0a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3a0a68: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3a0a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3a0a6c: 0xa23021  addu        $a2, $a1, $v0
    ctx->pc = 0x3a0a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3a0a70: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3a0a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3a0a74: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3a0a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x3a0a78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a0a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a0a7c: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x3a0a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3a0a80: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A0A80u;
    {
        const bool branch_taken_0x3a0a80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0A80u;
        // 0x3a0a84: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0a80) {
            ctx->pc = 0x3A0AA4u;
            goto label_3a0aa4;
        }
    }
    ctx->pc = 0x3A0A88u;
    // 0x3a0a88: 0x8ca20054  lw          $v0, 0x54($a1)
    ctx->pc = 0x3a0a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x3a0a8c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x3a0a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a0a90: 0x94430004  lhu         $v1, 0x4($v0)
    ctx->pc = 0x3a0a90u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3a0a94: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A0A94u;
    {
        const bool branch_taken_0x3a0a94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3A0A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0A94u;
        // 0x3a0a98: 0xa72021  addu        $a0, $a1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0a94) {
            ctx->pc = 0x3A0AACu;
            goto label_3a0aac;
        }
    }
    ctx->pc = 0x3A0A9Cu;
    // 0x3a0a9c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3A0A9Cu;
    {
        const bool branch_taken_0x3a0a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0A9Cu;
        // 0x3a0aa0: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0a9c) {
            ctx->pc = 0x3A0AB4u;
            goto label_3a0ab4;
        }
    }
    ctx->pc = 0x3A0AA4u;
label_3a0aa4:
    // 0x3a0aa4: 0x8ca20054  lw          $v0, 0x54($a1)
    ctx->pc = 0x3a0aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x3a0aa8: 0xa72021  addu        $a0, $a1, $a3
    ctx->pc = 0x3a0aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_3a0aac:
    // 0x3a0aac: 0xc0e7eec  jal         func_39FBB0
    ctx->pc = 0x3A0AACu;
    SET_GPR_U32(ctx, 31, 0x3A0AB4u);
    ctx->pc = 0x3A0AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0AACu;
    // 0x3a0ab0: 0x94450004  lhu         $a1, 0x4($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39FBB0u, 0x3A0AACu, 0x3A0AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0AB4u;
label_3a0ab4:
    // 0x3a0ab4: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x3a0ab4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a0ab8: 0x8e530000  lw          $s3, 0x0($s2)
    ctx->pc = 0x3a0ab8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3a0abc: 0x12600037  beqz        $s3, . + 4 + (0x37 << 2)
    ctx->pc = 0x3A0ABCu;
    {
        const bool branch_taken_0x3a0abc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0ABCu;
        // 0x3a0ac0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0abc) {
            ctx->pc = 0x3A0B9Cu;
            goto label_3a0b9c;
        }
    }
    ctx->pc = 0x3A0AC4u;
    // 0x3a0ac4: 0x26500004  addiu       $s0, $s2, 0x4
    ctx->pc = 0x3a0ac4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x3a0ac8: 0x1a600015  blez        $s3, . + 4 + (0x15 << 2)
    ctx->pc = 0x3A0AC8u;
    {
        const bool branch_taken_0x3a0ac8 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x3A0ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0AC8u;
        // 0x3a0acc: 0x32630003  andi        $v1, $s3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0ac8) {
            ctx->pc = 0x3A0B20u;
            goto label_3a0b20;
        }
    }
    ctx->pc = 0x3A0AD0u;
    // 0x3a0ad0: 0x5060001c  beql        $v1, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x3A0AD0u;
    {
        const bool branch_taken_0x3a0ad0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a0ad0) {
            ctx->pc = 0x3A0AD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A0AD0u;
            // 0x3a0ad4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A0B44u;
            goto label_3a0b44;
        }
    }
    ctx->pc = 0x3A0AD8u;
    // 0x3a0ad8: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x3a0ad8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3a0adc: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x3A0ADCu;
    {
        const bool branch_taken_0x3a0adc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a0adc) {
            ctx->pc = 0x3A0AE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A0ADCu;
            // 0x3a0ae0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A0B24u;
            goto label_3a0b24;
        }
    }
    ctx->pc = 0x3A0AE4u;
    // 0x3a0ae4: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3a0ae4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3a0ae8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A0AE8u;
    {
        const bool branch_taken_0x3a0ae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a0ae8) {
            ctx->pc = 0x3A0AECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A0AE8u;
            // 0x3a0aec: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A0B0Cu;
            goto label_3a0b0c;
        }
    }
    ctx->pc = 0x3A0AF0u;
    // 0x3a0af0: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x3a0af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3a0af4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A0AF4u;
    {
        const bool branch_taken_0x3a0af4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0AF4u;
        // 0x3a0af8: 0x26500008  addiu       $s0, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0af4) {
            ctx->pc = 0x3A0B04u;
            goto label_3a0b04;
        }
    }
    ctx->pc = 0x3A0AFCu;
    // 0x3a0afc: 0xc104702  jal         func_411C08
    ctx->pc = 0x3A0AFCu;
    SET_GPR_U32(ctx, 31, 0x3A0B04u);
    ctx->pc = 0x411C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x411C08u, 0x3A0AFCu, 0x3A0B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0B04u;
label_3a0b04:
    // 0x3a0b04: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x3a0b04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a0b08: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3a0b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a0b0c:
    // 0x3a0b0c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A0B0Cu;
    {
        const bool branch_taken_0x3a0b0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0B0Cu;
        // 0x3a0b10: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0b0c) {
            ctx->pc = 0x3A0B1Cu;
            goto label_3a0b1c;
        }
    }
    ctx->pc = 0x3A0B14u;
    // 0x3a0b14: 0xc104702  jal         func_411C08
    ctx->pc = 0x3A0B14u;
    SET_GPR_U32(ctx, 31, 0x3A0B1Cu);
    ctx->pc = 0x411C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x411C08u, 0x3A0B14u, 0x3A0B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0B1Cu;
label_3a0b1c:
    // 0x3a0b1c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3a0b1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3a0b20:
    // 0x3a0b20: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3a0b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a0b24:
    // 0x3a0b24: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A0B24u;
    {
        const bool branch_taken_0x3a0b24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0B24u;
        // 0x3a0b28: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0b24) {
            ctx->pc = 0x3A0B34u;
            goto label_3a0b34;
        }
    }
    ctx->pc = 0x3A0B2Cu;
    // 0x3a0b2c: 0xc104702  jal         func_411C08
    ctx->pc = 0x3A0B2Cu;
    SET_GPR_U32(ctx, 31, 0x3A0B34u);
    ctx->pc = 0x411C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x411C08u, 0x3A0B2Cu, 0x3A0B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0B34u;
label_3a0b34:
    // 0x3a0b34: 0x233102b  sltu        $v0, $s1, $s3
    ctx->pc = 0x3a0b34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3a0b38: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3A0B38u;
    {
        const bool branch_taken_0x3a0b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0B38u;
        // 0x3a0b3c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0b38) {
            ctx->pc = 0x3A0B9Cu;
            goto label_3a0b9c;
        }
    }
    ctx->pc = 0x3A0B40u;
label_3a0b40:
    // 0x3a0b40: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3a0b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a0b44:
    // 0x3a0b44: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A0B44u;
    {
        const bool branch_taken_0x3a0b44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a0b44) {
            ctx->pc = 0x3A0B48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A0B44u;
            // 0x3a0b48: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A0B58u;
            goto label_3a0b58;
        }
    }
    ctx->pc = 0x3A0B4Cu;
    // 0x3a0b4c: 0xc104702  jal         func_411C08
    ctx->pc = 0x3A0B4Cu;
    SET_GPR_U32(ctx, 31, 0x3A0B54u);
    ctx->pc = 0x411C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x411C08u, 0x3A0B4Cu, 0x3A0B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0B54u;
label_3a0b54:
    // 0x3a0b54: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3a0b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3a0b58:
    // 0x3a0b58: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A0B58u;
    {
        const bool branch_taken_0x3a0b58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a0b58) {
            ctx->pc = 0x3A0B5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A0B58u;
            // 0x3a0b5c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A0B6Cu;
            goto label_3a0b6c;
        }
    }
    ctx->pc = 0x3A0B60u;
    // 0x3a0b60: 0xc104702  jal         func_411C08
    ctx->pc = 0x3A0B60u;
    SET_GPR_U32(ctx, 31, 0x3A0B68u);
    ctx->pc = 0x411C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x411C08u, 0x3A0B60u, 0x3A0B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0B68u;
label_3a0b68:
    // 0x3a0b68: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x3a0b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3a0b6c:
    // 0x3a0b6c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A0B6Cu;
    {
        const bool branch_taken_0x3a0b6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a0b6c) {
            ctx->pc = 0x3A0B70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A0B6Cu;
            // 0x3a0b70: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A0B80u;
            goto label_3a0b80;
        }
    }
    ctx->pc = 0x3A0B74u;
    // 0x3a0b74: 0xc104702  jal         func_411C08
    ctx->pc = 0x3A0B74u;
    SET_GPR_U32(ctx, 31, 0x3A0B7Cu);
    ctx->pc = 0x411C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x411C08u, 0x3A0B74u, 0x3A0B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0B7Cu;
label_3a0b7c:
    // 0x3a0b7c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x3a0b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3a0b80:
    // 0x3a0b80: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A0B80u;
    {
        const bool branch_taken_0x3a0b80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0B80u;
        // 0x3a0b84: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0b80) {
            ctx->pc = 0x3A0B90u;
            goto label_3a0b90;
        }
    }
    ctx->pc = 0x3A0B88u;
    // 0x3a0b88: 0xc104702  jal         func_411C08
    ctx->pc = 0x3A0B88u;
    SET_GPR_U32(ctx, 31, 0x3A0B90u);
    ctx->pc = 0x411C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x411C08u, 0x3A0B88u, 0x3A0B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0B90u;
label_3a0b90:
    // 0x3a0b90: 0x233102b  sltu        $v0, $s1, $s3
    ctx->pc = 0x3a0b90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3a0b94: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x3A0B94u;
    {
        const bool branch_taken_0x3a0b94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A0B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0B94u;
        // 0x3a0b98: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0b94) {
            ctx->pc = 0x3A0B40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a0b40;
        }
    }
    ctx->pc = 0x3A0B9Cu;
label_3a0b9c:
    // 0x3a0b9c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3a0b9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3a0ba0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a0ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a0ba4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3a0ba4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a0ba8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3a0ba8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a0bac: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3a0bacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a0bb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a0bb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a0bb4: 0x3e00008  jr          $ra
    ctx->pc = 0x3A0BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A0BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0BB4u;
        // 0x3a0bb8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A0BB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A0BBCu;
    // 0x3a0bbc: 0x0  nop
    ctx->pc = 0x3a0bbcu;
    // NOP
    ctx->pc = 0x3a0bc0u;
}
