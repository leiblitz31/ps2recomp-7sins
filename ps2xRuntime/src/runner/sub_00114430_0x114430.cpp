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

// Function: sub_00114430
// Address: 0x114430 - 0x1144f0
void sub_00114430_0x114430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00114430_0x114430");
#endif

    switch (ctx->pc) {
        case 0x114460u: goto label_114460;
        case 0x11446cu: goto label_11446c;
        case 0x114478u: goto label_114478;
        case 0x114490u: goto label_114490;
        case 0x1144a8u: goto label_1144a8;
        case 0x1144c4u: goto label_1144c4;
        default: break;
    }

    ctx->pc = 0x114430u;

    // 0x114430: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x114430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x114434: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x114434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x114438: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x114438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x11443c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11443cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x114440: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x114440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x114444: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x114444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x114448: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x114448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x11444c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x11444cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x114450: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x114450u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x114454: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x114454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x114458: 0xc044cd4  jal         func_113350
    ctx->pc = 0x114458u;
    SET_GPR_U32(ctx, 31, 0x114460u);
    ctx->pc = 0x113350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113350u, 0x114458u, 0x114460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114460u;
label_114460:
    // 0x114460: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x114460u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x114464: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x114464u;
    {
        const bool branch_taken_0x114464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x114464) {
            ctx->pc = 0x1144C8u;
            goto label_1144c8;
        }
    }
    ctx->pc = 0x11446Cu;
label_11446c:
    // 0x11446c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11446cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114470: 0xc044eb4  jal         func_113AD0
    ctx->pc = 0x114470u;
    SET_GPR_U32(ctx, 31, 0x114478u);
    ctx->pc = 0x113AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113AD0u, 0x114470u, 0x114478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114478u;
label_114478:
    // 0x114478: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x114478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11447c: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x11447cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x114480: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x114480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114484: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x114484u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x114488: 0xc042cdc  jal         func_10B370
    ctx->pc = 0x114488u;
    SET_GPR_U32(ctx, 31, 0x114490u);
    ctx->pc = 0x10B370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B370u, 0x114488u, 0x114490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114490u;
label_114490:
    // 0x114490: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x114490u;
    {
        const bool branch_taken_0x114490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x114490) {
            ctx->pc = 0x1144B8u;
            goto label_1144b8;
        }
    }
    ctx->pc = 0x114498u;
    // 0x114498: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x114498u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11449c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11449cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1144a0: 0xc044eac  jal         func_113AB0
    ctx->pc = 0x1144A0u;
    SET_GPR_U32(ctx, 31, 0x1144A8u);
    ctx->pc = 0x113AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113AB0u, 0x1144A0u, 0x1144A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1144A8u;
label_1144a8:
    // 0x1144a8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1144a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1144ac: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1144acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1144b0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1144B0u;
    {
        const bool branch_taken_0x1144b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1144b0) {
            ctx->pc = 0x1144C8u;
            goto label_1144c8;
        }
    }
    ctx->pc = 0x1144B8u;
label_1144b8:
    // 0x1144b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1144b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1144bc: 0xc044ea4  jal         func_113A90
    ctx->pc = 0x1144BCu;
    SET_GPR_U32(ctx, 31, 0x1144C4u);
    ctx->pc = 0x113A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113A90u, 0x1144BCu, 0x1144C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1144C4u;
label_1144c4:
    // 0x1144c4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1144c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1144c8:
    // 0x1144c8: 0x1600ffe8  bnez        $s0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1144C8u;
    {
        const bool branch_taken_0x1144c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1144c8) {
            ctx->pc = 0x11446Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11446c;
        }
    }
    ctx->pc = 0x1144D0u;
    // 0x1144d0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1144d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1144d4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1144d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1144d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1144d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1144dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1144dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1144e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1144e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1144e4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1144e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1144e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1144E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1144E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1144F0u;
}
