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

// Function: sub_00250760
// Address: 0x250760 - 0x2507a0
void sub_00250760_0x250760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00250760_0x250760");
#endif

    switch (ctx->pc) {
        case 0x250760u: goto label_250760;
        case 0x250764u: goto label_250764;
        case 0x250768u: goto label_250768;
        case 0x25076cu: goto label_25076c;
        case 0x250770u: goto label_250770;
        case 0x250774u: goto label_250774;
        case 0x250778u: goto label_250778;
        case 0x25077cu: goto label_25077c;
        case 0x250780u: goto label_250780;
        case 0x250784u: goto label_250784;
        case 0x250788u: goto label_250788;
        case 0x25078cu: goto label_25078c;
        case 0x250790u: goto label_250790;
        case 0x250794u: goto label_250794;
        case 0x250798u: goto label_250798;
        case 0x25079cu: goto label_25079c;
        default: break;
    }

    ctx->pc = 0x250760u;

label_250760:
    // 0x250760: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x250760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_250764:
    // 0x250764: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x250764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_250768:
    // 0x250768: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x250768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_25076c:
    // 0x25076c: 0x8f83bbf8  lw          $v1, -0x4408($gp)
    ctx->pc = 0x25076cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949880)));
label_250770:
    // 0x250770: 0x10030007  beq         $zero, $v1, . + 4 + (0x7 << 2)
label_250774:
    if (ctx->pc == 0x250774u) {
        ctx->pc = 0x250778u;
        goto label_250778;
    }
    ctx->pc = 0x250770u;
    {
        const bool branch_taken_0x250770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x250770) {
            ctx->pc = 0x250790u;
            goto label_250790;
        }
    }
    ctx->pc = 0x250778u;
label_250778:
    // 0x250778: 0x8f84bbf8  lw          $a0, -0x4408($gp)
    ctx->pc = 0x250778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949880)));
label_25077c:
    // 0x25077c: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x25077cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_250780:
    // 0x250780: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x250780u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_250784:
    // 0x250784: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x250784u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_250788:
    // 0x250788: 0x320f809  jalr        $t9
label_25078c:
    if (ctx->pc == 0x25078Cu) {
        ctx->pc = 0x250790u;
        goto label_250790;
    }
    ctx->pc = 0x250788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x250790u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250788u, 0x250790u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x250790u;
label_250790:
    // 0x250790: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x250790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_250794:
    // 0x250794: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x250794u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_250798:
    // 0x250798: 0x3e00008  jr          $ra
label_25079c:
    if (ctx->pc == 0x25079Cu) {
        ctx->pc = 0x2507A0u;
        goto label_fallthrough_0x250798;
    }
    ctx->pc = 0x250798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x250798:
    ctx->pc = 0x2507A0u;
}
