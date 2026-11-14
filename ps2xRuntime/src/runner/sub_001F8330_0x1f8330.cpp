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

// Function: sub_001F8330
// Address: 0x1f8330 - 0x1f8380
void sub_001F8330_0x1f8330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8330_0x1f8330");
#endif

    ctx->pc = 0x1f8330u;

    // 0x1f8330: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f8330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f8334: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1f8334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1f8338: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1f8338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f833c: 0xa06000e0  sb          $zero, 0xE0($v1)
    ctx->pc = 0x1f833cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 224), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f8340: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1f8340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f8344: 0xc460004c  lwc1        $f0, 0x4C($v1)
    ctx->pc = 0x1f8344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f8348: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1f8348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f834c: 0xe46000e4  swc1        $f0, 0xE4($v1)
    ctx->pc = 0x1f834cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 228), bits); }
    // 0x1f8350: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1f8350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f8354: 0xa06000e8  sb          $zero, 0xE8($v1)
    ctx->pc = 0x1f8354u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 232), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f8358: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1f8358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f835c: 0xa06000e9  sb          $zero, 0xE9($v1)
    ctx->pc = 0x1f835cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 233), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f8360: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1f8360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f8364: 0xa06000ea  sb          $zero, 0xEA($v1)
    ctx->pc = 0x1f8364u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 234), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f8368: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1f8368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f836c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F836Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F836Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8374u;
    // 0x1f8374: 0x0  nop
    ctx->pc = 0x1f8374u;
    // NOP
    // 0x1f8378: 0x0  nop
    ctx->pc = 0x1f8378u;
    // NOP
    // 0x1f837c: 0x0  nop
    ctx->pc = 0x1f837cu;
    // NOP
    ctx->pc = 0x1f8380u;
}
