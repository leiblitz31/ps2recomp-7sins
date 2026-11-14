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

// Function: sub_004AB340
// Address: 0x4ab340 - 0x4ab3f0
void sub_004AB340_0x4ab340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AB340_0x4ab340");
#endif

    ctx->pc = 0x4ab340u;

    // 0x4ab340: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4ab340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4ab344: 0x10c20012  beq         $a2, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x4AB344u;
    {
        const bool branch_taken_0x4ab344 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x4AB348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB344u;
        // 0x4ab348: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ab344) {
            ctx->pc = 0x4AB390u;
            goto label_4ab390;
        }
    }
    ctx->pc = 0x4AB34Cu;
    // 0x4ab34c: 0x2cc20003  sltiu       $v0, $a2, 0x3
    ctx->pc = 0x4ab34cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x4ab350: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AB350u;
    {
        const bool branch_taken_0x4ab350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AB354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB350u;
        // 0x4ab354: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ab350) {
            ctx->pc = 0x4AB368u;
            goto label_4ab368;
        }
    }
    ctx->pc = 0x4AB358u;
    // 0x4ab358: 0x50c20008  beql        $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4AB358u;
    {
        const bool branch_taken_0x4ab358 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x4ab358) {
            ctx->pc = 0x4AB35Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AB358u;
            // 0x4ab35c: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AB37Cu;
            goto label_4ab37c;
        }
    }
    ctx->pc = 0x4AB360u;
    // 0x4ab360: 0x3e00008  jr          $ra
    ctx->pc = 0x4AB360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AB360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AB368u;
label_4ab368:
    // 0x4ab368: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4ab368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4ab36c: 0x50c20012  beql        $a2, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x4AB36Cu;
    {
        const bool branch_taken_0x4ab36c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x4ab36c) {
            ctx->pc = 0x4AB370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AB36Cu;
            // 0x4ab370: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AB3B8u;
            goto label_4ab3b8;
        }
    }
    ctx->pc = 0x4AB374u;
    // 0x4ab374: 0x3e00008  jr          $ra
    ctx->pc = 0x4AB374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AB374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AB37Cu;
label_4ab37c:
    // 0x4ab37c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x4ab37cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ab380: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x4ab380u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x4ab384: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4ab384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4ab388: 0x3e00008  jr          $ra
    ctx->pc = 0x4AB388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AB38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB388u;
        // 0x4ab38c: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AB388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AB390u;
label_4ab390:
    // 0x4ab390: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4ab390u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ab394: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x4ab394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4ab398: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x4ab398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4ab39c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x4ab39cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x4ab3a0: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x4ab3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x4ab3a4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4ab3a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4ab3a8: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x4ab3a8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ab3ac: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x4ab3acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x4ab3b0: 0x3e00008  jr          $ra
    ctx->pc = 0x4AB3B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AB3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB3B0u;
        // 0x4ab3b4: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AB3B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AB3B8u;
label_4ab3b8:
    // 0x4ab3b8: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x4ab3b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4ab3bc: 0x30a4ff00  andi        $a0, $a1, 0xFF00
    ctx->pc = 0x4ab3bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65280);
    // 0x4ab3c0: 0x51600  sll         $v0, $a1, 24
    ctx->pc = 0x4ab3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x4ab3c4: 0x51a02  srl         $v1, $a1, 8
    ctx->pc = 0x4ab3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x4ab3c8: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x4ab3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x4ab3cc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4ab3ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4ab3d0: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x4ab3d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x4ab3d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4ab3d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4ab3d8: 0x52e02  srl         $a1, $a1, 24
    ctx->pc = 0x4ab3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x4ab3dc: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4ab3dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4ab3e0: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4ab3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4ab3e4: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x4ab3e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x4ab3e8: 0x3e00008  jr          $ra
    ctx->pc = 0x4AB3E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AB3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB3E8u;
        // 0x4ab3ec: 0xace60000  sw          $a2, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AB3E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AB3F0u;
}
