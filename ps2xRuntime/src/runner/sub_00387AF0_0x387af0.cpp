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

// Function: sub_00387AF0
// Address: 0x387af0 - 0x387d00
void sub_00387AF0_0x387af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00387AF0_0x387af0");
#endif

    switch (ctx->pc) {
        case 0x387b18u: goto label_387b18;
        case 0x387b24u: goto label_387b24;
        case 0x387b34u: goto label_387b34;
        case 0x387b54u: goto label_387b54;
        case 0x387b7cu: goto label_387b7c;
        case 0x387ba8u: goto label_387ba8;
        case 0x387bb8u: goto label_387bb8;
        case 0x387bbcu: goto label_387bbc;
        case 0x387c48u: goto label_387c48;
        case 0x387ca4u: goto label_387ca4;
        case 0x387cc4u: goto label_387cc4;
        case 0x387cdcu: goto label_387cdc;
        default: break;
    }

    ctx->pc = 0x387af0u;

    // 0x387af0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x387af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x387af4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x387af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x387af8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x387af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x387afc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x387afcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387b00: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x387b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x387b04: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x387b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x387b08: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x387B08u;
    {
        const bool branch_taken_0x387b08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x387B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387B08u;
        // 0x387b0c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387b08) {
            ctx->pc = 0x387B44u;
            goto label_387b44;
        }
    }
    ctx->pc = 0x387B10u;
    // 0x387b10: 0xc0e28a2  jal         func_38A288
    ctx->pc = 0x387B10u;
    SET_GPR_U32(ctx, 31, 0x387B18u);
    ctx->pc = 0x38A288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A288u, 0x387B10u, 0x387B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387B18u;
label_387b18:
    // 0x387b18: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x387b18u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x387b1c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x387b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x387b20: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x387b20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_387b24:
    // 0x387b24: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x387b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x387b28: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x387b28u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x387b2c: 0xc103404  jal         func_40D010
    ctx->pc = 0x387B2Cu;
    SET_GPR_U32(ctx, 31, 0x387B34u);
    ctx->pc = 0x387B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387B2Cu;
    // 0x387b30: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x387B2Cu, 0x387B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387B34u;
label_387b34:
    // 0x387b34: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x387B34u;
    {
        const bool branch_taken_0x387b34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x387B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387B34u;
        // 0x387b38: 0x3c070003  lui         $a3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387b34) {
            ctx->pc = 0x387B64u;
            goto label_387b64;
        }
    }
    ctx->pc = 0x387B3Cu;
    // 0x387b3c: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x387B3Cu;
    {
        const bool branch_taken_0x387b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x387B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387B3Cu;
        // 0x387b40: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387b3c) {
            ctx->pc = 0x387CE8u;
            goto label_387ce8;
        }
    }
    ctx->pc = 0x387B44u;
label_387b44:
    // 0x387b44: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x387b44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x387b48: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x387b48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387b4c: 0xc104aec  jal         func_412BB0
    ctx->pc = 0x387B4Cu;
    SET_GPR_U32(ctx, 31, 0x387B54u);
    ctx->pc = 0x387B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387B4Cu;
    // 0x387b50: 0x2484ada0  addiu       $a0, $a0, -0x5260 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412BB0u, 0x387B4Cu, 0x387B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387B54u;
label_387b54:
    // 0x387b54: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x387b54u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x387b58: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x387b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x387b5c: 0x1000fff1  b           . + 4 + (-0xF << 2)
    ctx->pc = 0x387B5Cu;
    {
        const bool branch_taken_0x387b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x387B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387B5Cu;
        // 0x387b60: 0x24460028  addiu       $a2, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387b5c) {
            ctx->pc = 0x387B24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_387b24;
        }
    }
    ctx->pc = 0x387B64u;
label_387b64:
    // 0x387b64: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x387b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x387b68: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x387b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x387b6c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x387b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x387b70: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x387b70u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x387b74: 0xc103404  jal         func_40D010
    ctx->pc = 0x387B74u;
    SET_GPR_U32(ctx, 31, 0x387B7Cu);
    ctx->pc = 0x387B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387B74u;
    // 0x387b78: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x387B74u, 0x387B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387B7Cu;
label_387b7c:
    // 0x387b7c: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x387B7Cu;
    {
        const bool branch_taken_0x387b7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x387B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387B7Cu;
        // 0x387b80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387b7c) {
            ctx->pc = 0x387CECu;
            goto label_387cec;
        }
    }
    ctx->pc = 0x387B84u;
    // 0x387b84: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x387b84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x387b88: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x387b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x387b8c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x387b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x387b90: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x387B90u;
    {
        const bool branch_taken_0x387b90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x387B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387B90u;
        // 0x387b94: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387b90) {
            ctx->pc = 0x387BC4u;
            goto label_387bc4;
        }
    }
    ctx->pc = 0x387B98u;
    // 0x387b98: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x387b98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x387b9c: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x387b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x387ba0: 0xc10571c  jal         func_415C70
    ctx->pc = 0x387BA0u;
    SET_GPR_U32(ctx, 31, 0x387BA8u);
    ctx->pc = 0x387BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387BA0u;
    // 0x387ba4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415C70u, 0x387BA0u, 0x387BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387BA8u;
label_387ba8:
    // 0x387ba8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x387BA8u;
    {
        const bool branch_taken_0x387ba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x387ba8) {
            ctx->pc = 0x387BACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x387BA8u;
            // 0x387bac: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x387BC8u;
            goto label_387bc8;
        }
    }
    ctx->pc = 0x387BB0u;
    // 0x387bb0: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x387BB0u;
    {
        const bool branch_taken_0x387bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x387BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387BB0u;
        // 0x387bb4: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387bb0) {
            ctx->pc = 0x387CE8u;
            goto label_387ce8;
        }
    }
    ctx->pc = 0x387BB8u;
label_387bb8:
    // 0x387bb8: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x387bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
label_387bbc:
    // 0x387bbc: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x387BBCu;
    {
        const bool branch_taken_0x387bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x387BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387BBCu;
        // 0x387bc0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387bbc) {
            ctx->pc = 0x387C8Cu;
            goto label_387c8c;
        }
    }
    ctx->pc = 0x387BC4u;
label_387bc4:
    // 0x387bc4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x387bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_387bc8:
    // 0x387bc8: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x387BC8u;
    {
        const bool branch_taken_0x387bc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x387BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387BC8u;
        // 0x387bcc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387bc8) {
            ctx->pc = 0x387C94u;
            goto label_387c94;
        }
    }
    ctx->pc = 0x387BD0u;
    // 0x387bd0: 0x1840002d  blez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x387BD0u;
    {
        const bool branch_taken_0x387bd0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x387BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387BD0u;
        // 0x387bd4: 0x8e260018  lw          $a2, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387bd0) {
            ctx->pc = 0x387C88u;
            goto label_387c88;
        }
    }
    ctx->pc = 0x387BD8u;
    // 0x387bd8: 0x8e07000c  lw          $a3, 0xC($s0)
    ctx->pc = 0x387bd8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x387bdc: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x387bdcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387be0: 0x31050003  andi        $a1, $t0, 0x3
    ctx->pc = 0x387be0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
    // 0x387be4: 0x19000011  blez        $t0, . + 4 + (0x11 << 2)
    ctx->pc = 0x387BE4u;
    {
        const bool branch_taken_0x387be4 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x387BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387BE4u;
        // 0x387be8: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387be4) {
            ctx->pc = 0x387C2Cu;
            goto label_387c2c;
        }
    }
    ctx->pc = 0x387BECu;
    // 0x387bec: 0x50a00017  beql        $a1, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x387BECu;
    {
        const bool branch_taken_0x387bec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x387bec) {
            ctx->pc = 0x387BF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x387BECu;
            // 0x387bf0: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x387C4Cu;
            goto label_387c4c;
        }
    }
    ctx->pc = 0x387BF4u;
    // 0x387bf4: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x387bf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x387bf8: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x387BF8u;
    {
        const bool branch_taken_0x387bf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x387bf8) {
            ctx->pc = 0x387BFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x387BF8u;
            // 0x387bfc: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x387C30u;
            goto label_387c30;
        }
    }
    ctx->pc = 0x387C00u;
    // 0x387c00: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x387c00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x387c04: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x387C04u;
    {
        const bool branch_taken_0x387c04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x387c04) {
            ctx->pc = 0x387C08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x387C04u;
            // 0x387c08: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x387C20u;
            goto label_387c20;
        }
    }
    ctx->pc = 0x387C0Cu;
    // 0x387c0c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x387c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x387c10: 0x1046ffe9  beq         $v0, $a2, . + 4 + (-0x17 << 2)
    ctx->pc = 0x387C10u;
    {
        const bool branch_taken_0x387c10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x387C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387C10u;
        // 0x387c14: 0x24e30004  addiu       $v1, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387c10) {
            ctx->pc = 0x387BB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_387bb8;
        }
    }
    ctx->pc = 0x387C18u;
    // 0x387c18: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x387c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x387c1c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x387c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_387c20:
    // 0x387c20: 0x1046ffe5  beq         $v0, $a2, . + 4 + (-0x1B << 2)
    ctx->pc = 0x387C20u;
    {
        const bool branch_taken_0x387c20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x387C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387C20u;
        // 0x387c24: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387c20) {
            ctx->pc = 0x387BB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_387bb8;
        }
    }
    ctx->pc = 0x387C28u;
    // 0x387c28: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x387c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_387c2c:
    // 0x387c2c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x387c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_387c30:
    // 0x387c30: 0x5046ffe2  beql        $v0, $a2, . + 4 + (-0x1E << 2)
    ctx->pc = 0x387C30u;
    {
        const bool branch_taken_0x387c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x387c30) {
            ctx->pc = 0x387C34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x387C30u;
            // 0x387c34: 0xafa40004  sw          $a0, 0x4($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x387BBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_387bbc;
        }
    }
    ctx->pc = 0x387C38u;
    // 0x387c38: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x387c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x387c3c: 0x88102a  slt         $v0, $a0, $t0
    ctx->pc = 0x387c3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x387c40: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x387C40u;
    {
        const bool branch_taken_0x387c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x387C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387C40u;
        // 0x387c44: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387c40) {
            ctx->pc = 0x387C88u;
            goto label_387c88;
        }
    }
    ctx->pc = 0x387C48u;
label_387c48:
    // 0x387c48: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x387c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_387c4c:
    // 0x387c4c: 0x5046ffdb  beql        $v0, $a2, . + 4 + (-0x25 << 2)
    ctx->pc = 0x387C4Cu;
    {
        const bool branch_taken_0x387c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x387c4c) {
            ctx->pc = 0x387C50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x387C4Cu;
            // 0x387c50: 0xafa40004  sw          $a0, 0x4($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x387BBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_387bbc;
        }
    }
    ctx->pc = 0x387C54u;
    // 0x387c54: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x387c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x387c58: 0x1046ffd7  beq         $v0, $a2, . + 4 + (-0x29 << 2)
    ctx->pc = 0x387C58u;
    {
        const bool branch_taken_0x387c58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x387C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387C58u;
        // 0x387c5c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387c58) {
            ctx->pc = 0x387BB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_387bb8;
        }
    }
    ctx->pc = 0x387C60u;
    // 0x387c60: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x387c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x387c64: 0x1046ffd4  beq         $v0, $a2, . + 4 + (-0x2C << 2)
    ctx->pc = 0x387C64u;
    {
        const bool branch_taken_0x387c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x387C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387C64u;
        // 0x387c68: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387c64) {
            ctx->pc = 0x387BB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_387bb8;
        }
    }
    ctx->pc = 0x387C6Cu;
    // 0x387c6c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x387c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x387c70: 0x1046ffd1  beq         $v0, $a2, . + 4 + (-0x2F << 2)
    ctx->pc = 0x387C70u;
    {
        const bool branch_taken_0x387c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x387C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387C70u;
        // 0x387c74: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387c70) {
            ctx->pc = 0x387BB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_387bb8;
        }
    }
    ctx->pc = 0x387C78u;
    // 0x387c78: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x387c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x387c7c: 0x88102a  slt         $v0, $a0, $t0
    ctx->pc = 0x387c7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x387c80: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x387C80u;
    {
        const bool branch_taken_0x387c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x387C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387C80u;
        // 0x387c84: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387c80) {
            ctx->pc = 0x387C48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_387c48;
        }
    }
    ctx->pc = 0x387C88u;
label_387c88:
    // 0x387c88: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x387c88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_387c8c:
    // 0x387c8c: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x387C8Cu;
    {
        const bool branch_taken_0x387c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x387c8c) {
            ctx->pc = 0x387C90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x387C8Cu;
            // 0x387c90: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x387CE8u;
            goto label_387ce8;
        }
    }
    ctx->pc = 0x387C94u;
label_387c94:
    // 0x387c94: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x387c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x387c98: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x387c98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387c9c: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x387C9Cu;
    SET_GPR_U32(ctx, 31, 0x387CA4u);
    ctx->pc = 0x387CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387C9Cu;
    // 0x387ca0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x387C9Cu, 0x387CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387CA4u;
label_387ca4:
    // 0x387ca4: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x387CA4u;
    {
        const bool branch_taken_0x387ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x387ca4) {
            ctx->pc = 0x387CA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x387CA4u;
            // 0x387ca8: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x387CE8u;
            goto label_387ce8;
        }
    }
    ctx->pc = 0x387CACu;
    // 0x387cac: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x387cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x387cb0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x387CB0u;
    {
        const bool branch_taken_0x387cb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x387CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387CB0u;
        // 0x387cb4: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387cb0) {
            ctx->pc = 0x387CCCu;
            goto label_387ccc;
        }
    }
    ctx->pc = 0x387CB8u;
    // 0x387cb8: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x387cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x387cbc: 0xc0e2f1c  jal         func_38BC70
    ctx->pc = 0x387CBCu;
    SET_GPR_U32(ctx, 31, 0x387CC4u);
    ctx->pc = 0x387CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387CBCu;
    // 0x387cc0: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38BC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38BC70u, 0x387CBCu, 0x387CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387CC4u;
label_387cc4:
    // 0x387cc4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x387CC4u;
    {
        const bool branch_taken_0x387cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x387CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387CC4u;
        // 0x387cc8: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387cc4) {
            ctx->pc = 0x387CE4u;
            goto label_387ce4;
        }
    }
    ctx->pc = 0x387CCCu;
label_387ccc:
    // 0x387ccc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x387cccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x387cd0: 0x2484ada0  addiu       $a0, $a0, -0x5260
    ctx->pc = 0x387cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946208));
    // 0x387cd4: 0xc104a72  jal         func_4129C8
    ctx->pc = 0x387CD4u;
    SET_GPR_U32(ctx, 31, 0x387CDCu);
    ctx->pc = 0x387CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387CD4u;
    // 0x387cd8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4129C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4129C8u, 0x387CD4u, 0x387CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387CDCu;
label_387cdc:
    // 0x387cdc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x387CDCu;
    {
        const bool branch_taken_0x387cdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x387CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387CDCu;
        // 0x387ce0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387cdc) {
            ctx->pc = 0x387CECu;
            goto label_387cec;
        }
    }
    ctx->pc = 0x387CE4u;
label_387ce4:
    // 0x387ce4: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x387ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_387ce8:
    // 0x387ce8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x387ce8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_387cec:
    // 0x387cec: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x387cecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x387cf0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x387cf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x387cf4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x387cf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x387cf8: 0x3e00008  jr          $ra
    ctx->pc = 0x387CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x387CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387CF8u;
        // 0x387cfc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x387CF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x387D00u;
}
