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

// Function: sub_00459080
// Address: 0x459080 - 0x459110
void sub_00459080_0x459080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00459080_0x459080");
#endif

    switch (ctx->pc) {
        case 0x4590a8u: goto label_4590a8;
        case 0x4590d4u: goto label_4590d4;
        case 0x4590dcu: goto label_4590dc;
        default: break;
    }

    ctx->pc = 0x459080u;

    // 0x459080: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x459080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x459084: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x459084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x459088: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x459088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x45908c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x45908cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x459090: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x459090u;
    {
        const bool branch_taken_0x459090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x459090) {
            ctx->pc = 0x4590BCu;
            goto label_4590bc;
        }
    }
    ctx->pc = 0x459098u;
    // 0x459098: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x459098u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x45909c: 0x248441c0  addiu       $a0, $a0, 0x41C0
    ctx->pc = 0x45909cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16832));
    // 0x4590a0: 0xc116450  jal         func_459140
    ctx->pc = 0x4590A0u;
    SET_GPR_U32(ctx, 31, 0x4590A8u);
    ctx->pc = 0x459140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459140u, 0x4590A0u, 0x4590A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4590A8u;
label_4590a8:
    // 0x4590a8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x4590a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x4590ac: 0x244241c0  addiu       $v0, $v0, 0x41C0
    ctx->pc = 0x4590acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16832));
    // 0x4590b0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x4590b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x4590b4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4590B4u;
    {
        const bool branch_taken_0x4590b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4590b4) {
            ctx->pc = 0x4590D4u;
            goto label_4590d4;
        }
    }
    ctx->pc = 0x4590BCu;
label_4590bc:
    // 0x4590bc: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x4590bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x4590c0: 0x248441c0  addiu       $a0, $a0, 0x41C0
    ctx->pc = 0x4590c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16832));
    // 0x4590c4: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x4590c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4590c8: 0x24060220  addiu       $a2, $zero, 0x220
    ctx->pc = 0x4590c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    // 0x4590cc: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x4590CCu;
    SET_GPR_U32(ctx, 31, 0x4590D4u);
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x4590CCu, 0x4590D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4590D4u;
label_4590d4:
    // 0x4590d4: 0xc11649c  jal         func_459270
    ctx->pc = 0x4590D4u;
    SET_GPR_U32(ctx, 31, 0x4590DCu);
    ctx->pc = 0x459270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459270u, 0x4590D4u, 0x4590DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4590DCu;
label_4590dc:
    // 0x4590dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4590dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4590e0: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4590E0u;
    {
        const bool branch_taken_0x4590e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x4590e0) {
            ctx->pc = 0x4590F4u;
            goto label_4590f4;
        }
    }
    ctx->pc = 0x4590E8u;
    // 0x4590e8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4590e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4590ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4590ECu;
    {
        const bool branch_taken_0x4590ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4590ec) {
            ctx->pc = 0x459100u;
            goto label_459100;
        }
    }
    ctx->pc = 0x4590F4u;
label_4590f4:
    // 0x4590f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4590f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4590f8: 0xaf82bf44  sw          $v0, -0x40BC($gp)
    ctx->pc = 0x4590f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950724), GPR_U32(ctx, 2));
    // 0x4590fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4590fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_459100:
    // 0x459100: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x459100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x459104: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x459104u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x459108: 0x3e00008  jr          $ra
    ctx->pc = 0x459108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x459108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x459110u;
}
