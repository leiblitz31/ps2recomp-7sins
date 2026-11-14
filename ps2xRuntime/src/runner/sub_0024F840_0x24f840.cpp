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

// Function: sub_0024F840
// Address: 0x24f840 - 0x24f8d0
void sub_0024F840_0x24f840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024F840_0x24f840");
#endif

    switch (ctx->pc) {
        case 0x24f85cu: goto label_24f85c;
        case 0x24f868u: goto label_24f868;
        case 0x24f878u: goto label_24f878;
        case 0x24f884u: goto label_24f884;
        case 0x24f898u: goto label_24f898;
        case 0x24f8acu: goto label_24f8ac;
        default: break;
    }

    ctx->pc = 0x24f840u;

label_24f840:
    // 0x24f840: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x24f840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x24f844: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x24f844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x24f848: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24f848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24f84c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x24f84cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x24f850: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x24f850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x24f854: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x24F854u;
    {
        const bool branch_taken_0x24f854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f854) {
            ctx->pc = 0x24F8B0u;
            goto label_24f8b0;
        }
    }
    ctx->pc = 0x24F85Cu;
label_24f85c:
    // 0x24f85c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x24f85cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24f860: 0xc093dc4  jal         func_24F710
    ctx->pc = 0x24F860u;
    SET_GPR_U32(ctx, 31, 0x24F868u);
    ctx->pc = 0x24F710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24F710u, 0x24F860u, 0x24F868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F868u;
label_24f868:
    // 0x24f868: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x24f868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24f86c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x24f86cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24f870: 0xc093e10  jal         func_24F840
    ctx->pc = 0x24F870u;
    SET_GPR_U32(ctx, 31, 0x24F878u);
    ctx->pc = 0x24F840u;
    goto label_24f840;
    ctx->pc = 0x24F878u;
label_24f878:
    // 0x24f878: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x24f878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24f87c: 0xc093dcc  jal         func_24F730
    ctx->pc = 0x24F87Cu;
    SET_GPR_U32(ctx, 31, 0x24F884u);
    ctx->pc = 0x24F730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24F730u, 0x24F87Cu, 0x24F884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F884u;
label_24f884:
    // 0x24f884: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x24f884u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24f888: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x24f888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24f88c: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x24f88cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x24f890: 0xc093e34  jal         func_24F8D0
    ctx->pc = 0x24F890u;
    SET_GPR_U32(ctx, 31, 0x24F898u);
    ctx->pc = 0x24F8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24F8D0u, 0x24F890u, 0x24F898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F898u;
label_24f898:
    // 0x24f898: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x24f898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24f89c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x24f89cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24f8a0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x24f8a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24f8a4: 0xc093b5c  jal         func_24ED70
    ctx->pc = 0x24F8A4u;
    SET_GPR_U32(ctx, 31, 0x24F8ACu);
    ctx->pc = 0x24ED70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24ED70u, 0x24F8A4u, 0x24F8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F8ACu;
label_24f8ac:
    // 0x24f8ac: 0xafb00030  sw          $s0, 0x30($sp)
    ctx->pc = 0x24f8acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 16));
label_24f8b0:
    // 0x24f8b0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x24f8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24f8b4: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x24F8B4u;
    {
        const bool branch_taken_0x24f8b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24f8b4) {
            ctx->pc = 0x24F85Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24f85c;
        }
    }
    ctx->pc = 0x24F8BCu;
    // 0x24f8bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24f8bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24f8c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24f8c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24f8c4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x24f8c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24f8c8: 0x3e00008  jr          $ra
    ctx->pc = 0x24F8C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F8C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24F8D0u;
}
