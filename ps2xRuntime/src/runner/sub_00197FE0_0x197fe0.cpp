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

// Function: sub_00197FE0
// Address: 0x197fe0 - 0x198010
void sub_00197FE0_0x197fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197FE0_0x197fe0");
#endif

    ctx->pc = 0x197fe0u;

    // 0x197fe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x197fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x197fe4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x197fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x197fe8: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x197fe8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x197fec: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x197fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x197ff0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x197ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x197ff4: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x197ff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x197ff8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x197ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x197ffc: 0x3e00008  jr          $ra
    ctx->pc = 0x197FFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197FFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198004u;
    // 0x198004: 0x0  nop
    ctx->pc = 0x198004u;
    // NOP
    // 0x198008: 0x0  nop
    ctx->pc = 0x198008u;
    // NOP
    // 0x19800c: 0x0  nop
    ctx->pc = 0x19800cu;
    // NOP
    ctx->pc = 0x198010u;
}
