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

// Function: sub_00198310
// Address: 0x198310 - 0x198410
void sub_00198310_0x198310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00198310_0x198310");
#endif

    ctx->pc = 0x198310u;

    // 0x198310: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x198310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x198314: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x198314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x198318: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x198318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x19831c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x19831cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x198320: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x198320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198324: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x198324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198328: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x198328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x19832c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x19832cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x198330: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x198330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198334: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x198334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x198338: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x198338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x19833c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x19833cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x198340: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x198340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198344: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x198344u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x198348: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x198348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x19834c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x19834cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x198350: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x198350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198354: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x198354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198358: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x198358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x19835c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x19835cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x198360: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x198360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198364: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x198364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x198368: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x198368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x19836c: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x19836cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x198370: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x198370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x198374: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x198374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x198378: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x198378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19837c: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x19837cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x198380: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x198380u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x198384: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x198384u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x198388: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x198388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x19838c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x19838cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x198390: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x198390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x198394: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x198394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198398: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x198398u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
    // 0x19839c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x19839cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1983a0: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x1983a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1983a4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1983a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1983a8: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x1983a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x1983ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1983acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1983b0: 0x90430028  lbu         $v1, 0x28($v0)
    ctx->pc = 0x1983b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1983b4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1983b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1983b8: 0xa0430028  sb          $v1, 0x28($v0)
    ctx->pc = 0x1983b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 40), (uint8_t)GPR_U32(ctx, 3));
    // 0x1983bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1983bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1983c0: 0x90430029  lbu         $v1, 0x29($v0)
    ctx->pc = 0x1983c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 41)));
    // 0x1983c4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1983c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1983c8: 0xa0430029  sb          $v1, 0x29($v0)
    ctx->pc = 0x1983c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x1983cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1983ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1983d0: 0xc440002c  lwc1        $f0, 0x2C($v0)
    ctx->pc = 0x1983d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1983d4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1983d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1983d8: 0xe440002c  swc1        $f0, 0x2C($v0)
    ctx->pc = 0x1983d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
    // 0x1983dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1983dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1983e0: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x1983e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1983e4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1983e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1983e8: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x1983e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x1983ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1983ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1983f0: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1983f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1983f4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1983f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1983f8: 0xac430034  sw          $v1, 0x34($v0)
    ctx->pc = 0x1983f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 3));
    // 0x1983fc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1983fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198400: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x198400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x198404: 0x3e00008  jr          $ra
    ctx->pc = 0x198404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19840Cu;
    // 0x19840c: 0x0  nop
    ctx->pc = 0x19840cu;
    // NOP
    ctx->pc = 0x198410u;
}
