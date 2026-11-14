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

// Function: sub_002B5850
// Address: 0x2b5850 - 0x2b58e0
void sub_002B5850_0x2b5850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B5850_0x2b5850");
#endif

    switch (ctx->pc) {
        case 0x2b58a0u: goto label_2b58a0;
        default: break;
    }

    ctx->pc = 0x2b5850u;

    // 0x2b5850: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b5850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b5854: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2b5854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2b5858: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x2b5858u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2b585c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2b585cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5860: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2b5860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b5864: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x2b5864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x2b5868: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b5868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b586c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B586Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B586Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5874u;
    // 0x2b5874: 0x0  nop
    ctx->pc = 0x2b5874u;
    // NOP
    // 0x2b5878: 0x0  nop
    ctx->pc = 0x2b5878u;
    // NOP
    // 0x2b587c: 0x0  nop
    ctx->pc = 0x2b587cu;
    // NOP
    // 0x2b5880: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b5880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b5884: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b5884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b5888: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2b5888u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2b588c: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x2b588cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
    // 0x2b5890: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2b5890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b5894: 0x93a50020  lbu         $a1, 0x20($sp)
    ctx->pc = 0x2b5894u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b5898: 0xc0ad96c  jal         func_2B65B0
    ctx->pc = 0x2B5898u;
    SET_GPR_U32(ctx, 31, 0x2B58A0u);
    ctx->pc = 0x2B65B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B65B0u, 0x2B5898u, 0x2B58A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B58A0u;
label_2b58a0:
    // 0x2b58a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b58a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b58a4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2b58a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b58a8: 0xe460005c  swc1        $f0, 0x5C($v1)
    ctx->pc = 0x2b58a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 92), bits); }
    // 0x2b58ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b58acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b58b0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2b58b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b58b4: 0xe4600060  swc1        $f0, 0x60($v1)
    ctx->pc = 0x2b58b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 96), bits); }
    // 0x2b58b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b58b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b58bc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2b58bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b58c0: 0xe4600064  swc1        $f0, 0x64($v1)
    ctx->pc = 0x2b58c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 100), bits); }
    // 0x2b58c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b58c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b58c8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2b58c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b58cc: 0xe4600068  swc1        $f0, 0x68($v1)
    ctx->pc = 0x2b58ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 104), bits); }
    // 0x2b58d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b58d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b58d4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2b58d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2b58d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B58D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B58D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B58E0u;
}
