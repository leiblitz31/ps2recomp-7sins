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

// Function: sub_002222D0
// Address: 0x2222d0 - 0x222390
void sub_002222D0_0x2222d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002222D0_0x2222d0");
#endif

    switch (ctx->pc) {
        case 0x2222ecu: goto label_2222ec;
        case 0x2222fcu: goto label_2222fc;
        case 0x222314u: goto label_222314;
        case 0x22232cu: goto label_22232c;
        case 0x222338u: goto label_222338;
        case 0x222348u: goto label_222348;
        case 0x222360u: goto label_222360;
        case 0x222370u: goto label_222370;
        default: break;
    }

    ctx->pc = 0x2222d0u;

    // 0x2222d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2222d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2222d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2222d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2222d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2222d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2222dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2222dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2222e0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2222e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2222e4: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x2222E4u;
    SET_GPR_U32(ctx, 31, 0x2222ECu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2222E4u, 0x2222ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2222ECu;
label_2222ec:
    // 0x2222ec: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2222ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2222f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2222f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2222f4: 0xc0400e0  jal         func_100380
    ctx->pc = 0x2222F4u;
    SET_GPR_U32(ctx, 31, 0x2222FCu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2222F4u, 0x2222FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2222FCu;
label_2222fc:
    // 0x2222fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2222fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222300: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x222300u;
    {
        const bool branch_taken_0x222300 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x222300) {
            ctx->pc = 0x222318u;
            goto label_222318;
        }
    }
    ctx->pc = 0x222308u;
    // 0x222308: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x222308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22230c: 0xc088a00  jal         func_222800
    ctx->pc = 0x22230Cu;
    SET_GPR_U32(ctx, 31, 0x222314u);
    ctx->pc = 0x222800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222800u, 0x22230Cu, 0x222314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222314u;
label_222314:
    // 0x222314: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x222314u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_222318:
    // 0x222318: 0xaf91bb7c  sw          $s1, -0x4484($gp)
    ctx->pc = 0x222318u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949756), GPR_U32(ctx, 17));
    // 0x22231c: 0x8f84bb7c  lw          $a0, -0x4484($gp)
    ctx->pc = 0x22231cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949756)));
    // 0x222320: 0x24051b58  addiu       $a1, $zero, 0x1B58
    ctx->pc = 0x222320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7000));
    // 0x222324: 0xc089628  jal         func_2258A0
    ctx->pc = 0x222324u;
    SET_GPR_U32(ctx, 31, 0x22232Cu);
    ctx->pc = 0x2258A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2258A0u, 0x222324u, 0x22232Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22232Cu;
label_22232c:
    // 0x22232c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x22232cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x222330: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x222330u;
    SET_GPR_U32(ctx, 31, 0x222338u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x222330u, 0x222338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222338u;
label_222338:
    // 0x222338: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x222338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x22233c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x22233cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222340: 0xc0400e0  jal         func_100380
    ctx->pc = 0x222340u;
    SET_GPR_U32(ctx, 31, 0x222348u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x222340u, 0x222348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222348u;
label_222348:
    // 0x222348: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x222348u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22234c: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22234Cu;
    {
        const bool branch_taken_0x22234c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x22234c) {
            ctx->pc = 0x222364u;
            goto label_222364;
        }
    }
    ctx->pc = 0x222354u;
    // 0x222354: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x222354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222358: 0xc0888e4  jal         func_222390
    ctx->pc = 0x222358u;
    SET_GPR_U32(ctx, 31, 0x222360u);
    ctx->pc = 0x222390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222390u, 0x222358u, 0x222360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222360u;
label_222360:
    // 0x222360: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x222360u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_222364:
    // 0x222364: 0xaf90bb78  sw          $s0, -0x4488($gp)
    ctx->pc = 0x222364u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949752), GPR_U32(ctx, 16));
    // 0x222368: 0xc08641c  jal         func_219070
    ctx->pc = 0x222368u;
    SET_GPR_U32(ctx, 31, 0x222370u);
    ctx->pc = 0x219070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219070u, 0x222368u, 0x222370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222370u;
label_222370:
    // 0x222370: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x222370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x222374: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x222374u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222378: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x222378u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22237c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x22237cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x222380: 0x3e00008  jr          $ra
    ctx->pc = 0x222380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222388u;
    // 0x222388: 0x0  nop
    ctx->pc = 0x222388u;
    // NOP
    // 0x22238c: 0x0  nop
    ctx->pc = 0x22238cu;
    // NOP
    ctx->pc = 0x222390u;
}
