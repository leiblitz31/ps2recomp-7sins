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

// Function: sub_0031EB88
// Address: 0x31eb88 - 0x31ebe0
void sub_0031EB88_0x31eb88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031EB88_0x31eb88");
#endif

    switch (ctx->pc) {
        case 0x31ebacu: goto label_31ebac;
        case 0x31ebbcu: goto label_31ebbc;
        case 0x31ebccu: goto label_31ebcc;
        default: break;
    }

    ctx->pc = 0x31eb88u;

    // 0x31eb88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31eb88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31eb8c: 0x3c060032  lui         $a2, 0x32
    ctx->pc = 0x31eb8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)50 << 16));
    // 0x31eb90: 0x3c070032  lui         $a3, 0x32
    ctx->pc = 0x31eb90u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)50 << 16));
    // 0x31eb94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31eb94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31eb98: 0x24c6ebe0  addiu       $a2, $a2, -0x1420
    ctx->pc = 0x31eb98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962144));
    // 0x31eb9c: 0x24e7ec20  addiu       $a3, $a3, -0x13E0
    ctx->pc = 0x31eb9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962208));
    // 0x31eba0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x31eba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31eba4: 0xc1063f6  jal         func_418FD8
    ctx->pc = 0x31EBA4u;
    SET_GPR_U32(ctx, 31, 0x31EBACu);
    ctx->pc = 0x31EBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EBA4u;
    // 0x31eba8: 0x24050122  addiu       $a1, $zero, 0x122 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418FD8u, 0x31EBA4u, 0x31EBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EBACu;
label_31ebac:
    // 0x31ebac: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x31EBACu;
    {
        const bool branch_taken_0x31ebac = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x31EBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EBACu;
        // 0x31ebb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ebac) {
            ctx->pc = 0x31EBD0u;
            goto label_31ebd0;
        }
    }
    ctx->pc = 0x31EBB4u;
    // 0x31ebb4: 0xc0c7570  jal         func_31D5C0
    ctx->pc = 0x31EBB4u;
    SET_GPR_U32(ctx, 31, 0x31EBBCu);
    ctx->pc = 0x31D5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D5C0u, 0x31EBB4u, 0x31EBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EBBCu;
label_31ebbc:
    // 0x31ebbc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x31EBBCu;
    {
        const bool branch_taken_0x31ebbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ebbc) {
            ctx->pc = 0x31EBC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31EBBCu;
            // 0x31ebc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31EBD0u;
            goto label_31ebd0;
        }
    }
    ctx->pc = 0x31EBC4u;
    // 0x31ebc4: 0xc0c797c  jal         func_31E5F0
    ctx->pc = 0x31EBC4u;
    SET_GPR_U32(ctx, 31, 0x31EBCCu);
    ctx->pc = 0x31E5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E5F0u, 0x31EBC4u, 0x31EBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EBCCu;
label_31ebcc:
    // 0x31ebcc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x31ebccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_31ebd0:
    // 0x31ebd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31ebd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31ebd4: 0x3e00008  jr          $ra
    ctx->pc = 0x31EBD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31EBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EBD4u;
        // 0x31ebd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31EBD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31EBDCu;
    // 0x31ebdc: 0x0  nop
    ctx->pc = 0x31ebdcu;
    // NOP
    ctx->pc = 0x31ebe0u;
}
