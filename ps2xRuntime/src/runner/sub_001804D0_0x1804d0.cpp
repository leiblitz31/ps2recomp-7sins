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

// Function: sub_001804D0
// Address: 0x1804d0 - 0x1805b0
void sub_001804D0_0x1804d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001804D0_0x1804d0");
#endif

    ctx->pc = 0x1804d0u;

    // 0x1804d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1804d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1804d4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1804d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1804d8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1804d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x1804dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1804dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1804e0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1804e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1804e4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1804e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1804e8: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1804e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1804ec: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1804ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1804f0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1804f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1804f4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1804f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1804f8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1804f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1804fc: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1804fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x180500: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x180500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180504: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x180504u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x180508: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x180508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x18050c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x18050cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180510: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x180510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180514: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x180514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x180518: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x180518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x18051c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x18051cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x180520: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x180520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180524: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x180524u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x180528: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x180528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x18052c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18052cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180530: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x180530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180534: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x180534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180538: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x180538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x18053c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18053cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180540: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x180540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180544: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x180544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180548: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x180548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x18054c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18054cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180550: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x180550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180554: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x180554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180558: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x180558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x18055c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18055cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180560: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x180560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180564: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x180564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180568: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x180568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x18056c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18056cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180570: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x180570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180574: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x180574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180578: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x180578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x18057c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18057cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180580: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x180580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180584: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x180584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180588: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x180588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x18058c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18058cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180590: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x180590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x180594: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x180594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180598: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x180598u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x18059c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18059cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1805a0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1805a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1805a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1805A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1805A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1805ACu;
    // 0x1805ac: 0x0  nop
    ctx->pc = 0x1805acu;
    // NOP
    ctx->pc = 0x1805b0u;
}
