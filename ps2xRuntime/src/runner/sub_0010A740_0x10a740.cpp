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

// Function: sub_0010A740
// Address: 0x10a740 - 0x10a7e0
void sub_0010A740_0x10a740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A740_0x10a740");
#endif

    switch (ctx->pc) {
        case 0x10a76cu: goto label_10a76c;
        case 0x10a77cu: goto label_10a77c;
        case 0x10a790u: goto label_10a790;
        case 0x10a7a0u: goto label_10a7a0;
        case 0x10a7b8u: goto label_10a7b8;
        default: break;
    }

    ctx->pc = 0x10a740u;

    // 0x10a740: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10a740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10a744: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10a744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10a748: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10a748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10a74c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x10a74cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x10a750: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x10a750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10a754: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x10a754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x10a758: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x10A758u;
    {
        const bool branch_taken_0x10a758 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a758) {
            ctx->pc = 0x10A7C4u;
            goto label_10a7c4;
        }
    }
    ctx->pc = 0x10A760u;
    // 0x10a760: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x10a760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10a764: 0xc042a08  jal         func_10A820
    ctx->pc = 0x10A764u;
    SET_GPR_U32(ctx, 31, 0x10A76Cu);
    ctx->pc = 0x10A820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A820u, 0x10A764u, 0x10A76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A76Cu;
label_10a76c:
    // 0x10a76c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x10a76cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10a770: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x10a770u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10a774: 0xc042d50  jal         func_10B540
    ctx->pc = 0x10A774u;
    SET_GPR_U32(ctx, 31, 0x10A77Cu);
    ctx->pc = 0x10B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B540u, 0x10A774u, 0x10A77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A77Cu;
label_10a77c:
    // 0x10a77c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x10a77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10a780: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x10a780u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10a784: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x10a784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10a788: 0xc042a00  jal         func_10A800
    ctx->pc = 0x10A788u;
    SET_GPR_U32(ctx, 31, 0x10A790u);
    ctx->pc = 0x10A800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A800u, 0x10A788u, 0x10A790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A790u;
label_10a790:
    // 0x10a790: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x10a790u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x10a794: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x10a794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10a798: 0xc042a08  jal         func_10A820
    ctx->pc = 0x10A798u;
    SET_GPR_U32(ctx, 31, 0x10A7A0u);
    ctx->pc = 0x10A820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A820u, 0x10A798u, 0x10A7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A7A0u;
label_10a7a0:
    // 0x10a7a0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x10a7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x10a7a4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x10a7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10a7a8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x10a7a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10a7ac: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x10a7acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10a7b0: 0xc0429f8  jal         func_10A7E0
    ctx->pc = 0x10A7B0u;
    SET_GPR_U32(ctx, 31, 0x10A7B8u);
    ctx->pc = 0x10A7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A7E0u, 0x10A7B0u, 0x10A7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A7B8u;
label_10a7b8:
    // 0x10a7b8: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x10a7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x10a7bc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x10a7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10a7c0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x10a7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_10a7c4:
    // 0x10a7c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10a7c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a7c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10a7c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a7cc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x10a7ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10a7d0: 0x3e00008  jr          $ra
    ctx->pc = 0x10A7D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A7D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A7D8u;
    // 0x10a7d8: 0x0  nop
    ctx->pc = 0x10a7d8u;
    // NOP
    // 0x10a7dc: 0x0  nop
    ctx->pc = 0x10a7dcu;
    // NOP
    ctx->pc = 0x10a7e0u;
}
