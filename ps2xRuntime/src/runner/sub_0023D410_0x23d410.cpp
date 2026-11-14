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

// Function: sub_0023D410
// Address: 0x23d410 - 0x23d520
void sub_0023D410_0x23d410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023D410_0x23d410");
#endif

    switch (ctx->pc) {
        case 0x23d428u: goto label_23d428;
        default: break;
    }

    ctx->pc = 0x23d410u;

    // 0x23d410: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23d410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23d414: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x23d414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x23d418: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x23d418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x23d41c: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x23d41cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23d420: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x23d420u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23d424: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x23d424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_23d428:
    // 0x23d428: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x23d428u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x23d42c: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x23d42cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x23d430: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x23d430u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x23d434: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x23d434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x23d438: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x23d438u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x23d43c: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x23d43cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x23d440: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x23d440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x23d444: 0x1c80fff8  bgtz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x23D444u;
    {
        const bool branch_taken_0x23d444 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x23d444) {
            ctx->pc = 0x23D428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23d428;
        }
    }
    ctx->pc = 0x23D44Cu;
    // 0x23d44c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23d44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23d450: 0x90430040  lbu         $v1, 0x40($v0)
    ctx->pc = 0x23d450u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x23d454: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x23d454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23d458: 0xa0430040  sb          $v1, 0x40($v0)
    ctx->pc = 0x23d458u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 64), (uint8_t)GPR_U32(ctx, 3));
    // 0x23d45c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23d45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23d460: 0xc4400044  lwc1        $f0, 0x44($v0)
    ctx->pc = 0x23d460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d464: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x23d464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23d468: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x23d468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x23d46c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23d46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23d470: 0x90430048  lbu         $v1, 0x48($v0)
    ctx->pc = 0x23d470u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x23d474: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x23d474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23d478: 0xa0430048  sb          $v1, 0x48($v0)
    ctx->pc = 0x23d478u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 72), (uint8_t)GPR_U32(ctx, 3));
    // 0x23d47c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x23d47cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23d480: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x23d480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23d484: 0x2463004c  addiu       $v1, $v1, 0x4C
    ctx->pc = 0x23d484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 76));
    // 0x23d488: 0x2442004c  addiu       $v0, $v0, 0x4C
    ctx->pc = 0x23d488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x23d48c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x23d48cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23d490: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x23d490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23d494: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x23d494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d498: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x23d498u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x23d49c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x23d49cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x23d4a0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x23d4a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x23d4a4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23d4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23d4a8: 0xc4400058  lwc1        $f0, 0x58($v0)
    ctx->pc = 0x23d4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d4ac: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x23d4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23d4b0: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x23d4b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x23d4b4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23d4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23d4b8: 0xc440005c  lwc1        $f0, 0x5C($v0)
    ctx->pc = 0x23d4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d4bc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x23d4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23d4c0: 0xe440005c  swc1        $f0, 0x5C($v0)
    ctx->pc = 0x23d4c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 92), bits); }
    // 0x23d4c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23d4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23d4c8: 0x8c430060  lw          $v1, 0x60($v0)
    ctx->pc = 0x23d4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x23d4cc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x23d4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23d4d0: 0xac430060  sw          $v1, 0x60($v0)
    ctx->pc = 0x23d4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 3));
    // 0x23d4d4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23d4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23d4d8: 0x90430064  lbu         $v1, 0x64($v0)
    ctx->pc = 0x23d4d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x23d4dc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x23d4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23d4e0: 0xa0430064  sb          $v1, 0x64($v0)
    ctx->pc = 0x23d4e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 100), (uint8_t)GPR_U32(ctx, 3));
    // 0x23d4e4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23d4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23d4e8: 0x8c430068  lw          $v1, 0x68($v0)
    ctx->pc = 0x23d4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x23d4ec: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x23d4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23d4f0: 0xac430068  sw          $v1, 0x68($v0)
    ctx->pc = 0x23d4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 3));
    // 0x23d4f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23d4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23d4f8: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x23d4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x23d4fc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x23d4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23d500: 0xac43006c  sw          $v1, 0x6C($v0)
    ctx->pc = 0x23d500u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 3));
    // 0x23d504: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x23d504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23d508: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x23d508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23d50c: 0x3e00008  jr          $ra
    ctx->pc = 0x23D50Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D50Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23D514u;
    // 0x23d514: 0x0  nop
    ctx->pc = 0x23d514u;
    // NOP
    // 0x23d518: 0x0  nop
    ctx->pc = 0x23d518u;
    // NOP
    // 0x23d51c: 0x0  nop
    ctx->pc = 0x23d51cu;
    // NOP
    ctx->pc = 0x23d520u;
}
