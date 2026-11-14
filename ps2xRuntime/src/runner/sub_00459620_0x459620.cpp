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

// Function: sub_00459620
// Address: 0x459620 - 0x4596b0
void sub_00459620_0x459620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00459620_0x459620");
#endif

    switch (ctx->pc) {
        case 0x45963cu: goto label_45963c;
        case 0x459648u: goto label_459648;
        case 0x45965cu: goto label_45965c;
        case 0x459664u: goto label_459664;
        case 0x459688u: goto label_459688;
        case 0x459690u: goto label_459690;
        case 0x459698u: goto label_459698;
        default: break;
    }

    ctx->pc = 0x459620u;

    // 0x459620: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x459620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x459624: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x459624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x459628: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x459628u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x45962c: 0x2484e8e8  addiu       $a0, $a0, -0x1718
    ctx->pc = 0x45962cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961384));
    // 0x459630: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x459630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x459634: 0xc1164fc  jal         func_4593F0
    ctx->pc = 0x459634u;
    SET_GPR_U32(ctx, 31, 0x45963Cu);
    ctx->pc = 0x4593F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4593F0u, 0x459634u, 0x45963Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45963Cu;
label_45963c:
    // 0x45963c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x45963cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x459640: 0xc0c1ca4  jal         func_307290
    ctx->pc = 0x459640u;
    SET_GPR_U32(ctx, 31, 0x459648u);
    ctx->pc = 0x307290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307290u, 0x459640u, 0x459648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x459648u;
label_459648:
    // 0x459648: 0x0  nop
    ctx->pc = 0x459648u;
    // NOP
    // 0x45964c: 0x0  nop
    ctx->pc = 0x45964cu;
    // NOP
    // 0x459650: 0x0  nop
    ctx->pc = 0x459650u;
    // NOP
    // 0x459654: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x459654u;
    {
        const bool branch_taken_0x459654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x459654) {
            ctx->pc = 0x45963Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45963c;
        }
    }
    ctx->pc = 0x45965Cu;
label_45965c:
    // 0x45965c: 0xc0c1c90  jal         func_307240
    ctx->pc = 0x45965Cu;
    SET_GPR_U32(ctx, 31, 0x459664u);
    ctx->pc = 0x307240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307240u, 0x45965Cu, 0x459664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x459664u;
label_459664:
    // 0x459664: 0x0  nop
    ctx->pc = 0x459664u;
    // NOP
    // 0x459668: 0x0  nop
    ctx->pc = 0x459668u;
    // NOP
    // 0x45966c: 0x0  nop
    ctx->pc = 0x45966cu;
    // NOP
    // 0x459670: 0x0  nop
    ctx->pc = 0x459670u;
    // NOP
    // 0x459674: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x459674u;
    {
        const bool branch_taken_0x459674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x459674) {
            ctx->pc = 0x45965Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45965c;
        }
    }
    ctx->pc = 0x45967Cu;
    // 0x45967c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x45967cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x459680: 0xc0c0448  jal         func_301120
    ctx->pc = 0x459680u;
    SET_GPR_U32(ctx, 31, 0x459688u);
    ctx->pc = 0x301120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301120u, 0x459680u, 0x459688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x459688u;
label_459688:
    // 0x459688: 0xc0c1784  jal         func_305E10
    ctx->pc = 0x459688u;
    SET_GPR_U32(ctx, 31, 0x459690u);
    ctx->pc = 0x305E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305E10u, 0x459688u, 0x459690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x459690u;
label_459690:
    // 0x459690: 0xc0c0b20  jal         func_302C80
    ctx->pc = 0x459690u;
    SET_GPR_U32(ctx, 31, 0x459698u);
    ctx->pc = 0x302C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302C80u, 0x459690u, 0x459698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x459698u;
label_459698:
    // 0x459698: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x459698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x45969c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x45969cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4596a0: 0x27bd0110  addiu       $sp, $sp, 0x110
    ctx->pc = 0x4596a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x4596a4: 0x3e00008  jr          $ra
    ctx->pc = 0x4596A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4596A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4596ACu;
    // 0x4596ac: 0x0  nop
    ctx->pc = 0x4596acu;
    // NOP
    ctx->pc = 0x4596b0u;
}
