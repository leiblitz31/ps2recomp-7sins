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

// Function: sub_00428788
// Address: 0x428788 - 0x428c88
void sub_00428788_0x428788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00428788_0x428788");
#endif

    switch (ctx->pc) {
        case 0x42879cu: goto label_42879c;
        case 0x428824u: goto label_428824;
        case 0x428a70u: goto label_428a70;
        case 0x428b98u: goto label_428b98;
        case 0x428c70u: goto label_428c70;
        default: break;
    }

    ctx->pc = 0x428788u;

    // 0x428788: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x428788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x42878c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x42878cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x428790: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x428790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x428794: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x428794u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x428798: 0x8f88be8c  lw          $t0, -0x4174($gp)
    ctx->pc = 0x428798u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950540)));
label_42879c:
    // 0x42879c: 0x110000fe  beqz        $t0, . + 4 + (0xFE << 2)
    ctx->pc = 0x42879Cu;
    {
        const bool branch_taken_0x42879c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x4287A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42879Cu;
        // 0x4287a0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42879c) {
            ctx->pc = 0x428B98u;
            goto label_428b98;
        }
    }
    ctx->pc = 0x4287A4u;
    // 0x4287a4: 0x24020102  addiu       $v0, $zero, 0x102
    ctx->pc = 0x4287a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
    // 0x4287a8: 0x15020058  bne         $t0, $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x4287A8u;
    {
        const bool branch_taken_0x4287a8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x4287ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4287A8u;
        // 0x4287ac: 0x8f82be24  lw          $v0, -0x41DC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4287a8) {
            ctx->pc = 0x42890Cu;
            goto label_42890c;
        }
    }
    ctx->pc = 0x4287B0u;
    // 0x4287b0: 0x8f86be20  lw          $a2, -0x41E0($gp)
    ctx->pc = 0x4287b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x4287b4: 0x102900  sll         $a1, $s0, 4
    ctx->pc = 0x4287b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x4287b8: 0x8f83be3c  lw          $v1, -0x41C4($gp)
    ctx->pc = 0x4287b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950460)));
    // 0x4287bc: 0x8f82be40  lw          $v0, -0x41C0($gp)
    ctx->pc = 0x4287bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950464)));
    // 0x4287c0: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x4287c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x4287c4: 0x8f84be70  lw          $a0, -0x4190($gp)
    ctx->pc = 0x4287c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950512)));
    // 0x4287c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4287c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4287cc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4287ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4287d0: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x4287d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4287d4: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x4287D4u;
    {
        const bool branch_taken_0x4287d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4287D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4287D4u;
        // 0x4287d8: 0xa0502d  daddu       $t2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4287d4) {
            ctx->pc = 0x428908u;
            goto label_428908;
        }
    }
    ctx->pc = 0x4287DCu;
    // 0x4287dc: 0x6a1021  addu        $v0, $v1, $t2
    ctx->pc = 0x4287dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x4287e0: 0x2c422001  sltiu       $v0, $v0, 0x2001
    ctx->pc = 0x4287e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8193) ? 1 : 0);
    // 0x4287e4: 0x54400040  bnel        $v0, $zero, . + 4 + (0x40 << 2)
    ctx->pc = 0x4287E4u;
    {
        const bool branch_taken_0x4287e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4287e4) {
            ctx->pc = 0x4287E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4287E4u;
            // 0x4287e8: 0x8f83be40  lw          $v1, -0x41C0($gp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950464)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4288E8u;
            goto label_4288e8;
        }
    }
    ctx->pc = 0x4287ECu;
    // 0x4287ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4287ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4287f0: 0x66380b  movn        $a3, $v1, $a2
    ctx->pc = 0x4287f0u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
    // 0x4287f4: 0x10e0003b  beqz        $a3, . + 4 + (0x3B << 2)
    ctx->pc = 0x4287F4u;
    {
        const bool branch_taken_0x4287f4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x4287F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4287F4u;
        // 0x4287f8: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4287f4) {
            ctx->pc = 0x4288E4u;
            goto label_4288e4;
        }
    }
    ctx->pc = 0x4287FCu;
    // 0x4287fc: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x4287fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x428800: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x428800u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x1000d000
    // 0x428804: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x428804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x428808: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x428808u;
    {
        const bool branch_taken_0x428808 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x42880Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428808u;
        // 0x42880c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x428808) {
            ctx->pc = 0x428840u;
            goto label_428840;
        }
    }
    ctx->pc = 0x428810u;
    // 0x428810: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x428810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x428814: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x428814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x428818: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x428818u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x42881c: 0xf  sync
    ctx->pc = 0x42881cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x428820: 0x40f  sync.p
    ctx->pc = 0x428820u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_428824:
    // 0x428824: 0x0  nop
    ctx->pc = 0x428824u;
    // NOP
    // 0x428828: 0x0  nop
    ctx->pc = 0x428828u;
    // NOP
    // 0x42882c: 0x0  nop
    ctx->pc = 0x42882cu;
    // NOP
    // 0x428830: 0x0  nop
    ctx->pc = 0x428830u;
    // NOP
    // 0x428834: 0x0  nop
    ctx->pc = 0x428834u;
    // NOP
    // 0x428838: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x428838u;
    {
        const bool branch_taken_0x428838 = (false);
        if (branch_taken_0x428838) {
            ctx->pc = 0x428824u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_428824;
        }
    }
    ctx->pc = 0x428840u;
label_428840:
    // 0x428840: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x428840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x428844: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x428844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x428848: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x428848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x42884c: 0x8f86be3c  lw          $a2, -0x41C4($gp)
    ctx->pc = 0x42884cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950460)));
    // 0x428850: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x428850u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 4)); // MMIO: 0x1000e010
    // 0x428854: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x428854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x428858: 0x3463d080  ori         $v1, $v1, 0xD080
    ctx->pc = 0x428858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53376);
    // 0x42885c: 0x8f85be40  lw          $a1, -0x41C0($gp)
    ctx->pc = 0x42885cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950464)));
    // 0x428860: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x428860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x428864: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x428864u;
    runtime->Store32(rdram, ctx, 0x1000D080u, GPR_U32(ctx, 6)); // MMIO: 0x1000d080
    // 0x428868: 0x3442d010  ori         $v0, $v0, 0xD010
    ctx->pc = 0x428868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53264);
    // 0x42886c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x42886cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x428870: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x428870u;
    runtime->Store32(rdram, ctx, 0x1000D010u, GPR_U32(ctx, 5)); // MMIO: 0x1000d010
    // 0x428874: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x428874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
    // 0x428878: 0x71102  srl         $v0, $a3, 4
    ctx->pc = 0x428878u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 4));
    // 0x42887c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x42887cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x428880: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x428880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x428884: 0xac24d000  sw          $a0, -0x3000($at)
    ctx->pc = 0x428884u;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 4)); // MMIO: 0x1000d000
    // 0x428888: 0xf  sync
    ctx->pc = 0x428888u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x42888c: 0x40f  sync.p
    ctx->pc = 0x42888cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x428890: 0x8f84be28  lw          $a0, -0x41D8($gp)
    ctx->pc = 0x428890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950440)));
    // 0x428894: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x428894u;
    {
        const bool branch_taken_0x428894 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x428898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428894u;
        // 0x428898: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x428894) {
            ctx->pc = 0x4288C8u;
            goto label_4288c8;
        }
    }
    ctx->pc = 0x42889Cu;
    // 0x42889c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x42889cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4288a0: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x4288a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x4288a4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x4288a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4288a8: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4288A8u;
    {
        const bool branch_taken_0x4288a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x4288ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4288A8u;
        // 0x4288ac: 0x8f82be40  lw          $v0, -0x41C0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4288a8) {
            ctx->pc = 0x4288CCu;
            goto label_4288cc;
        }
    }
    ctx->pc = 0x4288B0u;
    // 0x4288b0: 0x861023  subu        $v0, $a0, $a2
    ctx->pc = 0x4288b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x4288b4: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x4288b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x4288b8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x4288b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4288bc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4288bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4288c0: 0xaf82be28  sw          $v0, -0x41D8($gp)
    ctx->pc = 0x4288c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950440), GPR_U32(ctx, 2));
    // 0x4288c4: 0x0  nop
    ctx->pc = 0x4288c4u;
    // NOP
label_4288c8:
    // 0x4288c8: 0x8f82be40  lw          $v0, -0x41C0($gp)
    ctx->pc = 0x4288c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950464)));
label_4288cc:
    // 0x4288cc: 0x8f83be3c  lw          $v1, -0x41C4($gp)
    ctx->pc = 0x4288ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950460)));
    // 0x4288d0: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x4288d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x4288d4: 0x38632000  xori        $v1, $v1, 0x2000
    ctx->pc = 0x4288d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)8192);
    // 0x4288d8: 0xaf82be40  sw          $v0, -0x41C0($gp)
    ctx->pc = 0x4288d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950464), GPR_U32(ctx, 2));
    // 0x4288dc: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x4288dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x4288e0: 0xaf83be3c  sw          $v1, -0x41C4($gp)
    ctx->pc = 0x4288e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950460), GPR_U32(ctx, 3));
label_4288e4:
    // 0x4288e4: 0x8f83be40  lw          $v1, -0x41C0($gp)
    ctx->pc = 0x4288e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950464)));
label_4288e8:
    // 0x4288e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4288e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4288ec: 0x8f85be20  lw          $a1, -0x41E0($gp)
    ctx->pc = 0x4288ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x4288f0: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x4288f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x4288f4: 0x8f84be3c  lw          $a0, -0x41C4($gp)
    ctx->pc = 0x4288f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950460)));
    // 0x4288f8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4288f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4288fc: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x4288fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x428900: 0x100000dd  b           . + 4 + (0xDD << 2)
    ctx->pc = 0x428900u;
    {
        const bool branch_taken_0x428900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x428904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428900u;
        // 0x428904: 0xaf83be74  sw          $v1, -0x418C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950516), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x428900) {
            ctx->pc = 0x428C78u;
            goto label_428c78;
        }
    }
    ctx->pc = 0x428908u;
label_428908:
    // 0x428908: 0x8f82be24  lw          $v0, -0x41DC($gp)
    ctx->pc = 0x428908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950436)));
label_42890c:
    // 0x42890c: 0x104000a0  beqz        $v0, . + 4 + (0xA0 << 2)
    ctx->pc = 0x42890Cu;
    {
        const bool branch_taken_0x42890c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x428910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42890Cu;
        // 0x428910: 0x8f82be3c  lw          $v0, -0x41C4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950460)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42890c) {
            ctx->pc = 0x428B90u;
            goto label_428b90;
        }
    }
    ctx->pc = 0x428914u;
    // 0x428914: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x428914u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x428918: 0x8f86be20  lw          $a2, -0x41E0($gp)
    ctx->pc = 0x428918u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x42891c: 0x3484ff80  ori         $a0, $a0, 0xFF80
    ctx->pc = 0x42891cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65408);
    // 0x428920: 0x8f87be40  lw          $a3, -0x41C0($gp)
    ctx->pc = 0x428920u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950464)));
    // 0x428924: 0x102900  sll         $a1, $s0, 4
    ctx->pc = 0x428924u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x428928: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x428928u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x42892c: 0x8f83be70  lw          $v1, -0x4190($gp)
    ctx->pc = 0x42892cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950512)));
    // 0x428930: 0xe61021  addu        $v0, $a3, $a2
    ctx->pc = 0x428930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x428934: 0x244200ff  addiu       $v0, $v0, 0xFF
    ctx->pc = 0x428934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 255));
    // 0x428938: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x428938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x42893c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x42893cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x428940: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x428940u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x428944: 0x14600092  bnez        $v1, . + 4 + (0x92 << 2)
    ctx->pc = 0x428944u;
    {
        const bool branch_taken_0x428944 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x428948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428944u;
        // 0x428948: 0xa0502d  daddu       $t2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x428944) {
            ctx->pc = 0x428B90u;
            goto label_428b90;
        }
    }
    ctx->pc = 0x42894Cu;
    // 0x42894c: 0x5010018  bgez        $t0, . + 4 + (0x18 << 2)
    ctx->pc = 0x42894Cu;
    {
        const bool branch_taken_0x42894c = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x428950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42894Cu;
        // 0x428950: 0x8f82be20  lw          $v0, -0x41E0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42894c) {
            ctx->pc = 0x4289B0u;
            goto label_4289b0;
        }
    }
    ctx->pc = 0x428954u;
    // 0x428954: 0x8f85be88  lw          $a1, -0x4178($gp)
    ctx->pc = 0x428954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950536)));
    // 0x428958: 0xe51023  subu        $v0, $a3, $a1
    ctx->pc = 0x428958u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x42895c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x42895cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x428960: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x428960u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x428964: 0x2446ffff  addiu       $a2, $v0, -0x1
    ctx->pc = 0x428964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x428968: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x428968u;
    {
        const bool branch_taken_0x428968 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x42896Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428968u;
        // 0x42896c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x428968) {
            ctx->pc = 0x4289A0u;
            goto label_4289a0;
        }
    }
    ctx->pc = 0x428970u;
    // 0x428970: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x428970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x428974: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x428974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x428978: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x428978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x42897c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x42897cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x428980: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x428980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x428984: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x428984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x428988: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x428988u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x42898c: 0x70621b89  pcpyld      $v1, $v1, $v0
    ctx->pc = 0x42898cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x428990: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x428990u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x428994: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x428994u;
    {
        const bool branch_taken_0x428994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x428998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428994u;
        // 0x428998: 0x7c830000  sq          $v1, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x428994) {
            ctx->pc = 0x4289A8u;
            goto label_4289a8;
        }
    }
    ctx->pc = 0x42899Cu;
    // 0x42899c: 0x0  nop
    ctx->pc = 0x42899cu;
    // NOP
label_4289a0:
    // 0x4289a0: 0x24e2fff0  addiu       $v0, $a3, -0x10
    ctx->pc = 0x4289a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967280));
    // 0x4289a4: 0xaf82be40  sw          $v0, -0x41C0($gp)
    ctx->pc = 0x4289a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950464), GPR_U32(ctx, 2));
label_4289a8:
    // 0x4289a8: 0xaf80be88  sw          $zero, -0x4178($gp)
    ctx->pc = 0x4289a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950536), GPR_U32(ctx, 0));
    // 0x4289ac: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x4289acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_4289b0:
    // 0x4289b0: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x4289b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x4289b4: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x4289b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x4289b8: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x4289b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x4289bc: 0x34841100  ori         $a0, $a0, 0x1100
    ctx->pc = 0x4289bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4352);
    // 0x4289c0: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x4289c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x4289c4: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x4289c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x4289c8: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x4289c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x4289cc: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x4289ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x4289d0: 0x70834b89  pcpyld      $t1, $a0, $v1
    ctx->pc = 0x4289d0u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x4289d4: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x4289d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x4289d8: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x4289d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x4289dc: 0x34a58001  ori         $a1, $a1, 0x8001
    ctx->pc = 0x4289dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32769);
    // 0x4289e0: 0x7c490000  sq          $t1, 0x0($v0)
    ctx->pc = 0x4289e0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 9));
    // 0x4289e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4289e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4289e8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x4289e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x4289ec: 0x70c54b89  pcpyld      $t1, $a2, $a1
    ctx->pc = 0x4289ecu;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 5)));
    // 0x4289f0: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x4289f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x4289f4: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x4289f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x4289f8: 0x7c490000  sq          $t1, 0x0($v0)
    ctx->pc = 0x4289f8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 9));
    // 0x4289fc: 0x2407007f  addiu       $a3, $zero, 0x7F
    ctx->pc = 0x4289fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x428a00: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x428a00u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x428a04: 0x70e44b89  pcpyld      $t1, $a3, $a0
    ctx->pc = 0x428a04u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 4)));
    // 0x428a08: 0x7c490010  sq          $t1, 0x10($v0)
    ctx->pc = 0x428a08u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 9));
    // 0x428a0c: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x428a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x428a10: 0x3c040600  lui         $a0, 0x600
    ctx->pc = 0x428a10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1536 << 16));
    // 0x428a14: 0x3c031300  lui         $v1, 0x1300
    ctx->pc = 0x428a14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4864 << 16));
    // 0x428a18: 0xaf85be20  sw          $a1, -0x41E0($gp)
    ctx->pc = 0x428a18u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 5));
    // 0x428a1c: 0x70834b89  pcpyld      $t1, $a0, $v1
    ctx->pc = 0x428a1cu;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x428a20: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x428a20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x428a24: 0x7c490020  sq          $t1, 0x20($v0)
    ctx->pc = 0x428a24u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), GPR_VEC(ctx, 9));
    // 0x428a28: 0xaf86be20  sw          $a2, -0x41E0($gp)
    ctx->pc = 0x428a28u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 6));
    // 0x428a2c: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x428A2Cu;
    {
        const bool branch_taken_0x428a2c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x428A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428A2Cu;
        // 0x428a30: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x428a2c) {
            ctx->pc = 0x428A40u;
            goto label_428a40;
        }
    }
    ctx->pc = 0x428A34u;
    // 0x428a34: 0x8f82be3c  lw          $v0, -0x41C4($gp)
    ctx->pc = 0x428a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950460)));
    // 0x428a38: 0xc23823  subu        $a3, $a2, $v0
    ctx->pc = 0x428a38u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x428a3c: 0x0  nop
    ctx->pc = 0x428a3cu;
    // NOP
label_428a40:
    // 0x428a40: 0x10e0003c  beqz        $a3, . + 4 + (0x3C << 2)
    ctx->pc = 0x428A40u;
    {
        const bool branch_taken_0x428a40 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x428A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428A40u;
        // 0x428a44: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x428a40) {
            ctx->pc = 0x428B34u;
            goto label_428b34;
        }
    }
    ctx->pc = 0x428A48u;
    // 0x428a48: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x428a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x428a4c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x428a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x1000d000
    // 0x428a50: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x428a50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x428a54: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x428A54u;
    {
        const bool branch_taken_0x428a54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x428A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428A54u;
        // 0x428a58: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x428a54) {
            ctx->pc = 0x428A90u;
            goto label_428a90;
        }
    }
    ctx->pc = 0x428A5Cu;
    // 0x428a5c: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x428a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x428a60: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x428a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x428a64: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x428a64u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x428a68: 0xf  sync
    ctx->pc = 0x428a68u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x428a6c: 0x40f  sync.p
    ctx->pc = 0x428a6cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_428a70:
    // 0x428a70: 0x0  nop
    ctx->pc = 0x428a70u;
    // NOP
    // 0x428a74: 0x0  nop
    ctx->pc = 0x428a74u;
    // NOP
    // 0x428a78: 0x0  nop
    ctx->pc = 0x428a78u;
    // NOP
    // 0x428a7c: 0x0  nop
    ctx->pc = 0x428a7cu;
    // NOP
    // 0x428a80: 0x0  nop
    ctx->pc = 0x428a80u;
    // NOP
    // 0x428a84: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x428A84u;
    {
        const bool branch_taken_0x428a84 = (false);
        if (branch_taken_0x428a84) {
            ctx->pc = 0x428A70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_428a70;
        }
    }
    ctx->pc = 0x428A8Cu;
    // 0x428a8c: 0x0  nop
    ctx->pc = 0x428a8cu;
    // NOP
label_428a90:
    // 0x428a90: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x428a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x428a94: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x428a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x428a98: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x428a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x428a9c: 0x8f86be3c  lw          $a2, -0x41C4($gp)
    ctx->pc = 0x428a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950460)));
    // 0x428aa0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x428aa0u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 4)); // MMIO: 0x1000e010
    // 0x428aa4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x428aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x428aa8: 0x3463d080  ori         $v1, $v1, 0xD080
    ctx->pc = 0x428aa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53376);
    // 0x428aac: 0x8f85be40  lw          $a1, -0x41C0($gp)
    ctx->pc = 0x428aacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950464)));
    // 0x428ab0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x428ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x428ab4: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x428ab4u;
    runtime->Store32(rdram, ctx, 0x1000D080u, GPR_U32(ctx, 6)); // MMIO: 0x1000d080
    // 0x428ab8: 0x3442d010  ori         $v0, $v0, 0xD010
    ctx->pc = 0x428ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53264);
    // 0x428abc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x428abcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x428ac0: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x428ac0u;
    runtime->Store32(rdram, ctx, 0x1000D010u, GPR_U32(ctx, 5)); // MMIO: 0x1000d010
    // 0x428ac4: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x428ac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
    // 0x428ac8: 0x71102  srl         $v0, $a3, 4
    ctx->pc = 0x428ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 4));
    // 0x428acc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x428accu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x428ad0: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x428ad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x428ad4: 0xac24d000  sw          $a0, -0x3000($at)
    ctx->pc = 0x428ad4u;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 4)); // MMIO: 0x1000d000
    // 0x428ad8: 0xf  sync
    ctx->pc = 0x428ad8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x428adc: 0x40f  sync.p
    ctx->pc = 0x428adcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x428ae0: 0x8f84be28  lw          $a0, -0x41D8($gp)
    ctx->pc = 0x428ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950440)));
    // 0x428ae4: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x428AE4u;
    {
        const bool branch_taken_0x428ae4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x428AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428AE4u;
        // 0x428ae8: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x428ae4) {
            ctx->pc = 0x428B18u;
            goto label_428b18;
        }
    }
    ctx->pc = 0x428AECu;
    // 0x428aec: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x428aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x428af0: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x428af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x428af4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x428af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x428af8: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x428AF8u;
    {
        const bool branch_taken_0x428af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x428AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428AF8u;
        // 0x428afc: 0x8f82be40  lw          $v0, -0x41C0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x428af8) {
            ctx->pc = 0x428B1Cu;
            goto label_428b1c;
        }
    }
    ctx->pc = 0x428B00u;
    // 0x428b00: 0x861023  subu        $v0, $a0, $a2
    ctx->pc = 0x428b00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x428b04: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x428b04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x428b08: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x428b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x428b0c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x428b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x428b10: 0xaf82be28  sw          $v0, -0x41D8($gp)
    ctx->pc = 0x428b10u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950440), GPR_U32(ctx, 2));
    // 0x428b14: 0x0  nop
    ctx->pc = 0x428b14u;
    // NOP
label_428b18:
    // 0x428b18: 0x8f82be40  lw          $v0, -0x41C0($gp)
    ctx->pc = 0x428b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950464)));
label_428b1c:
    // 0x428b1c: 0x8f83be3c  lw          $v1, -0x41C4($gp)
    ctx->pc = 0x428b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950460)));
    // 0x428b20: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x428b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x428b24: 0x38632000  xori        $v1, $v1, 0x2000
    ctx->pc = 0x428b24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)8192);
    // 0x428b28: 0xaf82be40  sw          $v0, -0x41C0($gp)
    ctx->pc = 0x428b28u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950464), GPR_U32(ctx, 2));
    // 0x428b2c: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x428b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x428b30: 0xaf83be3c  sw          $v1, -0x41C4($gp)
    ctx->pc = 0x428b30u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950460), GPR_U32(ctx, 3));
label_428b34:
    // 0x428b34: 0x8f83be40  lw          $v1, -0x41C0($gp)
    ctx->pc = 0x428b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950464)));
    // 0x428b38: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x428b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x428b3c: 0x3442ff80  ori         $v0, $v0, 0xFF80
    ctx->pc = 0x428b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
    // 0x428b40: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x428b40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x428b44: 0x246300cf  addiu       $v1, $v1, 0xCF
    ctx->pc = 0x428b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 207));
    // 0x428b48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x428b48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x428b4c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x428b4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x428b50: 0x8f87be24  lw          $a3, -0x41DC($gp)
    ctx->pc = 0x428b50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950436)));
    // 0x428b54: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x428b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x428b58: 0x8f88be3c  lw          $t0, -0x41C4($gp)
    ctx->pc = 0x428b58u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950460)));
    // 0x428b5c: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x428b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x428b60: 0x6a2821  addu        $a1, $v1, $t2
    ctx->pc = 0x428b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x428b64: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x428b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x428b68: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x428b68u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x428b6c: 0x70c24b89  pcpyld      $t1, $a2, $v0
    ctx->pc = 0x428b6cu;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x428b70: 0x24040102  addiu       $a0, $zero, 0x102
    ctx->pc = 0x428b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
    // 0x428b74: 0x7ce90000  sq          $t1, 0x0($a3)
    ctx->pc = 0x428b74u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 9));
    // 0x428b78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x428b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x428b7c: 0xaf85be74  sw          $a1, -0x418C($gp)
    ctx->pc = 0x428b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950516), GPR_U32(ctx, 5));
    // 0x428b80: 0xaf84be8c  sw          $a0, -0x4174($gp)
    ctx->pc = 0x428b80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950540), GPR_U32(ctx, 4));
    // 0x428b84: 0xaf83be40  sw          $v1, -0x41C0($gp)
    ctx->pc = 0x428b84u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950464), GPR_U32(ctx, 3));
    // 0x428b88: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x428B88u;
    {
        const bool branch_taken_0x428b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x428B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428B88u;
        // 0x428b8c: 0xaf88be20  sw          $t0, -0x41E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x428b88) {
            ctx->pc = 0x428C78u;
            goto label_428c78;
        }
    }
    ctx->pc = 0x428B90u;
label_428b90:
    // 0x428b90: 0xc109f06  jal         func_427C18
    ctx->pc = 0x428B90u;
    SET_GPR_U32(ctx, 31, 0x428B98u);
    ctx->pc = 0x427C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x427C18u, 0x428B90u, 0x428B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x428B98u;
label_428b98:
    // 0x428b98: 0x8f87be7c  lw          $a3, -0x4184($gp)
    ctx->pc = 0x428b98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950524)));
    // 0x428b9c: 0x8f82be78  lw          $v0, -0x4188($gp)
    ctx->pc = 0x428b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950520)));
    // 0x428ba0: 0x14e20014  bne         $a3, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x428BA0u;
    {
        const bool branch_taken_0x428ba0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x428BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428BA0u;
        // 0x428ba4: 0x8f86be74  lw          $a2, -0x418C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950516)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x428ba0) {
            ctx->pc = 0x428BF4u;
            goto label_428bf4;
        }
    }
    ctx->pc = 0x428BA8u;
    // 0x428ba8: 0x8f82be74  lw          $v0, -0x418C($gp)
    ctx->pc = 0x428ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950516)));
    // 0x428bac: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x428bacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x428bb0: 0x3463ffc0  ori         $v1, $v1, 0xFFC0
    ctx->pc = 0x428bb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65472);
    // 0x428bb4: 0x8f84be70  lw          $a0, -0x4190($gp)
    ctx->pc = 0x428bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950512)));
    // 0x428bb8: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x428bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x428bbc: 0x433024  and         $a2, $v0, $v1
    ctx->pc = 0x428bbcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x428bc0: 0x24c50080  addiu       $a1, $a2, 0x80
    ctx->pc = 0x428bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x428bc4: 0xa4202b  sltu        $a0, $a1, $a0
    ctx->pc = 0x428bc4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x428bc8: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x428BC8u;
    {
        const bool branch_taken_0x428bc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x428BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428BC8u;
        // 0x428bcc: 0x24c20078  addiu       $v0, $a2, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x428bc8) {
            ctx->pc = 0x428BF0u;
            goto label_428bf0;
        }
    }
    ctx->pc = 0x428BD0u;
    // 0x428bd0: 0xace60004  sw          $a2, 0x4($a3)
    ctx->pc = 0x428bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 6));
    // 0x428bd4: 0xaf86be7c  sw          $a2, -0x4184($gp)
    ctx->pc = 0x428bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950524), GPR_U32(ctx, 6));
    // 0x428bd8: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x428bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x428bdc: 0xaf82be78  sw          $v0, -0x4188($gp)
    ctx->pc = 0x428bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950520), GPR_U32(ctx, 2));
    // 0x428be0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x428be0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x428be4: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x428be4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x428be8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x428BE8u;
    {
        const bool branch_taken_0x428be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x428BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428BE8u;
        // 0x428bec: 0xaf85be74  sw          $a1, -0x418C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950516), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x428be8) {
            ctx->pc = 0x428BF4u;
            goto label_428bf4;
        }
    }
    ctx->pc = 0x428BF0u;
label_428bf0:
    // 0x428bf0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x428bf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_428bf4:
    // 0x428bf4: 0x10c00016  beqz        $a2, . + 4 + (0x16 << 2)
    ctx->pc = 0x428BF4u;
    {
        const bool branch_taken_0x428bf4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x428BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428BF4u;
        // 0x428bf8: 0x24c4008f  addiu       $a0, $a2, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 143));
        ctx->in_delay_slot = false;
        if (branch_taken_0x428bf4) {
            ctx->pc = 0x428C50u;
            goto label_428c50;
        }
    }
    ctx->pc = 0x428BFCu;
    // 0x428bfc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x428bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x428c00: 0x3442ff80  ori         $v0, $v0, 0xFF80
    ctx->pc = 0x428c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
    // 0x428c04: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x428c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x428c08: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x428c08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x428c0c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x428c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x428c10: 0x8f82be70  lw          $v0, -0x4190($gp)
    ctx->pc = 0x428c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950512)));
    // 0x428c14: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x428c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x428c18: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x428c18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x428c1c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x428C1Cu;
    {
        const bool branch_taken_0x428c1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x428C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428C1Cu;
        // 0x428c20: 0x101100  sll         $v0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x428c1c) {
            ctx->pc = 0x428C54u;
            goto label_428c54;
        }
    }
    ctx->pc = 0x428C24u;
    // 0x428c24: 0x2486fff0  addiu       $a2, $a0, -0x10
    ctx->pc = 0x428c24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    // 0x428c28: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x428c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x428c2c: 0x8f83be3c  lw          $v1, -0x41C4($gp)
    ctx->pc = 0x428c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950460)));
    // 0x428c30: 0x24040102  addiu       $a0, $zero, 0x102
    ctx->pc = 0x428c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
    // 0x428c34: 0xaf82be74  sw          $v0, -0x418C($gp)
    ctx->pc = 0x428c34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950516), GPR_U32(ctx, 2));
    // 0x428c38: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x428c38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x428c3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x428c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x428c40: 0xaf84be8c  sw          $a0, -0x4174($gp)
    ctx->pc = 0x428c40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950540), GPR_U32(ctx, 4));
    // 0x428c44: 0xaf86be80  sw          $a2, -0x4180($gp)
    ctx->pc = 0x428c44u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950528), GPR_U32(ctx, 6));
    // 0x428c48: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x428C48u;
    {
        const bool branch_taken_0x428c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x428C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428C48u;
        // 0x428c4c: 0xaf86be40  sw          $a2, -0x41C0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950464), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x428c48) {
            ctx->pc = 0x428C78u;
            goto label_428c78;
        }
    }
    ctx->pc = 0x428C50u;
label_428c50:
    // 0x428c50: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x428c50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_428c54:
    // 0x428c54: 0x8f83be60  lw          $v1, -0x41A0($gp)
    ctx->pc = 0x428c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950496)));
    // 0x428c58: 0x24420130  addiu       $v0, $v0, 0x130
    ctx->pc = 0x428c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 304));
    // 0x428c5c: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x428c5cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x428c60: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x428C60u;
    {
        const bool branch_taken_0x428c60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x428C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428C60u;
        // 0x428c64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x428c60) {
            ctx->pc = 0x428C78u;
            goto label_428c78;
        }
    }
    ctx->pc = 0x428C68u;
    // 0x428c68: 0xc10a024  jal         func_428090
    ctx->pc = 0x428C68u;
    SET_GPR_U32(ctx, 31, 0x428C70u);
    ctx->pc = 0x428C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x428C68u;
    // 0x428c6c: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428090u, 0x428C68u, 0x428C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x428C70u;
label_428c70:
    // 0x428c70: 0x1000feca  b           . + 4 + (-0x136 << 2)
    ctx->pc = 0x428C70u;
    {
        const bool branch_taken_0x428c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x428C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428C70u;
        // 0x428c74: 0x8f88be8c  lw          $t0, -0x4174($gp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950540)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x428c70) {
            ctx->pc = 0x42879Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42879c;
        }
    }
    ctx->pc = 0x428C78u;
label_428c78:
    // 0x428c78: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x428c78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x428c7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x428c7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x428c80: 0x3e00008  jr          $ra
    ctx->pc = 0x428C80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x428C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428C80u;
        // 0x428c84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x428C80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x428C88u;
}
