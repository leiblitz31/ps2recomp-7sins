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

// Function: sub_003BD378
// Address: 0x3bd378 - 0x3bd3d0
void sub_003BD378_0x3bd378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BD378_0x3bd378");
#endif

    switch (ctx->pc) {
        case 0x3bd3acu: goto label_3bd3ac;
        default: break;
    }

    ctx->pc = 0x3bd378u;

    // 0x3bd378: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3bd378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3bd37c: 0x8f85ab70  lw          $a1, -0x5490($gp)
    ctx->pc = 0x3bd37cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945648)));
    // 0x3bd380: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3bd380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3bd384: 0x3c080062  lui         $t0, 0x62
    ctx->pc = 0x3bd384u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)98 << 16));
    // 0x3bd388: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3bd388u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd38c: 0x8f87ab74  lw          $a3, -0x548C($gp)
    ctx->pc = 0x3bd38cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945652)));
    // 0x3bd390: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x3bd390u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x3bd394: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3bd394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3bd398: 0x2508dcb0  addiu       $t0, $t0, -0x2350
    ctx->pc = 0x3bd398u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958256));
    // 0x3bd39c: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x3bd39cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x3bd3a0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3bd3a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3bd3a4: 0xc10408c  jal         func_410230
    ctx->pc = 0x3BD3A4u;
    SET_GPR_U32(ctx, 31, 0x3BD3ACu);
    ctx->pc = 0x3BD3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BD3A4u;
    // 0x3bd3a8: 0x3529001b  ori         $t1, $t1, 0x1B (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)27);
    ctx->in_delay_slot = false;
    ctx->pc = 0x410230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410230u, 0x3BD3A4u, 0x3BD3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BD3ACu;
label_3bd3ac:
    // 0x3bd3ac: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3bd3acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd3b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3bd3b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bd3b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3bd3b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd3b8: 0xaf83bd84  sw          $v1, -0x427C($gp)
    ctx->pc = 0x3bd3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950276), GPR_U32(ctx, 3));
    // 0x3bd3bc: 0x203100b  movn        $v0, $s0, $v1
    ctx->pc = 0x3bd3bcu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 16));
    // 0x3bd3c0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3bd3c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bd3c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3BD3C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BD3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD3C4u;
        // 0x3bd3c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BD3C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BD3CCu;
    // 0x3bd3cc: 0x0  nop
    ctx->pc = 0x3bd3ccu;
    // NOP
    ctx->pc = 0x3bd3d0u;
}
