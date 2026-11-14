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

// Function: sub_003283F8
// Address: 0x3283f8 - 0x328438
void sub_003283F8_0x3283f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003283F8_0x3283f8");
#endif

    switch (ctx->pc) {
        case 0x328408u: goto label_328408;
        default: break;
    }

    ctx->pc = 0x3283f8u;

    // 0x3283f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3283f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3283fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3283fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x328400: 0xc0ca9fc  jal         func_32A7F0
    ctx->pc = 0x328400u;
    SET_GPR_U32(ctx, 31, 0x328408u);
    ctx->pc = 0x32A7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A7F0u, 0x328400u, 0x328408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328408u;
label_328408:
    // 0x328408: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x328408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32840c: 0x3e00008  jr          $ra
    ctx->pc = 0x32840Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32840Cu;
        // 0x328410: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32840Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328414u;
    // 0x328414: 0x0  nop
    ctx->pc = 0x328414u;
    // NOP
    // 0x328418: 0x8c84006c  lw          $a0, 0x6C($a0)
    ctx->pc = 0x328418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x32841c: 0x24030123  addiu       $v1, $zero, 0x123
    ctx->pc = 0x32841cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    // 0x328420: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x328420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x328424: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x328424u;
    {
        const bool branch_taken_0x328424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x328428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328424u;
        // 0x328428: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328424) {
            ctx->pc = 0x328430u;
            goto label_328430;
        }
    }
    ctx->pc = 0x32842Cu;
    // 0x32842c: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x32842cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_328430:
    // 0x328430: 0x3e00008  jr          $ra
    ctx->pc = 0x328430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328430u;
        // 0x328434: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328438u;
}
