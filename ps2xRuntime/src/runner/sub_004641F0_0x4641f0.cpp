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

// Function: sub_004641F0
// Address: 0x4641f0 - 0x464220
void sub_004641F0_0x4641f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004641F0_0x4641f0");
#endif

    ctx->pc = 0x4641f0u;

    // 0x4641f0: 0xff80bfe8  sd          $zero, -0x4018($gp)
    ctx->pc = 0x4641f0u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294950888), GPR_U64(ctx, 0));
    // 0x4641f4: 0x183c  dsll32      $v1, $zero, 0
    ctx->pc = 0x4641f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) << (32 + 0));
    // 0x4641f8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x4641f8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x4641fc: 0xaf83bffc  sw          $v1, -0x4004($gp)
    ctx->pc = 0x4641fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950908), GPR_U32(ctx, 3));
    // 0x464200: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x464200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x464204: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x464204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x464208: 0xff83bff0  sd          $v1, -0x4010($gp)
    ctx->pc = 0x464208u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294950896), GPR_U64(ctx, 3));
    // 0x46420c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x46420cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x464210: 0x0  nop
    ctx->pc = 0x464210u;
    // NOP
    // 0x464214: 0xe780bff8  swc1        $f0, -0x4008($gp)
    ctx->pc = 0x464214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294950904), bits); }
    // 0x464218: 0x3e00008  jr          $ra
    ctx->pc = 0x464218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x464218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x464220u;
}
