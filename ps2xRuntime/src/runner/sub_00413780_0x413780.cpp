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

// Function: sub_00413780
// Address: 0x413780 - 0x4137d8
void sub_00413780_0x413780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00413780_0x413780");
#endif

    ctx->pc = 0x413780u;

    // 0x413780: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x413780u;
    {
        const bool branch_taken_0x413780 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x413784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413780u;
        // 0x413784: 0x8f83bde8  lw          $v1, -0x4218($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x413780) {
            ctx->pc = 0x413790u;
            goto label_413790;
        }
    }
    ctx->pc = 0x413788u;
    // 0x413788: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x413788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x41378c: 0x244439f0  addiu       $a0, $v0, 0x39F0
    ctx->pc = 0x41378cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 14832));
label_413790:
    // 0x413790: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x413790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x413794: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x413794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x413798: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x413798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x41379c: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x41379Cu;
    {
        const bool branch_taken_0x41379c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4137A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41379Cu;
        // 0x4137a0: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41379c) {
            ctx->pc = 0x4137ACu;
            goto label_4137ac;
        }
    }
    ctx->pc = 0x4137A4u;
    // 0x4137a4: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x4137a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x4137a8: 0x244537d8  addiu       $a1, $v0, 0x37D8
    ctx->pc = 0x4137a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 14296));
label_4137ac:
    // 0x4137ac: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x4137ACu;
    {
        const bool branch_taken_0x4137ac = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x4137B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4137ACu;
        // 0x4137b0: 0xac65000c  sw          $a1, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4137ac) {
            ctx->pc = 0x4137BCu;
            goto label_4137bc;
        }
    }
    ctx->pc = 0x4137B4u;
    // 0x4137b4: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x4137b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x4137b8: 0x24463c58  addiu       $a2, $v0, 0x3C58
    ctx->pc = 0x4137b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 15448));
label_4137bc:
    // 0x4137bc: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x4137BCu;
    {
        const bool branch_taken_0x4137bc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x4137C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4137BCu;
        // 0x4137c0: 0xac660010  sw          $a2, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4137bc) {
            ctx->pc = 0x4137CCu;
            goto label_4137cc;
        }
    }
    ctx->pc = 0x4137C4u;
    // 0x4137c4: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x4137c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x4137c8: 0x24473a88  addiu       $a3, $v0, 0x3A88
    ctx->pc = 0x4137c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 14984));
label_4137cc:
    // 0x4137cc: 0xac670014  sw          $a3, 0x14($v1)
    ctx->pc = 0x4137ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 7));
    // 0x4137d0: 0x3e00008  jr          $ra
    ctx->pc = 0x4137D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4137D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4137D0u;
        // 0x4137d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4137D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4137D8u;
}
