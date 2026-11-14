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

// Function: sub_0025A600
// Address: 0x25a600 - 0x25a630
void sub_0025A600_0x25a600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A600_0x25a600");
#endif

    ctx->pc = 0x25a600u;

    // 0x25a600: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25a600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25a604: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x25a604u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x25a608: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x25a608u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x25a60c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x25a60cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a610: 0xc46100f4  lwc1        $f1, 0xF4($v1)
    ctx->pc = 0x25a610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25a614: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x25a614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25a618: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x25a618u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x25a61c: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x25a61cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x25a620: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x25a620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x25a624: 0x3e00008  jr          $ra
    ctx->pc = 0x25A624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A62Cu;
    // 0x25a62c: 0x0  nop
    ctx->pc = 0x25a62cu;
    // NOP
    ctx->pc = 0x25a630u;
}
