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

// Function: sub_004B04A8
// Address: 0x4b04a8 - 0x4b0518
void sub_004B04A8_0x4b04a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B04A8_0x4b04a8");
#endif

    switch (ctx->pc) {
        case 0x4b04b8u: goto label_4b04b8;
        case 0x4b04c8u: goto label_4b04c8;
        case 0x4b04d8u: goto label_4b04d8;
        case 0x4b04e8u: goto label_4b04e8;
        case 0x4b04f8u: goto label_4b04f8;
        case 0x4b0500u: goto label_4b0500;
        case 0x4b0508u: goto label_4b0508;
        default: break;
    }

    ctx->pc = 0x4b04a8u;

    // 0x4b04a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b04a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b04ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b04acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b04b0: 0xc12c618  jal         func_4B1860
    ctx->pc = 0x4B04B0u;
    SET_GPR_U32(ctx, 31, 0x4B04B8u);
    ctx->pc = 0x4B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B1860u, 0x4B04B0u, 0x4B04B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B04B8u;
label_4b04b8:
    // 0x4b04b8: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x4B04B8u;
    {
        const bool branch_taken_0x4b04b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B04BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B04B8u;
        // 0x4b04bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b04b8) {
            ctx->pc = 0x4B050Cu;
            goto label_4b050c;
        }
    }
    ctx->pc = 0x4B04C0u;
    // 0x4b04c0: 0xc12cc78  jal         func_4B31E0
    ctx->pc = 0x4B04C0u;
    SET_GPR_U32(ctx, 31, 0x4B04C8u);
    ctx->pc = 0x4B31E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B31E0u, 0x4B04C0u, 0x4B04C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B04C8u;
label_4b04c8:
    // 0x4b04c8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4B04C8u;
    {
        const bool branch_taken_0x4b04c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b04c8) {
            ctx->pc = 0x4B0500u;
            goto label_4b0500;
        }
    }
    ctx->pc = 0x4B04D0u;
    // 0x4b04d0: 0xc12cfa8  jal         func_4B3EA0
    ctx->pc = 0x4B04D0u;
    SET_GPR_U32(ctx, 31, 0x4B04D8u);
    ctx->pc = 0x4B3EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3EA0u, 0x4B04D0u, 0x4B04D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B04D8u;
label_4b04d8:
    // 0x4b04d8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4B04D8u;
    {
        const bool branch_taken_0x4b04d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b04d8) {
            ctx->pc = 0x4B04F8u;
            goto label_4b04f8;
        }
    }
    ctx->pc = 0x4B04E0u;
    // 0x4b04e0: 0xc12be6a  jal         func_4AF9A8
    ctx->pc = 0x4B04E0u;
    SET_GPR_U32(ctx, 31, 0x4B04E8u);
    ctx->pc = 0x4AF9A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AF9A8u, 0x4B04E0u, 0x4B04E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B04E8u;
label_4b04e8:
    // 0x4b04e8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4B04E8u;
    {
        const bool branch_taken_0x4b04e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B04ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B04E8u;
        // 0x4b04ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b04e8) {
            ctx->pc = 0x4B050Cu;
            goto label_4b050c;
        }
    }
    ctx->pc = 0x4B04F0u;
    // 0x4b04f0: 0xc12cfd6  jal         func_4B3F58
    ctx->pc = 0x4B04F0u;
    SET_GPR_U32(ctx, 31, 0x4B04F8u);
    ctx->pc = 0x4B3F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3F58u, 0x4B04F0u, 0x4B04F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B04F8u;
label_4b04f8:
    // 0x4b04f8: 0xc12cc68  jal         func_4B31A0
    ctx->pc = 0x4B04F8u;
    SET_GPR_U32(ctx, 31, 0x4B0500u);
    ctx->pc = 0x4B31A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B31A0u, 0x4B04F8u, 0x4B0500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0500u;
label_4b0500:
    // 0x4b0500: 0xc12c608  jal         func_4B1820
    ctx->pc = 0x4B0500u;
    SET_GPR_U32(ctx, 31, 0x4B0508u);
    ctx->pc = 0x4B1820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B1820u, 0x4B0500u, 0x4B0508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0508u;
label_4b0508:
    // 0x4b0508: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4b0508u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b050c:
    // 0x4b050c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b050cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b0510: 0x3e00008  jr          $ra
    ctx->pc = 0x4B0510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B0514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0510u;
        // 0x4b0514: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B0510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B0518u;
}
