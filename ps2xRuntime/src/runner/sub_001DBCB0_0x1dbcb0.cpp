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

// Function: sub_001DBCB0
// Address: 0x1dbcb0 - 0x1dbce0
void sub_001DBCB0_0x1dbcb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DBCB0_0x1dbcb0");
#endif

    ctx->pc = 0x1dbcb0u;

    // 0x1dbcb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dbcb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dbcb4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1dbcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1dbcb8: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x1dbcb8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1dbcbc: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1dbcbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dbcc0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1dbcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbcc4: 0xe460006c  swc1        $f0, 0x6C($v1)
    ctx->pc = 0x1dbcc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 108), bits); }
    // 0x1dbcc8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1dbcc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1dbccc: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBCCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBCCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DBCD4u;
    // 0x1dbcd4: 0x0  nop
    ctx->pc = 0x1dbcd4u;
    // NOP
    // 0x1dbcd8: 0x0  nop
    ctx->pc = 0x1dbcd8u;
    // NOP
    // 0x1dbcdc: 0x0  nop
    ctx->pc = 0x1dbcdcu;
    // NOP
    ctx->pc = 0x1dbce0u;
}
