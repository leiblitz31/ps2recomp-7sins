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

// Function: sub_0019E420
// Address: 0x19e420 - 0x19e4b0
void sub_0019E420_0x19e420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019E420_0x19e420");
#endif

    ctx->pc = 0x19e420u;

    // 0x19e420: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19e420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19e424: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x19e424u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x19e428: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x19e428u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x19e42c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x19e42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e430: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19e430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e434: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x19e434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x19e438: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x19e438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19e43c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x19e43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19e440: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x19e440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19e444: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x19e444u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x19e448: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x19e448u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x19e44c: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x19e44cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x19e450: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x19e450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x19e454: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x19e454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e458: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19e458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e45c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x19e45cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x19e460: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x19e460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x19e464: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x19e464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x19e468: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x19e468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19e46c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x19e46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19e470: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x19e470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19e474: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x19e474u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x19e478: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x19e478u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x19e47c: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x19e47cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x19e480: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x19e480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x19e484: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x19e484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e488: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x19e488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x19e48c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19e48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e490: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x19e490u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
    // 0x19e494: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19e494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e498: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x19e498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19e49c: 0x3e00008  jr          $ra
    ctx->pc = 0x19E49Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E49Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E4A4u;
    // 0x19e4a4: 0x0  nop
    ctx->pc = 0x19e4a4u;
    // NOP
    // 0x19e4a8: 0x0  nop
    ctx->pc = 0x19e4a8u;
    // NOP
    // 0x19e4ac: 0x0  nop
    ctx->pc = 0x19e4acu;
    // NOP
    ctx->pc = 0x19e4b0u;
}
