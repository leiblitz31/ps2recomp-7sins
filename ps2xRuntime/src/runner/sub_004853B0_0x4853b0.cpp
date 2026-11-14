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

// Function: sub_004853B0
// Address: 0x4853b0 - 0x485410
void sub_004853B0_0x4853b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004853B0_0x4853b0");
#endif

    ctx->pc = 0x4853b0u;

    // 0x4853b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4853b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4853b4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x4853b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x4853b8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x4853b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x4853bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4853bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4853c0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4853c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4853c4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4853c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4853c8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4853c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x4853cc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x4853ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4853d0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4853d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4853d4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x4853d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x4853d8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x4853d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4853dc: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x4853dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4853e0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x4853e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4853e4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x4853e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4853e8: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x4853e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x4853ec: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x4853ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x4853f0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x4853f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x4853f4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4853f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4853f8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x4853f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4853fc: 0x3e00008  jr          $ra
    ctx->pc = 0x4853FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4853FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x485404u;
    // 0x485404: 0x0  nop
    ctx->pc = 0x485404u;
    // NOP
    // 0x485408: 0x0  nop
    ctx->pc = 0x485408u;
    // NOP
    // 0x48540c: 0x0  nop
    ctx->pc = 0x48540cu;
    // NOP
    ctx->pc = 0x485410u;
}
