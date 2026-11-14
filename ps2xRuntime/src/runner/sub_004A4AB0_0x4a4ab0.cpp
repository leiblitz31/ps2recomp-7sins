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

// Function: sub_004A4AB0
// Address: 0x4a4ab0 - 0x4a4c38
void sub_004A4AB0_0x4a4ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A4AB0_0x4a4ab0");
#endif

    switch (ctx->pc) {
        case 0x4a4af0u: goto label_4a4af0;
        case 0x4a4b70u: goto label_4a4b70;
        case 0x4a4b88u: goto label_4a4b88;
        case 0x4a4b98u: goto label_4a4b98;
        case 0x4a4bb0u: goto label_4a4bb0;
        default: break;
    }

    ctx->pc = 0x4a4ab0u;

    // 0x4a4ab0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x4a4ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x4a4ab4: 0x24c7ffff  addiu       $a3, $a2, -0x1
    ctx->pc = 0x4a4ab4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x4a4ab8: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x4a4ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x4a4abc: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x4a4abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x4a4ac0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4a4ac0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4ac4: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x4a4ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x4a4ac8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4a4ac8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4acc: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x4a4accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x4a4ad0: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x4a4ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x4a4ad4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4a4ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x4a4ad8: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x4a4ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x4a4adc: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x4a4adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x4a4ae0: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x4a4ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x4a4ae4: 0x10c00046  beqz        $a2, . + 4 + (0x46 << 2)
    ctx->pc = 0x4A4AE4u;
    {
        const bool branch_taken_0x4a4ae4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4AE4u;
        // 0x4a4ae8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4ae4) {
            ctx->pc = 0x4A4C00u;
            goto label_4a4c00;
        }
    }
    ctx->pc = 0x4A4AECu;
    // 0x4a4aec: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x4a4aecu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4a4af0:
    // 0x4a4af0: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x4a4af0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x4a4af4: 0x8e710000  lw          $s1, 0x0($s3)
    ctx->pc = 0x4a4af4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4a4af8: 0x122c02  srl         $a1, $s2, 16
    ctx->pc = 0x4a4af8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 18), 16));
    // 0x4a4afc: 0x122400  sll         $a0, $s2, 16
    ctx->pc = 0x4a4afcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x4a4b00: 0x30a5007f  andi        $a1, $a1, 0x7F
    ctx->pc = 0x4a4b00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)127);
    // 0x4a4b04: 0x111c02  srl         $v1, $s1, 16
    ctx->pc = 0x4a4b04u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 16));
    // 0x4a4b08: 0x111400  sll         $v0, $s1, 16
    ctx->pc = 0x4a4b08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x4a4b0c: 0x3066007f  andi        $a2, $v1, 0x7F
    ctx->pc = 0x4a4b0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x4a4b10: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x4a4b10u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x4a4b14: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a4b14u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a4b18: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x4a4b18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x4a4b1c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x4a4b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x4a4b20: 0x2ca30059  sltiu       $v1, $a1, 0x59
    ctx->pc = 0x4a4b20u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)89) ? 1 : 0);
    // 0x4a4b24: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x4a4b24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x4a4b28: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x4a4b28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x4a4b2c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A4B2Cu;
    {
        const bool branch_taken_0x4a4b2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4B2Cu;
        // 0x4a4b30: 0xafa6000c  sw          $a2, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4b2c) {
            ctx->pc = 0x4A4B44u;
            goto label_4a4b44;
        }
    }
    ctx->pc = 0x4A4B34u;
    // 0x4a4b34: 0x4c00003  bltz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A4B34u;
    {
        const bool branch_taken_0x4a4b34 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x4A4B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4B34u;
        // 0x4a4b38: 0x28c20059  slti        $v0, $a2, 0x59 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)89) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4b34) {
            ctx->pc = 0x4A4B44u;
            goto label_4a4b44;
        }
    }
    ctx->pc = 0x4A4B3Cu;
    // 0x4a4b3c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A4B3Cu;
    {
        const bool branch_taken_0x4a4b3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A4B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4B3Cu;
        // 0x4a4b40: 0x97a20000  lhu         $v0, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4b3c) {
            ctx->pc = 0x4A4B4Cu;
            goto label_4a4b4c;
        }
    }
    ctx->pc = 0x4A4B44u;
label_4a4b44:
    // 0x4a4b44: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x4A4B44u;
    {
        const bool branch_taken_0x4a4b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4B44u;
        // 0x4a4b48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4b44) {
            ctx->pc = 0x4A4C04u;
            goto label_4a4c04;
        }
    }
    ctx->pc = 0x4A4B4Cu;
label_4a4b4c:
    // 0x4a4b4c: 0x24f7ffff  addiu       $s7, $a3, -0x1
    ctx->pc = 0x4a4b4cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x4a4b50: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x4a4b50u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4b54: 0x241e0007  addiu       $fp, $zero, 0x7
    ctx->pc = 0x4a4b54u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x4a4b58: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x4a4b58u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a4b5c: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x4a4b5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x4a4b60: 0x97a20008  lhu         $v0, 0x8($sp)
    ctx->pc = 0x4a4b60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a4b64: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x4a4b64u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a4b68: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x4a4b68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x4a4b6c: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x4a4b6cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4a4b70:
    // 0x4a4b70: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4a4b70u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4b74: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x4a4b74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x4a4b78: 0x8e710000  lw          $s1, 0x0($s3)
    ctx->pc = 0x4a4b78u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4a4b7c: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x4a4b7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x4a4b80: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x4A4B80u;
    {
        const bool branch_taken_0x4a4b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4B80u;
        // 0x4a4b84: 0x26b60001  addiu       $s6, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4b80) {
            ctx->pc = 0x4A4BC8u;
            goto label_4a4bc8;
        }
    }
    ctx->pc = 0x4A4B88u;
label_4a4b88:
    // 0x4a4b88: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4a4b88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4b8c: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x4a4b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x4a4b90: 0xc1294ca  jal         func_4A5328
    ctx->pc = 0x4A4B90u;
    SET_GPR_U32(ctx, 31, 0x4A4B98u);
    ctx->pc = 0x4A4B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A4B90u;
    // 0x4a4b94: 0x129102  srl         $s2, $s2, 4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5328u, 0x4A4B90u, 0x4A4B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A4B98u;
label_4a4b98:
    // 0x4a4b98: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x4a4b98u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x4a4b9c: 0x3224000f  andi        $a0, $s1, 0xF
    ctx->pc = 0x4a4b9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15);
    // 0x4a4ba0: 0x27a50008  addiu       $a1, $sp, 0x8
    ctx->pc = 0x4a4ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x4a4ba4: 0x27a6000c  addiu       $a2, $sp, 0xC
    ctx->pc = 0x4a4ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x4a4ba8: 0xc1294ca  jal         func_4A5328
    ctx->pc = 0x4A4BA8u;
    SET_GPR_U32(ctx, 31, 0x4A4BB0u);
    ctx->pc = 0x4A4BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A4BA8u;
    // 0x4a4bac: 0x118902  srl         $s1, $s1, 4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5328u, 0x4A4BA8u, 0x4A4BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A4BB0u;
label_4a4bb0:
    // 0x4a4bb0: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x4a4bb0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a4bb4: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x4a4bb4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a4bb8: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x4a4bb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x4a4bbc: 0x97a20008  lhu         $v0, 0x8($sp)
    ctx->pc = 0x4a4bbcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a4bc0: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x4a4bc0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a4bc4: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x4a4bc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_4a4bc8:
    // 0x4a4bc8: 0x16be0002  bne         $s5, $fp, . + 4 + (0x2 << 2)
    ctx->pc = 0x4A4BC8u;
    {
        const bool branch_taken_0x4a4bc8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 30));
        ctx->pc = 0x4A4BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4BC8u;
        // 0x4a4bcc: 0x2a820008  slti        $v0, $s4, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4bc8) {
            ctx->pc = 0x4A4BD4u;
            goto label_4a4bd4;
        }
    }
    ctx->pc = 0x4A4BD0u;
    // 0x4a4bd0: 0x2a820007  slti        $v0, $s4, 0x7
    ctx->pc = 0x4a4bd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)7) ? 1 : 0);
label_4a4bd4:
    // 0x4a4bd4: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x4A4BD4u;
    {
        const bool branch_taken_0x4a4bd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A4BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4BD4u;
        // 0x4a4bd8: 0x3244000f  andi        $a0, $s2, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4bd4) {
            ctx->pc = 0x4A4B88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a4b88;
        }
    }
    ctx->pc = 0x4A4BDCu;
    // 0x4a4bdc: 0x2c0a82d  daddu       $s5, $s6, $zero
    ctx->pc = 0x4a4bdcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4be0: 0x2aa20008  slti        $v0, $s5, 0x8
    ctx->pc = 0x4a4be0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x4a4be4: 0x5440ffe2  bnel        $v0, $zero, . + 4 + (-0x1E << 2)
    ctx->pc = 0x4A4BE4u;
    {
        const bool branch_taken_0x4a4be4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a4be4) {
            ctx->pc = 0x4A4BE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A4BE4u;
            // 0x4a4be8: 0x8e720000  lw          $s2, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A4B70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a4b70;
        }
    }
    ctx->pc = 0x4A4BECu;
    // 0x4a4bec: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4a4becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4a4bf0: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x4a4bf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4bf4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a4bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a4bf8: 0x54e2ffbd  bnel        $a3, $v0, . + 4 + (-0x43 << 2)
    ctx->pc = 0x4A4BF8u;
    {
        const bool branch_taken_0x4a4bf8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x4a4bf8) {
            ctx->pc = 0x4A4BFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A4BF8u;
            // 0x4a4bfc: 0x8e720000  lw          $s2, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A4AF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a4af0;
        }
    }
    ctx->pc = 0x4A4C00u;
label_4a4c00:
    // 0x4a4c00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a4c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a4c04:
    // 0x4a4c04: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x4a4c04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x4a4c08: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x4a4c08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4a4c0c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x4a4c0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4a4c10: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x4a4c10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4a4c14: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x4a4c14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4a4c18: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4a4c18u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4a4c1c: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x4a4c1cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4a4c20: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x4a4c20u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a4c24: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x4a4c24u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a4c28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4a4c28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a4c2c: 0x3e00008  jr          $ra
    ctx->pc = 0x4A4C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A4C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4C2Cu;
        // 0x4a4c30: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A4C2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A4C34u;
    // 0x4a4c34: 0x0  nop
    ctx->pc = 0x4a4c34u;
    // NOP
    ctx->pc = 0x4a4c38u;
}
