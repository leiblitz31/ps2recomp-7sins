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

// Function: sub_00429140
// Address: 0x429140 - 0x4292a0
void sub_00429140_0x429140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00429140_0x429140");
#endif

    switch (ctx->pc) {
        case 0x429188u: goto label_429188;
        case 0x429278u: goto label_429278;
        default: break;
    }

    ctx->pc = 0x429140u;

    // 0x429140: 0x8f83be20  lw          $v1, -0x41E0($gp)
    ctx->pc = 0x429140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x429144: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x429144u;
    {
        const bool branch_taken_0x429144 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x429148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429144u;
        // 0x429148: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429144) {
            ctx->pc = 0x429158u;
            goto label_429158;
        }
    }
    ctx->pc = 0x42914Cu;
    // 0x42914c: 0x8f82be3c  lw          $v0, -0x41C4($gp)
    ctx->pc = 0x42914cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950460)));
    // 0x429150: 0x623823  subu        $a3, $v1, $v0
    ctx->pc = 0x429150u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x429154: 0x0  nop
    ctx->pc = 0x429154u;
    // NOP
label_429158:
    // 0x429158: 0x10e0003c  beqz        $a3, . + 4 + (0x3C << 2)
    ctx->pc = 0x429158u;
    {
        const bool branch_taken_0x429158 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x42915Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429158u;
        // 0x42915c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429158) {
            ctx->pc = 0x42924Cu;
            goto label_42924c;
        }
    }
    ctx->pc = 0x429160u;
    // 0x429160: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x429160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x429164: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x429164u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x1000d000
    // 0x429168: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x429168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x42916c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x42916Cu;
    {
        const bool branch_taken_0x42916c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x429170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42916Cu;
        // 0x429170: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42916c) {
            ctx->pc = 0x4291A8u;
            goto label_4291a8;
        }
    }
    ctx->pc = 0x429174u;
    // 0x429174: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x429174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x429178: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x429178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x42917c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x42917cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x429180: 0xf  sync
    ctx->pc = 0x429180u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x429184: 0x40f  sync.p
    ctx->pc = 0x429184u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_429188:
    // 0x429188: 0x0  nop
    ctx->pc = 0x429188u;
    // NOP
    // 0x42918c: 0x0  nop
    ctx->pc = 0x42918cu;
    // NOP
    // 0x429190: 0x0  nop
    ctx->pc = 0x429190u;
    // NOP
    // 0x429194: 0x0  nop
    ctx->pc = 0x429194u;
    // NOP
    // 0x429198: 0x0  nop
    ctx->pc = 0x429198u;
    // NOP
    // 0x42919c: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x42919Cu;
    {
        const bool branch_taken_0x42919c = (false);
        if (branch_taken_0x42919c) {
            ctx->pc = 0x429188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_429188;
        }
    }
    ctx->pc = 0x4291A4u;
    // 0x4291a4: 0x0  nop
    ctx->pc = 0x4291a4u;
    // NOP
label_4291a8:
    // 0x4291a8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x4291a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x4291ac: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x4291acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x4291b0: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x4291b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x4291b4: 0x8f86be3c  lw          $a2, -0x41C4($gp)
    ctx->pc = 0x4291b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950460)));
    // 0x4291b8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x4291b8u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 4)); // MMIO: 0x1000e010
    // 0x4291bc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x4291bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x4291c0: 0x3463d080  ori         $v1, $v1, 0xD080
    ctx->pc = 0x4291c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53376);
    // 0x4291c4: 0x8f85be40  lw          $a1, -0x41C0($gp)
    ctx->pc = 0x4291c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950464)));
    // 0x4291c8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x4291c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x4291cc: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x4291ccu;
    runtime->Store32(rdram, ctx, 0x1000D080u, GPR_U32(ctx, 6)); // MMIO: 0x1000d080
    // 0x4291d0: 0x3442d010  ori         $v0, $v0, 0xD010
    ctx->pc = 0x4291d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53264);
    // 0x4291d4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x4291d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x4291d8: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x4291d8u;
    runtime->Store32(rdram, ctx, 0x1000D010u, GPR_U32(ctx, 5)); // MMIO: 0x1000d010
    // 0x4291dc: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x4291dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
    // 0x4291e0: 0x71102  srl         $v0, $a3, 4
    ctx->pc = 0x4291e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 4));
    // 0x4291e4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4291e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x4291e8: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x4291e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x4291ec: 0xac24d000  sw          $a0, -0x3000($at)
    ctx->pc = 0x4291ecu;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 4)); // MMIO: 0x1000d000
    // 0x4291f0: 0xf  sync
    ctx->pc = 0x4291f0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x4291f4: 0x40f  sync.p
    ctx->pc = 0x4291f4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x4291f8: 0x8f84be28  lw          $a0, -0x41D8($gp)
    ctx->pc = 0x4291f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950440)));
    // 0x4291fc: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x4291FCu;
    {
        const bool branch_taken_0x4291fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x429200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4291FCu;
        // 0x429200: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4291fc) {
            ctx->pc = 0x429230u;
            goto label_429230;
        }
    }
    ctx->pc = 0x429204u;
    // 0x429204: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x429204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x429208: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x429208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x42920c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x42920cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x429210: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x429210u;
    {
        const bool branch_taken_0x429210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x429214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429210u;
        // 0x429214: 0x8f82be40  lw          $v0, -0x41C0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429210) {
            ctx->pc = 0x429234u;
            goto label_429234;
        }
    }
    ctx->pc = 0x429218u;
    // 0x429218: 0x861023  subu        $v0, $a0, $a2
    ctx->pc = 0x429218u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x42921c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x42921cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x429220: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x429220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x429224: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x429224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x429228: 0xaf82be28  sw          $v0, -0x41D8($gp)
    ctx->pc = 0x429228u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950440), GPR_U32(ctx, 2));
    // 0x42922c: 0x0  nop
    ctx->pc = 0x42922cu;
    // NOP
label_429230:
    // 0x429230: 0x8f82be40  lw          $v0, -0x41C0($gp)
    ctx->pc = 0x429230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950464)));
label_429234:
    // 0x429234: 0x8f83be3c  lw          $v1, -0x41C4($gp)
    ctx->pc = 0x429234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950460)));
    // 0x429238: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x429238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x42923c: 0x38632000  xori        $v1, $v1, 0x2000
    ctx->pc = 0x42923cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)8192);
    // 0x429240: 0xaf82be40  sw          $v0, -0x41C0($gp)
    ctx->pc = 0x429240u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950464), GPR_U32(ctx, 2));
    // 0x429244: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x429244u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x429248: 0xaf83be3c  sw          $v1, -0x41C4($gp)
    ctx->pc = 0x429248u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950460), GPR_U32(ctx, 3));
label_42924c:
    // 0x42924c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x42924cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x429250: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x429250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x429254: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x429254u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x1000d000
    // 0x429258: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x429258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x42925c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x42925Cu;
    {
        const bool branch_taken_0x42925c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x429260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42925Cu;
        // 0x429260: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42925c) {
            ctx->pc = 0x429298u;
            goto label_429298;
        }
    }
    ctx->pc = 0x429264u;
    // 0x429264: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x429264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x429268: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x429268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x42926c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x42926cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x429270: 0xf  sync
    ctx->pc = 0x429270u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x429274: 0x40f  sync.p
    ctx->pc = 0x429274u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_429278:
    // 0x429278: 0x0  nop
    ctx->pc = 0x429278u;
    // NOP
    // 0x42927c: 0x0  nop
    ctx->pc = 0x42927cu;
    // NOP
    // 0x429280: 0x0  nop
    ctx->pc = 0x429280u;
    // NOP
    // 0x429284: 0x0  nop
    ctx->pc = 0x429284u;
    // NOP
    // 0x429288: 0x0  nop
    ctx->pc = 0x429288u;
    // NOP
    // 0x42928c: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x42928Cu;
    {
        const bool branch_taken_0x42928c = (false);
        if (branch_taken_0x42928c) {
            ctx->pc = 0x429278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_429278;
        }
    }
    ctx->pc = 0x429294u;
    // 0x429294: 0x0  nop
    ctx->pc = 0x429294u;
    // NOP
label_429298:
    // 0x429298: 0x3e00008  jr          $ra
    ctx->pc = 0x429298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x429298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4292A0u;
}
