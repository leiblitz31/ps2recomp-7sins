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

// Function: sub_00254920
// Address: 0x254920 - 0x254970
void sub_00254920_0x254920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254920_0x254920");
#endif

    switch (ctx->pc) {
        case 0x254944u: goto label_254944;
        default: break;
    }

    ctx->pc = 0x254920u;

    // 0x254920: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x254920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x254924: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x254924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x254928: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x254928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25492c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x25492cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x254930: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x254930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x254934: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x254934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254938: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x254938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25493c: 0xc09525c  jal         func_254970
    ctx->pc = 0x25493Cu;
    SET_GPR_U32(ctx, 31, 0x254944u);
    ctx->pc = 0x254970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254970u, 0x25493Cu, 0x254944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254944u;
label_254944:
    // 0x254944: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x254944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x254948: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x254948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25494c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x25494cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x254950: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x254950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254954: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x254954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254958: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x254958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25495c: 0x3e00008  jr          $ra
    ctx->pc = 0x25495Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25495Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254964u;
    // 0x254964: 0x0  nop
    ctx->pc = 0x254964u;
    // NOP
    // 0x254968: 0x0  nop
    ctx->pc = 0x254968u;
    // NOP
    // 0x25496c: 0x0  nop
    ctx->pc = 0x25496cu;
    // NOP
    ctx->pc = 0x254970u;
}
