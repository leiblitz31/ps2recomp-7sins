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

// Function: sub_004753B0
// Address: 0x4753b0 - 0x475440
void sub_004753B0_0x4753b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004753B0_0x4753b0");
#endif

    switch (ctx->pc) {
        case 0x4753e4u: goto label_4753e4;
        case 0x47542cu: goto label_47542c;
        default: break;
    }

    ctx->pc = 0x4753b0u;

    // 0x4753b0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4753b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x4753b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4753b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4753b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x4753b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x4753bc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x4753bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x4753c0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x4753c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x4753c4: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x4753c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
    // 0x4753c8: 0xe7ac0050  swc1        $f12, 0x50($sp)
    ctx->pc = 0x4753c8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x4753cc: 0xe7ad0060  swc1        $f13, 0x60($sp)
    ctx->pc = 0x4753ccu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x4753d0: 0xe7ae0070  swc1        $f14, 0x70($sp)
    ctx->pc = 0x4753d0u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x4753d4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x4753d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4753d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4753d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4753dc: 0xc11ca2c  jal         func_4728B0
    ctx->pc = 0x4753DCu;
    SET_GPR_U32(ctx, 31, 0x4753E4u);
    ctx->pc = 0x4728B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4728B0u, 0x4753DCu, 0x4753E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4753E4u;
label_4753e4:
    // 0x4753e4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x4753e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x4753e8: 0x24636d90  addiu       $v1, $v1, 0x6D90
    ctx->pc = 0x4753e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28048));
    // 0x4753ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4753ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4753f0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4753f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x4753f4: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x4753f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4753f8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4753f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4753fc: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x4753fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x475400: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x475400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x475404: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x475404u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
    // 0x475408: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x475408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47540c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x47540cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x475410: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x475410u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x475414: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x475414u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x475418: 0xc7ac0050  lwc1        $f12, 0x50($sp)
    ctx->pc = 0x475418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x47541c: 0xc7ad0060  lwc1        $f13, 0x60($sp)
    ctx->pc = 0x47541cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x475420: 0xc7ae0070  lwc1        $f14, 0x70($sp)
    ctx->pc = 0x475420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x475424: 0xc11d510  jal         func_475440
    ctx->pc = 0x475424u;
    SET_GPR_U32(ctx, 31, 0x47542Cu);
    ctx->pc = 0x475440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x475440u, 0x475424u, 0x47542Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47542Cu;
label_47542c:
    // 0x47542c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x47542cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x475430: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x475430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x475434: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x475434u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x475438: 0x3e00008  jr          $ra
    ctx->pc = 0x475438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x475438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x475440u;
}
