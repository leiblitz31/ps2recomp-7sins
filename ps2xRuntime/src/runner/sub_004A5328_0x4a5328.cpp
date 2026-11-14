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

// Function: sub_004A5328
// Address: 0x4a5328 - 0x4a53e8
void sub_004A5328_0x4a5328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A5328_0x4a5328");
#endif

    ctx->pc = 0x4a5328u;

    // 0x4a5328: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x4a5328u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a532c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x4a532cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5330: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4a5330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4a5334: 0x3c06005f  lui         $a2, 0x5F
    ctx->pc = 0x4a5334u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)95 << 16));
    // 0x4a5338: 0x24c65e58  addiu       $a2, $a2, 0x5E58
    ctx->pc = 0x4a5338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24152));
    // 0x4a533c: 0x31020007  andi        $v0, $t0, 0x7
    ctx->pc = 0x4a533cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)7);
    // 0x4a5340: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x4a5340u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4a5344: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4a5344u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4a5348: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x4a5348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x4a534c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4a534cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4a5350: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x4a5350u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a5354: 0x31030008  andi        $v1, $t0, 0x8
    ctx->pc = 0x4a5354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)8);
    // 0x4a5358: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x4a5358u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4a535c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A535Cu;
    {
        const bool branch_taken_0x4a535c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A535Cu;
        // 0x4a5360: 0x220c2  srl         $a0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a535c) {
            ctx->pc = 0x4A5370u;
            goto label_4a5370;
        }
    }
    ctx->pc = 0x4A5364u;
    // 0x4a5364: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4a5364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a5368: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4A5368u;
    {
        const bool branch_taken_0x4a5368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A536Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5368u;
        // 0x4a536c: 0x441023  subu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5368) {
            ctx->pc = 0x4A5378u;
            goto label_4a5378;
        }
    }
    ctx->pc = 0x4A5370u;
label_4a5370:
    // 0x4a5370: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4a5370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a5374: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4a5374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_4a5378:
    // 0x4a5378: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4a5378u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4a537c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4a537cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a5380: 0x28628000  slti        $v0, $v1, -0x8000
    ctx->pc = 0x4a5380u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x4a5384: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A5384u;
    {
        const bool branch_taken_0x4a5384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5384u;
        // 0x4a5388: 0x24028000  addiu       $v0, $zero, -0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5384) {
            ctx->pc = 0x4A5394u;
            goto label_4a5394;
        }
    }
    ctx->pc = 0x4A538Cu;
    // 0x4a538c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4A538Cu;
    {
        const bool branch_taken_0x4a538c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A538Cu;
        // 0x4a5390: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a538c) {
            ctx->pc = 0x4A53A4u;
            goto label_4a53a4;
        }
    }
    ctx->pc = 0x4A5394u;
label_4a5394:
    // 0x4a5394: 0x24047fff  addiu       $a0, $zero, 0x7FFF
    ctx->pc = 0x4a5394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x4a5398: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x4a5398u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x4a539c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4A539Cu;
    {
        const bool branch_taken_0x4a539c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a539c) {
            ctx->pc = 0x4A53A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A539Cu;
            // 0x4a53a0: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A53A4u;
            goto label_4a53a4;
        }
    }
    ctx->pc = 0x4A53A4u;
label_4a53a4:
    // 0x4a53a4: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x4a53a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x4a53a8: 0x81840  sll         $v1, $t0, 1
    ctx->pc = 0x4a53a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x4a53ac: 0x24425e38  addiu       $v0, $v0, 0x5E38
    ctx->pc = 0x4a53acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24120));
    // 0x4a53b0: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x4a53b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4a53b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4a53b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4a53b8: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x4a53b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a53bc: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x4a53bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x4a53c0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A53C0u;
    {
        const bool branch_taken_0x4a53c0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4A53C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A53C0u;
        // 0x4a53c4: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a53c0) {
            ctx->pc = 0x4A53D0u;
            goto label_4a53d0;
        }
    }
    ctx->pc = 0x4A53C8u;
    // 0x4a53c8: 0x3e00008  jr          $ra
    ctx->pc = 0x4A53C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A53CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A53C8u;
        // 0x4a53cc: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A53C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A53D0u;
label_4a53d0:
    // 0x4a53d0: 0x28420059  slti        $v0, $v0, 0x59
    ctx->pc = 0x4a53d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)89) ? 1 : 0);
    // 0x4a53d4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4A53D4u;
    {
        const bool branch_taken_0x4a53d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A53D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A53D4u;
        // 0x4a53d8: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a53d4) {
            ctx->pc = 0x4A53E0u;
            goto label_4a53e0;
        }
    }
    ctx->pc = 0x4A53DCu;
    // 0x4a53dc: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4a53dcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_4a53e0:
    // 0x4a53e0: 0x3e00008  jr          $ra
    ctx->pc = 0x4A53E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A53E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A53E8u;
}
