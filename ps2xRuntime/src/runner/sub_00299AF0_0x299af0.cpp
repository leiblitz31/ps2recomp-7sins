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

// Function: sub_00299AF0
// Address: 0x299af0 - 0x299b30
void sub_00299AF0_0x299af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299AF0_0x299af0");
#endif

    ctx->pc = 0x299af0u;

    // 0x299af0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x299af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x299af4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x299af4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x299af8: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x299af8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x299afc: 0xe7ad0020  swc1        $f13, 0x20($sp)
    ctx->pc = 0x299afcu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x299b00: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x299b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299b04: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x299b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x299b08: 0xe460002c  swc1        $f0, 0x2C($v1)
    ctx->pc = 0x299b08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 44), bits); }
    // 0x299b0c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x299b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299b10: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x299b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x299b14: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x299b14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x299b18: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x299b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x299b1c: 0x3e00008  jr          $ra
    ctx->pc = 0x299B1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299B1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299B24u;
    // 0x299b24: 0x0  nop
    ctx->pc = 0x299b24u;
    // NOP
    // 0x299b28: 0x0  nop
    ctx->pc = 0x299b28u;
    // NOP
    // 0x299b2c: 0x0  nop
    ctx->pc = 0x299b2cu;
    // NOP
    ctx->pc = 0x299b30u;
}
