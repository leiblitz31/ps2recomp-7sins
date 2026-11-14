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

// Function: sub_002F92E0
// Address: 0x2f92e0 - 0x2f9358
void sub_002F92E0_0x2f92e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F92E0_0x2f92e0");
#endif

    ctx->pc = 0x2f92e0u;

    // 0x2f92e0: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x2f92e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2f92e4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2f92e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2f92e8: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x2f92e8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x2f92ec: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x2f92ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2f92f0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2f92f0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2f92f4: 0x620019  multu       $v1, $v0
    ctx->pc = 0x2f92f4u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 3) * (uint64_t)GPR_U32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2f92f8: 0x3012  mflo        $a2
    ctx->pc = 0x2f92f8u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x2f92fc: 0x4010  mfhi        $t0
    ctx->pc = 0x2f92fcu;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x2f9300: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x2f9300u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2f9304: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x2f9304u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x2f9308: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x2f9308u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2f930c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2f930cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f9310: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x2f9310u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2f9314: 0x70822018  mult1       $a0, $a0, $v0
    ctx->pc = 0x2f9314u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2f9318: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x2f9318u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x2f931c: 0x1254824  and         $t1, $t1, $a1
    ctx->pc = 0x2f931cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 5));
    // 0x2f9320: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x2f9320u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x2f9324: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x2f9324u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x2f9328: 0x1264825  or          $t1, $t1, $a2
    ctx->pc = 0x2f9328u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 6));
    // 0x2f932c: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x2f932cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x2f9330: 0x1274824  and         $t1, $t1, $a3
    ctx->pc = 0x2f9330u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
    // 0x2f9334: 0x1284825  or          $t1, $t1, $t0
    ctx->pc = 0x2f9334u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x2f9338: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2f9338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2f933c: 0x9103f  dsra32      $v0, $t1, 0
    ctx->pc = 0x2f933cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x2f9340: 0x1273824  and         $a3, $t1, $a3
    ctx->pc = 0x2f9340u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
    // 0x2f9344: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f9344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f9348: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f9348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f934c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F934Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F9350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F934Cu;
        // 0x2f9350: 0xe21025  or          $v0, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F934Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F9354u;
    // 0x2f9354: 0x0  nop
    ctx->pc = 0x2f9354u;
    // NOP
    ctx->pc = 0x2f9358u;
}
