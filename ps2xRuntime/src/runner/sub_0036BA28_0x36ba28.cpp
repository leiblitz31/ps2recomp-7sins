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

// Function: sub_0036BA28
// Address: 0x36ba28 - 0x36c458
void sub_0036BA28_0x36ba28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036BA28_0x36ba28");
#endif

    switch (ctx->pc) {
        case 0x36ba78u: goto label_36ba78;
        case 0x36baa4u: goto label_36baa4;
        case 0x36baf0u: goto label_36baf0;
        case 0x36bb18u: goto label_36bb18;
        case 0x36bba8u: goto label_36bba8;
        case 0x36bbc4u: goto label_36bbc4;
        case 0x36bc04u: goto label_36bc04;
        case 0x36bc28u: goto label_36bc28;
        case 0x36bc88u: goto label_36bc88;
        case 0x36bcb0u: goto label_36bcb0;
        case 0x36bd68u: goto label_36bd68;
        case 0x36be4cu: goto label_36be4c;
        case 0x36be84u: goto label_36be84;
        case 0x36bea8u: goto label_36bea8;
        case 0x36bf30u: goto label_36bf30;
        case 0x36bf80u: goto label_36bf80;
        case 0x36bfa8u: goto label_36bfa8;
        case 0x36c030u: goto label_36c030;
        case 0x36c058u: goto label_36c058;
        case 0x36c120u: goto label_36c120;
        case 0x36c214u: goto label_36c214;
        case 0x36c25cu: goto label_36c25c;
        case 0x36c280u: goto label_36c280;
        case 0x36c368u: goto label_36c368;
        default: break;
    }

    ctx->pc = 0x36ba28u;

    // 0x36ba28: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x36ba28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x36ba2c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x36ba2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x36ba30: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x36ba30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x36ba34: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x36ba34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ba38: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x36ba38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x36ba3c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x36ba3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x36ba40: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x36ba40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x36ba44: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x36ba44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x36ba48: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x36ba48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x36ba4c: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x36ba4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x36ba50: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x36ba50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x36ba54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36ba54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36ba58: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x36ba58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x36ba5c: 0x8cc50040  lw          $a1, 0x40($a2)
    ctx->pc = 0x36ba5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x36ba60: 0x8c920000  lw          $s2, 0x0($a0)
    ctx->pc = 0x36ba60u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36ba64: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x36ba64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x36ba68: 0x14a20221  bne         $a1, $v0, . + 4 + (0x221 << 2)
    ctx->pc = 0x36BA68u;
    {
        const bool branch_taken_0x36ba68 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x36BA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BA68u;
        // 0x36ba6c: 0x8cd1003c  lw          $s1, 0x3C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ba68) {
            ctx->pc = 0x36C2F0u;
            goto label_36c2f0;
        }
    }
    ctx->pc = 0x36BA70u;
    // 0x36ba70: 0xc0bf778  jal         func_2FDDE0
    ctx->pc = 0x36BA70u;
    SET_GPR_U32(ctx, 31, 0x36BA78u);
    ctx->pc = 0x36BA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BA70u;
    // 0x36ba74: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDDE0u, 0x36BA70u, 0x36BA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BA78u;
label_36ba78:
    // 0x36ba78: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x36ba78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x36ba7c: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x36ba7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x36ba80: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x36ba80u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x1000d000
    // 0x36ba84: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x36ba84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x36ba88: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x36BA88u;
    {
        const bool branch_taken_0x36ba88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x36BA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BA88u;
        // 0x36ba8c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ba88) {
            ctx->pc = 0x36BAC0u;
            goto label_36bac0;
        }
    }
    ctx->pc = 0x36BA90u;
    // 0x36ba90: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x36ba90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36ba94: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x36ba94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x36ba98: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x36ba98u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x36ba9c: 0xf  sync
    ctx->pc = 0x36ba9cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36baa0: 0x40f  sync.p
    ctx->pc = 0x36baa0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_36baa4:
    // 0x36baa4: 0x0  nop
    ctx->pc = 0x36baa4u;
    // NOP
    // 0x36baa8: 0x0  nop
    ctx->pc = 0x36baa8u;
    // NOP
    // 0x36baac: 0x0  nop
    ctx->pc = 0x36baacu;
    // NOP
    // 0x36bab0: 0x0  nop
    ctx->pc = 0x36bab0u;
    // NOP
    // 0x36bab4: 0x0  nop
    ctx->pc = 0x36bab4u;
    // NOP
    // 0x36bab8: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x36BAB8u;
    {
        const bool branch_taken_0x36bab8 = (false);
        if (branch_taken_0x36bab8) {
            ctx->pc = 0x36BAA4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36baa4;
        }
    }
    ctx->pc = 0x36BAC0u;
label_36bac0:
    // 0x36bac0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x36bac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x36bac4: 0x2a040156  slti        $a0, $s0, 0x156
    ctx->pc = 0x36bac4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)342) ? 1 : 0);
    // 0x36bac8: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x36bac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x36bacc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x36baccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36bad0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x36bad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x36bad4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x36BAD4u;
    {
        const bool branch_taken_0x36bad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36BAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BAD4u;
        // 0x36bad8: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36bad4) {
            ctx->pc = 0x36BB34u;
            goto label_36bb34;
        }
    }
    ctx->pc = 0x36BADCu;
    // 0x36badc: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x36badcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x36bae0: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x36bae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x36bae4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x36bae4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x36bae8: 0xf  sync
    ctx->pc = 0x36bae8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36baec: 0x40f  sync.p
    ctx->pc = 0x36baecu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_36baf0:
    // 0x36baf0: 0x0  nop
    ctx->pc = 0x36baf0u;
    // NOP
    // 0x36baf4: 0x0  nop
    ctx->pc = 0x36baf4u;
    // NOP
    // 0x36baf8: 0x0  nop
    ctx->pc = 0x36baf8u;
    // NOP
    // 0x36bafc: 0x0  nop
    ctx->pc = 0x36bafcu;
    // NOP
    // 0x36bb00: 0x0  nop
    ctx->pc = 0x36bb00u;
    // NOP
    // 0x36bb04: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x36BB04u;
    {
        const bool branch_taken_0x36bb04 = (false);
        if (branch_taken_0x36bb04) {
            ctx->pc = 0x36BAF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36baf0;
        }
    }
    ctx->pc = 0x36BB0Cu;
    // 0x36bb0c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x36bb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x36bb10: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x36bb10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x36bb14: 0x0  nop
    ctx->pc = 0x36bb14u;
    // NOP
label_36bb18:
    // 0x36bb18: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x36bb18u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x36bb1c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x36bb1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x36bb20: 0x0  nop
    ctx->pc = 0x36bb20u;
    // NOP
    // 0x36bb24: 0x0  nop
    ctx->pc = 0x36bb24u;
    // NOP
    // 0x36bb28: 0x0  nop
    ctx->pc = 0x36bb28u;
    // NOP
    // 0x36bb2c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36BB2Cu;
    {
        const bool branch_taken_0x36bb2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36bb2c) {
            ctx->pc = 0x36BB18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36bb18;
        }
    }
    ctx->pc = 0x36BB34u;
label_36bb34:
    // 0x36bb34: 0x148000f2  bnez        $a0, . + 4 + (0xF2 << 2)
    ctx->pc = 0x36BB34u;
    {
        const bool branch_taken_0x36bb34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x36bb34) {
            ctx->pc = 0x36BF00u;
            goto label_36bf00;
        }
    }
    ctx->pc = 0x36BB3Cu;
    // 0x36bb3c: 0x3c191000  lui         $t9, 0x1000
    ctx->pc = 0x36bb3cu;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)4096 << 16));
    // 0x36bb40: 0x3c0f1000  lui         $t7, 0x1000
    ctx->pc = 0x36bb40u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)4096 << 16));
    // 0x36bb44: 0xafb90000  sw          $t9, 0x0($sp)
    ctx->pc = 0x36bb44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 25));
    // 0x36bb48: 0x3c0c1000  lui         $t4, 0x1000
    ctx->pc = 0x36bb48u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)4096 << 16));
    // 0x36bb4c: 0xafb90004  sw          $t9, 0x4($sp)
    ctx->pc = 0x36bb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 25));
    // 0x36bb50: 0x3c0d1000  lui         $t5, 0x1000
    ctx->pc = 0x36bb50u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)4096 << 16));
    // 0x36bb54: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x36bb54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36bb58: 0x3c171000  lui         $s7, 0x1000
    ctx->pc = 0x36bb58u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)4096 << 16));
    // 0x36bb5c: 0x3c151000  lui         $s5, 0x1000
    ctx->pc = 0x36bb5cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)4096 << 16));
    // 0x36bb60: 0x3c141000  lui         $s4, 0x1000
    ctx->pc = 0x36bb60u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)4096 << 16));
    // 0x36bb64: 0x3442d480  ori         $v0, $v0, 0xD480
    ctx->pc = 0x36bb64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54400);
    // 0x36bb68: 0x3c131000  lui         $s3, 0x1000
    ctx->pc = 0x36bb68u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4096 << 16));
    // 0x36bb6c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x36bb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x36bb70: 0x35efd000  ori         $t7, $t7, 0xD000
    ctx->pc = 0x36bb70u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)53248);
    // 0x36bb74: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x36bb74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x36bb78: 0x358ce020  ori         $t4, $t4, 0xE020
    ctx->pc = 0x36bb78u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)57376);
    // 0x36bb7c: 0x24180100  addiu       $t8, $zero, 0x100
    ctx->pc = 0x36bb7cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36bb80: 0x35add400  ori         $t5, $t5, 0xD400
    ctx->pc = 0x36bb80u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)54272);
    // 0x36bb84: 0x3442d410  ori         $v0, $v0, 0xD410
    ctx->pc = 0x36bb84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54288);
    // 0x36bb88: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x36bb88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x36bb8c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x36bb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x36bb90: 0x3739e010  ori         $t9, $t9, 0xE010
    ctx->pc = 0x36bb90u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) | (uint64_t)(uint16_t)57360);
    // 0x36bb94: 0x36f7d420  ori         $s7, $s7, 0xD420
    ctx->pc = 0x36bb94u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)54304);
    // 0x36bb98: 0x36b5d080  ori         $s5, $s5, 0xD080
    ctx->pc = 0x36bb98u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)53376);
    // 0x36bb9c: 0x3694d010  ori         $s4, $s4, 0xD010
    ctx->pc = 0x36bb9cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)53264);
    // 0x36bba0: 0x3673d020  ori         $s3, $s3, 0xD020
    ctx->pc = 0x36bba0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)53280);
    // 0x36bba4: 0x0  nop
    ctx->pc = 0x36bba4u;
    // NOP
label_36bba8:
    // 0x36bba8: 0x8de20000  lw          $v0, 0x0($t7)
    ctx->pc = 0x36bba8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 15), 0))); // MMIO: 0x1000d000
    // 0x36bbac: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x36bbacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x36bbb0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x36BBB0u;
    {
        const bool branch_taken_0x36bbb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36bbb0) {
            ctx->pc = 0x36BBE0u;
            goto label_36bbe0;
        }
    }
    ctx->pc = 0x36BBB8u;
    // 0x36bbb8: 0xad980000  sw          $t8, 0x0($t4)
    ctx->pc = 0x36bbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 24));
    // 0x36bbbc: 0xf  sync
    ctx->pc = 0x36bbbcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36bbc0: 0x40f  sync.p
    ctx->pc = 0x36bbc0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_36bbc4:
    // 0x36bbc4: 0x0  nop
    ctx->pc = 0x36bbc4u;
    // NOP
    // 0x36bbc8: 0x0  nop
    ctx->pc = 0x36bbc8u;
    // NOP
    // 0x36bbcc: 0x0  nop
    ctx->pc = 0x36bbccu;
    // NOP
    // 0x36bbd0: 0x0  nop
    ctx->pc = 0x36bbd0u;
    // NOP
    // 0x36bbd4: 0x0  nop
    ctx->pc = 0x36bbd4u;
    // NOP
    // 0x36bbd8: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x36BBD8u;
    {
        const bool branch_taken_0x36bbd8 = (false);
        if (branch_taken_0x36bbd8) {
            ctx->pc = 0x36BBC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36bbc4;
        }
    }
    ctx->pc = 0x36BBE0u;
label_36bbe0:
    // 0x36bbe0: 0x8da20000  lw          $v0, 0x0($t5)
    ctx->pc = 0x36bbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x36bbe4: 0x261efeab  addiu       $fp, $s0, -0x155
    ctx->pc = 0x36bbe4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966955));
    // 0x36bbe8: 0x26301550  addiu       $s0, $s1, 0x1550
    ctx->pc = 0x36bbe8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 5456));
    // 0x36bbec: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x36bbecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x36bbf0: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x36BBF0u;
    {
        const bool branch_taken_0x36bbf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36BBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BBF0u;
        // 0x36bbf4: 0x26562aa0  addiu       $s6, $s2, 0x2AA0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 10912));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36bbf0) {
            ctx->pc = 0x36BC44u;
            goto label_36bc44;
        }
    }
    ctx->pc = 0x36BBF8u;
    // 0x36bbf8: 0xad850000  sw          $a1, 0x0($t4)
    ctx->pc = 0x36bbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 5));
    // 0x36bbfc: 0xf  sync
    ctx->pc = 0x36bbfcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36bc00: 0x40f  sync.p
    ctx->pc = 0x36bc00u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_36bc04:
    // 0x36bc04: 0x0  nop
    ctx->pc = 0x36bc04u;
    // NOP
    // 0x36bc08: 0x0  nop
    ctx->pc = 0x36bc08u;
    // NOP
    // 0x36bc0c: 0x0  nop
    ctx->pc = 0x36bc0cu;
    // NOP
    // 0x36bc10: 0x0  nop
    ctx->pc = 0x36bc10u;
    // NOP
    // 0x36bc14: 0x0  nop
    ctx->pc = 0x36bc14u;
    // NOP
    // 0x36bc18: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x36BC18u;
    {
        const bool branch_taken_0x36bc18 = (false);
        if (branch_taken_0x36bc18) {
            ctx->pc = 0x36BC04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36bc04;
        }
    }
    ctx->pc = 0x36BC20u;
    // 0x36bc20: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x36bc20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x36bc24: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x36bc24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_36bc28:
    // 0x36bc28: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x36bc28u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x36bc2c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x36bc2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x36bc30: 0x0  nop
    ctx->pc = 0x36bc30u;
    // NOP
    // 0x36bc34: 0x0  nop
    ctx->pc = 0x36bc34u;
    // NOP
    // 0x36bc38: 0x0  nop
    ctx->pc = 0x36bc38u;
    // NOP
    // 0x36bc3c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36BC3Cu;
    {
        const bool branch_taken_0x36bc3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36bc3c) {
            ctx->pc = 0x36BC28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36bc28;
        }
    }
    ctx->pc = 0x36BC44u;
label_36bc44:
    // 0x36bc44: 0xaf250000  sw          $a1, 0x0($t9)
    ctx->pc = 0x36bc44u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 5));
    // 0x36bc48: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x36bc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36bc4c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x36bc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x36bc50: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x36bc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x36bc54: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x36bc54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x36bc58: 0x24020155  addiu       $v0, $zero, 0x155
    ctx->pc = 0x36bc58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 341));
    // 0x36bc5c: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x36bc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x36bc60: 0xadb80000  sw          $t8, 0x0($t5)
    ctx->pc = 0x36bc60u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 24));
    // 0x36bc64: 0xf  sync
    ctx->pc = 0x36bc64u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36bc68: 0x40f  sync.p
    ctx->pc = 0x36bc68u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36bc6c: 0x8da20000  lw          $v0, 0x0($t5)
    ctx->pc = 0x36bc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x36bc70: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x36bc70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x36bc74: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x36BC74u;
    {
        const bool branch_taken_0x36bc74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36BC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BC74u;
        // 0x36bc78: 0x3c067000  lui         $a2, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36bc74) {
            ctx->pc = 0x36BCCCu;
            goto label_36bccc;
        }
    }
    ctx->pc = 0x36BC7Cu;
    // 0x36bc7c: 0xad850000  sw          $a1, 0x0($t4)
    ctx->pc = 0x36bc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 5));
    // 0x36bc80: 0xf  sync
    ctx->pc = 0x36bc80u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36bc84: 0x40f  sync.p
    ctx->pc = 0x36bc84u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_36bc88:
    // 0x36bc88: 0x0  nop
    ctx->pc = 0x36bc88u;
    // NOP
    // 0x36bc8c: 0x0  nop
    ctx->pc = 0x36bc8cu;
    // NOP
    // 0x36bc90: 0x0  nop
    ctx->pc = 0x36bc90u;
    // NOP
    // 0x36bc94: 0x0  nop
    ctx->pc = 0x36bc94u;
    // NOP
    // 0x36bc98: 0x0  nop
    ctx->pc = 0x36bc98u;
    // NOP
    // 0x36bc9c: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x36BC9Cu;
    {
        const bool branch_taken_0x36bc9c = (false);
        if (branch_taken_0x36bc9c) {
            ctx->pc = 0x36BC88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36bc88;
        }
    }
    ctx->pc = 0x36BCA4u;
    // 0x36bca4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x36bca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x36bca8: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x36bca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x36bcac: 0x0  nop
    ctx->pc = 0x36bcacu;
    // NOP
label_36bcb0:
    // 0x36bcb0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x36bcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x36bcb4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x36bcb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x36bcb8: 0x0  nop
    ctx->pc = 0x36bcb8u;
    // NOP
    // 0x36bcbc: 0x0  nop
    ctx->pc = 0x36bcbcu;
    // NOP
    // 0x36bcc0: 0x0  nop
    ctx->pc = 0x36bcc0u;
    // NOP
    // 0x36bcc4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36BCC4u;
    {
        const bool branch_taken_0x36bcc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36BCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BCC4u;
        // 0x36bcc8: 0x3c067000  lui         $a2, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36bcc4) {
            ctx->pc = 0x36BCB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36bcb0;
        }
    }
    ctx->pc = 0x36BCCCu;
label_36bccc:
    // 0x36bccc: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x36bcccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x36bcd0: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x36bcd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36bcd4: 0x34421550  ori         $v0, $v0, 0x1550
    ctx->pc = 0x36bcd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5456);
    // 0x36bcd8: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x36bcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x36bcdc: 0x3c0b7000  lui         $t3, 0x7000
    ctx->pc = 0x36bcdcu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)28672 << 16));
    // 0x36bce0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x36bce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70001550u, bits); }
    // 0x36bce4: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x36bce4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x36bce8: 0x3c097000  lui         $t1, 0x7000
    ctx->pc = 0x36bce8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)28672 << 16));
    // 0x36bcec: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x36bcecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x36bcf0: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x36bcf0u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x7000000Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36bcf4: 0x3c087000  lui         $t0, 0x7000
    ctx->pc = 0x36bcf4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)28672 << 16));
    // 0x36bcf8: 0x3c077000  lui         $a3, 0x7000
    ctx->pc = 0x36bcf8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28672 << 16));
    // 0x36bcfc: 0x3c0a7000  lui         $t2, 0x7000
    ctx->pc = 0x36bcfcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)28672 << 16));
    // 0x36bd00: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x36bd00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70001554u, bits); }
    // 0x36bd04: 0x356b0010  ori         $t3, $t3, 0x10
    ctx->pc = 0x36bd04u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)16);
    // 0x36bd08: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x36bd08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x36bd0c: 0x240e0153  addiu       $t6, $zero, 0x153
    ctx->pc = 0x36bd0cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 339));
    // 0x36bd10: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x36bd10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36bd14: 0x34421558  ori         $v0, $v0, 0x1558
    ctx->pc = 0x36bd14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5464);
    // 0x36bd18: 0x35291570  ori         $t1, $t1, 0x1570
    ctx->pc = 0x36bd18u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)5488);
    // 0x36bd1c: 0x34631570  ori         $v1, $v1, 0x1570
    ctx->pc = 0x36bd1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5488);
    // 0x36bd20: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x36bd20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70001558u, bits); }
    // 0x36bd24: 0x35081570  ori         $t0, $t0, 0x1570
    ctx->pc = 0x36bd24u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)5488);
    // 0x36bd28: 0x34e71570  ori         $a3, $a3, 0x1570
    ctx->pc = 0x36bd28u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)5488);
    // 0x36bd2c: 0x354a1570  ori         $t2, $t2, 0x1570
    ctx->pc = 0x36bd2cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)5488);
    // 0x36bd30: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x36bd30u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x7000000Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36bd34: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x36bd34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x7000155Cu, bits); }
    // 0x36bd38: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x36bd38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x36bd3c: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x36bd3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36bd40: 0x34421560  ori         $v0, $v0, 0x1560
    ctx->pc = 0x36bd40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5472);
    // 0x36bd44: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x36bd44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70001560u, bits); }
    // 0x36bd48: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x36bd48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36bd4c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x36bd4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70001564u, bits); }
    // 0x36bd50: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x36bd50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x36bd54: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x36bd54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36bd58: 0x34421568  ori         $v0, $v0, 0x1568
    ctx->pc = 0x36bd58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5480);
    // 0x36bd5c: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x36bd5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70001568u, bits); }
    // 0x36bd60: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x36bd60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36bd64: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x36bd64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x7000156Cu, bits); }
label_36bd68:
    // 0x36bd68: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x36bd68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bd6c: 0x25cefffe  addiu       $t6, $t6, -0x2
    ctx->pc = 0x36bd6cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967294));
    // 0x36bd70: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x36bd70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36bd74: 0x24c40008  addiu       $a0, $a2, 0x8
    ctx->pc = 0x36bd74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x36bd78: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x36bd78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x36bd7c: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x36bd7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36bd80: 0xe5400004  swc1        $f0, 0x4($t2)
    ctx->pc = 0x36bd80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
    // 0x36bd84: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x36bd84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36bd88: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x36bd88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x36bd8c: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x36bd8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36bd90: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x36bd90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x36bd94: 0x24e70028  addiu       $a3, $a3, 0x28
    ctx->pc = 0x36bd94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 40));
    // 0x36bd98: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x36bd98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36bd9c: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x36bd9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x36bda0: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x36bda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36bda4: 0xe5010014  swc1        $f1, 0x14($t0)
    ctx->pc = 0x36bda4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 20), bits); }
    // 0x36bda8: 0x25080030  addiu       $t0, $t0, 0x30
    ctx->pc = 0x36bda8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
    // 0x36bdac: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x36bdacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36bdb0: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x36bdb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x36bdb4: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x36bdb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36bdb8: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x36bdb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x36bdbc: 0xe521001c  swc1        $f1, 0x1C($t1)
    ctx->pc = 0x36bdbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 28), bits); }
    // 0x36bdc0: 0x24c40008  addiu       $a0, $a2, 0x8
    ctx->pc = 0x36bdc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x36bdc4: 0x25290038  addiu       $t1, $t1, 0x38
    ctx->pc = 0x36bdc4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 56));
    // 0x36bdc8: 0x24cb0010  addiu       $t3, $a2, 0x10
    ctx->pc = 0x36bdc8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x36bdcc: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x36bdccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36bdd0: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x36bdd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x36bdd4: 0x24630028  addiu       $v1, $v1, 0x28
    ctx->pc = 0x36bdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x36bdd8: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x36bdd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36bddc: 0xe5400024  swc1        $f0, 0x24($t2)
    ctx->pc = 0x36bddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 36), bits); }
    // 0x36bde0: 0x254a0040  addiu       $t2, $t2, 0x40
    ctx->pc = 0x36bde0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 64));
    // 0x36bde4: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x36bde4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36bde8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x36bde8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x36bdec: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x36bdecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x36bdf0: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x36bdf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36bdf4: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x36bdf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x36bdf8: 0x24e70018  addiu       $a3, $a3, 0x18
    ctx->pc = 0x36bdf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
    // 0x36bdfc: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x36bdfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36be00: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x36be00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x36be04: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x36be04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x36be08: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x36be08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36be0c: 0xe5000004  swc1        $f0, 0x4($t0)
    ctx->pc = 0x36be0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x36be10: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x36be10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x36be14: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x36be14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36be18: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x36be18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x36be1c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x36be1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x36be20: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x36be20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36be24: 0xe5200004  swc1        $f0, 0x4($t1)
    ctx->pc = 0x36be24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x36be28: 0x5c1ffcf  bgez        $t6, . + 4 + (-0x31 << 2)
    ctx->pc = 0x36BE28u;
    {
        const bool branch_taken_0x36be28 = (GPR_S32(ctx, 14) >= 0);
        ctx->pc = 0x36BE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BE28u;
        // 0x36be2c: 0x25290008  addiu       $t1, $t1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36be28) {
            ctx->pc = 0x36BD68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36bd68;
        }
    }
    ctx->pc = 0x36BE30u;
    // 0x36be30: 0x8de20000  lw          $v0, 0x0($t7)
    ctx->pc = 0x36be30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x36be34: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x36be34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x36be38: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x36BE38u;
    {
        const bool branch_taken_0x36be38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36be38) {
            ctx->pc = 0x36BE68u;
            goto label_36be68;
        }
    }
    ctx->pc = 0x36BE40u;
    // 0x36be40: 0xad980000  sw          $t8, 0x0($t4)
    ctx->pc = 0x36be40u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 24));
    // 0x36be44: 0xf  sync
    ctx->pc = 0x36be44u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36be48: 0x40f  sync.p
    ctx->pc = 0x36be48u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_36be4c:
    // 0x36be4c: 0x0  nop
    ctx->pc = 0x36be4cu;
    // NOP
    // 0x36be50: 0x0  nop
    ctx->pc = 0x36be50u;
    // NOP
    // 0x36be54: 0x0  nop
    ctx->pc = 0x36be54u;
    // NOP
    // 0x36be58: 0x0  nop
    ctx->pc = 0x36be58u;
    // NOP
    // 0x36be5c: 0x0  nop
    ctx->pc = 0x36be5cu;
    // NOP
    // 0x36be60: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x36BE60u;
    {
        const bool branch_taken_0x36be60 = (false);
        if (branch_taken_0x36be60) {
            ctx->pc = 0x36BE4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36be4c;
        }
    }
    ctx->pc = 0x36BE68u;
label_36be68:
    // 0x36be68: 0x8da20000  lw          $v0, 0x0($t5)
    ctx->pc = 0x36be68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x36be6c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x36be6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x36be70: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x36BE70u;
    {
        const bool branch_taken_0x36be70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36be70) {
            ctx->pc = 0x36BEC4u;
            goto label_36bec4;
        }
    }
    ctx->pc = 0x36BE78u;
    // 0x36be78: 0xad850000  sw          $a1, 0x0($t4)
    ctx->pc = 0x36be78u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 5));
    // 0x36be7c: 0xf  sync
    ctx->pc = 0x36be7cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36be80: 0x40f  sync.p
    ctx->pc = 0x36be80u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_36be84:
    // 0x36be84: 0x0  nop
    ctx->pc = 0x36be84u;
    // NOP
    // 0x36be88: 0x0  nop
    ctx->pc = 0x36be88u;
    // NOP
    // 0x36be8c: 0x0  nop
    ctx->pc = 0x36be8cu;
    // NOP
    // 0x36be90: 0x0  nop
    ctx->pc = 0x36be90u;
    // NOP
    // 0x36be94: 0x0  nop
    ctx->pc = 0x36be94u;
    // NOP
    // 0x36be98: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x36BE98u;
    {
        const bool branch_taken_0x36be98 = (false);
        if (branch_taken_0x36be98) {
            ctx->pc = 0x36BE84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36be84;
        }
    }
    ctx->pc = 0x36BEA0u;
    // 0x36bea0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x36bea0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x36bea4: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x36bea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_36bea8:
    // 0x36bea8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x36bea8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x36beac: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x36beacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x36beb0: 0x0  nop
    ctx->pc = 0x36beb0u;
    // NOP
    // 0x36beb4: 0x0  nop
    ctx->pc = 0x36beb4u;
    // NOP
    // 0x36beb8: 0x0  nop
    ctx->pc = 0x36beb8u;
    // NOP
    // 0x36bebc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36BEBCu;
    {
        const bool branch_taken_0x36bebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36bebc) {
            ctx->pc = 0x36BEA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36bea8;
        }
    }
    ctx->pc = 0x36BEC4u;
label_36bec4:
    // 0x36bec4: 0xaf380000  sw          $t8, 0x0($t9)
    ctx->pc = 0x36bec4u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 24));
    // 0x36bec8: 0x24021550  addiu       $v0, $zero, 0x1550
    ctx->pc = 0x36bec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5456));
    // 0x36becc: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x36beccu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x36bed0: 0xae920000  sw          $s2, 0x0($s4)
    ctx->pc = 0x36bed0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 18));
    // 0x36bed4: 0x240202aa  addiu       $v0, $zero, 0x2AA
    ctx->pc = 0x36bed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 682));
    // 0x36bed8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x36bed8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x36bedc: 0xadf80000  sw          $t8, 0x0($t7)
    ctx->pc = 0x36bedcu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 24));
    // 0x36bee0: 0xf  sync
    ctx->pc = 0x36bee0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36bee4: 0x40f  sync.p
    ctx->pc = 0x36bee4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36bee8: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x36bee8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36beec: 0x3c0802d  daddu       $s0, $fp, $zero
    ctx->pc = 0x36beecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bef0: 0x2a020156  slti        $v0, $s0, 0x156
    ctx->pc = 0x36bef0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)342) ? 1 : 0);
    // 0x36bef4: 0x1040ff2c  beqz        $v0, . + 4 + (-0xD4 << 2)
    ctx->pc = 0x36BEF4u;
    {
        const bool branch_taken_0x36bef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36BEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BEF4u;
        // 0x36bef8: 0x2c0902d  daddu       $s2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36bef4) {
            ctx->pc = 0x36BBA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36bba8;
        }
    }
    ctx->pc = 0x36BEFCu;
    // 0x36befc: 0x0  nop
    ctx->pc = 0x36befcu;
    // NOP
label_36bf00:
    // 0x36bf00: 0x12000148  beqz        $s0, . + 4 + (0x148 << 2)
    ctx->pc = 0x36BF00u;
    {
        const bool branch_taken_0x36bf00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x36BF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BF00u;
        // 0x36bf04: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36bf00) {
            ctx->pc = 0x36C424u;
            goto label_36c424;
        }
    }
    ctx->pc = 0x36BF08u;
    // 0x36bf08: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x36bf08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x36bf0c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x36bf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x1000d000
    // 0x36bf10: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x36bf10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x36bf14: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x36BF14u;
    {
        const bool branch_taken_0x36bf14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x36BF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BF14u;
        // 0x36bf18: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36bf14) {
            ctx->pc = 0x36BF50u;
            goto label_36bf50;
        }
    }
    ctx->pc = 0x36BF1Cu;
    // 0x36bf1c: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x36bf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36bf20: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x36bf20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x36bf24: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x36bf24u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x36bf28: 0xf  sync
    ctx->pc = 0x36bf28u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36bf2c: 0x40f  sync.p
    ctx->pc = 0x36bf2cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_36bf30:
    // 0x36bf30: 0x0  nop
    ctx->pc = 0x36bf30u;
    // NOP
    // 0x36bf34: 0x0  nop
    ctx->pc = 0x36bf34u;
    // NOP
    // 0x36bf38: 0x0  nop
    ctx->pc = 0x36bf38u;
    // NOP
    // 0x36bf3c: 0x0  nop
    ctx->pc = 0x36bf3cu;
    // NOP
    // 0x36bf40: 0x0  nop
    ctx->pc = 0x36bf40u;
    // NOP
    // 0x36bf44: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x36BF44u;
    {
        const bool branch_taken_0x36bf44 = (false);
        if (branch_taken_0x36bf44) {
            ctx->pc = 0x36BF30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36bf30;
        }
    }
    ctx->pc = 0x36BF4Cu;
    // 0x36bf4c: 0x0  nop
    ctx->pc = 0x36bf4cu;
    // NOP
label_36bf50:
    // 0x36bf50: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x36bf50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x36bf54: 0x104840  sll         $t1, $s0, 1
    ctx->pc = 0x36bf54u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x36bf58: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x36bf58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x36bf5c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x36bf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36bf60: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x36bf60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x36bf64: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x36BF64u;
    {
        const bool branch_taken_0x36bf64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36BF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BF64u;
        // 0x36bf68: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36bf64) {
            ctx->pc = 0x36BFC4u;
            goto label_36bfc4;
        }
    }
    ctx->pc = 0x36BF6Cu;
    // 0x36bf6c: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x36bf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x36bf70: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x36bf70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x36bf74: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x36bf74u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x36bf78: 0xf  sync
    ctx->pc = 0x36bf78u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36bf7c: 0x40f  sync.p
    ctx->pc = 0x36bf7cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_36bf80:
    // 0x36bf80: 0x0  nop
    ctx->pc = 0x36bf80u;
    // NOP
    // 0x36bf84: 0x0  nop
    ctx->pc = 0x36bf84u;
    // NOP
    // 0x36bf88: 0x0  nop
    ctx->pc = 0x36bf88u;
    // NOP
    // 0x36bf8c: 0x0  nop
    ctx->pc = 0x36bf8cu;
    // NOP
    // 0x36bf90: 0x0  nop
    ctx->pc = 0x36bf90u;
    // NOP
    // 0x36bf94: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x36BF94u;
    {
        const bool branch_taken_0x36bf94 = (false);
        if (branch_taken_0x36bf94) {
            ctx->pc = 0x36BF80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36bf80;
        }
    }
    ctx->pc = 0x36BF9Cu;
    // 0x36bf9c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x36bf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x36bfa0: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x36bfa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x36bfa4: 0x0  nop
    ctx->pc = 0x36bfa4u;
    // NOP
label_36bfa8:
    // 0x36bfa8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x36bfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x36bfac: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x36bfacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x36bfb0: 0x0  nop
    ctx->pc = 0x36bfb0u;
    // NOP
    // 0x36bfb4: 0x0  nop
    ctx->pc = 0x36bfb4u;
    // NOP
    // 0x36bfb8: 0x0  nop
    ctx->pc = 0x36bfb8u;
    // NOP
    // 0x36bfbc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36BFBCu;
    {
        const bool branch_taken_0x36bfbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36bfbc) {
            ctx->pc = 0x36BFA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36bfa8;
        }
    }
    ctx->pc = 0x36BFC4u;
label_36bfc4:
    // 0x36bfc4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x36bfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x36bfc8: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x36bfc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x36bfcc: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x36bfccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x36bfd0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x36bfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x36bfd4: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x36bfd4u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 5)); // MMIO: 0x1000e010
    // 0x36bfd8: 0x3463d480  ori         $v1, $v1, 0xD480
    ctx->pc = 0x36bfd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54400);
    // 0x36bfdc: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x36bfdcu;
    runtime->Store32(rdram, ctx, 0x1000D480u, GPR_U32(ctx, 0)); // MMIO: 0x1000d480
    // 0x36bfe0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x36bfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x36bfe4: 0x3442d410  ori         $v0, $v0, 0xD410
    ctx->pc = 0x36bfe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54288);
    // 0x36bfe8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x36bfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x36bfec: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x36bfecu;
    runtime->Store32(rdram, ctx, 0x1000D410u, GPR_U32(ctx, 17)); // MMIO: 0x1000d410
    // 0x36bff0: 0x3463d420  ori         $v1, $v1, 0xD420
    ctx->pc = 0x36bff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54304);
    // 0x36bff4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x36bff4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x36bff8: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x36bff8u;
    runtime->Store32(rdram, ctx, 0x1000D420u, GPR_U32(ctx, 16)); // MMIO: 0x1000d420
    // 0x36bffc: 0x3484d400  ori         $a0, $a0, 0xD400
    ctx->pc = 0x36bffcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
    // 0x36c000: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x36c000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36c004: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x36c004u;
    runtime->Store32(rdram, ctx, 0x1000D400u, GPR_U32(ctx, 2)); // MMIO: 0x1000d400
    // 0x36c008: 0xf  sync
    ctx->pc = 0x36c008u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36c00c: 0x40f  sync.p
    ctx->pc = 0x36c00cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36c010: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x36c010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36c014: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x36c014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x36c018: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x36C018u;
    {
        const bool branch_taken_0x36c018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36C01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C018u;
        // 0x36c01c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c018) {
            ctx->pc = 0x36C074u;
            goto label_36c074;
        }
    }
    ctx->pc = 0x36C020u;
    // 0x36c020: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x36c020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x36c024: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x36c024u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5)); // MMIO: 0x1000e020
    // 0x36c028: 0xf  sync
    ctx->pc = 0x36c028u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36c02c: 0x40f  sync.p
    ctx->pc = 0x36c02cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_36c030:
    // 0x36c030: 0x0  nop
    ctx->pc = 0x36c030u;
    // NOP
    // 0x36c034: 0x0  nop
    ctx->pc = 0x36c034u;
    // NOP
    // 0x36c038: 0x0  nop
    ctx->pc = 0x36c038u;
    // NOP
    // 0x36c03c: 0x0  nop
    ctx->pc = 0x36c03cu;
    // NOP
    // 0x36c040: 0x0  nop
    ctx->pc = 0x36c040u;
    // NOP
    // 0x36c044: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x36C044u;
    {
        const bool branch_taken_0x36c044 = (false);
        if (branch_taken_0x36c044) {
            ctx->pc = 0x36C030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36c030;
        }
    }
    ctx->pc = 0x36C04Cu;
    // 0x36c04c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x36c04cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x36c050: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x36c050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x36c054: 0x0  nop
    ctx->pc = 0x36c054u;
    // NOP
label_36c058:
    // 0x36c058: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x36c058u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x36c05c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x36c05cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x36c060: 0x0  nop
    ctx->pc = 0x36c060u;
    // NOP
    // 0x36c064: 0x0  nop
    ctx->pc = 0x36c064u;
    // NOP
    // 0x36c068: 0x0  nop
    ctx->pc = 0x36c068u;
    // NOP
    // 0x36c06c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36C06Cu;
    {
        const bool branch_taken_0x36c06c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36c06c) {
            ctx->pc = 0x36C058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36c058;
        }
    }
    ctx->pc = 0x36C074u;
label_36c074:
    // 0x36c074: 0x1a00005c  blez        $s0, . + 4 + (0x5C << 2)
    ctx->pc = 0x36C074u;
    {
        const bool branch_taken_0x36c074 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x36C078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C074u;
        // 0x36c078: 0x3c0b7000  lui         $t3, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c074) {
            ctx->pc = 0x36C1E8u;
            goto label_36c1e8;
        }
    }
    ctx->pc = 0x36C07Cu;
    // 0x36c07c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x36c07cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x36c080: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x36c080u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x36c084: 0x200702d  daddu       $t6, $s0, $zero
    ctx->pc = 0x36c084u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c088: 0x34631550  ori         $v1, $v1, 0x1550
    ctx->pc = 0x36c088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5456);
    // 0x36c08c: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x36c08cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x36c090: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x36C090u;
    {
        const bool branch_taken_0x36c090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36C094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C090u;
        // 0x36c094: 0x34a51550  ori         $a1, $a1, 0x1550 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)5456);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c090) {
            ctx->pc = 0x36C110u;
            goto label_36c110;
        }
    }
    ctx->pc = 0x36C098u;
    // 0x36c098: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x36c098u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x36c09c: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x36c09cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x36c0a0: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x36c0a0u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000000u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36c0a4: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x36c0a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x36c0a8: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x36c0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x36c0ac: 0x260effff  addiu       $t6, $s0, -0x1
    ctx->pc = 0x36c0acu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x36c0b0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x36c0b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x36c0b4: 0x356b0010  ori         $t3, $t3, 0x10
    ctx->pc = 0x36c0b4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)16);
    // 0x36c0b8: 0x34a51570  ori         $a1, $a1, 0x1570
    ctx->pc = 0x36c0b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)5488);
    // 0x36c0bc: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x36c0bcu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x7000000Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36c0c0: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x36c0c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x36c0c4: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x36c0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x36c0c8: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x36c0c8u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000008u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36c0cc: 0x34631558  ori         $v1, $v1, 0x1558
    ctx->pc = 0x36c0ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5464);
    // 0x36c0d0: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x36c0d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70001558u, bits); }
    // 0x36c0d4: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x36c0d4u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x7000000Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36c0d8: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x36c0d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x7000155Cu, bits); }
    // 0x36c0dc: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x36c0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x36c0e0: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x36c0e0u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000008u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36c0e4: 0x34631560  ori         $v1, $v1, 0x1560
    ctx->pc = 0x36c0e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5472);
    // 0x36c0e8: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x36c0e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70001560u, bits); }
    // 0x36c0ec: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x36c0ecu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000004u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36c0f0: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x36c0f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70001564u, bits); }
    // 0x36c0f4: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x36c0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x36c0f8: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x36c0f8u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000000u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36c0fc: 0x34631568  ori         $v1, $v1, 0x1568
    ctx->pc = 0x36c0fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5480);
    // 0x36c100: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x36c100u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70001568u, bits); }
    // 0x36c104: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x36c104u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000004u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36c108: 0x11c00037  beqz        $t6, . + 4 + (0x37 << 2)
    ctx->pc = 0x36C108u;
    {
        const bool branch_taken_0x36c108 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x36C10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C108u;
        // 0x36c10c: 0xe4600004  swc1        $f0, 0x4($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c108) {
            ctx->pc = 0x36C1E8u;
            goto label_36c1e8;
        }
    }
    ctx->pc = 0x36C110u;
label_36c110:
    // 0x36c110: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x36c110u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c114: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x36c114u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c118: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x36c118u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c11c: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x36c11cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_36c120:
    // 0x36c120: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x36c120u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c124: 0x25cefffe  addiu       $t6, $t6, -0x2
    ctx->pc = 0x36c124u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967294));
    // 0x36c128: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x36c128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36c12c: 0x24c40008  addiu       $a0, $a2, 0x8
    ctx->pc = 0x36c12cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x36c130: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x36c130u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x36c134: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x36c134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36c138: 0xe5000004  swc1        $f0, 0x4($t0)
    ctx->pc = 0x36c138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x36c13c: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x36c13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36c140: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x36c140u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x36c144: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x36c144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36c148: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x36c148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x36c14c: 0x24a50028  addiu       $a1, $a1, 0x28
    ctx->pc = 0x36c14cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
    // 0x36c150: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x36c150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36c154: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x36c154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x36c158: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x36c158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36c15c: 0xe4e10014  swc1        $f1, 0x14($a3)
    ctx->pc = 0x36c15cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 20), bits); }
    // 0x36c160: 0x24e70030  addiu       $a3, $a3, 0x30
    ctx->pc = 0x36c160u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x36c164: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x36c164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36c168: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x36c168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x36c16c: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x36c16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36c170: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x36c170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x36c174: 0xe461001c  swc1        $f1, 0x1C($v1)
    ctx->pc = 0x36c174u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x36c178: 0x24c40008  addiu       $a0, $a2, 0x8
    ctx->pc = 0x36c178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x36c17c: 0x24630038  addiu       $v1, $v1, 0x38
    ctx->pc = 0x36c17cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
    // 0x36c180: 0x24cb0010  addiu       $t3, $a2, 0x10
    ctx->pc = 0x36c180u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x36c184: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x36c184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36c188: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x36c188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x36c18c: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x36c18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x36c190: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x36c190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36c194: 0xe5000024  swc1        $f0, 0x24($t0)
    ctx->pc = 0x36c194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 36), bits); }
    // 0x36c198: 0x25080040  addiu       $t0, $t0, 0x40
    ctx->pc = 0x36c198u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
    // 0x36c19c: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x36c19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36c1a0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x36c1a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x36c1a4: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x36c1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x36c1a8: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x36c1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36c1ac: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x36c1acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x36c1b0: 0x24a50018  addiu       $a1, $a1, 0x18
    ctx->pc = 0x36c1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x36c1b4: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x36c1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36c1b8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x36c1b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x36c1bc: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x36c1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x36c1c0: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x36c1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36c1c4: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x36c1c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x36c1c8: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x36c1c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x36c1cc: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x36c1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36c1d0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x36c1d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x36c1d4: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x36c1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x36c1d8: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x36c1d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36c1dc: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x36c1dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x36c1e0: 0x15c0ffcf  bnez        $t6, . + 4 + (-0x31 << 2)
    ctx->pc = 0x36C1E0u;
    {
        const bool branch_taken_0x36c1e0 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x36C1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C1E0u;
        // 0x36c1e4: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c1e0) {
            ctx->pc = 0x36C120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36c120;
        }
    }
    ctx->pc = 0x36C1E8u;
label_36c1e8:
    // 0x36c1e8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x36c1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x36c1ec: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x36c1ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x36c1f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x36c1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x1000d000
    // 0x36c1f4: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x36c1f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x36c1f8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x36C1F8u;
    {
        const bool branch_taken_0x36c1f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x36C1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C1F8u;
        // 0x36c1fc: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c1f8) {
            ctx->pc = 0x36C230u;
            goto label_36c230;
        }
    }
    ctx->pc = 0x36C200u;
    // 0x36c200: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x36c200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36c204: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x36c204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x36c208: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x36c208u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x36c20c: 0xf  sync
    ctx->pc = 0x36c20cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36c210: 0x40f  sync.p
    ctx->pc = 0x36c210u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_36c214:
    // 0x36c214: 0x0  nop
    ctx->pc = 0x36c214u;
    // NOP
    // 0x36c218: 0x0  nop
    ctx->pc = 0x36c218u;
    // NOP
    // 0x36c21c: 0x0  nop
    ctx->pc = 0x36c21cu;
    // NOP
    // 0x36c220: 0x0  nop
    ctx->pc = 0x36c220u;
    // NOP
    // 0x36c224: 0x0  nop
    ctx->pc = 0x36c224u;
    // NOP
    // 0x36c228: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x36C228u;
    {
        const bool branch_taken_0x36c228 = (false);
        if (branch_taken_0x36c228) {
            ctx->pc = 0x36C214u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36c214;
        }
    }
    ctx->pc = 0x36C230u;
label_36c230:
    // 0x36c230: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x36c230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x36c234: 0x3442d400  ori         $v0, $v0, 0xD400
    ctx->pc = 0x36c234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54272);
    // 0x36c238: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x36c238u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D400u)); // MMIO: 0x1000d400
    // 0x36c23c: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x36c23cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x36c240: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x36C240u;
    {
        const bool branch_taken_0x36c240 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x36C244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C240u;
        // 0x36c244: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c240) {
            ctx->pc = 0x36C29Cu;
            goto label_36c29c;
        }
    }
    ctx->pc = 0x36C248u;
    // 0x36c248: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x36c248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x36c24c: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x36c24cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x36c250: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x36c250u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x36c254: 0xf  sync
    ctx->pc = 0x36c254u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36c258: 0x40f  sync.p
    ctx->pc = 0x36c258u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_36c25c:
    // 0x36c25c: 0x0  nop
    ctx->pc = 0x36c25cu;
    // NOP
    // 0x36c260: 0x0  nop
    ctx->pc = 0x36c260u;
    // NOP
    // 0x36c264: 0x0  nop
    ctx->pc = 0x36c264u;
    // NOP
    // 0x36c268: 0x0  nop
    ctx->pc = 0x36c268u;
    // NOP
    // 0x36c26c: 0x0  nop
    ctx->pc = 0x36c26cu;
    // NOP
    // 0x36c270: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x36C270u;
    {
        const bool branch_taken_0x36c270 = (false);
        if (branch_taken_0x36c270) {
            ctx->pc = 0x36C25Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36c25c;
        }
    }
    ctx->pc = 0x36C278u;
    // 0x36c278: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x36c278u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x36c27c: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x36c27cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_36c280:
    // 0x36c280: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x36c280u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x36c284: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x36c284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x36c288: 0x0  nop
    ctx->pc = 0x36c288u;
    // NOP
    // 0x36c28c: 0x0  nop
    ctx->pc = 0x36c28cu;
    // NOP
    // 0x36c290: 0x0  nop
    ctx->pc = 0x36c290u;
    // NOP
    // 0x36c294: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36C294u;
    {
        const bool branch_taken_0x36c294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36c294) {
            ctx->pc = 0x36C280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36c280;
        }
    }
    ctx->pc = 0x36C29Cu;
label_36c29c:
    // 0x36c29c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x36c29cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x36c2a0: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x36c2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36c2a4: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x36c2a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x36c2a8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x36c2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x36c2ac: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x36c2acu;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 5)); // MMIO: 0x1000e010
    // 0x36c2b0: 0x3463d080  ori         $v1, $v1, 0xD080
    ctx->pc = 0x36c2b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53376);
    // 0x36c2b4: 0x24041550  addiu       $a0, $zero, 0x1550
    ctx->pc = 0x36c2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5456));
    // 0x36c2b8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x36c2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x36c2bc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x36c2bcu;
    runtime->Store32(rdram, ctx, 0x1000D080u, GPR_U32(ctx, 4)); // MMIO: 0x1000d080
    // 0x36c2c0: 0x3442d010  ori         $v0, $v0, 0xD010
    ctx->pc = 0x36c2c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53264);
    // 0x36c2c4: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x36c2c4u;
    runtime->Store32(rdram, ctx, 0x1000D010u, GPR_U32(ctx, 18)); // MMIO: 0x1000d010
    // 0x36c2c8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x36c2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x36c2cc: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x36c2ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
    // 0x36c2d0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x36c2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x36c2d4: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x36c2d4u;
    runtime->Store32(rdram, ctx, 0x1000D020u, GPR_U32(ctx, 9)); // MMIO: 0x1000d020
    // 0x36c2d8: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x36c2d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x36c2dc: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x36c2dcu;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 5)); // MMIO: 0x1000d000
    // 0x36c2e0: 0xf  sync
    ctx->pc = 0x36c2e0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36c2e4: 0x40f  sync.p
    ctx->pc = 0x36c2e4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36c2e8: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x36C2E8u;
    {
        const bool branch_taken_0x36c2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36C2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C2E8u;
        // 0x36c2ec: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c2e8) {
            ctx->pc = 0x36C428u;
            goto label_36c428;
        }
    }
    ctx->pc = 0x36C2F0u;
label_36c2f0:
    // 0x36c2f0: 0x1a00004c  blez        $s0, . + 4 + (0x4C << 2)
    ctx->pc = 0x36C2F0u;
    {
        const bool branch_taken_0x36c2f0 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x36C2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C2F0u;
        // 0x36c2f4: 0x32020001  andi        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c2f0) {
            ctx->pc = 0x36C424u;
            goto label_36c424;
        }
    }
    ctx->pc = 0x36C2F8u;
    // 0x36c2f8: 0x200702d  daddu       $t6, $s0, $zero
    ctx->pc = 0x36c2f8u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c2fc: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x36C2FCu;
    {
        const bool branch_taken_0x36c2fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36C300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C2FCu;
        // 0x36c300: 0x240182d  daddu       $v1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c2fc) {
            ctx->pc = 0x36C368u;
            goto label_36c368;
        }
    }
    ctx->pc = 0x36C304u;
    // 0x36c304: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36c304u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c308: 0x260effff  addiu       $t6, $s0, -0x1
    ctx->pc = 0x36c308u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x36c30c: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x36c30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36c310: 0x24c40008  addiu       $a0, $a2, 0x8
    ctx->pc = 0x36c310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x36c314: 0xc58821  addu        $s1, $a2, $a1
    ctx->pc = 0x36c314u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x36c318: 0xe6410000  swc1        $f1, 0x0($s2)
    ctx->pc = 0x36c318u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x36c31c: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x36c31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36c320: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x36c320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x36c324: 0x2479021  addu        $s2, $s2, $a3
    ctx->pc = 0x36c324u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x36c328: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x36c328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36c32c: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x36c32cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x36c330: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x36c330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36c334: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x36c334u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x36c338: 0x2479021  addu        $s2, $s2, $a3
    ctx->pc = 0x36c338u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x36c33c: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x36c33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36c340: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x36c340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x36c344: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x36c344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36c348: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x36c348u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x36c34c: 0x2479021  addu        $s2, $s2, $a3
    ctx->pc = 0x36c34cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x36c350: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x36c350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36c354: 0x2471821  addu        $v1, $s2, $a3
    ctx->pc = 0x36c354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x36c358: 0xe6410000  swc1        $f1, 0x0($s2)
    ctx->pc = 0x36c358u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x36c35c: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x36c35cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36c360: 0x11c00030  beqz        $t6, . + 4 + (0x30 << 2)
    ctx->pc = 0x36C360u;
    {
        const bool branch_taken_0x36c360 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x36C364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C360u;
        // 0x36c364: 0xe6400004  swc1        $f0, 0x4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c360) {
            ctx->pc = 0x36C424u;
            goto label_36c424;
        }
    }
    ctx->pc = 0x36C368u;
label_36c368:
    // 0x36c368: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36c368u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c36c: 0x25cefffe  addiu       $t6, $t6, -0x2
    ctx->pc = 0x36c36cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967294));
    // 0x36c370: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x36c370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36c374: 0x24c40008  addiu       $a0, $a2, 0x8
    ctx->pc = 0x36c374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x36c378: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x36c378u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x36c37c: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x36c37cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36c380: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x36c380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x36c384: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36c384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36c388: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x36c388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36c38c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x36c38cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x36c390: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x36c390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36c394: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x36c394u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x36c398: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36c398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36c39c: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x36c39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36c3a0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x36c3a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x36c3a4: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x36c3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36c3a8: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x36c3a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x36c3ac: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36c3acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36c3b0: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x36c3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36c3b4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x36c3b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x36c3b8: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x36c3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36c3bc: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x36c3bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x36c3c0: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x36c3c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x36c3c4: 0x24c40008  addiu       $a0, $a2, 0x8
    ctx->pc = 0x36c3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x36c3c8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36c3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36c3cc: 0xc58821  addu        $s1, $a2, $a1
    ctx->pc = 0x36c3ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x36c3d0: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x36c3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36c3d4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x36c3d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x36c3d8: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x36c3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36c3dc: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x36c3dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x36c3e0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36c3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36c3e4: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x36c3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36c3e8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x36c3e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x36c3ec: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x36c3ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36c3f0: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x36c3f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x36c3f4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36c3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36c3f8: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x36c3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36c3fc: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x36c3fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x36c400: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x36c400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36c404: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x36c404u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x36c408: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36c408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36c40c: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x36c40cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36c410: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x36c410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x36c414: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x36c414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36c418: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x36c418u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x36c41c: 0x15c0ffd2  bnez        $t6, . + 4 + (-0x2E << 2)
    ctx->pc = 0x36C41Cu;
    {
        const bool branch_taken_0x36c41c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x36C420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C41Cu;
        // 0x36c420: 0x671821  addu        $v1, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c41c) {
            ctx->pc = 0x36C368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36c368;
        }
    }
    ctx->pc = 0x36C424u;
label_36c424:
    // 0x36c424: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x36c424u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_36c428:
    // 0x36c428: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x36c428u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x36c42c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x36c42cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x36c430: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x36c430u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x36c434: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x36c434u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x36c438: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x36c438u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x36c43c: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x36c43cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36c440: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x36c440u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36c444: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x36c444u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36c448: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36c448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36c44c: 0x3e00008  jr          $ra
    ctx->pc = 0x36C44Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C44Cu;
        // 0x36c450: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C44Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C454u;
    // 0x36c454: 0x0  nop
    ctx->pc = 0x36c454u;
    // NOP
    ctx->pc = 0x36c458u;
}
