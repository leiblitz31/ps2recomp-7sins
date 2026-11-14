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

// Function: sub_00282790
// Address: 0x282790 - 0x282840
void sub_00282790_0x282790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282790_0x282790");
#endif

    switch (ctx->pc) {
        case 0x2827c4u: goto label_2827c4;
        case 0x2827d8u: goto label_2827d8;
        case 0x2827e8u: goto label_2827e8;
        case 0x282800u: goto label_282800;
        default: break;
    }

    ctx->pc = 0x282790u;

    // 0x282790: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x282790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x282794: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x282794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x282798: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x282798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28279c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28279cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2827a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2827a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2827a4: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x2827a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x2827a8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2827a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2827ac: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2827acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2827b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2827b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2827b4: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x2827b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2827b8: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x2827b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2827bc: 0xc0a0978  jal         func_2825E0
    ctx->pc = 0x2827BCu;
    SET_GPR_U32(ctx, 31, 0x2827C4u);
    ctx->pc = 0x2825E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2825E0u, 0x2827BCu, 0x2827C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2827C4u;
label_2827c4:
    // 0x2827c4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2827c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2827c8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2827c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2827cc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2827ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2827d0: 0xc0a0a10  jal         func_282840
    ctx->pc = 0x2827D0u;
    SET_GPR_U32(ctx, 31, 0x2827D8u);
    ctx->pc = 0x282840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282840u, 0x2827D0u, 0x2827D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2827D8u;
label_2827d8:
    // 0x2827d8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2827d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2827dc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2827dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2827e0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2827E0u;
    {
        const bool branch_taken_0x2827e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2827e0) {
            ctx->pc = 0x282804u;
            goto label_282804;
        }
    }
    ctx->pc = 0x2827E8u;
label_2827e8:
    // 0x2827e8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2827e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2827ec: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2827ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2827f0: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2827f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2827f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2827f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2827f8: 0xc04e51c  jal         func_139470
    ctx->pc = 0x2827F8u;
    SET_GPR_U32(ctx, 31, 0x282800u);
    ctx->pc = 0x139470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139470u, 0x2827F8u, 0x282800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282800u;
label_282800:
    // 0x282800: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x282800u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_282804:
    // 0x282804: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x282804u;
    {
        const bool branch_taken_0x282804 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x282804) {
            ctx->pc = 0x28281Cu;
            goto label_28281c;
        }
    }
    ctx->pc = 0x28280Cu;
    // 0x28280c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x28280cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x282810: 0x232102b  sltu        $v0, $s1, $s2
    ctx->pc = 0x282810u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x282814: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x282814u;
    {
        const bool branch_taken_0x282814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x282814) {
            ctx->pc = 0x2827E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2827e8;
        }
    }
    ctx->pc = 0x28281Cu;
label_28281c:
    // 0x28281c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x28281cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282820: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x282820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x282824: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x282824u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x282828: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x282828u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28282c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28282cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282830: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x282830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x282834: 0x3e00008  jr          $ra
    ctx->pc = 0x282834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28283Cu;
    // 0x28283c: 0x0  nop
    ctx->pc = 0x28283cu;
    // NOP
    ctx->pc = 0x282840u;
}
