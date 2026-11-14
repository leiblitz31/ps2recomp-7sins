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

// Function: sub_00300660
// Address: 0x300660 - 0x3006b8
void sub_00300660_0x300660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00300660_0x300660");
#endif

    ctx->pc = 0x300660u;

    // 0x300660: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x300660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x300664: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x300664u;
    {
        const bool branch_taken_0x300664 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x300668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300664u;
        // 0x300668: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300664) {
            ctx->pc = 0x300674u;
            goto label_300674;
        }
    }
    ctx->pc = 0x30066Cu;
    // 0x30066c: 0x3e00008  jr          $ra
    ctx->pc = 0x30066Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x300670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30066Cu;
        // 0x300670: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30066Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x300674u;
label_300674:
    // 0x300674: 0x28c20100  slti        $v0, $a2, 0x100
    ctx->pc = 0x300674u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x300678: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x300678u;
    {
        const bool branch_taken_0x300678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x300678) {
            ctx->pc = 0x30067Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300678u;
            // 0x30067c: 0x8ce30000  lw          $v1, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3006ACu;
            goto label_3006ac;
        }
    }
    ctx->pc = 0x300680u;
    // 0x300680: 0x38620001  xori        $v0, $v1, 0x1
    ctx->pc = 0x300680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x300684: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x300684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x300688: 0x2300a  movz        $a2, $zero, $v0
    ctx->pc = 0x300688u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
    // 0x30068c: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x30068cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x300690: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x300690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x300694: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x300694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x300698: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x300698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x30069c: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x30069cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x3006a0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3006a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3006a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3006A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3006A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3006A4u;
        // 0x3006a8: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3006A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3006ACu;
label_3006ac:
    // 0x3006ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3006acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3006b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3006B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3006B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3006B0u;
        // 0x3006b4: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3006B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3006B8u;
}
