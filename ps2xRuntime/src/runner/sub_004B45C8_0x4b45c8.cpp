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

// Function: sub_004B45C8
// Address: 0x4b45c8 - 0x4b4608
void sub_004B45C8_0x4b45c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B45C8_0x4b45c8");
#endif

    ctx->pc = 0x4b45c8u;

    // 0x4b45c8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4b45c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b45cc: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4b45ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4b45d0: 0x3463fff7  ori         $v1, $v1, 0xFFF7
    ctx->pc = 0x4b45d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65527);
    // 0x4b45d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4b45d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x4b45d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4b45d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4b45dc: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x4b45dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x4b45e0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4b45e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b45e4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4b45e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4b45e8: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x4b45e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x4b45ec: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x4b45ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x4b45f0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4b45f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4b45f4: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x4b45f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x4b45f8: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x4b45f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x4b45fc: 0x3e00008  jr          $ra
    ctx->pc = 0x4B45FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B4600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B45FCu;
        // 0x4b4600: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B45FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B4604u;
    // 0x4b4604: 0x0  nop
    ctx->pc = 0x4b4604u;
    // NOP
    ctx->pc = 0x4b4608u;
}
