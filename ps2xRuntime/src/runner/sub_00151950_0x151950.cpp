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

// Function: sub_00151950
// Address: 0x151950 - 0x1519e0
void sub_00151950_0x151950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151950_0x151950");
#endif

    switch (ctx->pc) {
        case 0x15196cu: goto label_15196c;
        case 0x151978u: goto label_151978;
        case 0x151988u: goto label_151988;
        case 0x151994u: goto label_151994;
        case 0x1519a8u: goto label_1519a8;
        case 0x1519bcu: goto label_1519bc;
        default: break;
    }

    ctx->pc = 0x151950u;

label_151950:
    // 0x151950: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x151950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x151954: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x151954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x151958: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x151958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15195c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x15195cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x151960: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x151960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x151964: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x151964u;
    {
        const bool branch_taken_0x151964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151964) {
            ctx->pc = 0x1519C0u;
            goto label_1519c0;
        }
    }
    ctx->pc = 0x15196Cu;
label_15196c:
    // 0x15196c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x15196cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x151970: 0xc0541e0  jal         func_150780
    ctx->pc = 0x151970u;
    SET_GPR_U32(ctx, 31, 0x151978u);
    ctx->pc = 0x150780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150780u, 0x151970u, 0x151978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151978u;
label_151978:
    // 0x151978: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x151978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15197c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15197cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x151980: 0xc054654  jal         func_151950
    ctx->pc = 0x151980u;
    SET_GPR_U32(ctx, 31, 0x151988u);
    ctx->pc = 0x151950u;
    goto label_151950;
    ctx->pc = 0x151988u;
label_151988:
    // 0x151988: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x151988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15198c: 0xc0541e8  jal         func_1507A0
    ctx->pc = 0x15198Cu;
    SET_GPR_U32(ctx, 31, 0x151994u);
    ctx->pc = 0x1507A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1507A0u, 0x15198Cu, 0x151994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151994u;
label_151994:
    // 0x151994: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x151994u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x151998: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x151998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15199c: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x15199cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1519a0: 0xc052d20  jal         func_14B480
    ctx->pc = 0x1519A0u;
    SET_GPR_U32(ctx, 31, 0x1519A8u);
    ctx->pc = 0x14B480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B480u, 0x1519A0u, 0x1519A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1519A8u;
label_1519a8:
    // 0x1519a8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1519a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1519ac: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1519acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1519b0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1519b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1519b4: 0xc0546c8  jal         func_151B20
    ctx->pc = 0x1519B4u;
    SET_GPR_U32(ctx, 31, 0x1519BCu);
    ctx->pc = 0x151B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151B20u, 0x1519B4u, 0x1519BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1519BCu;
label_1519bc:
    // 0x1519bc: 0xafb00030  sw          $s0, 0x30($sp)
    ctx->pc = 0x1519bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 16));
label_1519c0:
    // 0x1519c0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1519c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1519c4: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1519C4u;
    {
        const bool branch_taken_0x1519c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1519c4) {
            ctx->pc = 0x15196Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15196c;
        }
    }
    ctx->pc = 0x1519CCu;
    // 0x1519cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1519ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1519d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1519d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1519d4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1519d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1519d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1519D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1519D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1519E0u;
}
