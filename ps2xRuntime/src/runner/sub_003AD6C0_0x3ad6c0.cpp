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

// Function: sub_003AD6C0
// Address: 0x3ad6c0 - 0x3ad738
void sub_003AD6C0_0x3ad6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AD6C0_0x3ad6c0");
#endif

    ctx->pc = 0x3ad6c0u;

    // 0x3ad6c0: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x3ad6c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
    // 0x3ad6c4: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x3ad6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x3ad6c8: 0x24c6ce80  addiu       $a2, $a2, -0x3180
    ctx->pc = 0x3ad6c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954624));
    // 0x3ad6cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3ad6ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ad6d0: 0x8cc30610  lw          $v1, 0x610($a2)
    ctx->pc = 0x3ad6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61D490u));
    // 0x3ad6d4: 0x34a50003  ori         $a1, $a1, 0x3
    ctx->pc = 0x3ad6d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3);
    // 0x3ad6d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3ad6d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3ad6dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3ad6dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ad6e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3ad6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3ad6e4: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x3ad6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3ad6e8: 0x8c620590  lw          $v0, 0x590($v1)
    ctx->pc = 0x3ad6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1424)));
    // 0x3ad6ec: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x3ad6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x3ad6f0: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x3ad6f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x3ad6f4: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x3ad6f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x3ad6f8: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x3ad6f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x3ad6fc: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x3ad6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
    // 0x3ad700: 0xe4410028  swc1        $f1, 0x28($v0)
    ctx->pc = 0x3ad700u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x3ad704: 0xe4410014  swc1        $f1, 0x14($v0)
    ctx->pc = 0x3ad704u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x3ad708: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x3ad708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x3ad70c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x3ad70cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x3ad710: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x3ad710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x3ad714: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x3ad714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x3ad718: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x3ad718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x3ad71c: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x3ad71cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x3ad720: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x3ad720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x3ad724: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x3ad724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x3ad728: 0xacc006f0  sw          $zero, 0x6F0($a2)
    ctx->pc = 0x3ad728u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1776), GPR_U32(ctx, 0));
    // 0x3ad72c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ad72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ad730: 0x3e00008  jr          $ra
    ctx->pc = 0x3AD730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AD734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD730u;
        // 0x3ad734: 0xacc00704  sw          $zero, 0x704($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 1796), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AD738u;
}
