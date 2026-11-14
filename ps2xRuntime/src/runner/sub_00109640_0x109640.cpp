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

// Function: sub_00109640
// Address: 0x109640 - 0x1096b0
void sub_00109640_0x109640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00109640_0x109640");
#endif

    switch (ctx->pc) {
        case 0x109640u: goto label_109640;
        case 0x109644u: goto label_109644;
        case 0x109648u: goto label_109648;
        case 0x10964cu: goto label_10964c;
        case 0x109650u: goto label_109650;
        case 0x109654u: goto label_109654;
        case 0x109658u: goto label_109658;
        case 0x10965cu: goto label_10965c;
        case 0x109660u: goto label_109660;
        case 0x109664u: goto label_109664;
        case 0x109668u: goto label_109668;
        case 0x10966cu: goto label_10966c;
        case 0x109670u: goto label_109670;
        case 0x109674u: goto label_109674;
        case 0x109678u: goto label_109678;
        case 0x10967cu: goto label_10967c;
        case 0x109680u: goto label_109680;
        case 0x109684u: goto label_109684;
        case 0x109688u: goto label_109688;
        case 0x10968cu: goto label_10968c;
        case 0x109690u: goto label_109690;
        case 0x109694u: goto label_109694;
        case 0x109698u: goto label_109698;
        case 0x10969cu: goto label_10969c;
        case 0x1096a0u: goto label_1096a0;
        case 0x1096a4u: goto label_1096a4;
        case 0x1096a8u: goto label_1096a8;
        case 0x1096acu: goto label_1096ac;
        default: break;
    }

    ctx->pc = 0x109640u;

label_109640:
    // 0x109640: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x109640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_109644:
    // 0x109644: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x109644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_109648:
    // 0x109648: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x109648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_10964c:
    // 0x10964c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x10964cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_109650:
    // 0x109650: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x109650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_109654:
    // 0x109654: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x109654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
label_109658:
    // 0x109658: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x109658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
label_10965c:
    // 0x10965c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10965cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_109660:
    // 0x109660: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x109660u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_109664:
    // 0x109664: 0xc0425ac  jal         func_1096B0
label_109668:
    if (ctx->pc == 0x109668u) {
        ctx->pc = 0x10966Cu;
        goto label_10966c;
    }
    ctx->pc = 0x109664u;
    SET_GPR_U32(ctx, 31, 0x10966Cu);
    ctx->pc = 0x1096B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1096B0u, 0x109664u, 0x10966Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10966Cu;
label_10966c:
    // 0x10966c: 0x3c100011  lui         $s0, 0x11
    ctx->pc = 0x10966cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)17 << 16));
label_109670:
    // 0x109670: 0x26109370  addiu       $s0, $s0, -0x6C90
    ctx->pc = 0x109670u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294939504));
label_109674:
    // 0x109674: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x109674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_109678:
    // 0x109678: 0x200f809  jalr        $s0
label_10967c:
    if (ctx->pc == 0x10967Cu) {
        ctx->pc = 0x109680u;
        goto label_109680;
    }
    ctx->pc = 0x109678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x109680u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109678u, 0x109680u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x109680u;
label_109680:
    // 0x109680: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x109680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_109684:
    // 0x109684: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x109684u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_109688:
    // 0x109688: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x109688u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_10968c:
    // 0x10968c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x10968cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_109690:
    // 0x109690: 0xc041da0  jal         func_107680
label_109694:
    if (ctx->pc == 0x109694u) {
        ctx->pc = 0x109698u;
        goto label_109698;
    }
    ctx->pc = 0x109690u;
    SET_GPR_U32(ctx, 31, 0x109698u);
    ctx->pc = 0x107680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107680u, 0x109690u, 0x109698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109698u;
label_109698:
    // 0x109698: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x109698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_10969c:
    // 0x10969c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10969cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1096a0:
    // 0x1096a0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1096a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1096a4:
    // 0x1096a4: 0x3e00008  jr          $ra
label_1096a8:
    if (ctx->pc == 0x1096A8u) {
        ctx->pc = 0x1096ACu;
        goto label_1096ac;
    }
    ctx->pc = 0x1096A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1096A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1096ACu;
label_1096ac:
    // 0x1096ac: 0x0  nop
    ctx->pc = 0x1096acu;
    // NOP
    ctx->pc = 0x1096b0u;
}
