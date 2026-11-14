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

// Function: sub_004165D8
// Address: 0x4165d8 - 0x416638
void sub_004165D8_0x4165d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004165D8_0x4165d8");
#endif

    switch (ctx->pc) {
        case 0x416604u: goto label_416604;
        case 0x41662cu: goto label_41662c;
        default: break;
    }

    ctx->pc = 0x4165d8u;

    // 0x4165d8: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x4165d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4165dc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4165dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4165e0: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x4165e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4165e4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x4165e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4165e8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4165e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4165ec: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x4165ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x4165f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4165f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4165f4: 0x2444ca10  addiu       $a0, $v0, -0x35F0
    ctx->pc = 0x4165f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953488));
    // 0x4165f8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x4165f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4165fc: 0xc104a46  jal         func_412918
    ctx->pc = 0x4165FCu;
    SET_GPR_U32(ctx, 31, 0x416604u);
    ctx->pc = 0x416600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4165FCu;
    // 0x416600: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412918u, 0x4165FCu, 0x416604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x416604u;
label_416604:
    // 0x416604: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x416604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x416608: 0x3e00008  jr          $ra
    ctx->pc = 0x416608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41660Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416608u;
        // 0x41660c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x416608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x416610u;
    // 0x416610: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x416610u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x416614: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x416614u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x416618: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x416618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41661c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x41661cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x416620: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x416620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x416624: 0xc104a56  jal         func_412958
    ctx->pc = 0x416624u;
    SET_GPR_U32(ctx, 31, 0x41662Cu);
    ctx->pc = 0x416628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x416624u;
    // 0x416628: 0x2444ca10  addiu       $a0, $v0, -0x35F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412958u, 0x416624u, 0x41662Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41662Cu;
label_41662c:
    // 0x41662c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41662cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x416630: 0x3e00008  jr          $ra
    ctx->pc = 0x416630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x416634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416630u;
        // 0x416634: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x416630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x416638u;
}
