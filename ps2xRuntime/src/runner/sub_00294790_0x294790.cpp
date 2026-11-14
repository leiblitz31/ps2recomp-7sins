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

// Function: sub_00294790
// Address: 0x294790 - 0x294850
void sub_00294790_0x294790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294790_0x294790");
#endif

    switch (ctx->pc) {
        case 0x2947b0u: goto label_2947b0;
        case 0x294818u: goto label_294818;
        default: break;
    }

    ctx->pc = 0x294790u;

    // 0x294790: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x294790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x294794: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x294794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x294798: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x294798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x29479c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x29479cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2947a0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2947a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2947a4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2947a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2947a8: 0xc091174  jal         func_2445D0
    ctx->pc = 0x2947A8u;
    SET_GPR_U32(ctx, 31, 0x2947B0u);
    ctx->pc = 0x2445D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2445D0u, 0x2947A8u, 0x2947B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2947B0u;
label_2947b0:
    // 0x2947b0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2947b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2947b4: 0x24636050  addiu       $v1, $v1, 0x6050
    ctx->pc = 0x2947b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24656));
    // 0x2947b8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2947b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2947bc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2947bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2947c0: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2947c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2947c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2947c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2947c8: 0xac430034  sw          $v1, 0x34($v0)
    ctx->pc = 0x2947c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 3));
    // 0x2947cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2947ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2947d0: 0xa0400038  sb          $zero, 0x38($v0)
    ctx->pc = 0x2947d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 56), (uint8_t)GPR_U32(ctx, 0));
    // 0x2947d4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2947d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2947d8: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x2947d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    // 0x2947dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2947dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2947e0: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x2947e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
    // 0x2947e4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2947e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2947e8: 0xac400048  sw          $zero, 0x48($v0)
    ctx->pc = 0x2947e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
    // 0x2947ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2947ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2947f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2947f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2947f4: 0xe440004c  swc1        $f0, 0x4C($v0)
    ctx->pc = 0x2947f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 76), bits); }
    // 0x2947f8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2947f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2947fc: 0xa04000b0  sb          $zero, 0xB0($v0)
    ctx->pc = 0x2947fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 176), (uint8_t)GPR_U32(ctx, 0));
    // 0x294800: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x294800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294804: 0xa04000b1  sb          $zero, 0xB1($v0)
    ctx->pc = 0x294804u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 177), (uint8_t)GPR_U32(ctx, 0));
    // 0x294808: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x294808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29480c: 0x244400b4  addiu       $a0, $v0, 0xB4
    ctx->pc = 0x29480cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x294810: 0xc0a5278  jal         func_2949E0
    ctx->pc = 0x294810u;
    SET_GPR_U32(ctx, 31, 0x294818u);
    ctx->pc = 0x2949E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2949E0u, 0x294810u, 0x294818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294818u;
label_294818:
    // 0x294818: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x294818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29481c: 0xac4000c0  sw          $zero, 0xC0($v0)
    ctx->pc = 0x29481cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 192), GPR_U32(ctx, 0));
    // 0x294820: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x294820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294824: 0xa0400050  sb          $zero, 0x50($v0)
    ctx->pc = 0x294824u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 80), (uint8_t)GPR_U32(ctx, 0));
    // 0x294828: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x294828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29482c: 0xa0400070  sb          $zero, 0x70($v0)
    ctx->pc = 0x29482cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 112), (uint8_t)GPR_U32(ctx, 0));
    // 0x294830: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x294830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294834: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x294834u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
    // 0x294838: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x294838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29483c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29483cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x294840: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x294840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x294844: 0x3e00008  jr          $ra
    ctx->pc = 0x294844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29484Cu;
    // 0x29484c: 0x0  nop
    ctx->pc = 0x29484cu;
    // NOP
    ctx->pc = 0x294850u;
}
