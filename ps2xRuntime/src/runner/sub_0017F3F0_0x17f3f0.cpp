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

// Function: sub_0017F3F0
// Address: 0x17f3f0 - 0x17f480
void sub_0017F3F0_0x17f3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F3F0_0x17f3f0");
#endif

    switch (ctx->pc) {
        case 0x17f448u: goto label_17f448;
        case 0x17f460u: goto label_17f460;
        default: break;
    }

    ctx->pc = 0x17f3f0u;

    // 0x17f3f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17f3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17f3f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17f3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17f3f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x17f3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x17f3fc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x17f3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x17f400: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x17f400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17f404: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x17f404u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17f408: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17f408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f40c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x17f40cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x17f410: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x17f410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17f414: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x17f414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17f418: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17f418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f41c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x17f41cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x17f420: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x17f420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17f424: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x17f424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17f428: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17f428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f42c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x17f42cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x17f430: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x17f430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f434: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x17f434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17f438: 0x2464000c  addiu       $a0, $v1, 0xC
    ctx->pc = 0x17f438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x17f43c: 0x2445000c  addiu       $a1, $v0, 0xC
    ctx->pc = 0x17f43cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x17f440: 0xc05fd30  jal         func_17F4C0
    ctx->pc = 0x17F440u;
    SET_GPR_U32(ctx, 31, 0x17F448u);
    ctx->pc = 0x17F4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F4C0u, 0x17F440u, 0x17F448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F448u;
label_17f448:
    // 0x17f448: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x17f448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f44c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x17f44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17f450: 0x24640084  addiu       $a0, $v1, 0x84
    ctx->pc = 0x17f450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 132));
    // 0x17f454: 0x24450084  addiu       $a1, $v0, 0x84
    ctx->pc = 0x17f454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
    // 0x17f458: 0xc05fd20  jal         func_17F480
    ctx->pc = 0x17F458u;
    SET_GPR_U32(ctx, 31, 0x17F460u);
    ctx->pc = 0x17F480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F480u, 0x17F458u, 0x17F460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F460u;
label_17f460:
    // 0x17f460: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17f460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f464: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17f464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f468: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x17f468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17f46c: 0x3e00008  jr          $ra
    ctx->pc = 0x17F46Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F46Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F474u;
    // 0x17f474: 0x0  nop
    ctx->pc = 0x17f474u;
    // NOP
    // 0x17f478: 0x0  nop
    ctx->pc = 0x17f478u;
    // NOP
    // 0x17f47c: 0x0  nop
    ctx->pc = 0x17f47cu;
    // NOP
    ctx->pc = 0x17f480u;
}
