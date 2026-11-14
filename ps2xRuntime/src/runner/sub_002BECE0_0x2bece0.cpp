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

// Function: sub_002BECE0
// Address: 0x2bece0 - 0x2bed20
void sub_002BECE0_0x2bece0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BECE0_0x2bece0");
#endif

    switch (ctx->pc) {
        case 0x2bed00u: goto label_2bed00;
        default: break;
    }

    ctx->pc = 0x2bece0u;

    // 0x2bece0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bece0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2bece4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bece4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bece8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2bece8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2becec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2bececu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2becf0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2becf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2becf4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2becf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2becf8: 0xc0afb48  jal         func_2BED20
    ctx->pc = 0x2BECF8u;
    SET_GPR_U32(ctx, 31, 0x2BED00u);
    ctx->pc = 0x2BED20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BED20u, 0x2BECF8u, 0x2BED00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BED00u;
label_2bed00:
    // 0x2bed00: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bed00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bed04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bed04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bed08: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2bed08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2bed0c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BED0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BED0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BED14u;
    // 0x2bed14: 0x0  nop
    ctx->pc = 0x2bed14u;
    // NOP
    // 0x2bed18: 0x0  nop
    ctx->pc = 0x2bed18u;
    // NOP
    // 0x2bed1c: 0x0  nop
    ctx->pc = 0x2bed1cu;
    // NOP
    ctx->pc = 0x2bed20u;
}
