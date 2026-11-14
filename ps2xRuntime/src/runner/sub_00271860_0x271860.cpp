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

// Function: sub_00271860
// Address: 0x271860 - 0x271890
void sub_00271860_0x271860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00271860_0x271860");
#endif

    ctx->pc = 0x271860u;

    // 0x271860: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x271860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x271864: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x271864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x271868: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x271868u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x27186c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27186cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x271870: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x271870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x271874: 0xe4600120  swc1        $f0, 0x120($v1)
    ctx->pc = 0x271874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x271878: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x271878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x27187c: 0x3e00008  jr          $ra
    ctx->pc = 0x27187Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27187Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x271884u;
    // 0x271884: 0x0  nop
    ctx->pc = 0x271884u;
    // NOP
    // 0x271888: 0x0  nop
    ctx->pc = 0x271888u;
    // NOP
    // 0x27188c: 0x0  nop
    ctx->pc = 0x27188cu;
    // NOP
    ctx->pc = 0x271890u;
}
