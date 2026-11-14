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

// Function: sub_0019DC00
// Address: 0x19dc00 - 0x19dd00
void sub_0019DC00_0x19dc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019DC00_0x19dc00");
#endif

    ctx->pc = 0x19dc00u;

    // 0x19dc00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19dc00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19dc04: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x19dc04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x19dc08: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x19dc08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x19dc0c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x19dc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19dc10: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x19dc10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19dc14: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19dc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19dc18: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x19dc18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x19dc1c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x19dc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19dc20: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19dc20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19dc24: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x19dc24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x19dc28: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x19dc28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x19dc2c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x19dc2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19dc30: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x19dc30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19dc34: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x19dc34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x19dc38: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x19dc38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x19dc3c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x19dc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19dc40: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x19dc40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19dc44: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19dc44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19dc48: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x19dc48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x19dc4c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x19dc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19dc50: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19dc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19dc54: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x19dc54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x19dc58: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x19dc58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x19dc5c: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x19dc5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x19dc60: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x19dc60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19dc64: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x19dc64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19dc68: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x19dc68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19dc6c: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x19dc6cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x19dc70: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x19dc70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x19dc74: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x19dc74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x19dc78: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x19dc78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x19dc7c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x19dc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19dc80: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x19dc80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x19dc84: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19dc84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19dc88: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x19dc88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
    // 0x19dc8c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x19dc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19dc90: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x19dc90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19dc94: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19dc94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19dc98: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x19dc98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x19dc9c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x19dc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19dca0: 0x90430028  lbu         $v1, 0x28($v0)
    ctx->pc = 0x19dca0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x19dca4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19dca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19dca8: 0xa0430028  sb          $v1, 0x28($v0)
    ctx->pc = 0x19dca8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 40), (uint8_t)GPR_U32(ctx, 3));
    // 0x19dcac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x19dcacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19dcb0: 0x90430029  lbu         $v1, 0x29($v0)
    ctx->pc = 0x19dcb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 41)));
    // 0x19dcb4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19dcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19dcb8: 0xa0430029  sb          $v1, 0x29($v0)
    ctx->pc = 0x19dcb8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x19dcbc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x19dcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19dcc0: 0xc440002c  lwc1        $f0, 0x2C($v0)
    ctx->pc = 0x19dcc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19dcc4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19dcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19dcc8: 0xe440002c  swc1        $f0, 0x2C($v0)
    ctx->pc = 0x19dcc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
    // 0x19dccc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x19dcccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19dcd0: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x19dcd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19dcd4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19dcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19dcd8: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x19dcd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x19dcdc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x19dcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19dce0: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x19dce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x19dce4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19dce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19dce8: 0xac430034  sw          $v1, 0x34($v0)
    ctx->pc = 0x19dce8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 3));
    // 0x19dcec: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19dcecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19dcf0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x19dcf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19dcf4: 0x3e00008  jr          $ra
    ctx->pc = 0x19DCF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19DCF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19DCFCu;
    // 0x19dcfc: 0x0  nop
    ctx->pc = 0x19dcfcu;
    // NOP
    ctx->pc = 0x19dd00u;
}
