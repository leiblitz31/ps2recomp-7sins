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

// Function: sub_001DBD40
// Address: 0x1dbd40 - 0x1dbd70
void sub_001DBD40_0x1dbd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DBD40_0x1dbd40");
#endif

    ctx->pc = 0x1dbd40u;

    // 0x1dbd40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dbd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dbd44: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1dbd44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1dbd48: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x1dbd48u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1dbd4c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1dbd4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dbd50: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1dbd50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbd54: 0xe4600078  swc1        $f0, 0x78($v1)
    ctx->pc = 0x1dbd54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 120), bits); }
    // 0x1dbd58: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1dbd58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1dbd5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBD5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBD5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DBD64u;
    // 0x1dbd64: 0x0  nop
    ctx->pc = 0x1dbd64u;
    // NOP
    // 0x1dbd68: 0x0  nop
    ctx->pc = 0x1dbd68u;
    // NOP
    // 0x1dbd6c: 0x0  nop
    ctx->pc = 0x1dbd6cu;
    // NOP
    ctx->pc = 0x1dbd70u;
}
