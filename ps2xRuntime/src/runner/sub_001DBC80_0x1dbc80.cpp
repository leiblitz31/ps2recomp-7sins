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

// Function: sub_001DBC80
// Address: 0x1dbc80 - 0x1dbcb0
void sub_001DBC80_0x1dbc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DBC80_0x1dbc80");
#endif

    ctx->pc = 0x1dbc80u;

    // 0x1dbc80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dbc80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dbc84: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1dbc84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1dbc88: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x1dbc88u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1dbc8c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1dbc8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dbc90: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1dbc90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbc94: 0xe4600068  swc1        $f0, 0x68($v1)
    ctx->pc = 0x1dbc94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 104), bits); }
    // 0x1dbc98: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1dbc98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1dbc9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBC9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBC9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DBCA4u;
    // 0x1dbca4: 0x0  nop
    ctx->pc = 0x1dbca4u;
    // NOP
    // 0x1dbca8: 0x0  nop
    ctx->pc = 0x1dbca8u;
    // NOP
    // 0x1dbcac: 0x0  nop
    ctx->pc = 0x1dbcacu;
    // NOP
    ctx->pc = 0x1dbcb0u;
}
