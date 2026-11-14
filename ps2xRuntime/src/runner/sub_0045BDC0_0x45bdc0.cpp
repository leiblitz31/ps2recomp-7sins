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

// Function: sub_0045BDC0
// Address: 0x45bdc0 - 0x45bdf0
void sub_0045BDC0_0x45bdc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045BDC0_0x45bdc0");
#endif

    ctx->pc = 0x45bdc0u;

    // 0x45bdc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x45bdc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x45bdc4: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x45bdc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x45bdc8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x45bdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45bdcc: 0x27a30000  addiu       $v1, $sp, 0x0
    ctx->pc = 0x45bdccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x45bdd0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x45bdd0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x45bdd4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x45bdd4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x45bdd8: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x45bdd8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45bddc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x45bddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x45bde0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x45bde0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x45bde4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x45bde4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x45bde8: 0x3e00008  jr          $ra
    ctx->pc = 0x45BDE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45BDE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45BDF0u;
}
