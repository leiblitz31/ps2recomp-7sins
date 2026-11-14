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

// Function: sub_0038A4A0
// Address: 0x38a4a0 - 0x38a528
void sub_0038A4A0_0x38a4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038A4A0_0x38a4a0");
#endif

    switch (ctx->pc) {
        case 0x38a4bcu: goto label_38a4bc;
        case 0x38a4f4u: goto label_38a4f4;
        case 0x38a51cu: goto label_38a51c;
        default: break;
    }

    ctx->pc = 0x38a4a0u;

    // 0x38a4a0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x38a4a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a4a4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38a4a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38a4a8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x38a4a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a4ac: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x38a4acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x38a4b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38a4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38a4b4: 0xc104a64  jal         func_412990
    ctx->pc = 0x38A4B4u;
    SET_GPR_U32(ctx, 31, 0x38A4BCu);
    ctx->pc = 0x38A4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A4B4u;
    // 0x38a4b8: 0x2444ada0  addiu       $a0, $v0, -0x5260 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412990u, 0x38A4B4u, 0x38A4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A4BCu;
label_38a4bc:
    // 0x38a4bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38a4bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38a4c0: 0x3e00008  jr          $ra
    ctx->pc = 0x38A4C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A4C0u;
        // 0x38a4c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A4C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A4C8u;
    // 0x38a4c8: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x38a4c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a4cc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38a4ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38a4d0: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x38a4d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a4d4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x38a4d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a4d8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x38a4d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a4dc: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x38a4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x38a4e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38a4e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38a4e4: 0x2444adb8  addiu       $a0, $v0, -0x5248
    ctx->pc = 0x38a4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946232));
    // 0x38a4e8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x38a4e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a4ec: 0xc104a46  jal         func_412918
    ctx->pc = 0x38A4ECu;
    SET_GPR_U32(ctx, 31, 0x38A4F4u);
    ctx->pc = 0x38A4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A4ECu;
    // 0x38a4f0: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412918u, 0x38A4ECu, 0x38A4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A4F4u;
label_38a4f4:
    // 0x38a4f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38a4f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38a4f8: 0x3e00008  jr          $ra
    ctx->pc = 0x38A4F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A4F8u;
        // 0x38a4fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A4F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A500u;
    // 0x38a500: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x38a500u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a504: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38a504u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38a508: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x38a508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a50c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x38a50cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x38a510: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38a510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38a514: 0xc104a56  jal         func_412958
    ctx->pc = 0x38A514u;
    SET_GPR_U32(ctx, 31, 0x38A51Cu);
    ctx->pc = 0x38A518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A514u;
    // 0x38a518: 0x2444adb8  addiu       $a0, $v0, -0x5248 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412958u, 0x38A514u, 0x38A51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A51Cu;
label_38a51c:
    // 0x38a51c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38a51cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38a520: 0x3e00008  jr          $ra
    ctx->pc = 0x38A520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A520u;
        // 0x38a524: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A528u;
}
