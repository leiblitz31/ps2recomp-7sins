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

// Function: sub_00195C40
// Address: 0x195c40 - 0x195c90
void sub_00195C40_0x195c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00195C40_0x195c40");
#endif

    ctx->pc = 0x195c40u;

    // 0x195c40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x195c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x195c44: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x195c44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x195c48: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x195c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x195c4c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x195c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195c50: 0xac6400b4  sw          $a0, 0xB4($v1)
    ctx->pc = 0x195c50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 180), GPR_U32(ctx, 4));
    // 0x195c54: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x195c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195c58: 0xac6000b8  sw          $zero, 0xB8($v1)
    ctx->pc = 0x195c58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 184), GPR_U32(ctx, 0));
    // 0x195c5c: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x195c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x195c60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x195c60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x195c64: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x195c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195c68: 0xe46000bc  swc1        $f0, 0xBC($v1)
    ctx->pc = 0x195c68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 188), bits); }
    // 0x195c6c: 0xc78081b8  lwc1        $f0, -0x7E48($gp)
    ctx->pc = 0x195c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195c70: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x195c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195c74: 0xe46000c0  swc1        $f0, 0xC0($v1)
    ctx->pc = 0x195c74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 192), bits); }
    // 0x195c78: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x195c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x195c7c: 0x3e00008  jr          $ra
    ctx->pc = 0x195C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195C7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195C84u;
    // 0x195c84: 0x0  nop
    ctx->pc = 0x195c84u;
    // NOP
    // 0x195c88: 0x0  nop
    ctx->pc = 0x195c88u;
    // NOP
    // 0x195c8c: 0x0  nop
    ctx->pc = 0x195c8cu;
    // NOP
    ctx->pc = 0x195c90u;
}
