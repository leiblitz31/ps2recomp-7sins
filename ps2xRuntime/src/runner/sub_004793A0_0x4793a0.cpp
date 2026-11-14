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

// Function: sub_004793A0
// Address: 0x4793a0 - 0x479410
void sub_004793A0_0x4793a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004793A0_0x4793a0");
#endif

    switch (ctx->pc) {
        case 0x4793a0u: goto label_4793a0;
        case 0x4793a4u: goto label_4793a4;
        case 0x4793a8u: goto label_4793a8;
        case 0x4793acu: goto label_4793ac;
        case 0x4793b0u: goto label_4793b0;
        case 0x4793b4u: goto label_4793b4;
        case 0x4793b8u: goto label_4793b8;
        case 0x4793bcu: goto label_4793bc;
        case 0x4793c0u: goto label_4793c0;
        case 0x4793c4u: goto label_4793c4;
        case 0x4793c8u: goto label_4793c8;
        case 0x4793ccu: goto label_4793cc;
        case 0x4793d0u: goto label_4793d0;
        case 0x4793d4u: goto label_4793d4;
        case 0x4793d8u: goto label_4793d8;
        case 0x4793dcu: goto label_4793dc;
        case 0x4793e0u: goto label_4793e0;
        case 0x4793e4u: goto label_4793e4;
        case 0x4793e8u: goto label_4793e8;
        case 0x4793ecu: goto label_4793ec;
        case 0x4793f0u: goto label_4793f0;
        case 0x4793f4u: goto label_4793f4;
        case 0x4793f8u: goto label_4793f8;
        case 0x4793fcu: goto label_4793fc;
        case 0x479400u: goto label_479400;
        case 0x479404u: goto label_479404;
        case 0x479408u: goto label_479408;
        case 0x47940cu: goto label_47940c;
        default: break;
    }

    ctx->pc = 0x4793a0u;

label_4793a0:
    // 0x4793a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4793a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_4793a4:
    // 0x4793a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4793a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4793a8:
    // 0x4793a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4793a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4793ac:
    // 0x4793ac: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x4793acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_4793b0:
    // 0x4793b0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x4793b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_4793b4:
    // 0x4793b4: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x4793b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
label_4793b8:
    // 0x4793b8: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x4793b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
label_4793bc:
    // 0x4793bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4793bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4793c0:
    // 0x4793c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4793c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4793c4:
    // 0x4793c4: 0xc11e538  jal         func_4794E0
label_4793c8:
    if (ctx->pc == 0x4793C8u) {
        ctx->pc = 0x4793CCu;
        goto label_4793cc;
    }
    ctx->pc = 0x4793C4u;
    SET_GPR_U32(ctx, 31, 0x4793CCu);
    ctx->pc = 0x4794E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4794E0u, 0x4793C4u, 0x4793CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4793CCu;
label_4793cc:
    // 0x4793cc: 0x3c100048  lui         $s0, 0x48
    ctx->pc = 0x4793ccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)72 << 16));
label_4793d0:
    // 0x4793d0: 0x261090a0  addiu       $s0, $s0, -0x6F60
    ctx->pc = 0x4793d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294938784));
label_4793d4:
    // 0x4793d4: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x4793d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_4793d8:
    // 0x4793d8: 0x200f809  jalr        $s0
label_4793dc:
    if (ctx->pc == 0x4793DCu) {
        ctx->pc = 0x4793E0u;
        goto label_4793e0;
    }
    ctx->pc = 0x4793D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x4793E0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4793D8u, 0x4793E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4793E0u;
label_4793e0:
    // 0x4793e0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x4793e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_4793e4:
    // 0x4793e4: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x4793e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_4793e8:
    // 0x4793e8: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x4793e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_4793ec:
    // 0x4793ec: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x4793ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_4793f0:
    // 0x4793f0: 0xc11e504  jal         func_479410
label_4793f4:
    if (ctx->pc == 0x4793F4u) {
        ctx->pc = 0x4793F8u;
        goto label_4793f8;
    }
    ctx->pc = 0x4793F0u;
    SET_GPR_U32(ctx, 31, 0x4793F8u);
    ctx->pc = 0x479410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x479410u, 0x4793F0u, 0x4793F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4793F8u;
label_4793f8:
    // 0x4793f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4793f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4793fc:
    // 0x4793fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4793fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_479400:
    // 0x479400: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x479400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_479404:
    // 0x479404: 0x3e00008  jr          $ra
label_479408:
    if (ctx->pc == 0x479408u) {
        ctx->pc = 0x47940Cu;
        goto label_47940c;
    }
    ctx->pc = 0x479404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x479404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47940Cu;
label_47940c:
    // 0x47940c: 0x0  nop
    ctx->pc = 0x47940cu;
    // NOP
    ctx->pc = 0x479410u;
}
