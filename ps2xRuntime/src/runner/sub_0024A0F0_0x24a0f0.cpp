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

// Function: sub_0024A0F0
// Address: 0x24a0f0 - 0x24a1c0
void sub_0024A0F0_0x24a0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A0F0_0x24a0f0");
#endif

    ctx->pc = 0x24a0f0u;

    // 0x24a0f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24a0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24a0f4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x24a0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x24a0f8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x24a0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x24a0fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x24a0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24a100: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x24a100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24a104: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x24a104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24a108: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x24a108u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x24a10c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x24a10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24a110: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x24a110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24a114: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x24a114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x24a118: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x24a118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x24a11c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x24a11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24a120: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x24a120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24a124: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x24a124u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x24a128: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x24a128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x24a12c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x24a12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24a130: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x24a130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24a134: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x24a134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x24a138: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x24a138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x24a13c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x24a13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24a140: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x24a140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24a144: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x24a144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24a148: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x24a148u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x24a14c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x24a14cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x24a150: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x24a150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x24a154: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x24a154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24a158: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x24a158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x24a15c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x24a15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24a160: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x24a160u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x24a164: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x24a164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24a168: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x24a168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x24a16c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x24a16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24a170: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x24a170u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
    // 0x24a174: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x24a174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24a178: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x24a178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24a17c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x24a17cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x24a180: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x24a180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x24a184: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x24a184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24a188: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x24a188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24a18c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x24a18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24a190: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x24a190u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x24a194: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x24a194u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x24a198: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x24a198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x24a19c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x24a19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24a1a0: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x24a1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x24a1a4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x24a1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24a1a8: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x24a1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x24a1ac: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x24a1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24a1b0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x24a1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24a1b4: 0x3e00008  jr          $ra
    ctx->pc = 0x24A1B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A1B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A1BCu;
    // 0x24a1bc: 0x0  nop
    ctx->pc = 0x24a1bcu;
    // NOP
    ctx->pc = 0x24a1c0u;
}
