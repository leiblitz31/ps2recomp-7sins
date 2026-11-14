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

// Function: sub_003284B8
// Address: 0x3284b8 - 0x328510
void sub_003284B8_0x3284b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003284B8_0x3284b8");
#endif

    switch (ctx->pc) {
        case 0x3284fcu: goto label_3284fc;
        default: break;
    }

    ctx->pc = 0x3284b8u;

    // 0x3284b8: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x3284b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x3284bc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3284bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3284c0: 0x8c62231c  lw          $v0, 0x231C($v1)
    ctx->pc = 0x3284c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4F231Cu));
    // 0x3284c4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3284c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3284c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3284c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3284cc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x3284ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3284d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3284d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3284d4: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x3284d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3284d8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3284d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3284dc: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x3284dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3284e0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x3284e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3284e4: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x3284e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x3284e8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x3284e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x3284ec: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3284ECu;
    {
        const bool branch_taken_0x3284ec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3284F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3284ECu;
        // 0x3284f0: 0xac460008  sw          $a2, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3284ec) {
            ctx->pc = 0x3284FCu;
            goto label_3284fc;
        }
    }
    ctx->pc = 0x3284F4u;
    // 0x3284f4: 0xc0ca0cc  jal         func_328330
    ctx->pc = 0x3284F4u;
    SET_GPR_U32(ctx, 31, 0x3284FCu);
    ctx->pc = 0x3284F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3284F4u;
    // 0x3284f8: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328330u, 0x3284F4u, 0x3284FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3284FCu;
label_3284fc:
    // 0x3284fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3284fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328500: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x328500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x328504: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x328504u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x328508: 0x3e00008  jr          $ra
    ctx->pc = 0x328508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32850Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328508u;
        // 0x32850c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328510u;
}
