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

// Function: sub_003DCFC8
// Address: 0x3dcfc8 - 0x3dd030
void sub_003DCFC8_0x3dcfc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DCFC8_0x3dcfc8");
#endif

    switch (ctx->pc) {
        case 0x3dcfe0u: goto label_3dcfe0;
        case 0x3dd024u: goto label_3dd024;
        default: break;
    }

    ctx->pc = 0x3dcfc8u;

    // 0x3dcfc8: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x3dcfc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dcfcc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3dcfccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3dcfd0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3dcfd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dcfd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3dcfd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3dcfd8: 0xc0f717c  jal         func_3DC5F0
    ctx->pc = 0x3DCFD8u;
    SET_GPR_U32(ctx, 31, 0x3DCFE0u);
    ctx->pc = 0x3DCFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DCFD8u;
    // 0x3dcfdc: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC5F0u, 0x3DCFD8u, 0x3DCFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DCFE0u;
label_3dcfe0:
    // 0x3dcfe0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3dcfe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dcfe4: 0x3e00008  jr          $ra
    ctx->pc = 0x3DCFE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DCFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCFE4u;
        // 0x3dcfe8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DCFE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DCFECu;
    // 0x3dcfec: 0x0  nop
    ctx->pc = 0x3dcfecu;
    // NOP
    // 0x3dcff0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3dcff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3dcff4: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3DCFF4u;
    {
        const bool branch_taken_0x3dcff4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DCFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCFF4u;
        // 0x3dcff8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dcff4) {
            ctx->pc = 0x3DD014u;
            goto label_3dd014;
        }
    }
    ctx->pc = 0x3DCFFCu;
    // 0x3dcffc: 0x8c840024  lw          $a0, 0x24($a0)
    ctx->pc = 0x3dcffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x3dd000: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3DD000u;
    {
        const bool branch_taken_0x3dd000 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD000u;
        // 0x3dd004: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd000) {
            ctx->pc = 0x3DD024u;
            goto label_3dd024;
        }
    }
    ctx->pc = 0x3DD008u;
    // 0x3dd008: 0x8c840020  lw          $a0, 0x20($a0)
    ctx->pc = 0x3dd008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x3dd00c: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DD00Cu;
    {
        const bool branch_taken_0x3dd00c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3dd00c) {
            ctx->pc = 0x3DD01Cu;
            goto label_3dd01c;
        }
    }
    ctx->pc = 0x3DD014u;
label_3dd014:
    // 0x3dd014: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3DD014u;
    {
        const bool branch_taken_0x3dd014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD014u;
        // 0x3dd018: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd014) {
            ctx->pc = 0x3DD024u;
            goto label_3dd024;
        }
    }
    ctx->pc = 0x3DD01Cu;
label_3dd01c:
    // 0x3dd01c: 0xc0f798e  jal         func_3DE638
    ctx->pc = 0x3DD01Cu;
    SET_GPR_U32(ctx, 31, 0x3DD024u);
    ctx->pc = 0x3DE638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DE638u, 0x3DD01Cu, 0x3DD024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD024u;
label_3dd024:
    // 0x3dd024: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3dd024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dd028: 0x3e00008  jr          $ra
    ctx->pc = 0x3DD028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DD02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD028u;
        // 0x3dd02c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DD028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DD030u;
}
