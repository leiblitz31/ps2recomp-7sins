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

// Function: sub_004B30C0
// Address: 0x4b30c0 - 0x4b3130
void sub_004B30C0_0x4b30c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B30C0_0x4b30c0");
#endif

    switch (ctx->pc) {
        case 0x4b30ecu: goto label_4b30ec;
        case 0x4b3124u: goto label_4b3124;
        default: break;
    }

    ctx->pc = 0x4b30c0u;

    // 0x4b30c0: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x4b30c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b30c4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b30c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b30c8: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x4b30c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b30cc: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x4b30ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b30d0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4b30d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b30d4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4b30d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4b30d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b30d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b30dc: 0x2444ed60  addiu       $a0, $v0, -0x12A0
    ctx->pc = 0x4b30dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962528));
    // 0x4b30e0: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x4b30e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b30e4: 0xc126b7e  jal         func_49ADF8
    ctx->pc = 0x4B30E4u;
    SET_GPR_U32(ctx, 31, 0x4B30ECu);
    ctx->pc = 0x4B30E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B30E4u;
    // 0x4b30e8: 0x140402d  daddu       $t0, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49ADF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49ADF8u, 0x4B30E4u, 0x4B30ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B30ECu;
label_4b30ec:
    // 0x4b30ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b30ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b30f0: 0x3e00008  jr          $ra
    ctx->pc = 0x4B30F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B30F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B30F0u;
        // 0x4b30f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B30F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B30F8u;
    // 0x4b30f8: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x4b30f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b30fc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b30fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b3100: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x4b3100u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3104: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x4b3104u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3108: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4b3108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b310c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4b310cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4b3110: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b3110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b3114: 0x2444ed60  addiu       $a0, $v0, -0x12A0
    ctx->pc = 0x4b3114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962528));
    // 0x4b3118: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x4b3118u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b311c: 0xc12609a  jal         func_498268
    ctx->pc = 0x4B311Cu;
    SET_GPR_U32(ctx, 31, 0x4B3124u);
    ctx->pc = 0x4B3120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B311Cu;
    // 0x4b3120: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x498268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498268u, 0x4B311Cu, 0x4B3124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3124u;
label_4b3124:
    // 0x4b3124: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b3124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b3128: 0x3e00008  jr          $ra
    ctx->pc = 0x4B3128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B312Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3128u;
        // 0x4b312c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B3128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B3130u;
}
