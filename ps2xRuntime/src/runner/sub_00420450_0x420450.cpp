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

// Function: sub_00420450
// Address: 0x420450 - 0x420490
void sub_00420450_0x420450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00420450_0x420450");
#endif

    switch (ctx->pc) {
        case 0x420450u: goto label_420450;
        case 0x420454u: goto label_420454;
        case 0x420458u: goto label_420458;
        case 0x42045cu: goto label_42045c;
        case 0x420460u: goto label_420460;
        case 0x420464u: goto label_420464;
        case 0x420468u: goto label_420468;
        case 0x42046cu: goto label_42046c;
        case 0x420470u: goto label_420470;
        case 0x420474u: goto label_420474;
        case 0x420478u: goto label_420478;
        case 0x42047cu: goto label_42047c;
        case 0x420480u: goto label_420480;
        case 0x420484u: goto label_420484;
        case 0x420488u: goto label_420488;
        case 0x42048cu: goto label_42048c;
        default: break;
    }

    ctx->pc = 0x420450u;

label_420450:
    // 0x420450: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x420450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_420454:
    // 0x420454: 0x8f83be18  lw          $v1, -0x41E8($gp)
    ctx->pc = 0x420454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950424)));
label_420458:
    // 0x420458: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x420458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_42045c:
    // 0x42045c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x42045cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_420460:
    // 0x420460: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x420460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_420464:
    // 0x420464: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x420464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_420468:
    // 0x420468: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x420468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_42046c:
    // 0x42046c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_420470:
    if (ctx->pc == 0x420470u) {
        ctx->pc = 0x420470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42046Cu;
        // 0x420470: 0x30c600ff  andi        $a2, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x420474u;
        goto label_420474;
    }
    ctx->pc = 0x42046Cu;
    {
        const bool branch_taken_0x42046c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x420470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42046Cu;
        // 0x420470: 0x30c600ff  andi        $a2, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x42046c) {
            ctx->pc = 0x42047Cu;
            goto label_42047c;
        }
    }
    ctx->pc = 0x420474u;
label_420474:
    // 0x420474: 0x10000003  b           . + 4 + (0x3 << 2)
label_420478:
    if (ctx->pc == 0x420478u) {
        ctx->pc = 0x420478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420474u;
        // 0x420478: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42047Cu;
        goto label_42047c;
    }
    ctx->pc = 0x420474u;
    {
        const bool branch_taken_0x420474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x420478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420474u;
        // 0x420478: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420474) {
            ctx->pc = 0x420484u;
            goto label_420484;
        }
    }
    ctx->pc = 0x42047Cu;
label_42047c:
    // 0x42047c: 0x40f809  jalr        $v0
label_420480:
    if (ctx->pc == 0x420480u) {
        ctx->pc = 0x420484u;
        goto label_420484;
    }
    ctx->pc = 0x42047Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x420484u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42047Cu, 0x420484u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x420484u;
label_420484:
    // 0x420484: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x420484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_420488:
    // 0x420488: 0x3e00008  jr          $ra
label_42048c:
    if (ctx->pc == 0x42048Cu) {
        ctx->pc = 0x42048Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420488u;
        // 0x42048c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420490u;
        goto label_fallthrough_0x420488;
    }
    ctx->pc = 0x420488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42048Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420488u;
        // 0x42048c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x420488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x420488:
    ctx->pc = 0x420490u;
}
