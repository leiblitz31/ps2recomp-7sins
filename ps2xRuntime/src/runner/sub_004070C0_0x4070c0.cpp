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

// Function: sub_004070C0
// Address: 0x4070c0 - 0x407130
void sub_004070C0_0x4070c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004070C0_0x4070c0");
#endif

    switch (ctx->pc) {
        case 0x4070f0u: goto label_4070f0;
        case 0x407100u: goto label_407100;
        case 0x407108u: goto label_407108;
        default: break;
    }

    ctx->pc = 0x4070c0u;

    // 0x4070c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4070c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4070c4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4070c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4070c8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4070c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4070cc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x4070ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4070d0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4070d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x4070d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4070d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4070d8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4070d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4070dc: 0x11303c  dsll32      $a2, $s1, 0
    ctx->pc = 0x4070dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) << (32 + 0));
    // 0x4070e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4070e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4070e4: 0x2785ac40  addiu       $a1, $gp, -0x53C0
    ctx->pc = 0x4070e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945856));
    // 0x4070e8: 0xc101b98  jal         func_406E60
    ctx->pc = 0x4070E8u;
    SET_GPR_U32(ctx, 31, 0x4070F0u);
    ctx->pc = 0x4070ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4070E8u;
    // 0x4070ec: 0x6303e  dsrl32      $a2, $a2, 0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x406E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x406E60u, 0x4070E8u, 0x4070F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4070F0u;
label_4070f0:
    // 0x4070f0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4070f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4070f4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4070f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4070f8: 0xc101bc2  jal         func_406F08
    ctx->pc = 0x4070F8u;
    SET_GPR_U32(ctx, 31, 0x407100u);
    ctx->pc = 0x4070FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4070F8u;
    // 0x4070fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x406F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x406F08u, 0x4070F8u, 0x407100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407100u;
label_407100:
    // 0x407100: 0xc101bda  jal         func_406F68
    ctx->pc = 0x407100u;
    SET_GPR_U32(ctx, 31, 0x407108u);
    ctx->pc = 0x407104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407100u;
    // 0x407104: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x406F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x406F68u, 0x407100u, 0x407108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407108u;
label_407108:
    // 0x407108: 0xde0200f8  ld          $v0, 0xF8($s0)
    ctx->pc = 0x407108u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 248)));
    // 0x40710c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x40710cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x407110: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x407110u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x407114: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x407114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x407118: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x407118u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40711c: 0xfe0200f8  sd          $v0, 0xF8($s0)
    ctx->pc = 0x40711cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 248), GPR_U64(ctx, 2));
    // 0x407120: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x407120u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x407124: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x407124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x407128: 0x3e00008  jr          $ra
    ctx->pc = 0x407128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40712Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407128u;
        // 0x40712c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x407128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x407130u;
}
