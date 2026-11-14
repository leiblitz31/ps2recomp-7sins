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

// Function: sub_00106740
// Address: 0x106740 - 0x106780
void sub_00106740_0x106740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106740_0x106740");
#endif

    switch (ctx->pc) {
        case 0x10675cu: goto label_10675c;
        default: break;
    }

    ctx->pc = 0x106740u;

    // 0x106740: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x106740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x106744: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x106744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x106748: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x106748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10674c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10674cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106750: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x106750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x106754: 0xc0423c4  jal         func_108F10
    ctx->pc = 0x106754u;
    SET_GPR_U32(ctx, 31, 0x10675Cu);
    ctx->pc = 0x108F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108F10u, 0x106754u, 0x10675Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10675Cu;
label_10675c:
    // 0x10675c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x10675cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106760: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x106760u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x106764: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x106764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106768: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x106768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10676c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x10676cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x106770: 0x3e00008  jr          $ra
    ctx->pc = 0x106770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106778u;
    // 0x106778: 0x0  nop
    ctx->pc = 0x106778u;
    // NOP
    // 0x10677c: 0x0  nop
    ctx->pc = 0x10677cu;
    // NOP
    ctx->pc = 0x106780u;
}
