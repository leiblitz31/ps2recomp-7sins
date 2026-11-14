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

// Function: sub_00180780
// Address: 0x180780 - 0x180860
void sub_00180780_0x180780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180780_0x180780");
#endif

    ctx->pc = 0x180780u;

    // 0x180780: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x180780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x180784: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x180784u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x180788: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x180788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x18078c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18078cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180790: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x180790u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x180794: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x180794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180798: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x180798u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x18079c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x18079cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1807a0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1807a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1807a4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1807a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1807a8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1807a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1807ac: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1807acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1807b0: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1807b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1807b4: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x1807b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1807b8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1807b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1807bc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1807bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1807c0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1807c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1807c4: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x1807c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x1807c8: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x1807c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x1807cc: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1807ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1807d0: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1807d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1807d4: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x1807d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1807d8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1807d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1807dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1807dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1807e0: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x1807e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1807e4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1807e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1807e8: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x1807e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x1807ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1807ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1807f0: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x1807f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1807f4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1807f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1807f8: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x1807f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1807fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1807fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180800: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x180800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180804: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x180804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180808: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x180808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x18080c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18080cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180810: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x180810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180814: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x180814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180818: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x180818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x18081c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18081cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180820: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x180820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180824: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x180824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180828: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x180828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x18082c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18082cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180830: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x180830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180834: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x180834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180838: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x180838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x18083c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18083cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180840: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x180840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x180844: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x180844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180848: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x180848u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x18084c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18084cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180850: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x180850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x180854: 0x3e00008  jr          $ra
    ctx->pc = 0x180854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18085Cu;
    // 0x18085c: 0x0  nop
    ctx->pc = 0x18085cu;
    // NOP
    ctx->pc = 0x180860u;
}
