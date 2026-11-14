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

// Function: sub_004292A0
// Address: 0x4292a0 - 0x429508
void sub_004292A0_0x4292a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004292A0_0x4292a0");
#endif

    switch (ctx->pc) {
        case 0x4292c0u: goto label_4292c0;
        case 0x429308u: goto label_429308;
        case 0x4293f8u: goto label_4293f8;
        case 0x429494u: goto label_429494;
        case 0x4294bcu: goto label_4294bc;
        case 0x4294d0u: goto label_4294d0;
        case 0x4294e4u: goto label_4294e4;
        default: break;
    }

    ctx->pc = 0x4292a0u;

    // 0x4292a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4292a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4292a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4292a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4292a8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4292a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x4292ac: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4292acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4292b0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4292b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x4292b4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4292b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4292b8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4292b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x4292bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4292bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4292c0:
    // 0x4292c0: 0x12600055  beqz        $s3, . + 4 + (0x55 << 2)
    ctx->pc = 0x4292C0u;
    {
        const bool branch_taken_0x4292c0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x4292C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4292C0u;
        // 0x4292c4: 0x8f83be20  lw          $v1, -0x41E0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4292c0) {
            ctx->pc = 0x429418u;
            goto label_429418;
        }
    }
    ctx->pc = 0x4292C8u;
    // 0x4292c8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4292C8u;
    {
        const bool branch_taken_0x4292c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4292CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4292C8u;
        // 0x4292cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4292c8) {
            ctx->pc = 0x4292D8u;
            goto label_4292d8;
        }
    }
    ctx->pc = 0x4292D0u;
    // 0x4292d0: 0x8f82be3c  lw          $v0, -0x41C4($gp)
    ctx->pc = 0x4292d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950460)));
    // 0x4292d4: 0x623823  subu        $a3, $v1, $v0
    ctx->pc = 0x4292d4u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4292d8:
    // 0x4292d8: 0x10e0003c  beqz        $a3, . + 4 + (0x3C << 2)
    ctx->pc = 0x4292D8u;
    {
        const bool branch_taken_0x4292d8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x4292DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4292D8u;
        // 0x4292dc: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4292d8) {
            ctx->pc = 0x4293CCu;
            goto label_4293cc;
        }
    }
    ctx->pc = 0x4292E0u;
    // 0x4292e0: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x4292e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x4292e4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4292e4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x1000d000
    // 0x4292e8: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x4292e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x4292ec: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x4292ECu;
    {
        const bool branch_taken_0x4292ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4292F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4292ECu;
        // 0x4292f0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4292ec) {
            ctx->pc = 0x429328u;
            goto label_429328;
        }
    }
    ctx->pc = 0x4292F4u;
    // 0x4292f4: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x4292f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x4292f8: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x4292f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x4292fc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4292fcu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x429300: 0xf  sync
    ctx->pc = 0x429300u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x429304: 0x40f  sync.p
    ctx->pc = 0x429304u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_429308:
    // 0x429308: 0x0  nop
    ctx->pc = 0x429308u;
    // NOP
    // 0x42930c: 0x0  nop
    ctx->pc = 0x42930cu;
    // NOP
    // 0x429310: 0x0  nop
    ctx->pc = 0x429310u;
    // NOP
    // 0x429314: 0x0  nop
    ctx->pc = 0x429314u;
    // NOP
    // 0x429318: 0x0  nop
    ctx->pc = 0x429318u;
    // NOP
    // 0x42931c: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x42931Cu;
    {
        const bool branch_taken_0x42931c = (false);
        if (branch_taken_0x42931c) {
            ctx->pc = 0x429308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_429308;
        }
    }
    ctx->pc = 0x429324u;
    // 0x429324: 0x0  nop
    ctx->pc = 0x429324u;
    // NOP
label_429328:
    // 0x429328: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x429328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x42932c: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x42932cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x429330: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x429330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x429334: 0x8f86be3c  lw          $a2, -0x41C4($gp)
    ctx->pc = 0x429334u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950460)));
    // 0x429338: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x429338u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 4)); // MMIO: 0x1000e010
    // 0x42933c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x42933cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x429340: 0x3463d080  ori         $v1, $v1, 0xD080
    ctx->pc = 0x429340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53376);
    // 0x429344: 0x8f85be40  lw          $a1, -0x41C0($gp)
    ctx->pc = 0x429344u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950464)));
    // 0x429348: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x429348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x42934c: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x42934cu;
    runtime->Store32(rdram, ctx, 0x1000D080u, GPR_U32(ctx, 6)); // MMIO: 0x1000d080
    // 0x429350: 0x3442d010  ori         $v0, $v0, 0xD010
    ctx->pc = 0x429350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53264);
    // 0x429354: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x429354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x429358: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x429358u;
    runtime->Store32(rdram, ctx, 0x1000D010u, GPR_U32(ctx, 5)); // MMIO: 0x1000d010
    // 0x42935c: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x42935cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
    // 0x429360: 0x71102  srl         $v0, $a3, 4
    ctx->pc = 0x429360u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 4));
    // 0x429364: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x429364u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x429368: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x429368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x42936c: 0xac24d000  sw          $a0, -0x3000($at)
    ctx->pc = 0x42936cu;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 4)); // MMIO: 0x1000d000
    // 0x429370: 0xf  sync
    ctx->pc = 0x429370u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x429374: 0x40f  sync.p
    ctx->pc = 0x429374u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x429378: 0x8f84be28  lw          $a0, -0x41D8($gp)
    ctx->pc = 0x429378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950440)));
    // 0x42937c: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x42937Cu;
    {
        const bool branch_taken_0x42937c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x429380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42937Cu;
        // 0x429380: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42937c) {
            ctx->pc = 0x4293B0u;
            goto label_4293b0;
        }
    }
    ctx->pc = 0x429384u;
    // 0x429384: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x429384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x429388: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x429388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x42938c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x42938cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x429390: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x429390u;
    {
        const bool branch_taken_0x429390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x429394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429390u;
        // 0x429394: 0x8f82be40  lw          $v0, -0x41C0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429390) {
            ctx->pc = 0x4293B4u;
            goto label_4293b4;
        }
    }
    ctx->pc = 0x429398u;
    // 0x429398: 0x861023  subu        $v0, $a0, $a2
    ctx->pc = 0x429398u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x42939c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x42939cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x4293a0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x4293a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4293a4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4293a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4293a8: 0xaf82be28  sw          $v0, -0x41D8($gp)
    ctx->pc = 0x4293a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950440), GPR_U32(ctx, 2));
    // 0x4293ac: 0x0  nop
    ctx->pc = 0x4293acu;
    // NOP
label_4293b0:
    // 0x4293b0: 0x8f82be40  lw          $v0, -0x41C0($gp)
    ctx->pc = 0x4293b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950464)));
label_4293b4:
    // 0x4293b4: 0x8f83be3c  lw          $v1, -0x41C4($gp)
    ctx->pc = 0x4293b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950460)));
    // 0x4293b8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x4293b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x4293bc: 0x38632000  xori        $v1, $v1, 0x2000
    ctx->pc = 0x4293bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)8192);
    // 0x4293c0: 0xaf82be40  sw          $v0, -0x41C0($gp)
    ctx->pc = 0x4293c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950464), GPR_U32(ctx, 2));
    // 0x4293c4: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x4293c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x4293c8: 0xaf83be3c  sw          $v1, -0x41C4($gp)
    ctx->pc = 0x4293c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950460), GPR_U32(ctx, 3));
label_4293cc:
    // 0x4293cc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x4293ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x4293d0: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x4293d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x4293d4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4293d4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x1000d000
    // 0x4293d8: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x4293d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x4293dc: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x4293DCu;
    {
        const bool branch_taken_0x4293dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4293E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4293DCu;
        // 0x4293e0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4293dc) {
            ctx->pc = 0x429418u;
            goto label_429418;
        }
    }
    ctx->pc = 0x4293E4u;
    // 0x4293e4: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x4293e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x4293e8: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x4293e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x4293ec: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4293ecu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x4293f0: 0xf  sync
    ctx->pc = 0x4293f0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x4293f4: 0x40f  sync.p
    ctx->pc = 0x4293f4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_4293f8:
    // 0x4293f8: 0x0  nop
    ctx->pc = 0x4293f8u;
    // NOP
    // 0x4293fc: 0x0  nop
    ctx->pc = 0x4293fcu;
    // NOP
    // 0x429400: 0x0  nop
    ctx->pc = 0x429400u;
    // NOP
    // 0x429404: 0x0  nop
    ctx->pc = 0x429404u;
    // NOP
    // 0x429408: 0x0  nop
    ctx->pc = 0x429408u;
    // NOP
    // 0x42940c: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x42940Cu;
    {
        const bool branch_taken_0x42940c = (false);
        if (branch_taken_0x42940c) {
            ctx->pc = 0x4293F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4293f8;
        }
    }
    ctx->pc = 0x429414u;
    // 0x429414: 0x0  nop
    ctx->pc = 0x429414u;
    // NOP
label_429418:
    // 0x429418: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x429418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x42941c: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x42941cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x429420: 0x52182b  sltu        $v1, $v0, $s2
    ctx->pc = 0x429420u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x429424: 0x8f85be70  lw          $a1, -0x4190($gp)
    ctx->pc = 0x429424u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950512)));
    // 0x429428: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x429428u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x42942c: 0x8f86be74  lw          $a2, -0x418C($gp)
    ctx->pc = 0x42942cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950516)));
    // 0x429430: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x429430u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x429434: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x429434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x429438: 0x439024  and         $s2, $v0, $v1
    ctx->pc = 0x429438u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x42943c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x42943cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x429440: 0x721823  subu        $v1, $v1, $s2
    ctx->pc = 0x429440u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x429444: 0xc3102b  sltu        $v0, $a2, $v1
    ctx->pc = 0x429444u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x429448: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x429448u;
    {
        const bool branch_taken_0x429448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42944Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429448u;
        // 0x42944c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429448) {
            ctx->pc = 0x42945Cu;
            goto label_42945c;
        }
    }
    ctx->pc = 0x429450u;
    // 0x429450: 0xaf85be68  sw          $a1, -0x4198($gp)
    ctx->pc = 0x429450u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950504), GPR_U32(ctx, 5));
    // 0x429454: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x429454u;
    {
        const bool branch_taken_0x429454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x429458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429454u;
        // 0x429458: 0xaf83be70  sw          $v1, -0x4190($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950512), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429454) {
            ctx->pc = 0x4294ECu;
            goto label_4294ec;
        }
    }
    ctx->pc = 0x42945Cu;
label_42945c:
    // 0x42945c: 0x8f83be40  lw          $v1, -0x41C0($gp)
    ctx->pc = 0x42945cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950464)));
    // 0x429460: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x429460u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x429464: 0x3484ff80  ori         $a0, $a0, 0xFF80
    ctx->pc = 0x429464u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65408);
    // 0x429468: 0x8f85be60  lw          $a1, -0x41A0($gp)
    ctx->pc = 0x429468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950496)));
    // 0x42946c: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x42946cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x429470: 0x2463009f  addiu       $v1, $v1, 0x9F
    ctx->pc = 0x429470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 159));
    // 0x429474: 0x648024  and         $s0, $v1, $a0
    ctx->pc = 0x429474u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x429478: 0x26020080  addiu       $v0, $s0, 0x80
    ctx->pc = 0x429478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x42947c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x42947cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x429480: 0xa2282b  sltu        $a1, $a1, $v0
    ctx->pc = 0x429480u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x429484: 0x14a00019  bnez        $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x429484u;
    {
        const bool branch_taken_0x429484 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x429488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429484u;
        // 0x429488: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429484) {
            ctx->pc = 0x4294ECu;
            goto label_4294ec;
        }
    }
    ctx->pc = 0x42948Cu;
    // 0x42948c: 0xc109f06  jal         func_427C18
    ctx->pc = 0x42948Cu;
    SET_GPR_U32(ctx, 31, 0x429494u);
    ctx->pc = 0x429490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42948Cu;
    // 0x429490: 0x8f91be8c  lw          $s1, -0x4174($gp) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950540)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x427C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x427C18u, 0x42948Cu, 0x429494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x429494u;
label_429494:
    // 0x429494: 0x9382be64  lbu         $v0, -0x419C($gp)
    ctx->pc = 0x429494u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294950500)));
    // 0x429498: 0x2784be58  addiu       $a0, $gp, -0x41A8
    ctx->pc = 0x429498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294950488));
    // 0x42949c: 0x8f85be7c  lw          $a1, -0x4184($gp)
    ctx->pc = 0x42949cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950524)));
    // 0x4294a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4294a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4294a4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4294a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4294a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4294a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4294ac: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4294ACu;
    {
        const bool branch_taken_0x4294ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x4294B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4294ACu;
        // 0x4294b0: 0x24020102  addiu       $v0, $zero, 0x102 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4294ac) {
            ctx->pc = 0x4294C0u;
            goto label_4294c0;
        }
    }
    ctx->pc = 0x4294B4u;
    // 0x4294b4: 0xc10a024  jal         func_428090
    ctx->pc = 0x4294B4u;
    SET_GPR_U32(ctx, 31, 0x4294BCu);
    ctx->pc = 0x428090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428090u, 0x4294B4u, 0x4294BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4294BCu;
label_4294bc:
    // 0x4294bc: 0x24020102  addiu       $v0, $zero, 0x102
    ctx->pc = 0x4294bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
label_4294c0:
    // 0x4294c0: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4294C0u;
    {
        const bool branch_taken_0x4294c0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x4294C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4294C0u;
        // 0x4294c4: 0x102902  srl         $a1, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4294c0) {
            ctx->pc = 0x4294D8u;
            goto label_4294d8;
        }
    }
    ctx->pc = 0x4294C8u;
    // 0x4294c8: 0xc10a1e2  jal         func_428788
    ctx->pc = 0x4294C8u;
    SET_GPR_U32(ctx, 31, 0x4294D0u);
    ctx->pc = 0x4294CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4294C8u;
    // 0x4294cc: 0x102102  srl         $a0, $s0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428788u, 0x4294C8u, 0x4294D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4294D0u;
label_4294d0:
    // 0x4294d0: 0x1000ff7b  b           . + 4 + (-0x85 << 2)
    ctx->pc = 0x4294D0u;
    {
        const bool branch_taken_0x4294d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4294d0) {
            ctx->pc = 0x4292C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4292c0;
        }
    }
    ctx->pc = 0x4294D8u;
label_4294d8:
    // 0x4294d8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4294d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x4294dc: 0xc10a322  jal         func_428C88
    ctx->pc = 0x4294DCu;
    SET_GPR_U32(ctx, 31, 0x4294E4u);
    ctx->pc = 0x4294E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4294DCu;
    // 0x4294e0: 0x2242024  and         $a0, $s1, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x4294DCu, 0x4294E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4294E4u;
label_4294e4:
    // 0x4294e4: 0x1000ff76  b           . + 4 + (-0x8A << 2)
    ctx->pc = 0x4294E4u;
    {
        const bool branch_taken_0x4294e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4294e4) {
            ctx->pc = 0x4292C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4292c0;
        }
    }
    ctx->pc = 0x4294ECu;
label_4294ec:
    // 0x4294ec: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4294ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4294f0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4294f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4294f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4294f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4294f8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4294f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4294fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4294fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x429500: 0x3e00008  jr          $ra
    ctx->pc = 0x429500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x429504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429500u;
        // 0x429504: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x429500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x429508u;
}
