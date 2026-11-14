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

// Function: sub_0028E820
// Address: 0x28e820 - 0x28e890
void sub_0028E820_0x28e820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028E820_0x28e820");
#endif

    ctx->pc = 0x28e820u;

    // 0x28e820: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28e820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28e824: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x28e824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x28e828: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x28e828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x28e82c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x28e82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28e830: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x28e830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28e834: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x28e834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28e838: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x28e838u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x28e83c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x28e83cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28e840: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x28e840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28e844: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x28e844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x28e848: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x28e848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x28e84c: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x28e84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28e850: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x28e850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28e854: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x28e854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28e858: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x28e858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e85c: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x28e85cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x28e860: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x28e860u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x28e864: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x28e864u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x28e868: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x28e868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x28e86c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x28e86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28e870: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x28e870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x28e874: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x28e874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28e878: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x28e878u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x28e87c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x28e87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28e880: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x28e880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x28e884: 0x3e00008  jr          $ra
    ctx->pc = 0x28E884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28E88Cu;
    // 0x28e88c: 0x0  nop
    ctx->pc = 0x28e88cu;
    // NOP
    ctx->pc = 0x28e890u;
}
