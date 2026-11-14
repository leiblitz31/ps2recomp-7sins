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

// Function: sub_00197800
// Address: 0x197800 - 0x197890
void sub_00197800_0x197800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197800_0x197800");
#endif

    ctx->pc = 0x197800u;

    // 0x197800: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x197800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x197804: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x197804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x197808: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x197808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x19780c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x19780cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x197810: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x197810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x197814: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x197814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x197818: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x197818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19781c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x19781cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x197820: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x197820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x197824: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x197824u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x197828: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x197828u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x19782c: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x19782cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x197830: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x197830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x197834: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x197834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x197838: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x197838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19783c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x19783cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x197840: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x197840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x197844: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x197844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x197848: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x197848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19784c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x19784cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x197850: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x197850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x197854: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x197854u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x197858: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x197858u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x19785c: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x19785cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x197860: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x197860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x197864: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x197864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x197868: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x197868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x19786c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19786cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x197870: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x197870u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
    // 0x197874: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x197874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x197878: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x197878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19787c: 0x3e00008  jr          $ra
    ctx->pc = 0x19787Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19787Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x197884u;
    // 0x197884: 0x0  nop
    ctx->pc = 0x197884u;
    // NOP
    // 0x197888: 0x0  nop
    ctx->pc = 0x197888u;
    // NOP
    // 0x19788c: 0x0  nop
    ctx->pc = 0x19788cu;
    // NOP
    ctx->pc = 0x197890u;
}
