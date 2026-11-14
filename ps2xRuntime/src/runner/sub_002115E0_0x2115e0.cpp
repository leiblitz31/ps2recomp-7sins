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

// Function: sub_002115E0
// Address: 0x2115e0 - 0x211680
void sub_002115E0_0x2115e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002115E0_0x2115e0");
#endif

    ctx->pc = 0x2115e0u;

    // 0x2115e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2115e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2115e4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2115e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2115e8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2115e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2115ec: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x2115ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2115f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2115f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2115f4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2115f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2115f8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2115f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2115fc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2115fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211600: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x211600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x211604: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x211604u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211608: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x211608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21160c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x21160cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x211610: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x211610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211614: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x211614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x211618: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x211618u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21161c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x21161cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211620: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x211620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x211624: 0xc78081c0  lwc1        $f0, -0x7E40($gp)
    ctx->pc = 0x211624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x211628: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x211628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21162c: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x21162cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x211630: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x211630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x211634: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x211634u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211638: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x211638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21163c: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x21163cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x211640: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x211640u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211644: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x211644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211648: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x211648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x21164c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x21164cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x211650: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x211650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211654: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x211654u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x211658: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x211658u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21165c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x21165cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211660: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x211660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x211664: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x211664u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211668: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x211668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21166c: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x21166cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x211670: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x211670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211674: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x211674u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x211678: 0x3e00008  jr          $ra
    ctx->pc = 0x211678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x211680u;
}
