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

// Function: sub_001DBCE0
// Address: 0x1dbce0 - 0x1dbd10
void sub_001DBCE0_0x1dbce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DBCE0_0x1dbce0");
#endif

    ctx->pc = 0x1dbce0u;

    // 0x1dbce0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dbce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dbce4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1dbce4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1dbce8: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x1dbce8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1dbcec: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1dbcecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dbcf0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1dbcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbcf4: 0xe4600070  swc1        $f0, 0x70($v1)
    ctx->pc = 0x1dbcf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
    // 0x1dbcf8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1dbcf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1dbcfc: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBCFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBCFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DBD04u;
    // 0x1dbd04: 0x0  nop
    ctx->pc = 0x1dbd04u;
    // NOP
    // 0x1dbd08: 0x0  nop
    ctx->pc = 0x1dbd08u;
    // NOP
    // 0x1dbd0c: 0x0  nop
    ctx->pc = 0x1dbd0cu;
    // NOP
    ctx->pc = 0x1dbd10u;
}
