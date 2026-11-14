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

// Function: sub_00140900
// Address: 0x140900 - 0x1409c0
void sub_00140900_0x140900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00140900_0x140900");
#endif

    ctx->pc = 0x140900u;

    // 0x140900: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x140900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x140904: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x140904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x140908: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x140908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x14090c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x14090cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140910: 0xc4600034  lwc1        $f0, 0x34($v1)
    ctx->pc = 0x140910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140914: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x140914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140918: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x140918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x14091c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x14091cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140920: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x140920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140924: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x140924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140928: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x140928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x14092c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x14092cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140930: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x140930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140934: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x140934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140938: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x140938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x14093c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x14093cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140940: 0xc460005c  lwc1        $f0, 0x5C($v1)
    ctx->pc = 0x140940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140944: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x140944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140948: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x140948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x14094c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x14094cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140950: 0xc4600040  lwc1        $f0, 0x40($v1)
    ctx->pc = 0x140950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140954: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x140954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140958: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x140958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x14095c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x14095cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140960: 0xc4600044  lwc1        $f0, 0x44($v1)
    ctx->pc = 0x140960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140964: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x140964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140968: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x140968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x14096c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x14096cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140970: 0xc4600048  lwc1        $f0, 0x48($v1)
    ctx->pc = 0x140970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140974: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x140974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140978: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x140978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x14097c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x14097cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140980: 0xc460004c  lwc1        $f0, 0x4C($v1)
    ctx->pc = 0x140980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140984: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x140984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140988: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x140988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x14098c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x14098cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140990: 0xc4600050  lwc1        $f0, 0x50($v1)
    ctx->pc = 0x140990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140994: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x140994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140998: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x140998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x14099c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x14099cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1409a0: 0xc4600058  lwc1        $f0, 0x58($v1)
    ctx->pc = 0x1409a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1409a4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1409a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1409a8: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x1409a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x1409ac: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1409acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1409b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1409B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1409B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1409B8u;
    // 0x1409b8: 0x0  nop
    ctx->pc = 0x1409b8u;
    // NOP
    // 0x1409bc: 0x0  nop
    ctx->pc = 0x1409bcu;
    // NOP
    ctx->pc = 0x1409c0u;
}
