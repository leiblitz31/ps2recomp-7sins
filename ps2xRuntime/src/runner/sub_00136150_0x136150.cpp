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

// Function: sub_00136150
// Address: 0x136150 - 0x136240
void sub_00136150_0x136150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136150_0x136150");
#endif

    ctx->pc = 0x136150u;

    // 0x136150: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x136150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x136154: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x136154u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x136158: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x136158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x13615c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13615cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136160: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x136160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x136164: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x136164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x136168: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x136168u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x13616c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13616cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136170: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x136170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136174: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x136174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x136178: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x136178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x13617c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x13617cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136180: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x136180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x136184: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x136184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x136188: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x136188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x13618c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x13618cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x136190: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x136190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136194: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x136194u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x136198: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x136198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x13619c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13619cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1361a0: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x1361a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1361a4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1361a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1361a8: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x1361a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x1361ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1361acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1361b0: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x1361b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1361b4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1361b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1361b8: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x1361b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x1361bc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1361bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1361c0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1361c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1361c4: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x1361c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x1361c8: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x1361c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x1361cc: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1361ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1361d0: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1361d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1361d4: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x1361d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1361d8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1361d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1361dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1361dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1361e0: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x1361e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1361e4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1361e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1361e8: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x1361e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x1361ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1361ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1361f0: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x1361f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1361f4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1361f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1361f8: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x1361f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
    // 0x1361fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1361fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136200: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x136200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136204: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x136204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x136208: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x136208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x13620c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13620cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136210: 0x9043002c  lbu         $v1, 0x2C($v0)
    ctx->pc = 0x136210u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x136214: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x136214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x136218: 0xa043002c  sb          $v1, 0x2C($v0)
    ctx->pc = 0x136218u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 44), (uint8_t)GPR_U32(ctx, 3));
    // 0x13621c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13621cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136220: 0x9043002d  lbu         $v1, 0x2D($v0)
    ctx->pc = 0x136220u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 45)));
    // 0x136224: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x136224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x136228: 0xa043002d  sb          $v1, 0x2D($v0)
    ctx->pc = 0x136228u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 45), (uint8_t)GPR_U32(ctx, 3));
    // 0x13622c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x13622cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x136230: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x136230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x136234: 0x3e00008  jr          $ra
    ctx->pc = 0x136234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13623Cu;
    // 0x13623c: 0x0  nop
    ctx->pc = 0x13623cu;
    // NOP
    ctx->pc = 0x136240u;
}
