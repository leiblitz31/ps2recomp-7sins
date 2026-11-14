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

// Function: sub_003BD3D0
// Address: 0x3bd3d0 - 0x3bd410
void sub_003BD3D0_0x3bd3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BD3D0_0x3bd3d0");
#endif

    switch (ctx->pc) {
        case 0x3bd3f4u: goto label_3bd3f4;
        default: break;
    }

    ctx->pc = 0x3bd3d0u;

    // 0x3bd3d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3bd3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3bd3d4: 0x8f82bd84  lw          $v0, -0x427C($gp)
    ctx->pc = 0x3bd3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950276)));
    // 0x3bd3d8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3bd3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3bd3dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3bd3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3bd3e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3bd3e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd3e4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BD3E4u;
    {
        const bool branch_taken_0x3bd3e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BD3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD3E4u;
        // 0x3bd3e8: 0xaf80ab6c  sw          $zero, -0x5494($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294945644), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd3e4) {
            ctx->pc = 0x3BD3F8u;
            goto label_3bd3f8;
        }
    }
    ctx->pc = 0x3BD3ECu;
    // 0x3bd3ec: 0xc104284  jal         func_410A10
    ctx->pc = 0x3BD3ECu;
    SET_GPR_U32(ctx, 31, 0x3BD3F4u);
    ctx->pc = 0x3BD3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BD3ECu;
    // 0x3bd3f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x410A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410A10u, 0x3BD3ECu, 0x3BD3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BD3F4u;
label_3bd3f4:
    // 0x3bd3f4: 0xaf80bd84  sw          $zero, -0x427C($gp)
    ctx->pc = 0x3bd3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950276), GPR_U32(ctx, 0));
label_3bd3f8:
    // 0x3bd3f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3bd3f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd3fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3bd3fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bd400: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3bd400u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bd404: 0x3e00008  jr          $ra
    ctx->pc = 0x3BD404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BD408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD404u;
        // 0x3bd408: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BD404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BD40Cu;
    // 0x3bd40c: 0x0  nop
    ctx->pc = 0x3bd40cu;
    // NOP
    ctx->pc = 0x3bd410u;
}
