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

// Function: sub_00134140
// Address: 0x134140 - 0x1341b0
void sub_00134140_0x134140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00134140_0x134140");
#endif

    switch (ctx->pc) {
        case 0x134168u: goto label_134168;
        case 0x134180u: goto label_134180;
        case 0x13418cu: goto label_13418c;
        case 0x13419cu: goto label_13419c;
        default: break;
    }

    ctx->pc = 0x134140u;

    // 0x134140: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x134140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x134144: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x134144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x134148: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x134148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13414c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x13414cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x134150: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x134150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x134154: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x134154u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x134158: 0x8f84ba7c  lw          $a0, -0x4584($gp)
    ctx->pc = 0x134158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949500)));
    // 0x13415c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13415cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x134160: 0xc04fbd0  jal         func_13EF40
    ctx->pc = 0x134160u;
    SET_GPR_U32(ctx, 31, 0x134168u);
    ctx->pc = 0x13EF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EF40u, 0x134160u, 0x134168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134168u;
label_134168:
    // 0x134168: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x134168u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13416c: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x13416Cu;
    {
        const bool branch_taken_0x13416c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x13416c) {
            ctx->pc = 0x13419Cu;
            goto label_13419c;
        }
    }
    ctx->pc = 0x134174u;
    // 0x134174: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x134174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134178: 0xc050360  jal         func_140D80
    ctx->pc = 0x134178u;
    SET_GPR_U32(ctx, 31, 0x134180u);
    ctx->pc = 0x140D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140D80u, 0x134178u, 0x134180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134180u;
label_134180:
    // 0x134180: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x134180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134184: 0xc097444  jal         func_25D110
    ctx->pc = 0x134184u;
    SET_GPR_U32(ctx, 31, 0x13418Cu);
    ctx->pc = 0x25D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D110u, 0x134184u, 0x13418Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13418Cu;
label_13418c:
    // 0x13418c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13418cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134190: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x134190u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134194: 0xc089ac4  jal         func_226B10
    ctx->pc = 0x134194u;
    SET_GPR_U32(ctx, 31, 0x13419Cu);
    ctx->pc = 0x226B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226B10u, 0x134194u, 0x13419Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13419Cu;
label_13419c:
    // 0x13419c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13419cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1341a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1341a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1341a4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1341a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1341a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1341A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1341A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1341B0u;
}
