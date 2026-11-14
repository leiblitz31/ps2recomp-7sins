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

// Function: sub_004A8738
// Address: 0x4a8738 - 0x4a8770
void sub_004A8738_0x4a8738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A8738_0x4a8738");
#endif

    switch (ctx->pc) {
        case 0x4a8738u: goto label_4a8738;
        case 0x4a873cu: goto label_4a873c;
        case 0x4a8740u: goto label_4a8740;
        case 0x4a8744u: goto label_4a8744;
        case 0x4a8748u: goto label_4a8748;
        case 0x4a874cu: goto label_4a874c;
        case 0x4a8750u: goto label_4a8750;
        case 0x4a8754u: goto label_4a8754;
        case 0x4a8758u: goto label_4a8758;
        case 0x4a875cu: goto label_4a875c;
        case 0x4a8760u: goto label_4a8760;
        case 0x4a8764u: goto label_4a8764;
        case 0x4a8768u: goto label_4a8768;
        case 0x4a876cu: goto label_4a876c;
        default: break;
    }

    ctx->pc = 0x4a8738u;

label_4a8738:
    // 0x4a8738: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4a8738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4a873c:
    // 0x4a873c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a873cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4a8740:
    // 0x4a8740: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x4a8740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_4a8744:
    // 0x4a8744: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x4a8744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_4a8748:
    // 0x4a8748: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_4a874c:
    if (ctx->pc == 0x4A874Cu) {
        ctx->pc = 0x4A874Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8748u;
        // 0x4a874c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8750u;
        goto label_4a8750;
    }
    ctx->pc = 0x4A8748u;
    {
        const bool branch_taken_0x4a8748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a8748) {
            ctx->pc = 0x4A874Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A8748u;
            // 0x4a874c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A8760u;
            goto label_4a8760;
        }
    }
    ctx->pc = 0x4A8750u;
label_4a8750:
    // 0x4a8750: 0x40f809  jalr        $v0
label_4a8754:
    if (ctx->pc == 0x4A8754u) {
        ctx->pc = 0x4A8758u;
        goto label_4a8758;
    }
    ctx->pc = 0x4A8750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A8758u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A8750u, 0x4A8758u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A8758u;
label_4a8758:
    // 0x4a8758: 0x10000002  b           . + 4 + (0x2 << 2)
label_4a875c:
    if (ctx->pc == 0x4A875Cu) {
        ctx->pc = 0x4A875Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8758u;
        // 0x4a875c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8760u;
        goto label_4a8760;
    }
    ctx->pc = 0x4A8758u;
    {
        const bool branch_taken_0x4a8758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A875Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8758u;
        // 0x4a875c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8758) {
            ctx->pc = 0x4A8764u;
            goto label_4a8764;
        }
    }
    ctx->pc = 0x4A8760u;
label_4a8760:
    // 0x4a8760: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a8760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a8764:
    // 0x4a8764: 0x3e00008  jr          $ra
label_4a8768:
    if (ctx->pc == 0x4A8768u) {
        ctx->pc = 0x4A8768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8764u;
        // 0x4a8768: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A876Cu;
        goto label_4a876c;
    }
    ctx->pc = 0x4A8764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A8768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8764u;
        // 0x4a8768: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A8764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A876Cu;
label_4a876c:
    // 0x4a876c: 0x0  nop
    ctx->pc = 0x4a876cu;
    // NOP
    ctx->pc = 0x4a8770u;
}
