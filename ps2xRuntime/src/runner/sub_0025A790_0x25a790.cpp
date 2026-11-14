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

// Function: sub_0025A790
// Address: 0x25a790 - 0x25a7c0
void sub_0025A790_0x25a790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A790_0x25a790");
#endif

    ctx->pc = 0x25a790u;

    // 0x25a790: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25a790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25a794: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x25a794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x25a798: 0xa3a50010  sb          $a1, 0x10($sp)
    ctx->pc = 0x25a798u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 5));
    // 0x25a79c: 0x93a40010  lbu         $a0, 0x10($sp)
    ctx->pc = 0x25a79cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25a7a0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x25a7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a7a4: 0xa06400fb  sb          $a0, 0xFB($v1)
    ctx->pc = 0x25a7a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 251), (uint8_t)GPR_U32(ctx, 4));
    // 0x25a7a8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x25a7a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x25a7ac: 0x3e00008  jr          $ra
    ctx->pc = 0x25A7ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A7ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A7B4u;
    // 0x25a7b4: 0x0  nop
    ctx->pc = 0x25a7b4u;
    // NOP
    // 0x25a7b8: 0x0  nop
    ctx->pc = 0x25a7b8u;
    // NOP
    // 0x25a7bc: 0x0  nop
    ctx->pc = 0x25a7bcu;
    // NOP
    ctx->pc = 0x25a7c0u;
}
