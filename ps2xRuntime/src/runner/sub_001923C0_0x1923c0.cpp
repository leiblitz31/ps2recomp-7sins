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

// Function: sub_001923C0
// Address: 0x1923c0 - 0x192430
void sub_001923C0_0x1923c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001923C0_0x1923c0");
#endif

    switch (ctx->pc) {
        case 0x1923c0u: goto label_1923c0;
        case 0x1923c4u: goto label_1923c4;
        case 0x1923c8u: goto label_1923c8;
        case 0x1923ccu: goto label_1923cc;
        case 0x1923d0u: goto label_1923d0;
        case 0x1923d4u: goto label_1923d4;
        case 0x1923d8u: goto label_1923d8;
        case 0x1923dcu: goto label_1923dc;
        case 0x1923e0u: goto label_1923e0;
        case 0x1923e4u: goto label_1923e4;
        case 0x1923e8u: goto label_1923e8;
        case 0x1923ecu: goto label_1923ec;
        case 0x1923f0u: goto label_1923f0;
        case 0x1923f4u: goto label_1923f4;
        case 0x1923f8u: goto label_1923f8;
        case 0x1923fcu: goto label_1923fc;
        case 0x192400u: goto label_192400;
        case 0x192404u: goto label_192404;
        case 0x192408u: goto label_192408;
        case 0x19240cu: goto label_19240c;
        case 0x192410u: goto label_192410;
        case 0x192414u: goto label_192414;
        case 0x192418u: goto label_192418;
        case 0x19241cu: goto label_19241c;
        case 0x192420u: goto label_192420;
        case 0x192424u: goto label_192424;
        case 0x192428u: goto label_192428;
        case 0x19242cu: goto label_19242c;
        default: break;
    }

    ctx->pc = 0x1923c0u;

label_1923c0:
    // 0x1923c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1923c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1923c4:
    // 0x1923c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1923c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1923c8:
    // 0x1923c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1923c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1923cc:
    // 0x1923cc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1923ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_1923d0:
    // 0x1923d0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1923d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_1923d4:
    // 0x1923d4: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x1923d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
label_1923d8:
    // 0x1923d8: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x1923d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
label_1923dc:
    // 0x1923dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1923dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1923e0:
    // 0x1923e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1923e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1923e4:
    // 0x1923e4: 0xc06490c  jal         func_192430
label_1923e8:
    if (ctx->pc == 0x1923E8u) {
        ctx->pc = 0x1923ECu;
        goto label_1923ec;
    }
    ctx->pc = 0x1923E4u;
    SET_GPR_U32(ctx, 31, 0x1923ECu);
    ctx->pc = 0x192430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192430u, 0x1923E4u, 0x1923ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1923ECu;
label_1923ec:
    // 0x1923ec: 0x3c100019  lui         $s0, 0x19
    ctx->pc = 0x1923ecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)25 << 16));
label_1923f0:
    // 0x1923f0: 0x26102020  addiu       $s0, $s0, 0x2020
    ctx->pc = 0x1923f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8224));
label_1923f4:
    // 0x1923f4: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x1923f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_1923f8:
    // 0x1923f8: 0x200f809  jalr        $s0
label_1923fc:
    if (ctx->pc == 0x1923FCu) {
        ctx->pc = 0x192400u;
        goto label_192400;
    }
    ctx->pc = 0x1923F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x192400u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1923F8u, 0x192400u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x192400u;
label_192400:
    // 0x192400: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x192400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_192404:
    // 0x192404: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x192404u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_192408:
    // 0x192408: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x192408u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_19240c:
    // 0x19240c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x19240cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_192410:
    // 0x192410: 0xc053d08  jal         func_14F420
label_192414:
    if (ctx->pc == 0x192414u) {
        ctx->pc = 0x192418u;
        goto label_192418;
    }
    ctx->pc = 0x192410u;
    SET_GPR_U32(ctx, 31, 0x192418u);
    ctx->pc = 0x14F420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F420u, 0x192410u, 0x192418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192418u;
label_192418:
    // 0x192418: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x192418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19241c:
    // 0x19241c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19241cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_192420:
    // 0x192420: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x192420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_192424:
    // 0x192424: 0x3e00008  jr          $ra
label_192428:
    if (ctx->pc == 0x192428u) {
        ctx->pc = 0x19242Cu;
        goto label_19242c;
    }
    ctx->pc = 0x192424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19242Cu;
label_19242c:
    // 0x19242c: 0x0  nop
    ctx->pc = 0x19242cu;
    // NOP
    ctx->pc = 0x192430u;
}
