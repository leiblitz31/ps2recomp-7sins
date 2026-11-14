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

// Function: sub_0038A528
// Address: 0x38a528 - 0x38a588
void sub_0038A528_0x38a528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038A528_0x38a528");
#endif

    switch (ctx->pc) {
        case 0x38a540u: goto label_38a540;
        case 0x38a568u: goto label_38a568;
        default: break;
    }

    ctx->pc = 0x38a528u;

    // 0x38a528: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x38a528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a52c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38a52cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38a530: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x38a530u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x38a534: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38a534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38a538: 0xc104c74  jal         func_4131D0
    ctx->pc = 0x38A538u;
    SET_GPR_U32(ctx, 31, 0x38A540u);
    ctx->pc = 0x38A53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A538u;
    // 0x38a53c: 0x2484ada0  addiu       $a0, $a0, -0x5260 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4131D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4131D0u, 0x38A538u, 0x38A540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A540u;
label_38a540:
    // 0x38a540: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38a540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38a544: 0x3e00008  jr          $ra
    ctx->pc = 0x38A544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A544u;
        // 0x38a548: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A54Cu;
    // 0x38a54c: 0x0  nop
    ctx->pc = 0x38a54cu;
    // NOP
    // 0x38a550: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x38a550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a554: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38a554u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38a558: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x38a558u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x38a55c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38a55cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38a560: 0xc104c74  jal         func_4131D0
    ctx->pc = 0x38A560u;
    SET_GPR_U32(ctx, 31, 0x38A568u);
    ctx->pc = 0x38A564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A560u;
    // 0x38a564: 0x2484adb8  addiu       $a0, $a0, -0x5248 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4131D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4131D0u, 0x38A560u, 0x38A568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A568u;
label_38a568:
    // 0x38a568: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38a568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38a56c: 0x3e00008  jr          $ra
    ctx->pc = 0x38A56Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A56Cu;
        // 0x38a570: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A56Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A574u;
    // 0x38a574: 0x0  nop
    ctx->pc = 0x38a574u;
    // NOP
    // 0x38a578: 0x3e00008  jr          $ra
    ctx->pc = 0x38A578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A578u;
        // 0x38a57c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A580u;
    // 0x38a580: 0x3e00008  jr          $ra
    ctx->pc = 0x38A580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A580u;
        // 0x38a584: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A588u;
}
