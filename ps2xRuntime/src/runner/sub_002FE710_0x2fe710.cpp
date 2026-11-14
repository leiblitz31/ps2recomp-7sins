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

// Function: sub_002FE710
// Address: 0x2fe710 - 0x2fe778
void sub_002FE710_0x2fe710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FE710_0x2fe710");
#endif

    switch (ctx->pc) {
        case 0x2fe740u: goto label_2fe740;
        case 0x2fe748u: goto label_2fe748;
        case 0x2fe760u: goto label_2fe760;
        default: break;
    }

    ctx->pc = 0x2fe710u;

    // 0x2fe710: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fe710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2fe714: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2fe714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2fe718: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fe718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2fe71c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fe71cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe720: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fe720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fe724: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x2fe724u;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x2fe728: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2fe728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2fe72c: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x2fe72cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x2fe730: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FE730u;
    {
        const bool branch_taken_0x2fe730 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe730) {
            ctx->pc = 0x2FE740u;
            goto label_2fe740;
        }
    }
    ctx->pc = 0x2FE738u;
    // 0x2fe738: 0xc0c1f08  jal         func_307C20
    ctx->pc = 0x2FE738u;
    SET_GPR_U32(ctx, 31, 0x2FE740u);
    ctx->pc = 0x307C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C20u, 0x2FE738u, 0x2FE740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE740u;
label_2fe740:
    // 0x2fe740: 0xc0bf634  jal         func_2FD8D0
    ctx->pc = 0x2FE740u;
    SET_GPR_U32(ctx, 31, 0x2FE748u);
    ctx->pc = 0x2FE744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE740u;
    // 0x2fe744: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FD8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD8D0u, 0x2FE740u, 0x2FE748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE748u;
label_2fe748:
    // 0x2fe748: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2fe748u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe74c: 0xf  sync
    ctx->pc = 0x2fe74cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2fe750: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FE750u;
    {
        const bool branch_taken_0x2fe750 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE750u;
        // 0x2fe754: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe750) {
            ctx->pc = 0x2FE764u;
            goto label_2fe764;
        }
    }
    ctx->pc = 0x2FE758u;
    // 0x2fe758: 0xc0c1f1c  jal         func_307C70
    ctx->pc = 0x2FE758u;
    SET_GPR_U32(ctx, 31, 0x2FE760u);
    ctx->pc = 0x307C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C70u, 0x2FE758u, 0x2FE760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE760u;
label_2fe760:
    // 0x2fe760: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2fe760u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fe764:
    // 0x2fe764: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fe764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fe768: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2fe768u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fe76c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fe76cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fe770: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE770u;
        // 0x2fe774: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE778u;
}
