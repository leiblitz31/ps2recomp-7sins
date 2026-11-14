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

// Function: sub_0010B540
// Address: 0x10b540 - 0x10b5d0
void sub_0010B540_0x10b540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B540_0x10b540");
#endif

    switch (ctx->pc) {
        case 0x10b55cu: goto label_10b55c;
        case 0x10b568u: goto label_10b568;
        case 0x10b578u: goto label_10b578;
        case 0x10b584u: goto label_10b584;
        case 0x10b598u: goto label_10b598;
        case 0x10b5acu: goto label_10b5ac;
        default: break;
    }

    ctx->pc = 0x10b540u;

label_10b540:
    // 0x10b540: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10b540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10b544: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10b544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10b548: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10b548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10b54c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x10b54cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x10b550: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x10b550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x10b554: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x10B554u;
    {
        const bool branch_taken_0x10b554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b554) {
            ctx->pc = 0x10B5B0u;
            goto label_10b5b0;
        }
    }
    ctx->pc = 0x10B55Cu;
label_10b55c:
    // 0x10b55c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x10b55cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10b560: 0xc042ccc  jal         func_10B330
    ctx->pc = 0x10B560u;
    SET_GPR_U32(ctx, 31, 0x10B568u);
    ctx->pc = 0x10B330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B330u, 0x10B560u, 0x10B568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B568u;
label_10b568:
    // 0x10b568: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x10b568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10b56c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x10b56cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10b570: 0xc042d50  jal         func_10B540
    ctx->pc = 0x10B570u;
    SET_GPR_U32(ctx, 31, 0x10B578u);
    ctx->pc = 0x10B540u;
    goto label_10b540;
    ctx->pc = 0x10B578u;
label_10b578:
    // 0x10b578: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x10b578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10b57c: 0xc042cd4  jal         func_10B350
    ctx->pc = 0x10B57Cu;
    SET_GPR_U32(ctx, 31, 0x10B584u);
    ctx->pc = 0x10B350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B350u, 0x10B57Cu, 0x10B584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B584u;
label_10b584:
    // 0x10b584: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x10b584u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10b588: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x10b588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10b58c: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x10b58cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x10b590: 0xc042d74  jal         func_10B5D0
    ctx->pc = 0x10B590u;
    SET_GPR_U32(ctx, 31, 0x10B598u);
    ctx->pc = 0x10B5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B5D0u, 0x10B590u, 0x10B598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B598u;
label_10b598:
    // 0x10b598: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x10b598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10b59c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x10b59cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10b5a0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10b5a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10b5a4: 0xc042d3c  jal         func_10B4F0
    ctx->pc = 0x10B5A4u;
    SET_GPR_U32(ctx, 31, 0x10B5ACu);
    ctx->pc = 0x10B4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B4F0u, 0x10B5A4u, 0x10B5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B5ACu;
label_10b5ac:
    // 0x10b5ac: 0xafb00030  sw          $s0, 0x30($sp)
    ctx->pc = 0x10b5acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 16));
label_10b5b0:
    // 0x10b5b0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x10b5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10b5b4: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x10B5B4u;
    {
        const bool branch_taken_0x10b5b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10b5b4) {
            ctx->pc = 0x10B55Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10b55c;
        }
    }
    ctx->pc = 0x10B5BCu;
    // 0x10b5bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10b5bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b5c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10b5c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b5c4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x10b5c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x10b5c8: 0x3e00008  jr          $ra
    ctx->pc = 0x10B5C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B5C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B5D0u;
}
