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

// Function: sub_00150560
// Address: 0x150560 - 0x1505c0
void sub_00150560_0x150560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150560_0x150560");
#endif

    ctx->pc = 0x150560u;

    // 0x150560: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x150560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x150564: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x150564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x150568: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x150568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x15056c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x15056cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x150570: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x150570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x150574: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x150574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x150578: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x150578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15057c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x15057cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x150580: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x150580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150584: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x150584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x150588: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x150588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x15058c: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x15058cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x150590: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x150590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x150594: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x150594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150598: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x150598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15059c: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x15059cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1505a0: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x1505a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1505a4: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x1505a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1505a8: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1505a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1505ac: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1505acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1505b0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1505b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1505b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1505B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1505B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1505BCu;
    // 0x1505bc: 0x0  nop
    ctx->pc = 0x1505bcu;
    // NOP
    ctx->pc = 0x1505c0u;
}
