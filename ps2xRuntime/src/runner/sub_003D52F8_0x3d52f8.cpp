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

// Function: sub_003D52F8
// Address: 0x3d52f8 - 0x3d53f8
void sub_003D52F8_0x3d52f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D52F8_0x3d52f8");
#endif

    switch (ctx->pc) {
        case 0x3d5358u: goto label_3d5358;
        case 0x3d53b4u: goto label_3d53b4;
        case 0x3d53c0u: goto label_3d53c0;
        case 0x3d53d8u: goto label_3d53d8;
        default: break;
    }

    ctx->pc = 0x3d52f8u;

    // 0x3d52f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3d52f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3d52fc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3d52fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x3d5300: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3d5300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3d5304: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3d5304u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d5308: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3d5308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3d530c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d530cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d5310: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3d5310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3d5314: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d5314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3d5318: 0x9443e888  lhu         $v1, -0x1778($v0)
    ctx->pc = 0x3d5318u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x61E888u));
    // 0x3d531c: 0x96020060  lhu         $v0, 0x60($s0)
    ctx->pc = 0x3d531cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x3d5320: 0x1062002e  beq         $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x3D5320u;
    {
        const bool branch_taken_0x3d5320 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3D5324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5320u;
        // 0x3d5324: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5320) {
            ctx->pc = 0x3D53DCu;
            goto label_3d53dc;
        }
    }
    ctx->pc = 0x3D5328u;
    // 0x3d5328: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x3d5328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x3d532c: 0xa6030060  sh          $v1, 0x60($s0)
    ctx->pc = 0x3d532cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d5330: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x3d5330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x3d5334: 0x50600017  beql        $v1, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x3D5334u;
    {
        const bool branch_taken_0x3d5334 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d5334) {
            ctx->pc = 0x3D5338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D5334u;
            // 0x3d5338: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D5394u;
            goto label_3d5394;
        }
    }
    ctx->pc = 0x3D533Cu;
    // 0x3d533c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x3d533cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x3d5340: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3D5340u;
    {
        const bool branch_taken_0x3d5340 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3D5344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5340u;
        // 0x3d5344: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5340) {
            ctx->pc = 0x3D5388u;
            goto label_3d5388;
        }
    }
    ctx->pc = 0x3D5348u;
    // 0x3d5348: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3d5348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3d534c: 0x5202000e  beql        $s0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3D534Cu;
    {
        const bool branch_taken_0x3d534c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x3d534c) {
            ctx->pc = 0x3D5350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D534Cu;
            // 0x3d5350: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D5388u;
            goto label_3d5388;
        }
    }
    ctx->pc = 0x3D5354u;
    // 0x3d5354: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x3d5354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_3d5358:
    // 0x3d5358: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3d5358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3d535c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x3d535cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x3d5360: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x3d5360u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3d5364: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3D5364u;
    {
        const bool branch_taken_0x3d5364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d5364) {
            ctx->pc = 0x3D5388u;
            goto label_3d5388;
        }
    }
    ctx->pc = 0x3D536Cu;
    // 0x3d536c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x3d536cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x3d5370: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x3d5370u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3d5374: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3d5374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3d5378: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3d5378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3d537c: 0x5604fff6  bnel        $s0, $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x3D537Cu;
    {
        const bool branch_taken_0x3d537c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        if (branch_taken_0x3d537c) {
            ctx->pc = 0x3D5380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D537Cu;
            // 0x3d5380: 0x8e430014  lw          $v1, 0x14($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D5358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d5358;
        }
    }
    ctx->pc = 0x3D5384u;
    // 0x3d5384: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3d5384u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d5388:
    // 0x3d5388: 0x10c00015  beqz        $a2, . + 4 + (0x15 << 2)
    ctx->pc = 0x3D5388u;
    {
        const bool branch_taken_0x3d5388 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D538Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5388u;
        // 0x3d538c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5388) {
            ctx->pc = 0x3D53E0u;
            goto label_3d53e0;
        }
    }
    ctx->pc = 0x3D5390u;
    // 0x3d5390: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x3d5390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3d5394:
    // 0x3d5394: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x3D5394u;
    {
        const bool branch_taken_0x3d5394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d5394) {
            ctx->pc = 0x3D5398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D5394u;
            // 0x3d5398: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D53CCu;
            goto label_3d53cc;
        }
    }
    ctx->pc = 0x3D539Cu;
    // 0x3d539c: 0x8e510014  lw          $s1, 0x14($s2)
    ctx->pc = 0x3d539cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x3d53a0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3d53a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3d53a4: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3D53A4u;
    {
        const bool branch_taken_0x3d53a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d53a4) {
            ctx->pc = 0x3D53A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D53A4u;
            // 0x3d53a8: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D53CCu;
            goto label_3d53cc;
        }
    }
    ctx->pc = 0x3D53ACu;
    // 0x3d53ac: 0xc0e2048  jal         func_388120
    ctx->pc = 0x3D53ACu;
    SET_GPR_U32(ctx, 31, 0x3D53B4u);
    ctx->pc = 0x3D53B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D53ACu;
    // 0x3d53b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x388120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388120u, 0x3D53ACu, 0x3D53B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D53B4u;
label_3d53b4:
    // 0x3d53b4: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x3d53b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3d53b8: 0xc1060d2  jal         func_418348
    ctx->pc = 0x3D53B8u;
    SET_GPR_U32(ctx, 31, 0x3D53C0u);
    ctx->pc = 0x3D53BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D53B8u;
    // 0x3d53bc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418348u, 0x3D53B8u, 0x3D53C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D53C0u;
label_3d53c0:
    // 0x3d53c0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3D53C0u;
    {
        const bool branch_taken_0x3d53c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D53C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D53C0u;
        // 0x3d53c4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d53c0) {
            ctx->pc = 0x3D53E0u;
            goto label_3d53e0;
        }
    }
    ctx->pc = 0x3D53C8u;
    // 0x3d53c8: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x3d53c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3d53cc:
    // 0x3d53cc: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3d53ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x3d53d0: 0xc1036e0  jal         func_40DB80
    ctx->pc = 0x3D53D0u;
    SET_GPR_U32(ctx, 31, 0x3D53D8u);
    ctx->pc = 0x3D53D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D53D0u;
    // 0x3d53d4: 0x34a50114  ori         $a1, $a1, 0x114 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB80u, 0x3D53D0u, 0x3D53D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D53D8u;
label_3d53d8:
    // 0x3d53d8: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x3d53d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_3d53dc:
    // 0x3d53dc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3d53dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d53e0:
    // 0x3d53e0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3d53e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d53e4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3d53e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d53e8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3d53e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d53ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d53ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d53f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3D53F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D53F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D53F0u;
        // 0x3d53f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D53F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D53F8u;
}
