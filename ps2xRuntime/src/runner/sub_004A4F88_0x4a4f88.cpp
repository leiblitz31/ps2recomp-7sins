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

// Function: sub_004A4F88
// Address: 0x4a4f88 - 0x4a5188
void sub_004A4F88_0x4a4f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A4F88_0x4a4f88");
#endif

    switch (ctx->pc) {
        case 0x4a4fc0u: goto label_4a4fc0;
        case 0x4a4ff8u: goto label_4a4ff8;
        case 0x4a5108u: goto label_4a5108;
        case 0x4a5124u: goto label_4a5124;
        case 0x4a5138u: goto label_4a5138;
        case 0x4a5154u: goto label_4a5154;
        default: break;
    }

    ctx->pc = 0x4a4f88u;

    // 0x4a4f88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4a4f88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4a4f8c: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x4a4f8cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4f90: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4a4f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4a4f94: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x4a4f94u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4f98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4a4f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4a4f9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4a4f9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4fa0: 0x7fb20000  sq          $s2, 0x0($sp)
    ctx->pc = 0x4a4fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 18));
    // 0x4a4fa4: 0x10c00036  beqz        $a2, . + 4 + (0x36 << 2)
    ctx->pc = 0x4A4FA4u;
    {
        const bool branch_taken_0x4a4fa4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4FA4u;
        // 0x4a4fa8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4fa4) {
            ctx->pc = 0x4A5080u;
            goto label_4a5080;
        }
    }
    ctx->pc = 0x4A4FACu;
    // 0x4a4fac: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x4a4facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x4a4fb0: 0x2412001c  addiu       $s2, $zero, 0x1C
    ctx->pc = 0x4a4fb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x4a4fb4: 0x24505dd0  addiu       $s0, $v0, 0x5DD0
    ctx->pc = 0x4a4fb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 24016));
    // 0x4a4fb8: 0x26110004  addiu       $s1, $s0, 0x4
    ctx->pc = 0x4a4fb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x4a4fbc: 0x0  nop
    ctx->pc = 0x4a4fbcu;
    // NOP
label_4a4fc0:
    // 0x4a4fc0: 0x91820000  lbu         $v0, 0x0($t4)
    ctx->pc = 0x4a4fc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4a4fc4: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x4a4fc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4fc8: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x4a4fc8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4fcc: 0x24d9ffff  addiu       $t9, $a2, -0x1
    ctx->pc = 0x4a4fccu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x4a4fd0: 0x21902  srl         $v1, $v0, 4
    ctx->pc = 0x4a4fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x4a4fd4: 0x258c0002  addiu       $t4, $t4, 0x2
    ctx->pc = 0x4a4fd4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 2));
    // 0x4a4fd8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x4a4fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x4a4fdc: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x4a4fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x4a4fe0: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x4a4fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x4a4fe4: 0x2427823  subu        $t7, $s2, $v0
    ctx->pc = 0x4a4fe4u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x4a4fe8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x4a4fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x4a4fec: 0x8c8d0000  lw          $t5, 0x0($a0)
    ctx->pc = 0x4a4fecu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a4ff0: 0x8c6e0000  lw          $t6, 0x0($v1)
    ctx->pc = 0x4a4ff0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a4ff4: 0x2418000d  addiu       $t8, $zero, 0xD
    ctx->pc = 0x4a4ff4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_4a4ff8:
    // 0x4a4ff8: 0x91820000  lbu         $v0, 0x0($t4)
    ctx->pc = 0x4a4ff8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4a4ffc: 0x10d5018  mult        $t2, $t0, $t5
    ctx->pc = 0x4a4ffcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x4a5000: 0xee4818  mult        $t1, $a3, $t6
    ctx->pc = 0x4a5000u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x4a5004: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x4a5004u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5008: 0x21700  sll         $v0, $v0, 28
    ctx->pc = 0x4a5008u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 28));
    // 0x4a500c: 0x10d2818  mult        $a1, $t0, $t5
    ctx->pc = 0x4a500cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x4a5010: 0x21703  sra         $v0, $v0, 28
    ctx->pc = 0x4a5010u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 28));
    // 0x4a5014: 0x2718ffff  addiu       $t8, $t8, -0x1
    ctx->pc = 0x4a5014u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4294967295));
    // 0x4a5018: 0x1e21004  sllv        $v0, $v0, $t7
    ctx->pc = 0x4a5018u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 15) & 0x1F));
    // 0x4a501c: 0x12a2021  addu        $a0, $t1, $t2
    ctx->pc = 0x4a501cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x4a5020: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x4a5020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4a5024: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a5024u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a5028: 0xa5620000  sh          $v0, 0x0($t3)
    ctx->pc = 0x4a5028u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a502c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x4a502cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5030: 0xee2018  mult        $a0, $a3, $t6
    ctx->pc = 0x4a5030u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x4a5034: 0x256b0002  addiu       $t3, $t3, 0x2
    ctx->pc = 0x4a5034u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
    // 0x4a5038: 0x91820000  lbu         $v0, 0x0($t4)
    ctx->pc = 0x4a5038u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4a503c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x4a503cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5040: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x4a5040u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x4a5044: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x4a5044u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x4a5048: 0x21f00  sll         $v1, $v0, 28
    ctx->pc = 0x4a5048u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 28));
    // 0x4a504c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4a504cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x4a5050: 0x31703  sra         $v0, $v1, 28
    ctx->pc = 0x4a5050u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 28));
    // 0x4a5054: 0x1e21004  sllv        $v0, $v0, $t7
    ctx->pc = 0x4a5054u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 15) & 0x1F));
    // 0x4a5058: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x4a5058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4a505c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a505cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a5060: 0xa5620000  sh          $v0, 0x0($t3)
    ctx->pc = 0x4a5060u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a5064: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x4a5064u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5068: 0x701ffe3  bgez        $t8, . + 4 + (-0x1D << 2)
    ctx->pc = 0x4A5068u;
    {
        const bool branch_taken_0x4a5068 = (GPR_S32(ctx, 24) >= 0);
        ctx->pc = 0x4A506Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5068u;
        // 0x4a506c: 0x256b0002  addiu       $t3, $t3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5068) {
            ctx->pc = 0x4A4FF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a4ff8;
        }
    }
    ctx->pc = 0x4A5070u;
    // 0x4a5070: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4a5070u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5074: 0x320302d  daddu       $a2, $t9, $zero
    ctx->pc = 0x4a5074u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5078: 0x14c0ffd1  bnez        $a2, . + 4 + (-0x2F << 2)
    ctx->pc = 0x4A5078u;
    {
        const bool branch_taken_0x4a5078 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A507Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5078u;
        // 0x4a507c: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5078) {
            ctx->pc = 0x4A4FC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a4fc0;
        }
    }
    ctx->pc = 0x4A5080u;
label_4a5080:
    // 0x4a5080: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4a5080u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a5084: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4a5084u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a5088: 0x7bb20000  lq          $s2, 0x0($sp)
    ctx->pc = 0x4a5088u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a508c: 0x3e00008  jr          $ra
    ctx->pc = 0x4A508Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A5090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A508Cu;
        // 0x4a5090: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A508Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A5094u;
    // 0x4a5094: 0x0  nop
    ctx->pc = 0x4a5094u;
    // NOP
    // 0x4a5098: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x4a5098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x4a509c: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x4a509cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x4a50a0: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x4a50a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x4a50a4: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x4a50a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4a50a8: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x4a50a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x4a50ac: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x4a50acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a50b0: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x4a50b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x4a50b4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4a50b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a50b8: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x4a50b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x4a50bc: 0x129800b  movn        $s0, $t1, $t1
    ctx->pc = 0x4a50bcu;
    if (GPR_U64(ctx, 9) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 9));
    // 0x4a50c0: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x4a50c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x4a50c4: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x4a50c4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a50c8: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x4a50c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x4a50cc: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x4a50ccu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a50d0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x4a50d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x4a50d4: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x4a50d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a50d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4a50d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4a50dc: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x4a50dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x4a50e0: 0x8e720008  lw          $s2, 0x8($s3)
    ctx->pc = 0x4a50e0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x4a50e4: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x4a50e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x4a50e8: 0x9262000d  lbu         $v0, 0xD($s3)
    ctx->pc = 0x4a50e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 13)));
    // 0x4a50ec: 0x12800019  beqz        $s4, . + 4 + (0x19 << 2)
    ctx->pc = 0x4A50ECu;
    {
        const bool branch_taken_0x4a50ec = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A50F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A50ECu;
        // 0x4a50f0: 0x242f018  mult        $fp, $s2, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a50ec) {
            ctx->pc = 0x4A5154u;
            goto label_4a5154;
        }
    }
    ctx->pc = 0x4A50F4u;
    // 0x4a50f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a50f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a50f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4a50f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a50fc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x4a50fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4a5100: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x4A5100u;
    SET_GPR_U32(ctx, 31, 0x4A5108u);
    ctx->pc = 0x4A5104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5100u;
    // 0x4a5104: 0x251a823  subu        $s5, $s2, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x4A5100u, 0x4A5108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5108u;
label_4a5108:
    // 0x4a5108: 0x2d18821  addu        $s1, $s6, $s1
    ctx->pc = 0x4a5108u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x4a510c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4a510cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a5110: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4a5110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5114: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4a5114u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5118: 0x2828021  addu        $s0, $s4, $v0
    ctx->pc = 0x4a5118u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x4a511c: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x4A511Cu;
    SET_GPR_U32(ctx, 31, 0x4A5124u);
    ctx->pc = 0x4A5120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A511Cu;
    // 0x4a5120: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x4A511Cu, 0x4A5124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5124u;
label_4a5124:
    // 0x4a5124: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4a5124u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5128: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x4a5128u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a512c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a512cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5130: 0xc128d70  jal         func_4A35C0
    ctx->pc = 0x4A5130u;
    SET_GPR_U32(ctx, 31, 0x4A5138u);
    ctx->pc = 0x4A5134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5130u;
    // 0x4a5134: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A35C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A35C0u, 0x4A5130u, 0x4A5138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5138u;
label_4a5138:
    // 0x4a5138: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A5138u;
    {
        const bool branch_taken_0x4a5138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A513Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5138u;
        // 0x4a513c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5138) {
            ctx->pc = 0x4A5148u;
            goto label_4a5148;
        }
    }
    ctx->pc = 0x4A5140u;
    // 0x4a5140: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4A5140u;
    {
        const bool branch_taken_0x4a5140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5140u;
        // 0x4a5144: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5140) {
            ctx->pc = 0x4A5158u;
            goto label_4a5158;
        }
    }
    ctx->pc = 0x4A5148u;
label_4a5148:
    // 0x4a5148: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4a5148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a514c: 0xc129462  jal         func_4A5188
    ctx->pc = 0x4A514Cu;
    SET_GPR_U32(ctx, 31, 0x4A5154u);
    ctx->pc = 0x4A5150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A514Cu;
    // 0x4a5150: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5188u, 0x4A514Cu, 0x4A5154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5154u;
label_4a5154:
    // 0x4a5154: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x4a5154u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_4a5158:
    // 0x4a5158: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x4a5158u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x4a515c: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x4a515cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x4a5160: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x4a5160u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4a5164: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x4a5164u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4a5168: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x4a5168u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4a516c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x4a516cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4a5170: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x4a5170u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4a5174: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x4a5174u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4a5178: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x4a5178u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a517c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4a517cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a5180: 0x3e00008  jr          $ra
    ctx->pc = 0x4A5180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A5184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5180u;
        // 0x4a5184: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A5180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A5188u;
}
