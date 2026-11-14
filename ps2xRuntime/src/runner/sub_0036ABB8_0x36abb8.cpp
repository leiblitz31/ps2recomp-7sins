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

// Function: sub_0036ABB8
// Address: 0x36abb8 - 0x36ba28
void sub_0036ABB8_0x36abb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036ABB8_0x36abb8");
#endif

    switch (ctx->pc) {
        case 0x36ac08u: goto label_36ac08;
        case 0x36ac34u: goto label_36ac34;
        case 0x36ac80u: goto label_36ac80;
        case 0x36aca8u: goto label_36aca8;
        case 0x36ad30u: goto label_36ad30;
        case 0x36ad4cu: goto label_36ad4c;
        case 0x36ad8cu: goto label_36ad8c;
        case 0x36adb0u: goto label_36adb0;
        case 0x36ae08u: goto label_36ae08;
        case 0x36ae30u: goto label_36ae30;
        case 0x36ae58u: goto label_36ae58;
        case 0x36b010u: goto label_36b010;
        case 0x36b04cu: goto label_36b04c;
        case 0x36b070u: goto label_36b070;
        case 0x36b108u: goto label_36b108;
        case 0x36b164u: goto label_36b164;
        case 0x36b188u: goto label_36b188;
        case 0x36b1e4u: goto label_36b1e4;
        case 0x36b220u: goto label_36b220;
        case 0x36b248u: goto label_36b248;
        case 0x36b3c8u: goto label_36b3c8;
        case 0x36b510u: goto label_36b510;
        case 0x36b55cu: goto label_36b55c;
        case 0x36b580u: goto label_36b580;
        case 0x36b600u: goto label_36b600;
        case 0x36b748u: goto label_36b748;
        case 0x36b918u: goto label_36b918;
        default: break;
    }

    ctx->pc = 0x36abb8u;

    // 0x36abb8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x36abb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x36abbc: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x36abbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x36abc0: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x36abc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x36abc4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x36abc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36abc8: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x36abc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x36abcc: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x36abccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x36abd0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x36abd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x36abd4: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x36abd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x36abd8: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x36abd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x36abdc: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x36abdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x36abe0: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x36abe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x36abe4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36abe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36abe8: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x36abe8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x36abec: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x36abecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x36abf0: 0x8cc90028  lw          $t1, 0x28($a2)
    ctx->pc = 0x36abf0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x36abf4: 0x8c910000  lw          $s1, 0x0($a0)
    ctx->pc = 0x36abf4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36abf8: 0x1527031c  bne         $t1, $a3, . + 4 + (0x31C << 2)
    ctx->pc = 0x36ABF8u;
    {
        const bool branch_taken_0x36abf8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 7));
        ctx->pc = 0x36ABFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36ABF8u;
        // 0x36abfc: 0x8cd20024  lw          $s2, 0x24($a2) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36abf8) {
            ctx->pc = 0x36B86Cu;
            goto label_36b86c;
        }
    }
    ctx->pc = 0x36AC00u;
    // 0x36ac00: 0xc0bf778  jal         func_2FDDE0
    ctx->pc = 0x36AC00u;
    SET_GPR_U32(ctx, 31, 0x36AC08u);
    ctx->pc = 0x36AC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AC00u;
    // 0x36ac04: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDDE0u, 0x36AC00u, 0x36AC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AC08u;
label_36ac08:
    // 0x36ac08: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x36ac08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x36ac0c: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x36ac0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x36ac10: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x36ac10u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x1000d000
    // 0x36ac14: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x36ac14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x36ac18: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x36AC18u;
    {
        const bool branch_taken_0x36ac18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x36AC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AC18u;
        // 0x36ac1c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ac18) {
            ctx->pc = 0x36AC50u;
            goto label_36ac50;
        }
    }
    ctx->pc = 0x36AC20u;
    // 0x36ac20: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x36ac20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36ac24: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x36ac24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x36ac28: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x36ac28u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x36ac2c: 0xf  sync
    ctx->pc = 0x36ac2cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36ac30: 0x40f  sync.p
    ctx->pc = 0x36ac30u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_36ac34:
    // 0x36ac34: 0x0  nop
    ctx->pc = 0x36ac34u;
    // NOP
    // 0x36ac38: 0x0  nop
    ctx->pc = 0x36ac38u;
    // NOP
    // 0x36ac3c: 0x0  nop
    ctx->pc = 0x36ac3cu;
    // NOP
    // 0x36ac40: 0x0  nop
    ctx->pc = 0x36ac40u;
    // NOP
    // 0x36ac44: 0x0  nop
    ctx->pc = 0x36ac44u;
    // NOP
    // 0x36ac48: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x36AC48u;
    {
        const bool branch_taken_0x36ac48 = (false);
        if (branch_taken_0x36ac48) {
            ctx->pc = 0x36AC34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36ac34;
        }
    }
    ctx->pc = 0x36AC50u;
label_36ac50:
    // 0x36ac50: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x36ac50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x36ac54: 0x2a040331  slti        $a0, $s0, 0x331
    ctx->pc = 0x36ac54u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)817) ? 1 : 0);
    // 0x36ac58: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x36ac58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x36ac5c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x36ac5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36ac60: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x36ac60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x36ac64: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x36AC64u;
    {
        const bool branch_taken_0x36ac64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36AC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AC64u;
        // 0x36ac68: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ac64) {
            ctx->pc = 0x36ACC4u;
            goto label_36acc4;
        }
    }
    ctx->pc = 0x36AC6Cu;
    // 0x36ac6c: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x36ac6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x36ac70: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x36ac70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x36ac74: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x36ac74u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x36ac78: 0xf  sync
    ctx->pc = 0x36ac78u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36ac7c: 0x40f  sync.p
    ctx->pc = 0x36ac7cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_36ac80:
    // 0x36ac80: 0x0  nop
    ctx->pc = 0x36ac80u;
    // NOP
    // 0x36ac84: 0x0  nop
    ctx->pc = 0x36ac84u;
    // NOP
    // 0x36ac88: 0x0  nop
    ctx->pc = 0x36ac88u;
    // NOP
    // 0x36ac8c: 0x0  nop
    ctx->pc = 0x36ac8cu;
    // NOP
    // 0x36ac90: 0x0  nop
    ctx->pc = 0x36ac90u;
    // NOP
    // 0x36ac94: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x36AC94u;
    {
        const bool branch_taken_0x36ac94 = (false);
        if (branch_taken_0x36ac94) {
            ctx->pc = 0x36AC80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36ac80;
        }
    }
    ctx->pc = 0x36AC9Cu;
    // 0x36ac9c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x36ac9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x36aca0: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x36aca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x36aca4: 0x0  nop
    ctx->pc = 0x36aca4u;
    // NOP
label_36aca8:
    // 0x36aca8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x36aca8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x36acac: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x36acacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x36acb0: 0x0  nop
    ctx->pc = 0x36acb0u;
    // NOP
    // 0x36acb4: 0x0  nop
    ctx->pc = 0x36acb4u;
    // NOP
    // 0x36acb8: 0x0  nop
    ctx->pc = 0x36acb8u;
    // NOP
    // 0x36acbc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36ACBCu;
    {
        const bool branch_taken_0x36acbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36acbc) {
            ctx->pc = 0x36ACA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36aca8;
        }
    }
    ctx->pc = 0x36ACC4u;
label_36acc4:
    // 0x36acc4: 0x148000fe  bnez        $a0, . + 4 + (0xFE << 2)
    ctx->pc = 0x36ACC4u;
    {
        const bool branch_taken_0x36acc4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x36ACC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36ACC4u;
        // 0x36acc8: 0x2a020004  slti        $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36acc4) {
            ctx->pc = 0x36B0C0u;
            goto label_36b0c0;
        }
    }
    ctx->pc = 0x36ACCCu;
    // 0x36accc: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x36acccu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
    // 0x36acd0: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x36acd0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x36acd4: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x36acd4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x36acd8: 0x3c0b1000  lui         $t3, 0x1000
    ctx->pc = 0x36acd8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)4096 << 16));
    // 0x36acdc: 0x3c191000  lui         $t9, 0x1000
    ctx->pc = 0x36acdcu;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)4096 << 16));
    // 0x36ace0: 0x3c181000  lui         $t8, 0x1000
    ctx->pc = 0x36ace0u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)4096 << 16));
    // 0x36ace4: 0x3c141000  lui         $s4, 0x1000
    ctx->pc = 0x36ace4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)4096 << 16));
    // 0x36ace8: 0x3c131000  lui         $s3, 0x1000
    ctx->pc = 0x36ace8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4096 << 16));
    // 0x36acec: 0x3c0f1000  lui         $t7, 0x1000
    ctx->pc = 0x36acecu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)4096 << 16));
    // 0x36acf0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x36acf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x36acf4: 0x3529d000  ori         $t1, $t1, 0xD000
    ctx->pc = 0x36acf4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)53248);
    // 0x36acf8: 0x34c6e020  ori         $a2, $a2, 0xE020
    ctx->pc = 0x36acf8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)57376);
    // 0x36acfc: 0x240a0100  addiu       $t2, $zero, 0x100
    ctx->pc = 0x36acfcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36ad00: 0x34e7d400  ori         $a3, $a3, 0xD400
    ctx->pc = 0x36ad00u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)54272);
    // 0x36ad04: 0x240c0200  addiu       $t4, $zero, 0x200
    ctx->pc = 0x36ad04u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x36ad08: 0x356be010  ori         $t3, $t3, 0xE010
    ctx->pc = 0x36ad08u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)57360);
    // 0x36ad0c: 0x3739d480  ori         $t9, $t9, 0xD480
    ctx->pc = 0x36ad0cu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) | (uint64_t)(uint16_t)54400);
    // 0x36ad10: 0x3718d410  ori         $t8, $t8, 0xD410
    ctx->pc = 0x36ad10u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | (uint64_t)(uint16_t)54288);
    // 0x36ad14: 0x3694d420  ori         $s4, $s4, 0xD420
    ctx->pc = 0x36ad14u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)54304);
    // 0x36ad18: 0x3673d080  ori         $s3, $s3, 0xD080
    ctx->pc = 0x36ad18u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)53376);
    // 0x36ad1c: 0x24160cc0  addiu       $s6, $zero, 0xCC0
    ctx->pc = 0x36ad1cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 3264));
    // 0x36ad20: 0x35efd010  ori         $t7, $t7, 0xD010
    ctx->pc = 0x36ad20u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)53264);
    // 0x36ad24: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x36ad24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
    // 0x36ad28: 0x24150330  addiu       $s5, $zero, 0x330
    ctx->pc = 0x36ad28u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 816));
    // 0x36ad2c: 0x0  nop
    ctx->pc = 0x36ad2cu;
    // NOP
label_36ad30:
    // 0x36ad30: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x36ad30u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 9), 0))); // MMIO: 0x1000d000
    // 0x36ad34: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x36ad34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x36ad38: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x36AD38u;
    {
        const bool branch_taken_0x36ad38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36ad38) {
            ctx->pc = 0x36AD68u;
            goto label_36ad68;
        }
    }
    ctx->pc = 0x36AD40u;
    // 0x36ad40: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x36ad40u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
    // 0x36ad44: 0xf  sync
    ctx->pc = 0x36ad44u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36ad48: 0x40f  sync.p
    ctx->pc = 0x36ad48u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_36ad4c:
    // 0x36ad4c: 0x0  nop
    ctx->pc = 0x36ad4cu;
    // NOP
    // 0x36ad50: 0x0  nop
    ctx->pc = 0x36ad50u;
    // NOP
    // 0x36ad54: 0x0  nop
    ctx->pc = 0x36ad54u;
    // NOP
    // 0x36ad58: 0x0  nop
    ctx->pc = 0x36ad58u;
    // NOP
    // 0x36ad5c: 0x0  nop
    ctx->pc = 0x36ad5cu;
    // NOP
    // 0x36ad60: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x36AD60u;
    {
        const bool branch_taken_0x36ad60 = (false);
        if (branch_taken_0x36ad60) {
            ctx->pc = 0x36AD4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36ad4c;
        }
    }
    ctx->pc = 0x36AD68u;
label_36ad68:
    // 0x36ad68: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x36ad68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x36ad6c: 0x2605fcd0  addiu       $a1, $s0, -0x330
    ctx->pc = 0x36ad6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966480));
    // 0x36ad70: 0x264d0cc0  addiu       $t5, $s2, 0xCC0
    ctx->pc = 0x36ad70u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 18), 3264));
    // 0x36ad74: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x36ad74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x36ad78: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x36AD78u;
    {
        const bool branch_taken_0x36ad78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36AD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AD78u;
        // 0x36ad7c: 0x262e3300  addiu       $t6, $s1, 0x3300 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 17), 13056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ad78) {
            ctx->pc = 0x36ADCCu;
            goto label_36adcc;
        }
    }
    ctx->pc = 0x36AD80u;
    // 0x36ad80: 0xaccc0000  sw          $t4, 0x0($a2)
    ctx->pc = 0x36ad80u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 12));
    // 0x36ad84: 0xf  sync
    ctx->pc = 0x36ad84u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36ad88: 0x40f  sync.p
    ctx->pc = 0x36ad88u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_36ad8c:
    // 0x36ad8c: 0x0  nop
    ctx->pc = 0x36ad8cu;
    // NOP
    // 0x36ad90: 0x0  nop
    ctx->pc = 0x36ad90u;
    // NOP
    // 0x36ad94: 0x0  nop
    ctx->pc = 0x36ad94u;
    // NOP
    // 0x36ad98: 0x0  nop
    ctx->pc = 0x36ad98u;
    // NOP
    // 0x36ad9c: 0x0  nop
    ctx->pc = 0x36ad9cu;
    // NOP
    // 0x36ada0: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x36ADA0u;
    {
        const bool branch_taken_0x36ada0 = (false);
        if (branch_taken_0x36ada0) {
            ctx->pc = 0x36AD8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36ad8c;
        }
    }
    ctx->pc = 0x36ADA8u;
    // 0x36ada8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x36ada8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x36adac: 0x3484d400  ori         $a0, $a0, 0xD400
    ctx->pc = 0x36adacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
label_36adb0:
    // 0x36adb0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x36adb0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0))); // MMIO: 0x1000d400
    // 0x36adb4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x36adb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x36adb8: 0x0  nop
    ctx->pc = 0x36adb8u;
    // NOP
    // 0x36adbc: 0x0  nop
    ctx->pc = 0x36adbcu;
    // NOP
    // 0x36adc0: 0x0  nop
    ctx->pc = 0x36adc0u;
    // NOP
    // 0x36adc4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36ADC4u;
    {
        const bool branch_taken_0x36adc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36adc4) {
            ctx->pc = 0x36ADB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36adb0;
        }
    }
    ctx->pc = 0x36ADCCu;
label_36adcc:
    // 0x36adcc: 0xad6c0000  sw          $t4, 0x0($t3)
    ctx->pc = 0x36adccu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 12));
    // 0x36add0: 0x240200cc  addiu       $v0, $zero, 0xCC
    ctx->pc = 0x36add0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
    // 0x36add4: 0xaf200000  sw          $zero, 0x0($t9)
    ctx->pc = 0x36add4u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 0));
    // 0x36add8: 0xaf120000  sw          $s2, 0x0($t8)
    ctx->pc = 0x36add8u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 18));
    // 0x36addc: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x36addcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x36ade0: 0xacea0000  sw          $t2, 0x0($a3)
    ctx->pc = 0x36ade0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 10));
    // 0x36ade4: 0xf  sync
    ctx->pc = 0x36ade4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36ade8: 0x40f  sync.p
    ctx->pc = 0x36ade8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36adec: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x36adecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x36adf0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x36adf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x36adf4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x36ADF4u;
    {
        const bool branch_taken_0x36adf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36ADF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36ADF4u;
        // 0x36adf8: 0x3c027000  lui         $v0, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36adf4) {
            ctx->pc = 0x36AE4Cu;
            goto label_36ae4c;
        }
    }
    ctx->pc = 0x36ADFCu;
    // 0x36adfc: 0xaccc0000  sw          $t4, 0x0($a2)
    ctx->pc = 0x36adfcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 12));
    // 0x36ae00: 0xf  sync
    ctx->pc = 0x36ae00u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36ae04: 0x40f  sync.p
    ctx->pc = 0x36ae04u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_36ae08:
    // 0x36ae08: 0x0  nop
    ctx->pc = 0x36ae08u;
    // NOP
    // 0x36ae0c: 0x0  nop
    ctx->pc = 0x36ae0cu;
    // NOP
    // 0x36ae10: 0x0  nop
    ctx->pc = 0x36ae10u;
    // NOP
    // 0x36ae14: 0x0  nop
    ctx->pc = 0x36ae14u;
    // NOP
    // 0x36ae18: 0x0  nop
    ctx->pc = 0x36ae18u;
    // NOP
    // 0x36ae1c: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x36AE1Cu;
    {
        const bool branch_taken_0x36ae1c = (false);
        if (branch_taken_0x36ae1c) {
            ctx->pc = 0x36AE08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36ae08;
        }
    }
    ctx->pc = 0x36AE24u;
    // 0x36ae24: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x36ae24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x36ae28: 0x3484d400  ori         $a0, $a0, 0xD400
    ctx->pc = 0x36ae28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
    // 0x36ae2c: 0x0  nop
    ctx->pc = 0x36ae2cu;
    // NOP
label_36ae30:
    // 0x36ae30: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x36ae30u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0))); // MMIO: 0x1000d400
    // 0x36ae34: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x36ae34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x36ae38: 0x0  nop
    ctx->pc = 0x36ae38u;
    // NOP
    // 0x36ae3c: 0x0  nop
    ctx->pc = 0x36ae3cu;
    // NOP
    // 0x36ae40: 0x0  nop
    ctx->pc = 0x36ae40u;
    // NOP
    // 0x36ae44: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36AE44u;
    {
        const bool branch_taken_0x36ae44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36AE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AE44u;
        // 0x36ae48: 0x3c027000  lui         $v0, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ae44) {
            ctx->pc = 0x36AE30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36ae30;
        }
    }
    ctx->pc = 0x36AE4Cu;
label_36ae4c:
    // 0x36ae4c: 0x2408032f  addiu       $t0, $zero, 0x32F
    ctx->pc = 0x36ae4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 815));
    // 0x36ae50: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x36ae50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x36ae54: 0x34420cc0  ori         $v0, $v0, 0xCC0
    ctx->pc = 0x36ae54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3264);
label_36ae58:
    // 0x36ae58: 0x88900003  lwl         $s0, 0x3($a0)
    ctx->pc = 0x36ae58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 16) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 16, (int32_t)merged); }
    // 0x36ae5c: 0x98900000  lwr         $s0, 0x0($a0)
    ctx->pc = 0x36ae5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 16) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 16) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 16, merged64); }
    // 0x36ae60: 0xa8500003  swl         $s0, 0x3($v0)
    ctx->pc = 0x36ae60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 16); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36ae64: 0x2508fffa  addiu       $t0, $t0, -0x6
    ctx->pc = 0x36ae64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967290));
    // 0x36ae68: 0xb8500000  swr         $s0, 0x0($v0)
    ctx->pc = 0x36ae68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 16); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36ae6c: 0x88900003  lwl         $s0, 0x3($a0)
    ctx->pc = 0x36ae6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 16) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 16, (int32_t)merged); }
    // 0x36ae70: 0x98900000  lwr         $s0, 0x0($a0)
    ctx->pc = 0x36ae70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 16) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 16) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 16, merged64); }
    // 0x36ae74: 0xa8500007  swl         $s0, 0x7($v0)
    ctx->pc = 0x36ae74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 16); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36ae78: 0xb8500004  swr         $s0, 0x4($v0)
    ctx->pc = 0x36ae78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 16); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36ae7c: 0x88900003  lwl         $s0, 0x3($a0)
    ctx->pc = 0x36ae7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 16) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 16, (int32_t)merged); }
    // 0x36ae80: 0x98900000  lwr         $s0, 0x0($a0)
    ctx->pc = 0x36ae80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 16) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 16) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 16, merged64); }
    // 0x36ae84: 0xa850000b  swl         $s0, 0xB($v0)
    ctx->pc = 0x36ae84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 16); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36ae88: 0xb8500008  swr         $s0, 0x8($v0)
    ctx->pc = 0x36ae88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 16); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36ae8c: 0x88900003  lwl         $s0, 0x3($a0)
    ctx->pc = 0x36ae8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 16) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 16, (int32_t)merged); }
    // 0x36ae90: 0x98900000  lwr         $s0, 0x0($a0)
    ctx->pc = 0x36ae90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 16) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 16) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 16, merged64); }
    // 0x36ae94: 0xa850000f  swl         $s0, 0xF($v0)
    ctx->pc = 0x36ae94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 16); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36ae98: 0xb850000c  swr         $s0, 0xC($v0)
    ctx->pc = 0x36ae98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 16); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36ae9c: 0x88900007  lwl         $s0, 0x7($a0)
    ctx->pc = 0x36ae9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 16) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 16, (int32_t)merged); }
    // 0x36aea0: 0x98900004  lwr         $s0, 0x4($a0)
    ctx->pc = 0x36aea0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 16) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 16) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 16, merged64); }
    // 0x36aea4: 0xa8500013  swl         $s0, 0x13($v0)
    ctx->pc = 0x36aea4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 16); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36aea8: 0xb8500010  swr         $s0, 0x10($v0)
    ctx->pc = 0x36aea8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 16); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36aeac: 0x88900007  lwl         $s0, 0x7($a0)
    ctx->pc = 0x36aeacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 16) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 16, (int32_t)merged); }
    // 0x36aeb0: 0x98900004  lwr         $s0, 0x4($a0)
    ctx->pc = 0x36aeb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 16) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 16) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 16, merged64); }
    // 0x36aeb4: 0xa8500017  swl         $s0, 0x17($v0)
    ctx->pc = 0x36aeb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 16); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36aeb8: 0xb8500014  swr         $s0, 0x14($v0)
    ctx->pc = 0x36aeb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 16); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36aebc: 0x88900007  lwl         $s0, 0x7($a0)
    ctx->pc = 0x36aebcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 16) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 16, (int32_t)merged); }
    // 0x36aec0: 0x98900004  lwr         $s0, 0x4($a0)
    ctx->pc = 0x36aec0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 16) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 16) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 16, merged64); }
    // 0x36aec4: 0xa850001b  swl         $s0, 0x1B($v0)
    ctx->pc = 0x36aec4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 16); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36aec8: 0xb8500018  swr         $s0, 0x18($v0)
    ctx->pc = 0x36aec8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 16); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36aecc: 0x88900007  lwl         $s0, 0x7($a0)
    ctx->pc = 0x36aeccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 16) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 16, (int32_t)merged); }
    // 0x36aed0: 0x98900004  lwr         $s0, 0x4($a0)
    ctx->pc = 0x36aed0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 16) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 16) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 16, merged64); }
    // 0x36aed4: 0xa850001f  swl         $s0, 0x1F($v0)
    ctx->pc = 0x36aed4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 16); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36aed8: 0xb850001c  swr         $s0, 0x1C($v0)
    ctx->pc = 0x36aed8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 28); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 16); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36aedc: 0x8890000b  lwl         $s0, 0xB($a0)
    ctx->pc = 0x36aedcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 16) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 16, (int32_t)merged); }
    // 0x36aee0: 0x98900008  lwr         $s0, 0x8($a0)
    ctx->pc = 0x36aee0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 16) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 16) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 16, merged64); }
    // 0x36aee4: 0xa8500023  swl         $s0, 0x23($v0)
    ctx->pc = 0x36aee4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 16); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36aee8: 0xb8500020  swr         $s0, 0x20($v0)
    ctx->pc = 0x36aee8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 16); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36aeec: 0x8890000b  lwl         $s0, 0xB($a0)
    ctx->pc = 0x36aeecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 16) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 16, (int32_t)merged); }
    // 0x36aef0: 0x98900008  lwr         $s0, 0x8($a0)
    ctx->pc = 0x36aef0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 16) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 16) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 16, merged64); }
    // 0x36aef4: 0xa8500027  swl         $s0, 0x27($v0)
    ctx->pc = 0x36aef4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 16); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36aef8: 0xb8500024  swr         $s0, 0x24($v0)
    ctx->pc = 0x36aef8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 36); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 16); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36aefc: 0x8890000b  lwl         $s0, 0xB($a0)
    ctx->pc = 0x36aefcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 16) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 16, (int32_t)merged); }
    // 0x36af00: 0x98900008  lwr         $s0, 0x8($a0)
    ctx->pc = 0x36af00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 16) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 16) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 16, merged64); }
    // 0x36af04: 0xa850002b  swl         $s0, 0x2B($v0)
    ctx->pc = 0x36af04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 43); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 16); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36af08: 0xb8500028  swr         $s0, 0x28($v0)
    ctx->pc = 0x36af08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 40); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 16); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36af0c: 0x8890000b  lwl         $s0, 0xB($a0)
    ctx->pc = 0x36af0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 16) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 16, (int32_t)merged); }
    // 0x36af10: 0x98900008  lwr         $s0, 0x8($a0)
    ctx->pc = 0x36af10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 16) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 16) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 16, merged64); }
    // 0x36af14: 0xa850002f  swl         $s0, 0x2F($v0)
    ctx->pc = 0x36af14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 47); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 16); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36af18: 0xb850002c  swr         $s0, 0x2C($v0)
    ctx->pc = 0x36af18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 44); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 16); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36af1c: 0x8890000f  lwl         $s0, 0xF($a0)
    ctx->pc = 0x36af1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 16) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 16, (int32_t)merged); }
    // 0x36af20: 0x9890000c  lwr         $s0, 0xC($a0)
    ctx->pc = 0x36af20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 16) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 16) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 16, merged64); }
    // 0x36af24: 0xa8500033  swl         $s0, 0x33($v0)
    ctx->pc = 0x36af24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 51); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 16); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36af28: 0xb8500030  swr         $s0, 0x30($v0)
    ctx->pc = 0x36af28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 16); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36af2c: 0x8890000f  lwl         $s0, 0xF($a0)
    ctx->pc = 0x36af2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 16) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 16, (int32_t)merged); }
    // 0x36af30: 0x9890000c  lwr         $s0, 0xC($a0)
    ctx->pc = 0x36af30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 16) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 16) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 16, merged64); }
    // 0x36af34: 0xa8500037  swl         $s0, 0x37($v0)
    ctx->pc = 0x36af34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 16); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36af38: 0xb8500034  swr         $s0, 0x34($v0)
    ctx->pc = 0x36af38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 52); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 16); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36af3c: 0x8890000f  lwl         $s0, 0xF($a0)
    ctx->pc = 0x36af3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 16) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 16, (int32_t)merged); }
    // 0x36af40: 0x9890000c  lwr         $s0, 0xC($a0)
    ctx->pc = 0x36af40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 16) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 16) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 16, merged64); }
    // 0x36af44: 0xa850003b  swl         $s0, 0x3B($v0)
    ctx->pc = 0x36af44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 59); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 16); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36af48: 0xb8500038  swr         $s0, 0x38($v0)
    ctx->pc = 0x36af48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 56); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 16); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36af4c: 0x8890000f  lwl         $s0, 0xF($a0)
    ctx->pc = 0x36af4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 16) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 16, (int32_t)merged); }
    // 0x36af50: 0x9890000c  lwr         $s0, 0xC($a0)
    ctx->pc = 0x36af50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 16) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 16) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 16, merged64); }
    // 0x36af54: 0xa850003f  swl         $s0, 0x3F($v0)
    ctx->pc = 0x36af54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 63); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 16); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36af58: 0xb850003c  swr         $s0, 0x3C($v0)
    ctx->pc = 0x36af58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 60); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 16); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36af5c: 0x88900013  lwl         $s0, 0x13($a0)
    ctx->pc = 0x36af5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 16) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 16, (int32_t)merged); }
    // 0x36af60: 0x98900010  lwr         $s0, 0x10($a0)
    ctx->pc = 0x36af60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 16) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 16) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 16, merged64); }
    // 0x36af64: 0xa8500043  swl         $s0, 0x43($v0)
    ctx->pc = 0x36af64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 67); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 16); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36af68: 0xb8500040  swr         $s0, 0x40($v0)
    ctx->pc = 0x36af68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 64); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 16); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36af6c: 0x88900013  lwl         $s0, 0x13($a0)
    ctx->pc = 0x36af6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 16) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 16, (int32_t)merged); }
    // 0x36af70: 0x98900010  lwr         $s0, 0x10($a0)
    ctx->pc = 0x36af70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 16) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 16) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 16, merged64); }
    // 0x36af74: 0xa8500047  swl         $s0, 0x47($v0)
    ctx->pc = 0x36af74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 71); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 16); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36af78: 0xb8500044  swr         $s0, 0x44($v0)
    ctx->pc = 0x36af78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 68); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 16); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36af7c: 0x88900013  lwl         $s0, 0x13($a0)
    ctx->pc = 0x36af7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 16) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 16, (int32_t)merged); }
    // 0x36af80: 0x98900010  lwr         $s0, 0x10($a0)
    ctx->pc = 0x36af80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 16) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 16) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 16, merged64); }
    // 0x36af84: 0xa850004b  swl         $s0, 0x4B($v0)
    ctx->pc = 0x36af84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 75); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 16); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36af88: 0xb8500048  swr         $s0, 0x48($v0)
    ctx->pc = 0x36af88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 72); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 16); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36af8c: 0x88900013  lwl         $s0, 0x13($a0)
    ctx->pc = 0x36af8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 16) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 16, (int32_t)merged); }
    // 0x36af90: 0x98900010  lwr         $s0, 0x10($a0)
    ctx->pc = 0x36af90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 16) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 16) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 16, merged64); }
    // 0x36af94: 0xa850004f  swl         $s0, 0x4F($v0)
    ctx->pc = 0x36af94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 79); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 16); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36af98: 0xb850004c  swr         $s0, 0x4C($v0)
    ctx->pc = 0x36af98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 76); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 16); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36af9c: 0x88900017  lwl         $s0, 0x17($a0)
    ctx->pc = 0x36af9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 16) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 16, (int32_t)merged); }
    // 0x36afa0: 0x98900014  lwr         $s0, 0x14($a0)
    ctx->pc = 0x36afa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 16) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 16) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 16, merged64); }
    // 0x36afa4: 0xa8500053  swl         $s0, 0x53($v0)
    ctx->pc = 0x36afa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 83); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 16); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36afa8: 0xb8500050  swr         $s0, 0x50($v0)
    ctx->pc = 0x36afa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 80); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 16); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36afac: 0x24420054  addiu       $v0, $v0, 0x54
    ctx->pc = 0x36afacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x36afb0: 0x88900017  lwl         $s0, 0x17($a0)
    ctx->pc = 0x36afb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 16) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 16, (int32_t)merged); }
    // 0x36afb4: 0x98900014  lwr         $s0, 0x14($a0)
    ctx->pc = 0x36afb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 16) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 16) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 16, merged64); }
    // 0x36afb8: 0xa8500003  swl         $s0, 0x3($v0)
    ctx->pc = 0x36afb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 16); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36afbc: 0xb8500000  swr         $s0, 0x0($v0)
    ctx->pc = 0x36afbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 16); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36afc0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x36afc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x36afc4: 0x88900017  lwl         $s0, 0x17($a0)
    ctx->pc = 0x36afc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 16) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 16, (int32_t)merged); }
    // 0x36afc8: 0x98900014  lwr         $s0, 0x14($a0)
    ctx->pc = 0x36afc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 16) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 16) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 16, merged64); }
    // 0x36afcc: 0xa8500003  swl         $s0, 0x3($v0)
    ctx->pc = 0x36afccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 16); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36afd0: 0xb8500000  swr         $s0, 0x0($v0)
    ctx->pc = 0x36afd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 16); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36afd4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x36afd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x36afd8: 0x88900017  lwl         $s0, 0x17($a0)
    ctx->pc = 0x36afd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 16) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 16, (int32_t)merged); }
    // 0x36afdc: 0x98900014  lwr         $s0, 0x14($a0)
    ctx->pc = 0x36afdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 16) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 16) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 16, merged64); }
    // 0x36afe0: 0xa8500003  swl         $s0, 0x3($v0)
    ctx->pc = 0x36afe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 16); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36afe4: 0xb8500000  swr         $s0, 0x0($v0)
    ctx->pc = 0x36afe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 16); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36afe8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x36afe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x36afec: 0x501ff9a  bgez        $t0, . + 4 + (-0x66 << 2)
    ctx->pc = 0x36AFECu;
    {
        const bool branch_taken_0x36afec = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x36AFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AFECu;
        // 0x36aff0: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36afec) {
            ctx->pc = 0x36AE58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36ae58;
        }
    }
    ctx->pc = 0x36AFF4u;
    // 0x36aff4: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x36aff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x36aff8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x36aff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x36affc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x36AFFCu;
    {
        const bool branch_taken_0x36affc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36affc) {
            ctx->pc = 0x36B030u;
            goto label_36b030;
        }
    }
    ctx->pc = 0x36B004u;
    // 0x36b004: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x36b004u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
    // 0x36b008: 0xf  sync
    ctx->pc = 0x36b008u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36b00c: 0x40f  sync.p
    ctx->pc = 0x36b00cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_36b010:
    // 0x36b010: 0x0  nop
    ctx->pc = 0x36b010u;
    // NOP
    // 0x36b014: 0x0  nop
    ctx->pc = 0x36b014u;
    // NOP
    // 0x36b018: 0x0  nop
    ctx->pc = 0x36b018u;
    // NOP
    // 0x36b01c: 0x0  nop
    ctx->pc = 0x36b01cu;
    // NOP
    // 0x36b020: 0x0  nop
    ctx->pc = 0x36b020u;
    // NOP
    // 0x36b024: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x36B024u;
    {
        const bool branch_taken_0x36b024 = (false);
        if (branch_taken_0x36b024) {
            ctx->pc = 0x36B010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36b010;
        }
    }
    ctx->pc = 0x36B02Cu;
    // 0x36b02c: 0x0  nop
    ctx->pc = 0x36b02cu;
    // NOP
label_36b030:
    // 0x36b030: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x36b030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x36b034: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x36b034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x36b038: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x36B038u;
    {
        const bool branch_taken_0x36b038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36b038) {
            ctx->pc = 0x36B08Cu;
            goto label_36b08c;
        }
    }
    ctx->pc = 0x36B040u;
    // 0x36b040: 0xaccc0000  sw          $t4, 0x0($a2)
    ctx->pc = 0x36b040u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 12));
    // 0x36b044: 0xf  sync
    ctx->pc = 0x36b044u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36b048: 0x40f  sync.p
    ctx->pc = 0x36b048u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_36b04c:
    // 0x36b04c: 0x0  nop
    ctx->pc = 0x36b04cu;
    // NOP
    // 0x36b050: 0x0  nop
    ctx->pc = 0x36b050u;
    // NOP
    // 0x36b054: 0x0  nop
    ctx->pc = 0x36b054u;
    // NOP
    // 0x36b058: 0x0  nop
    ctx->pc = 0x36b058u;
    // NOP
    // 0x36b05c: 0x0  nop
    ctx->pc = 0x36b05cu;
    // NOP
    // 0x36b060: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x36B060u;
    {
        const bool branch_taken_0x36b060 = (false);
        if (branch_taken_0x36b060) {
            ctx->pc = 0x36B04Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36b04c;
        }
    }
    ctx->pc = 0x36B068u;
    // 0x36b068: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x36b068u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x36b06c: 0x3484d400  ori         $a0, $a0, 0xD400
    ctx->pc = 0x36b06cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
label_36b070:
    // 0x36b070: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x36b070u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0))); // MMIO: 0x1000d400
    // 0x36b074: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x36b074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x36b078: 0x0  nop
    ctx->pc = 0x36b078u;
    // NOP
    // 0x36b07c: 0x0  nop
    ctx->pc = 0x36b07cu;
    // NOP
    // 0x36b080: 0x0  nop
    ctx->pc = 0x36b080u;
    // NOP
    // 0x36b084: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36B084u;
    {
        const bool branch_taken_0x36b084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36b084) {
            ctx->pc = 0x36B070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36b070;
        }
    }
    ctx->pc = 0x36B08Cu;
label_36b08c:
    // 0x36b08c: 0xad6a0000  sw          $t2, 0x0($t3)
    ctx->pc = 0x36b08cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 10));
    // 0x36b090: 0xae760000  sw          $s6, 0x0($s3)
    ctx->pc = 0x36b090u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 22));
    // 0x36b094: 0xadf10000  sw          $s1, 0x0($t7)
    ctx->pc = 0x36b094u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 17));
    // 0x36b098: 0xac750000  sw          $s5, 0x0($v1)
    ctx->pc = 0x36b098u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 21));
    // 0x36b09c: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x36b09cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
    // 0x36b0a0: 0xf  sync
    ctx->pc = 0x36b0a0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36b0a4: 0x40f  sync.p
    ctx->pc = 0x36b0a4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36b0a8: 0x1a0902d  daddu       $s2, $t5, $zero
    ctx->pc = 0x36b0a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b0ac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x36b0acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b0b0: 0x2a020331  slti        $v0, $s0, 0x331
    ctx->pc = 0x36b0b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)817) ? 1 : 0);
    // 0x36b0b4: 0x1040ff1e  beqz        $v0, . + 4 + (-0xE2 << 2)
    ctx->pc = 0x36B0B4u;
    {
        const bool branch_taken_0x36b0b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B0B4u;
        // 0x36b0b8: 0x1c0882d  daddu       $s1, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b0b4) {
            ctx->pc = 0x36AD30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36ad30;
        }
    }
    ctx->pc = 0x36B0BCu;
    // 0x36b0bc: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x36b0bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
label_36b0c0:
    // 0x36b0c0: 0x14400151  bnez        $v0, . + 4 + (0x151 << 2)
    ctx->pc = 0x36B0C0u;
    {
        const bool branch_taken_0x36b0c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36B0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B0C0u;
        // 0x36b0c4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b0c0) {
            ctx->pc = 0x36B608u;
            goto label_36b608;
        }
    }
    ctx->pc = 0x36B0C8u;
    // 0x36b0c8: 0x26030003  addiu       $v1, $s0, 0x3
    ctx->pc = 0x36b0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x36b0cc: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x36b0ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x36b0d0: 0x202180b  movn        $v1, $s0, $v0
    ctx->pc = 0x36b0d0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 16));
    // 0x36b0d4: 0x32083  sra         $a0, $v1, 2
    ctx->pc = 0x36b0d4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 2));
    // 0x36b0d8: 0x4a080  sll         $s4, $a0, 2
    ctx->pc = 0x36b0d8u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x36b0dc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x36b0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x36b0e0: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x36b0e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x36b0e4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x36b0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x1000d000
    // 0x36b0e8: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x36b0e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x36b0ec: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x36B0ECu;
    {
        const bool branch_taken_0x36b0ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B0ECu;
        // 0x36b0f0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b0ec) {
            ctx->pc = 0x36B128u;
            goto label_36b128;
        }
    }
    ctx->pc = 0x36B0F4u;
    // 0x36b0f4: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x36b0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36b0f8: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x36b0f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x36b0fc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x36b0fcu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x36b100: 0xf  sync
    ctx->pc = 0x36b100u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36b104: 0x40f  sync.p
    ctx->pc = 0x36b104u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_36b108:
    // 0x36b108: 0x0  nop
    ctx->pc = 0x36b108u;
    // NOP
    // 0x36b10c: 0x0  nop
    ctx->pc = 0x36b10cu;
    // NOP
    // 0x36b110: 0x0  nop
    ctx->pc = 0x36b110u;
    // NOP
    // 0x36b114: 0x0  nop
    ctx->pc = 0x36b114u;
    // NOP
    // 0x36b118: 0x0  nop
    ctx->pc = 0x36b118u;
    // NOP
    // 0x36b11c: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x36B11Cu;
    {
        const bool branch_taken_0x36b11c = (false);
        if (branch_taken_0x36b11c) {
            ctx->pc = 0x36B108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36b108;
        }
    }
    ctx->pc = 0x36B124u;
    // 0x36b124: 0x0  nop
    ctx->pc = 0x36b124u;
    // NOP
label_36b128:
    // 0x36b128: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x36b128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x36b12c: 0x4b180  sll         $s6, $a0, 6
    ctx->pc = 0x36b12cu;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x36b130: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x36b130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x36b134: 0x214a823  subu        $s5, $s0, $s4
    ctx->pc = 0x36b134u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x36b138: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x36b138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36b13c: 0x4494a000  mtc1        $s4, $f20
    ctx->pc = 0x36b13cu;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x36b140: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x36b140u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x36b144: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x36b144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x36b148: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x36B148u;
    {
        const bool branch_taken_0x36b148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B148u;
        // 0x36b14c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b148) {
            ctx->pc = 0x36B1A4u;
            goto label_36b1a4;
        }
    }
    ctx->pc = 0x36B150u;
    // 0x36b150: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x36b150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x36b154: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x36b154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x36b158: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x36b158u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x36b15c: 0xf  sync
    ctx->pc = 0x36b15cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36b160: 0x40f  sync.p
    ctx->pc = 0x36b160u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_36b164:
    // 0x36b164: 0x0  nop
    ctx->pc = 0x36b164u;
    // NOP
    // 0x36b168: 0x0  nop
    ctx->pc = 0x36b168u;
    // NOP
    // 0x36b16c: 0x0  nop
    ctx->pc = 0x36b16cu;
    // NOP
    // 0x36b170: 0x0  nop
    ctx->pc = 0x36b170u;
    // NOP
    // 0x36b174: 0x0  nop
    ctx->pc = 0x36b174u;
    // NOP
    // 0x36b178: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x36B178u;
    {
        const bool branch_taken_0x36b178 = (false);
        if (branch_taken_0x36b178) {
            ctx->pc = 0x36B164u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36b164;
        }
    }
    ctx->pc = 0x36B180u;
    // 0x36b180: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x36b180u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x36b184: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x36b184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_36b188:
    // 0x36b188: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x36b188u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x36b18c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x36b18cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x36b190: 0x0  nop
    ctx->pc = 0x36b190u;
    // NOP
    // 0x36b194: 0x0  nop
    ctx->pc = 0x36b194u;
    // NOP
    // 0x36b198: 0x0  nop
    ctx->pc = 0x36b198u;
    // NOP
    // 0x36b19c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36B19Cu;
    {
        const bool branch_taken_0x36b19c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36b19c) {
            ctx->pc = 0x36B188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36b188;
        }
    }
    ctx->pc = 0x36B1A4u;
label_36b1a4:
    // 0x36b1a4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x36b1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x36b1a8: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x36b1a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x36b1ac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x36b1acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x36b1b0: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x36b1b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x36b1b4: 0x24130200  addiu       $s3, $zero, 0x200
    ctx->pc = 0x36b1b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x36b1b8: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x36b1b8u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 19)); // MMIO: 0x1000e010
    // 0x36b1bc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x36b1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x36b1c0: 0x3463d480  ori         $v1, $v1, 0xD480
    ctx->pc = 0x36b1c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54400);
    // 0x36b1c4: 0x460ca302  mul.s       $f12, $f20, $f12
    ctx->pc = 0x36b1c4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    // 0x36b1c8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x36b1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x36b1cc: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x36b1ccu;
    runtime->Store32(rdram, ctx, 0x1000D480u, GPR_U32(ctx, 0)); // MMIO: 0x1000d480
    // 0x36b1d0: 0x3442d410  ori         $v0, $v0, 0xD410
    ctx->pc = 0x36b1d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54288);
    // 0x36b1d4: 0x3c101000  lui         $s0, 0x1000
    ctx->pc = 0x36b1d4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4096 << 16));
    // 0x36b1d8: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x36b1d8u;
    runtime->Store32(rdram, ctx, 0x1000D410u, GPR_U32(ctx, 18)); // MMIO: 0x1000d410
    // 0x36b1dc: 0xc0bec4e  jal         func_2FB138
    ctx->pc = 0x36B1DCu;
    SET_GPR_U32(ctx, 31, 0x36B1E4u);
    ctx->pc = 0x36B1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B1DCu;
    // 0x36b1e0: 0x3610d420  ori         $s0, $s0, 0xD420 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)54304);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB138u, 0x36B1DCu, 0x36B1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B1E4u;
label_36b1e4:
    // 0x36b1e4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x36b1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x36b1e8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x36b1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x36b1ec: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x36b1ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x36b1f0: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x36b1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36b1f4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36b1f4u;
    runtime->Store32(rdram, ctx, 0x1000D400u, GPR_U32(ctx, 2)); // MMIO: 0x1000d400
    // 0x36b1f8: 0xf  sync
    ctx->pc = 0x36b1f8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36b1fc: 0x40f  sync.p
    ctx->pc = 0x36b1fcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36b200: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x36b200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36b204: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x36b204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x36b208: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x36B208u;
    {
        const bool branch_taken_0x36b208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B208u;
        // 0x36b20c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b208) {
            ctx->pc = 0x36B264u;
            goto label_36b264;
        }
    }
    ctx->pc = 0x36B210u;
    // 0x36b210: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x36b210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x36b214: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x36b214u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19)); // MMIO: 0x1000e020
    // 0x36b218: 0xf  sync
    ctx->pc = 0x36b218u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36b21c: 0x40f  sync.p
    ctx->pc = 0x36b21cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_36b220:
    // 0x36b220: 0x0  nop
    ctx->pc = 0x36b220u;
    // NOP
    // 0x36b224: 0x0  nop
    ctx->pc = 0x36b224u;
    // NOP
    // 0x36b228: 0x0  nop
    ctx->pc = 0x36b228u;
    // NOP
    // 0x36b22c: 0x0  nop
    ctx->pc = 0x36b22cu;
    // NOP
    // 0x36b230: 0x0  nop
    ctx->pc = 0x36b230u;
    // NOP
    // 0x36b234: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x36B234u;
    {
        const bool branch_taken_0x36b234 = (false);
        if (branch_taken_0x36b234) {
            ctx->pc = 0x36B220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36b220;
        }
    }
    ctx->pc = 0x36B23Cu;
    // 0x36b23c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x36b23cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x36b240: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x36b240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x36b244: 0x0  nop
    ctx->pc = 0x36b244u;
    // NOP
label_36b248:
    // 0x36b248: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x36b248u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x36b24c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x36b24cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x36b250: 0x0  nop
    ctx->pc = 0x36b250u;
    // NOP
    // 0x36b254: 0x0  nop
    ctx->pc = 0x36b254u;
    // NOP
    // 0x36b258: 0x0  nop
    ctx->pc = 0x36b258u;
    // NOP
    // 0x36b25c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36B25Cu;
    {
        const bool branch_taken_0x36b25c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36b25c) {
            ctx->pc = 0x36B248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36b248;
        }
    }
    ctx->pc = 0x36B264u;
label_36b264:
    // 0x36b264: 0x1a80009f  blez        $s4, . + 4 + (0x9F << 2)
    ctx->pc = 0x36B264u;
    {
        const bool branch_taken_0x36b264 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x36B268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B264u;
        // 0x36b268: 0x3c067000  lui         $a2, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b264) {
            ctx->pc = 0x36B4E4u;
            goto label_36b4e4;
        }
    }
    ctx->pc = 0x36B26Cu;
    // 0x36b26c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x36b26cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b270: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x36b270u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x36b274: 0x81023  negu        $v0, $t0
    ctx->pc = 0x36b274u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 8)));
    // 0x36b278: 0x30450003  andi        $a1, $v0, 0x3
    ctx->pc = 0x36b278u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x36b27c: 0x3c077000  lui         $a3, 0x7000
    ctx->pc = 0x36b27cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28672 << 16));
    // 0x36b280: 0x34c60cc0  ori         $a2, $a2, 0xCC0
    ctx->pc = 0x36b280u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)3264);
    // 0x36b284: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x36b284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x36b288: 0x10a0004e  beqz        $a1, . + 4 + (0x4E << 2)
    ctx->pc = 0x36B288u;
    {
        const bool branch_taken_0x36b288 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B288u;
        // 0x36b28c: 0x34840cc0  ori         $a0, $a0, 0xCC0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3264);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b288) {
            ctx->pc = 0x36B3C4u;
            goto label_36b3c4;
        }
    }
    ctx->pc = 0x36B290u;
    // 0x36b290: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x36b290u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x36b294: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x36B294u;
    {
        const bool branch_taken_0x36b294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B294u;
        // 0x36b298: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b294) {
            ctx->pc = 0x36B368u;
            goto label_36b368;
        }
    }
    ctx->pc = 0x36B29Cu;
    // 0x36b29c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x36B29Cu;
    {
        const bool branch_taken_0x36b29c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36b29c) {
            ctx->pc = 0x36B310u;
            goto label_36b310;
        }
    }
    ctx->pc = 0x36B2A4u;
    // 0x36b2a4: 0x88e20003  lwl         $v0, 0x3($a3)
    ctx->pc = 0x36b2a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x36b2a8: 0x98e20000  lwr         $v0, 0x0($a3)
    ctx->pc = 0x36b2a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x36b2ac: 0xa8c20003  swl         $v0, 0x3($a2)
    ctx->pc = 0x36b2acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b2b0: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x36b2b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x36b2b4: 0xb8c20000  swr         $v0, 0x0($a2)
    ctx->pc = 0x36b2b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b2b8: 0x3c177000  lui         $s7, 0x7000
    ctx->pc = 0x36b2b8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)28672 << 16));
    // 0x36b2bc: 0x36f70cc4  ori         $s7, $s7, 0xCC4
    ctx->pc = 0x36b2bcu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)3268);
    // 0x36b2c0: 0x88e60003  lwl         $a2, 0x3($a3)
    ctx->pc = 0x36b2c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x36b2c4: 0x98e60000  lwr         $a2, 0x0($a3)
    ctx->pc = 0x36b2c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x36b2c8: 0xaae60003  swl         $a2, 0x3($s7)
    ctx->pc = 0x36b2c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b2cc: 0xbae60000  swr         $a2, 0x0($s7)
    ctx->pc = 0x36b2ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b2d0: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x36b2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x36b2d4: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x36b2d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x36b2d8: 0x34c60cc8  ori         $a2, $a2, 0xCC8
    ctx->pc = 0x36b2d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)3272);
    // 0x36b2dc: 0x88fe0003  lwl         $fp, 0x3($a3)
    ctx->pc = 0x36b2dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 30) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 30, (int32_t)merged); }
    // 0x36b2e0: 0x98fe0000  lwr         $fp, 0x0($a3)
    ctx->pc = 0x36b2e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 30) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 30) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 30, merged64); }
    // 0x36b2e4: 0xa8de0003  swl         $fp, 0x3($a2)
    ctx->pc = 0x36b2e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 30); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b2e8: 0xb8de0000  swr         $fp, 0x0($a2)
    ctx->pc = 0x36b2e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 30); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b2ec: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x36b2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x36b2f0: 0x3c1e7000  lui         $fp, 0x7000
    ctx->pc = 0x36b2f0u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)28672 << 16));
    // 0x36b2f4: 0x37de0ccc  ori         $fp, $fp, 0xCCC
    ctx->pc = 0x36b2f4u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)3276);
    // 0x36b2f8: 0x88e90003  lwl         $t1, 0x3($a3)
    ctx->pc = 0x36b2f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 9) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 9, (int32_t)merged); }
    // 0x36b2fc: 0x98e90000  lwr         $t1, 0x0($a3)
    ctx->pc = 0x36b2fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 9) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 9) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 9, merged64); }
    // 0x36b300: 0xabc90003  swl         $t1, 0x3($fp)
    ctx->pc = 0x36b300u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b304: 0xbbc90000  swr         $t1, 0x0($fp)
    ctx->pc = 0x36b304u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b308: 0x34840cd0  ori         $a0, $a0, 0xCD0
    ctx->pc = 0x36b308u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3280);
    // 0x36b30c: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x36b30cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_36b310:
    // 0x36b310: 0x88620003  lwl         $v0, 0x3($v1)
    ctx->pc = 0x36b310u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x36b314: 0x98620000  lwr         $v0, 0x0($v1)
    ctx->pc = 0x36b314u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x36b318: 0xa8820003  swl         $v0, 0x3($a0)
    ctx->pc = 0x36b318u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b31c: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x36b31cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x36b320: 0xb8820000  swr         $v0, 0x0($a0)
    ctx->pc = 0x36b320u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b324: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x36b324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x36b328: 0x88690003  lwl         $t1, 0x3($v1)
    ctx->pc = 0x36b328u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 9) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 9, (int32_t)merged); }
    // 0x36b32c: 0x98690000  lwr         $t1, 0x0($v1)
    ctx->pc = 0x36b32cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 9) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 9) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 9, merged64); }
    // 0x36b330: 0xa8890003  swl         $t1, 0x3($a0)
    ctx->pc = 0x36b330u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b334: 0xb8890000  swr         $t1, 0x0($a0)
    ctx->pc = 0x36b334u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b338: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x36b338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x36b33c: 0x88620003  lwl         $v0, 0x3($v1)
    ctx->pc = 0x36b33cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x36b340: 0x98620000  lwr         $v0, 0x0($v1)
    ctx->pc = 0x36b340u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x36b344: 0xa8820003  swl         $v0, 0x3($a0)
    ctx->pc = 0x36b344u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b348: 0xb8820000  swr         $v0, 0x0($a0)
    ctx->pc = 0x36b348u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b34c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x36b34cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x36b350: 0x88690003  lwl         $t1, 0x3($v1)
    ctx->pc = 0x36b350u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 9) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 9, (int32_t)merged); }
    // 0x36b354: 0x98690000  lwr         $t1, 0x0($v1)
    ctx->pc = 0x36b354u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 9) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 9) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 9, merged64); }
    // 0x36b358: 0xa8890003  swl         $t1, 0x3($a0)
    ctx->pc = 0x36b358u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b35c: 0xb8890000  swr         $t1, 0x0($a0)
    ctx->pc = 0x36b35cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b360: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x36b360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x36b364: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x36b364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_36b368:
    // 0x36b368: 0x88620003  lwl         $v0, 0x3($v1)
    ctx->pc = 0x36b368u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x36b36c: 0x98620000  lwr         $v0, 0x0($v1)
    ctx->pc = 0x36b36cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x36b370: 0xa8820003  swl         $v0, 0x3($a0)
    ctx->pc = 0x36b370u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b374: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x36b374u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x36b378: 0xb8820000  swr         $v0, 0x0($a0)
    ctx->pc = 0x36b378u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b37c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x36b37cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x36b380: 0x88690003  lwl         $t1, 0x3($v1)
    ctx->pc = 0x36b380u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 9) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 9, (int32_t)merged); }
    // 0x36b384: 0x98690000  lwr         $t1, 0x0($v1)
    ctx->pc = 0x36b384u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 9) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 9) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 9, merged64); }
    // 0x36b388: 0xa8890003  swl         $t1, 0x3($a0)
    ctx->pc = 0x36b388u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b38c: 0xb8890000  swr         $t1, 0x0($a0)
    ctx->pc = 0x36b38cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b390: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x36b390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x36b394: 0x88620003  lwl         $v0, 0x3($v1)
    ctx->pc = 0x36b394u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x36b398: 0x98620000  lwr         $v0, 0x0($v1)
    ctx->pc = 0x36b398u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x36b39c: 0xa8820003  swl         $v0, 0x3($a0)
    ctx->pc = 0x36b39cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b3a0: 0xb8820000  swr         $v0, 0x0($a0)
    ctx->pc = 0x36b3a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b3a4: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x36b3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x36b3a8: 0x88690003  lwl         $t1, 0x3($v1)
    ctx->pc = 0x36b3a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 9) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 9, (int32_t)merged); }
    // 0x36b3ac: 0x98690000  lwr         $t1, 0x0($v1)
    ctx->pc = 0x36b3acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 9) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 9) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 9, merged64); }
    // 0x36b3b0: 0xa8890003  swl         $t1, 0x3($a0)
    ctx->pc = 0x36b3b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b3b4: 0xb8890000  swr         $t1, 0x0($a0)
    ctx->pc = 0x36b3b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b3b8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x36b3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x36b3bc: 0x11000049  beqz        $t0, . + 4 + (0x49 << 2)
    ctx->pc = 0x36B3BCu;
    {
        const bool branch_taken_0x36b3bc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B3BCu;
        // 0x36b3c0: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b3bc) {
            ctx->pc = 0x36B4E4u;
            goto label_36b4e4;
        }
    }
    ctx->pc = 0x36B3C4u;
label_36b3c4:
    // 0x36b3c4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x36b3c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_36b3c8:
    // 0x36b3c8: 0x88640003  lwl         $a0, 0x3($v1)
    ctx->pc = 0x36b3c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x36b3cc: 0x98640000  lwr         $a0, 0x0($v1)
    ctx->pc = 0x36b3ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x36b3d0: 0xa8440003  swl         $a0, 0x3($v0)
    ctx->pc = 0x36b3d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b3d4: 0x2508fffc  addiu       $t0, $t0, -0x4
    ctx->pc = 0x36b3d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
    // 0x36b3d8: 0xb8440000  swr         $a0, 0x0($v0)
    ctx->pc = 0x36b3d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b3dc: 0x88690003  lwl         $t1, 0x3($v1)
    ctx->pc = 0x36b3dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 9) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 9, (int32_t)merged); }
    // 0x36b3e0: 0x98690000  lwr         $t1, 0x0($v1)
    ctx->pc = 0x36b3e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 9) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 9) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 9, merged64); }
    // 0x36b3e4: 0xa8490007  swl         $t1, 0x7($v0)
    ctx->pc = 0x36b3e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b3e8: 0xb8490004  swr         $t1, 0x4($v0)
    ctx->pc = 0x36b3e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b3ec: 0x88640003  lwl         $a0, 0x3($v1)
    ctx->pc = 0x36b3ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x36b3f0: 0x98640000  lwr         $a0, 0x0($v1)
    ctx->pc = 0x36b3f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x36b3f4: 0xa844000b  swl         $a0, 0xB($v0)
    ctx->pc = 0x36b3f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b3f8: 0xb8440008  swr         $a0, 0x8($v0)
    ctx->pc = 0x36b3f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b3fc: 0x88690003  lwl         $t1, 0x3($v1)
    ctx->pc = 0x36b3fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 9) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 9, (int32_t)merged); }
    // 0x36b400: 0x98690000  lwr         $t1, 0x0($v1)
    ctx->pc = 0x36b400u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 9) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 9) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 9, merged64); }
    // 0x36b404: 0xa849000f  swl         $t1, 0xF($v0)
    ctx->pc = 0x36b404u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b408: 0xb849000c  swr         $t1, 0xC($v0)
    ctx->pc = 0x36b408u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b40c: 0x88640007  lwl         $a0, 0x7($v1)
    ctx->pc = 0x36b40cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x36b410: 0x98640004  lwr         $a0, 0x4($v1)
    ctx->pc = 0x36b410u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x36b414: 0xa8440013  swl         $a0, 0x13($v0)
    ctx->pc = 0x36b414u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b418: 0xb8440010  swr         $a0, 0x10($v0)
    ctx->pc = 0x36b418u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b41c: 0x88690007  lwl         $t1, 0x7($v1)
    ctx->pc = 0x36b41cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 9) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 9, (int32_t)merged); }
    // 0x36b420: 0x98690004  lwr         $t1, 0x4($v1)
    ctx->pc = 0x36b420u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 9) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 9) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 9, merged64); }
    // 0x36b424: 0xa8490017  swl         $t1, 0x17($v0)
    ctx->pc = 0x36b424u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b428: 0xb8490014  swr         $t1, 0x14($v0)
    ctx->pc = 0x36b428u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b42c: 0x88640007  lwl         $a0, 0x7($v1)
    ctx->pc = 0x36b42cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x36b430: 0x98640004  lwr         $a0, 0x4($v1)
    ctx->pc = 0x36b430u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x36b434: 0xa844001b  swl         $a0, 0x1B($v0)
    ctx->pc = 0x36b434u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b438: 0xb8440018  swr         $a0, 0x18($v0)
    ctx->pc = 0x36b438u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b43c: 0x88690007  lwl         $t1, 0x7($v1)
    ctx->pc = 0x36b43cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 9) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 9, (int32_t)merged); }
    // 0x36b440: 0x98690004  lwr         $t1, 0x4($v1)
    ctx->pc = 0x36b440u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 9) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 9) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 9, merged64); }
    // 0x36b444: 0xa849001f  swl         $t1, 0x1F($v0)
    ctx->pc = 0x36b444u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b448: 0xb849001c  swr         $t1, 0x1C($v0)
    ctx->pc = 0x36b448u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 28); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b44c: 0x8864000b  lwl         $a0, 0xB($v1)
    ctx->pc = 0x36b44cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x36b450: 0x98640008  lwr         $a0, 0x8($v1)
    ctx->pc = 0x36b450u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x36b454: 0xa8440023  swl         $a0, 0x23($v0)
    ctx->pc = 0x36b454u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b458: 0xb8440020  swr         $a0, 0x20($v0)
    ctx->pc = 0x36b458u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b45c: 0x8869000b  lwl         $t1, 0xB($v1)
    ctx->pc = 0x36b45cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 9) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 9, (int32_t)merged); }
    // 0x36b460: 0x98690008  lwr         $t1, 0x8($v1)
    ctx->pc = 0x36b460u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 9) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 9) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 9, merged64); }
    // 0x36b464: 0xa8490027  swl         $t1, 0x27($v0)
    ctx->pc = 0x36b464u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b468: 0xb8490024  swr         $t1, 0x24($v0)
    ctx->pc = 0x36b468u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 36); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b46c: 0x8864000b  lwl         $a0, 0xB($v1)
    ctx->pc = 0x36b46cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x36b470: 0x98640008  lwr         $a0, 0x8($v1)
    ctx->pc = 0x36b470u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x36b474: 0xa844002b  swl         $a0, 0x2B($v0)
    ctx->pc = 0x36b474u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 43); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b478: 0xb8440028  swr         $a0, 0x28($v0)
    ctx->pc = 0x36b478u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 40); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b47c: 0x8869000b  lwl         $t1, 0xB($v1)
    ctx->pc = 0x36b47cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 9) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 9, (int32_t)merged); }
    // 0x36b480: 0x98690008  lwr         $t1, 0x8($v1)
    ctx->pc = 0x36b480u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 9) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 9) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 9, merged64); }
    // 0x36b484: 0xa849002f  swl         $t1, 0x2F($v0)
    ctx->pc = 0x36b484u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 47); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b488: 0xb849002c  swr         $t1, 0x2C($v0)
    ctx->pc = 0x36b488u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 44); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b48c: 0x8864000f  lwl         $a0, 0xF($v1)
    ctx->pc = 0x36b48cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x36b490: 0x9864000c  lwr         $a0, 0xC($v1)
    ctx->pc = 0x36b490u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x36b494: 0xa8440033  swl         $a0, 0x33($v0)
    ctx->pc = 0x36b494u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 51); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b498: 0xb8440030  swr         $a0, 0x30($v0)
    ctx->pc = 0x36b498u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b49c: 0x24420034  addiu       $v0, $v0, 0x34
    ctx->pc = 0x36b49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x36b4a0: 0x8869000f  lwl         $t1, 0xF($v1)
    ctx->pc = 0x36b4a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 9) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 9, (int32_t)merged); }
    // 0x36b4a4: 0x9869000c  lwr         $t1, 0xC($v1)
    ctx->pc = 0x36b4a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 9) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 9) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 9, merged64); }
    // 0x36b4a8: 0xa8490003  swl         $t1, 0x3($v0)
    ctx->pc = 0x36b4a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b4ac: 0xb8490000  swr         $t1, 0x0($v0)
    ctx->pc = 0x36b4acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b4b0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x36b4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x36b4b4: 0x8864000f  lwl         $a0, 0xF($v1)
    ctx->pc = 0x36b4b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x36b4b8: 0x9864000c  lwr         $a0, 0xC($v1)
    ctx->pc = 0x36b4b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x36b4bc: 0xa8440003  swl         $a0, 0x3($v0)
    ctx->pc = 0x36b4bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b4c0: 0xb8440000  swr         $a0, 0x0($v0)
    ctx->pc = 0x36b4c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b4c4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x36b4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x36b4c8: 0x8869000f  lwl         $t1, 0xF($v1)
    ctx->pc = 0x36b4c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 9) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 9, (int32_t)merged); }
    // 0x36b4cc: 0x9869000c  lwr         $t1, 0xC($v1)
    ctx->pc = 0x36b4ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 9) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 9) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 9, merged64); }
    // 0x36b4d0: 0xa8490003  swl         $t1, 0x3($v0)
    ctx->pc = 0x36b4d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b4d4: 0xb8490000  swr         $t1, 0x0($v0)
    ctx->pc = 0x36b4d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b4d8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x36b4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x36b4dc: 0x1500ffba  bnez        $t0, . + 4 + (-0x46 << 2)
    ctx->pc = 0x36B4DCu;
    {
        const bool branch_taken_0x36b4dc = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x36B4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B4DCu;
        // 0x36b4e0: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b4dc) {
            ctx->pc = 0x36B3C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36b3c8;
        }
    }
    ctx->pc = 0x36B4E4u;
label_36b4e4:
    // 0x36b4e4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x36b4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x36b4e8: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x36b4e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x36b4ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x36b4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x1000d000
    // 0x36b4f0: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x36b4f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x36b4f4: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x36B4F4u;
    {
        const bool branch_taken_0x36b4f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B4F4u;
        // 0x36b4f8: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b4f4) {
            ctx->pc = 0x36B530u;
            goto label_36b530;
        }
    }
    ctx->pc = 0x36B4FCu;
    // 0x36b4fc: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x36b4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36b500: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x36b500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x36b504: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x36b504u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x36b508: 0xf  sync
    ctx->pc = 0x36b508u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36b50c: 0x40f  sync.p
    ctx->pc = 0x36b50cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_36b510:
    // 0x36b510: 0x0  nop
    ctx->pc = 0x36b510u;
    // NOP
    // 0x36b514: 0x0  nop
    ctx->pc = 0x36b514u;
    // NOP
    // 0x36b518: 0x0  nop
    ctx->pc = 0x36b518u;
    // NOP
    // 0x36b51c: 0x0  nop
    ctx->pc = 0x36b51cu;
    // NOP
    // 0x36b520: 0x0  nop
    ctx->pc = 0x36b520u;
    // NOP
    // 0x36b524: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x36B524u;
    {
        const bool branch_taken_0x36b524 = (false);
        if (branch_taken_0x36b524) {
            ctx->pc = 0x36B510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36b510;
        }
    }
    ctx->pc = 0x36B52Cu;
    // 0x36b52c: 0x0  nop
    ctx->pc = 0x36b52cu;
    // NOP
label_36b530:
    // 0x36b530: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x36b530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x36b534: 0x3442d400  ori         $v0, $v0, 0xD400
    ctx->pc = 0x36b534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54272);
    // 0x36b538: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x36b538u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D400u)); // MMIO: 0x1000d400
    // 0x36b53c: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x36b53cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x36b540: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x36B540u;
    {
        const bool branch_taken_0x36b540 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B540u;
        // 0x36b544: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b540) {
            ctx->pc = 0x36B59Cu;
            goto label_36b59c;
        }
    }
    ctx->pc = 0x36B548u;
    // 0x36b548: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x36b548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x36b54c: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x36b54cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x36b550: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x36b550u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x36b554: 0xf  sync
    ctx->pc = 0x36b554u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36b558: 0x40f  sync.p
    ctx->pc = 0x36b558u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_36b55c:
    // 0x36b55c: 0x0  nop
    ctx->pc = 0x36b55cu;
    // NOP
    // 0x36b560: 0x0  nop
    ctx->pc = 0x36b560u;
    // NOP
    // 0x36b564: 0x0  nop
    ctx->pc = 0x36b564u;
    // NOP
    // 0x36b568: 0x0  nop
    ctx->pc = 0x36b568u;
    // NOP
    // 0x36b56c: 0x0  nop
    ctx->pc = 0x36b56cu;
    // NOP
    // 0x36b570: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x36B570u;
    {
        const bool branch_taken_0x36b570 = (false);
        if (branch_taken_0x36b570) {
            ctx->pc = 0x36B55Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36b55c;
        }
    }
    ctx->pc = 0x36B578u;
    // 0x36b578: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x36b578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x36b57c: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x36b57cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_36b580:
    // 0x36b580: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x36b580u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x36b584: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x36b584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x36b588: 0x0  nop
    ctx->pc = 0x36b588u;
    // NOP
    // 0x36b58c: 0x0  nop
    ctx->pc = 0x36b58cu;
    // NOP
    // 0x36b590: 0x0  nop
    ctx->pc = 0x36b590u;
    // NOP
    // 0x36b594: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36B594u;
    {
        const bool branch_taken_0x36b594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36b594) {
            ctx->pc = 0x36B580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36b580;
        }
    }
    ctx->pc = 0x36B59Cu;
label_36b59c:
    // 0x36b59c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x36b59cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x36b5a0: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x36b5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36b5a4: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x36b5a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x36b5a8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x36b5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x36b5ac: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x36b5acu;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 5)); // MMIO: 0x1000e010
    // 0x36b5b0: 0x3463d080  ori         $v1, $v1, 0xD080
    ctx->pc = 0x36b5b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53376);
    // 0x36b5b4: 0x24040cc0  addiu       $a0, $zero, 0xCC0
    ctx->pc = 0x36b5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3264));
    // 0x36b5b8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x36b5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x36b5bc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x36b5bcu;
    runtime->Store32(rdram, ctx, 0x1000D080u, GPR_U32(ctx, 4)); // MMIO: 0x1000d080
    // 0x36b5c0: 0x3442d010  ori         $v0, $v0, 0xD010
    ctx->pc = 0x36b5c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53264);
    // 0x36b5c4: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x36b5c4u;
    runtime->Store32(rdram, ctx, 0x1000D010u, GPR_U32(ctx, 17)); // MMIO: 0x1000d010
    // 0x36b5c8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x36b5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x36b5cc: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x36b5ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
    // 0x36b5d0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x36b5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x36b5d4: 0xac740000  sw          $s4, 0x0($v1)
    ctx->pc = 0x36b5d4u;
    runtime->Store32(rdram, ctx, 0x1000D020u, GPR_U32(ctx, 20)); // MMIO: 0x1000d020
    // 0x36b5d8: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x36b5d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x36b5dc: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x36b5dcu;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 5)); // MMIO: 0x1000d000
    // 0x36b5e0: 0xf  sync
    ctx->pc = 0x36b5e0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36b5e4: 0x40f  sync.p
    ctx->pc = 0x36b5e4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36b5e8: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x36b5e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x36b5ec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x36b5ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x36b5f0: 0x460ca302  mul.s       $f12, $f20, $f12
    ctx->pc = 0x36b5f0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    // 0x36b5f4: 0x2368821  addu        $s1, $s1, $s6
    ctx->pc = 0x36b5f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    // 0x36b5f8: 0xc0bec4e  jal         func_2FB138
    ctx->pc = 0x36B5F8u;
    SET_GPR_U32(ctx, 31, 0x36B600u);
    ctx->pc = 0x36B5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B5F8u;
    // 0x36b5fc: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB138u, 0x36B5F8u, 0x36B600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B600u;
label_36b600:
    // 0x36b600: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x36b600u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x36b604: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x36b604u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_36b608:
    // 0x36b608: 0x520000fa  beql        $s0, $zero, . + 4 + (0xFA << 2)
    ctx->pc = 0x36B608u;
    {
        const bool branch_taken_0x36b608 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x36b608) {
            ctx->pc = 0x36B60Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36B608u;
            // 0x36b60c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36B9F4u;
            goto label_36b9f4;
        }
    }
    ctx->pc = 0x36B610u;
    // 0x36b610: 0x1a0000f7  blez        $s0, . + 4 + (0xF7 << 2)
    ctx->pc = 0x36B610u;
    {
        const bool branch_taken_0x36b610 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x36B614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B610u;
        // 0x36b614: 0x101023  negu        $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b610) {
            ctx->pc = 0x36B9F0u;
            goto label_36b9f0;
        }
    }
    ctx->pc = 0x36B618u;
    // 0x36b618: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x36b618u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b61c: 0x30450003  andi        $a1, $v0, 0x3
    ctx->pc = 0x36b61cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x36b620: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x36b620u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b624: 0x10a00046  beqz        $a1, . + 4 + (0x46 << 2)
    ctx->pc = 0x36B624u;
    {
        const bool branch_taken_0x36b624 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B624u;
        // 0x36b628: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b624) {
            ctx->pc = 0x36B740u;
            goto label_36b740;
        }
    }
    ctx->pc = 0x36B62Cu;
    // 0x36b62c: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x36b62cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x36b630: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x36B630u;
    {
        const bool branch_taken_0x36b630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B630u;
        // 0x36b634: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b630) {
            ctx->pc = 0x36B6E4u;
            goto label_36b6e4;
        }
    }
    ctx->pc = 0x36B638u;
    // 0x36b638: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x36B638u;
    {
        const bool branch_taken_0x36b638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36b638) {
            ctx->pc = 0x36B68Cu;
            goto label_36b68c;
        }
    }
    ctx->pc = 0x36B640u;
    // 0x36b640: 0x8a420003  lwl         $v0, 0x3($s2)
    ctx->pc = 0x36b640u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x36b644: 0x9a420000  lwr         $v0, 0x0($s2)
    ctx->pc = 0x36b644u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x36b648: 0xaa220003  swl         $v0, 0x3($s1)
    ctx->pc = 0x36b648u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b64c: 0x2608ffff  addiu       $t0, $s0, -0x1
    ctx->pc = 0x36b64cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x36b650: 0xba220000  swr         $v0, 0x0($s1)
    ctx->pc = 0x36b650u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b654: 0x8a460003  lwl         $a2, 0x3($s2)
    ctx->pc = 0x36b654u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x36b658: 0x9a460000  lwr         $a2, 0x0($s2)
    ctx->pc = 0x36b658u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x36b65c: 0xaa260007  swl         $a2, 0x7($s1)
    ctx->pc = 0x36b65cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b660: 0xba260004  swr         $a2, 0x4($s1)
    ctx->pc = 0x36b660u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b664: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x36b664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x36b668: 0x8a5e0003  lwl         $fp, 0x3($s2)
    ctx->pc = 0x36b668u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 30) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 30, (int32_t)merged); }
    // 0x36b66c: 0x9a5e0000  lwr         $fp, 0x0($s2)
    ctx->pc = 0x36b66cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 30) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 30) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 30, merged64); }
    // 0x36b670: 0xaa3e000b  swl         $fp, 0xB($s1)
    ctx->pc = 0x36b670u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 30); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b674: 0xba3e0008  swr         $fp, 0x8($s1)
    ctx->pc = 0x36b674u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 30); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b678: 0x26430004  addiu       $v1, $s2, 0x4
    ctx->pc = 0x36b678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x36b67c: 0x8a470003  lwl         $a3, 0x3($s2)
    ctx->pc = 0x36b67cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x36b680: 0x9a470000  lwr         $a3, 0x0($s2)
    ctx->pc = 0x36b680u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x36b684: 0xaa27000f  swl         $a3, 0xF($s1)
    ctx->pc = 0x36b684u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b688: 0xba27000c  swr         $a3, 0xC($s1)
    ctx->pc = 0x36b688u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_36b68c:
    // 0x36b68c: 0x887e0003  lwl         $fp, 0x3($v1)
    ctx->pc = 0x36b68cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 30) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 30, (int32_t)merged); }
    // 0x36b690: 0x987e0000  lwr         $fp, 0x0($v1)
    ctx->pc = 0x36b690u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 30) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 30) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 30, merged64); }
    // 0x36b694: 0xa89e0003  swl         $fp, 0x3($a0)
    ctx->pc = 0x36b694u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 30); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b698: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x36b698u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x36b69c: 0xb89e0000  swr         $fp, 0x0($a0)
    ctx->pc = 0x36b69cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 30); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b6a0: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x36b6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x36b6a4: 0x88670003  lwl         $a3, 0x3($v1)
    ctx->pc = 0x36b6a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x36b6a8: 0x98670000  lwr         $a3, 0x0($v1)
    ctx->pc = 0x36b6a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x36b6ac: 0xa8870003  swl         $a3, 0x3($a0)
    ctx->pc = 0x36b6acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b6b0: 0xb8870000  swr         $a3, 0x0($a0)
    ctx->pc = 0x36b6b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b6b4: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x36b6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x36b6b8: 0x88770003  lwl         $s7, 0x3($v1)
    ctx->pc = 0x36b6b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 23) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 23, (int32_t)merged); }
    // 0x36b6bc: 0x98770000  lwr         $s7, 0x0($v1)
    ctx->pc = 0x36b6bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 23) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 23) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 23, merged64); }
    // 0x36b6c0: 0xa8970003  swl         $s7, 0x3($a0)
    ctx->pc = 0x36b6c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 23); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b6c4: 0xb8970000  swr         $s7, 0x0($a0)
    ctx->pc = 0x36b6c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 23); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b6c8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x36b6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x36b6cc: 0x88660003  lwl         $a2, 0x3($v1)
    ctx->pc = 0x36b6ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x36b6d0: 0x98660000  lwr         $a2, 0x0($v1)
    ctx->pc = 0x36b6d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x36b6d4: 0xa8860003  swl         $a2, 0x3($a0)
    ctx->pc = 0x36b6d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b6d8: 0xb8860000  swr         $a2, 0x0($a0)
    ctx->pc = 0x36b6d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b6dc: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x36b6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x36b6e0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x36b6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_36b6e4:
    // 0x36b6e4: 0x88720003  lwl         $s2, 0x3($v1)
    ctx->pc = 0x36b6e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 18) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 18, (int32_t)merged); }
    // 0x36b6e8: 0x98720000  lwr         $s2, 0x0($v1)
    ctx->pc = 0x36b6e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 18) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 18) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 18, merged64); }
    // 0x36b6ec: 0xa8920003  swl         $s2, 0x3($a0)
    ctx->pc = 0x36b6ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 18); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b6f0: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x36b6f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x36b6f4: 0xb8920000  swr         $s2, 0x0($a0)
    ctx->pc = 0x36b6f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 18); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b6f8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x36b6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x36b6fc: 0x88650003  lwl         $a1, 0x3($v1)
    ctx->pc = 0x36b6fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 5) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 5, (int32_t)merged); }
    // 0x36b700: 0x98650000  lwr         $a1, 0x0($v1)
    ctx->pc = 0x36b700u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 5) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 5) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 5, merged64); }
    // 0x36b704: 0xa8850003  swl         $a1, 0x3($a0)
    ctx->pc = 0x36b704u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b708: 0xb8850000  swr         $a1, 0x0($a0)
    ctx->pc = 0x36b708u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b70c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x36b70cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x36b710: 0x88700003  lwl         $s0, 0x3($v1)
    ctx->pc = 0x36b710u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 16) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 16, (int32_t)merged); }
    // 0x36b714: 0x98700000  lwr         $s0, 0x0($v1)
    ctx->pc = 0x36b714u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 16) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 16) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 16, merged64); }
    // 0x36b718: 0xa8900003  swl         $s0, 0x3($a0)
    ctx->pc = 0x36b718u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 16); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b71c: 0xb8900000  swr         $s0, 0x0($a0)
    ctx->pc = 0x36b71cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 16); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b720: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x36b720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x36b724: 0x88620003  lwl         $v0, 0x3($v1)
    ctx->pc = 0x36b724u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x36b728: 0x98620000  lwr         $v0, 0x0($v1)
    ctx->pc = 0x36b728u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x36b72c: 0xa8820003  swl         $v0, 0x3($a0)
    ctx->pc = 0x36b72cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b730: 0xb8820000  swr         $v0, 0x0($a0)
    ctx->pc = 0x36b730u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b734: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x36b734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x36b738: 0x110000ad  beqz        $t0, . + 4 + (0xAD << 2)
    ctx->pc = 0x36B738u;
    {
        const bool branch_taken_0x36b738 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B738u;
        // 0x36b73c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b738) {
            ctx->pc = 0x36B9F0u;
            goto label_36b9f0;
        }
    }
    ctx->pc = 0x36B740u;
label_36b740:
    // 0x36b740: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x36b740u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b744: 0x0  nop
    ctx->pc = 0x36b744u;
    // NOP
label_36b748:
    // 0x36b748: 0x88690003  lwl         $t1, 0x3($v1)
    ctx->pc = 0x36b748u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 9) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 9, (int32_t)merged); }
    // 0x36b74c: 0x98690000  lwr         $t1, 0x0($v1)
    ctx->pc = 0x36b74cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 9) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 9) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 9, merged64); }
    // 0x36b750: 0xa8490003  swl         $t1, 0x3($v0)
    ctx->pc = 0x36b750u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b754: 0x2508fffc  addiu       $t0, $t0, -0x4
    ctx->pc = 0x36b754u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
    // 0x36b758: 0xb8490000  swr         $t1, 0x0($v0)
    ctx->pc = 0x36b758u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b75c: 0x887e0003  lwl         $fp, 0x3($v1)
    ctx->pc = 0x36b75cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 30) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 30, (int32_t)merged); }
    // 0x36b760: 0x987e0000  lwr         $fp, 0x0($v1)
    ctx->pc = 0x36b760u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 30) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 30) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 30, merged64); }
    // 0x36b764: 0xa85e0007  swl         $fp, 0x7($v0)
    ctx->pc = 0x36b764u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 30); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b768: 0xb85e0004  swr         $fp, 0x4($v0)
    ctx->pc = 0x36b768u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 30); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b76c: 0x88670003  lwl         $a3, 0x3($v1)
    ctx->pc = 0x36b76cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x36b770: 0x98670000  lwr         $a3, 0x0($v1)
    ctx->pc = 0x36b770u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x36b774: 0xa847000b  swl         $a3, 0xB($v0)
    ctx->pc = 0x36b774u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b778: 0xb8470008  swr         $a3, 0x8($v0)
    ctx->pc = 0x36b778u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b77c: 0x88770003  lwl         $s7, 0x3($v1)
    ctx->pc = 0x36b77cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 23) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 23, (int32_t)merged); }
    // 0x36b780: 0x98770000  lwr         $s7, 0x0($v1)
    ctx->pc = 0x36b780u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 23) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 23) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 23, merged64); }
    // 0x36b784: 0xa857000f  swl         $s7, 0xF($v0)
    ctx->pc = 0x36b784u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 23); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b788: 0xb857000c  swr         $s7, 0xC($v0)
    ctx->pc = 0x36b788u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 23); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b78c: 0x88660007  lwl         $a2, 0x7($v1)
    ctx->pc = 0x36b78cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x36b790: 0x98660004  lwr         $a2, 0x4($v1)
    ctx->pc = 0x36b790u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x36b794: 0xa8460013  swl         $a2, 0x13($v0)
    ctx->pc = 0x36b794u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b798: 0xb8460010  swr         $a2, 0x10($v0)
    ctx->pc = 0x36b798u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b79c: 0x88720007  lwl         $s2, 0x7($v1)
    ctx->pc = 0x36b79cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 18) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 18, (int32_t)merged); }
    // 0x36b7a0: 0x98720004  lwr         $s2, 0x4($v1)
    ctx->pc = 0x36b7a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 18) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 18) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 18, merged64); }
    // 0x36b7a4: 0xa8520017  swl         $s2, 0x17($v0)
    ctx->pc = 0x36b7a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 18); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b7a8: 0xb8520014  swr         $s2, 0x14($v0)
    ctx->pc = 0x36b7a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 18); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b7ac: 0x88650007  lwl         $a1, 0x7($v1)
    ctx->pc = 0x36b7acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 5) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 5, (int32_t)merged); }
    // 0x36b7b0: 0x98650004  lwr         $a1, 0x4($v1)
    ctx->pc = 0x36b7b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 5) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 5) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 5, merged64); }
    // 0x36b7b4: 0xa845001b  swl         $a1, 0x1B($v0)
    ctx->pc = 0x36b7b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b7b8: 0xb8450018  swr         $a1, 0x18($v0)
    ctx->pc = 0x36b7b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b7bc: 0x88700007  lwl         $s0, 0x7($v1)
    ctx->pc = 0x36b7bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 16) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 16, (int32_t)merged); }
    // 0x36b7c0: 0x98700004  lwr         $s0, 0x4($v1)
    ctx->pc = 0x36b7c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 16) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 16) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 16, merged64); }
    // 0x36b7c4: 0xa850001f  swl         $s0, 0x1F($v0)
    ctx->pc = 0x36b7c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 16); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b7c8: 0xb850001c  swr         $s0, 0x1C($v0)
    ctx->pc = 0x36b7c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 28); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 16); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b7cc: 0x8864000b  lwl         $a0, 0xB($v1)
    ctx->pc = 0x36b7ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x36b7d0: 0x98640008  lwr         $a0, 0x8($v1)
    ctx->pc = 0x36b7d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x36b7d4: 0xa8440023  swl         $a0, 0x23($v0)
    ctx->pc = 0x36b7d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b7d8: 0xb8440020  swr         $a0, 0x20($v0)
    ctx->pc = 0x36b7d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b7dc: 0x8869000b  lwl         $t1, 0xB($v1)
    ctx->pc = 0x36b7dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 9) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 9, (int32_t)merged); }
    // 0x36b7e0: 0x98690008  lwr         $t1, 0x8($v1)
    ctx->pc = 0x36b7e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 9) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 9) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 9, merged64); }
    // 0x36b7e4: 0xa8490027  swl         $t1, 0x27($v0)
    ctx->pc = 0x36b7e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b7e8: 0xb8490024  swr         $t1, 0x24($v0)
    ctx->pc = 0x36b7e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 36); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b7ec: 0x887e000b  lwl         $fp, 0xB($v1)
    ctx->pc = 0x36b7ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 30) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 30, (int32_t)merged); }
    // 0x36b7f0: 0x987e0008  lwr         $fp, 0x8($v1)
    ctx->pc = 0x36b7f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 30) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 30) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 30, merged64); }
    // 0x36b7f4: 0xa85e002b  swl         $fp, 0x2B($v0)
    ctx->pc = 0x36b7f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 43); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 30); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b7f8: 0xb85e0028  swr         $fp, 0x28($v0)
    ctx->pc = 0x36b7f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 40); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 30); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b7fc: 0x8867000b  lwl         $a3, 0xB($v1)
    ctx->pc = 0x36b7fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x36b800: 0x98670008  lwr         $a3, 0x8($v1)
    ctx->pc = 0x36b800u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x36b804: 0xa847002f  swl         $a3, 0x2F($v0)
    ctx->pc = 0x36b804u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 47); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b808: 0xb847002c  swr         $a3, 0x2C($v0)
    ctx->pc = 0x36b808u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 44); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b80c: 0x8877000f  lwl         $s7, 0xF($v1)
    ctx->pc = 0x36b80cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 23) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 23, (int32_t)merged); }
    // 0x36b810: 0x9877000c  lwr         $s7, 0xC($v1)
    ctx->pc = 0x36b810u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 23) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 23) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 23, merged64); }
    // 0x36b814: 0xa8570033  swl         $s7, 0x33($v0)
    ctx->pc = 0x36b814u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 51); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 23); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b818: 0xb8570030  swr         $s7, 0x30($v0)
    ctx->pc = 0x36b818u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 23); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b81c: 0x24420034  addiu       $v0, $v0, 0x34
    ctx->pc = 0x36b81cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x36b820: 0x8866000f  lwl         $a2, 0xF($v1)
    ctx->pc = 0x36b820u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x36b824: 0x9866000c  lwr         $a2, 0xC($v1)
    ctx->pc = 0x36b824u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x36b828: 0xa8460003  swl         $a2, 0x3($v0)
    ctx->pc = 0x36b828u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b82c: 0xb8460000  swr         $a2, 0x0($v0)
    ctx->pc = 0x36b82cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b830: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x36b830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x36b834: 0x8872000f  lwl         $s2, 0xF($v1)
    ctx->pc = 0x36b834u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 18) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 18, (int32_t)merged); }
    // 0x36b838: 0x9872000c  lwr         $s2, 0xC($v1)
    ctx->pc = 0x36b838u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 18) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 18) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 18, merged64); }
    // 0x36b83c: 0xa8520003  swl         $s2, 0x3($v0)
    ctx->pc = 0x36b83cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 18); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b840: 0xb8520000  swr         $s2, 0x0($v0)
    ctx->pc = 0x36b840u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 18); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b844: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x36b844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x36b848: 0x8865000f  lwl         $a1, 0xF($v1)
    ctx->pc = 0x36b848u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 5) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 5, (int32_t)merged); }
    // 0x36b84c: 0x9865000c  lwr         $a1, 0xC($v1)
    ctx->pc = 0x36b84cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 5) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 5) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 5, merged64); }
    // 0x36b850: 0xa8450003  swl         $a1, 0x3($v0)
    ctx->pc = 0x36b850u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b854: 0xb8450000  swr         $a1, 0x0($v0)
    ctx->pc = 0x36b854u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x36b858: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x36b858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x36b85c: 0x1500ffba  bnez        $t0, . + 4 + (-0x46 << 2)
    ctx->pc = 0x36B85Cu;
    {
        const bool branch_taken_0x36b85c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x36B860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B85Cu;
        // 0x36b860: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b85c) {
            ctx->pc = 0x36B748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36b748;
        }
    }
    ctx->pc = 0x36B864u;
    // 0x36b864: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x36B864u;
    {
        const bool branch_taken_0x36b864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B864u;
        // 0x36b868: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b864) {
            ctx->pc = 0x36B9F4u;
            goto label_36b9f4;
        }
    }
    ctx->pc = 0x36B86Cu;
label_36b86c:
    // 0x36b86c: 0x1a000060  blez        $s0, . + 4 + (0x60 << 2)
    ctx->pc = 0x36B86Cu;
    {
        const bool branch_taken_0x36b86c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x36B870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B86Cu;
        // 0x36b870: 0x101023  negu        $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b86c) {
            ctx->pc = 0x36B9F0u;
            goto label_36b9f0;
        }
    }
    ctx->pc = 0x36B874u;
    // 0x36b874: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x36b874u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b878: 0x30450003  andi        $a1, $v0, 0x3
    ctx->pc = 0x36b878u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x36b87c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36b87cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b880: 0x10a00025  beqz        $a1, . + 4 + (0x25 << 2)
    ctx->pc = 0x36B880u;
    {
        const bool branch_taken_0x36b880 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B880u;
        // 0x36b884: 0x220182d  daddu       $v1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b880) {
            ctx->pc = 0x36B918u;
            goto label_36b918;
        }
    }
    ctx->pc = 0x36B888u;
    // 0x36b888: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x36b888u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x36b88c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x36B88Cu;
    {
        const bool branch_taken_0x36b88c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B88Cu;
        // 0x36b890: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b88c) {
            ctx->pc = 0x36B90Cu;
            goto label_36b90c;
        }
    }
    ctx->pc = 0x36B894u;
    // 0x36b894: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x36B894u;
    {
        const bool branch_taken_0x36b894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36b894) {
            ctx->pc = 0x36B898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36B894u;
            // 0x36b898: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36B8D8u;
            goto label_36b8d8;
        }
    }
    ctx->pc = 0x36B89Cu;
    // 0x36b89c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x36b89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x36b8a0: 0x2492021  addu        $a0, $s2, $t1
    ctx->pc = 0x36b8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
    // 0x36b8a4: 0x2608ffff  addiu       $t0, $s0, -0x1
    ctx->pc = 0x36b8a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x36b8a8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x36b8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x36b8ac: 0x2278821  addu        $s1, $s1, $a3
    ctx->pc = 0x36b8acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x36b8b0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x36b8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x36b8b4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x36b8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x36b8b8: 0x2278821  addu        $s1, $s1, $a3
    ctx->pc = 0x36b8b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x36b8bc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x36b8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x36b8c0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x36b8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x36b8c4: 0x2278821  addu        $s1, $s1, $a3
    ctx->pc = 0x36b8c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x36b8c8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x36b8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x36b8cc: 0x2271821  addu        $v1, $s1, $a3
    ctx->pc = 0x36b8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x36b8d0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x36b8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x36b8d4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x36b8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_36b8d8:
    // 0x36b8d8: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x36b8d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x36b8dc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36b8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36b8e0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36b8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36b8e4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x36b8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36b8e8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36b8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36b8ec: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36b8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36b8f0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x36b8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36b8f4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36b8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36b8f8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36b8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36b8fc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x36b8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36b900: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x36b900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x36b904: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36b904u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36b908: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36b908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_36b90c:
    // 0x36b90c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x36b90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36b910: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x36B910u;
    {
        const bool branch_taken_0x36b910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B910u;
        // 0x36b914: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b910) {
            ctx->pc = 0x36B9BCu;
            goto label_36b9bc;
        }
    }
    ctx->pc = 0x36B918u;
label_36b918:
    // 0x36b918: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x36b918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36b91c: 0x2508fffc  addiu       $t0, $t0, -0x4
    ctx->pc = 0x36b91cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
    // 0x36b920: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36b920u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36b924: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36b924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36b928: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x36b928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36b92c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36b92cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36b930: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36b930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36b934: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x36b934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36b938: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36b938u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36b93c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36b93cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36b940: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x36b940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36b944: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x36b944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x36b948: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36b948u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36b94c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36b94cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36b950: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x36b950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36b954: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36b954u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36b958: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36b958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36b95c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x36b95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36b960: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36b960u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36b964: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36b964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36b968: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x36b968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36b96c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36b96cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36b970: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36b970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36b974: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x36b974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36b978: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x36b978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x36b97c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36b97cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36b980: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36b980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36b984: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x36b984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36b988: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36b988u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36b98c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36b98cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36b990: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x36b990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36b994: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36b994u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36b998: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36b998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36b99c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x36b99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36b9a0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36b9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36b9a4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36b9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36b9a8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x36b9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36b9ac: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x36b9acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x36b9b0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36b9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36b9b4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36b9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36b9b8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x36b9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_36b9bc:
    // 0x36b9bc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36b9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36b9c0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36b9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36b9c4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x36b9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36b9c8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36b9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36b9cc: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36b9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36b9d0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x36b9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36b9d4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36b9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36b9d8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36b9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36b9dc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x36b9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36b9e0: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x36b9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x36b9e4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36b9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36b9e8: 0x1500ffcb  bnez        $t0, . + 4 + (-0x35 << 2)
    ctx->pc = 0x36B9E8u;
    {
        const bool branch_taken_0x36b9e8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x36B9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B9E8u;
        // 0x36b9ec: 0x671821  addu        $v1, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b9e8) {
            ctx->pc = 0x36B918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36b918;
        }
    }
    ctx->pc = 0x36B9F0u;
label_36b9f0:
    // 0x36b9f0: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x36b9f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_36b9f4:
    // 0x36b9f4: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x36b9f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x36b9f8: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x36b9f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x36b9fc: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x36b9fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x36ba00: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x36ba00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x36ba04: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x36ba04u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36ba08: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x36ba08u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36ba0c: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x36ba0cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36ba10: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x36ba10u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36ba14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36ba14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36ba18: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x36ba18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x36ba1c: 0x3e00008  jr          $ra
    ctx->pc = 0x36BA1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36BA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BA1Cu;
        // 0x36ba20: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36BA1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36BA24u;
    // 0x36ba24: 0x0  nop
    ctx->pc = 0x36ba24u;
    // NOP
    ctx->pc = 0x36ba28u;
}
