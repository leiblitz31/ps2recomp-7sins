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

// Function: sub_00131820
// Address: 0x131820 - 0x1318c0
void sub_00131820_0x131820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131820_0x131820");
#endif

    switch (ctx->pc) {
        case 0x13186cu: goto label_13186c;
        case 0x131878u: goto label_131878;
        case 0x131890u: goto label_131890;
        case 0x13189cu: goto label_13189c;
        default: break;
    }

    ctx->pc = 0x131820u;

    // 0x131820: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x131820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x131824: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x131824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x131828: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x131828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13182c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x13182cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x131830: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x131830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x131834: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x131834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x131838: 0x8c500028  lw          $s0, 0x28($v0)
    ctx->pc = 0x131838u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x13183c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x13183cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x131840: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x131840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x131844: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x131844u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
    // 0x131848: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x131848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13184c: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x13184cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x131850: 0x12020012  beq         $s0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x131850u;
    {
        const bool branch_taken_0x131850 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x131850) {
            ctx->pc = 0x13189Cu;
            goto label_13189c;
        }
    }
    ctx->pc = 0x131858u;
    // 0x131858: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x131858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13185c: 0x2444003c  addiu       $a0, $v0, 0x3C
    ctx->pc = 0x13185cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x131860: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x131860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131864: 0xc04c590  jal         func_131640
    ctx->pc = 0x131864u;
    SET_GPR_U32(ctx, 31, 0x13186Cu);
    ctx->pc = 0x131640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131640u, 0x131864u, 0x13186Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13186Cu;
label_13186c:
    // 0x13186c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x13186cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x131870: 0xc116bdc  jal         func_45AF70
    ctx->pc = 0x131870u;
    SET_GPR_U32(ctx, 31, 0x131878u);
    ctx->pc = 0x45AF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45AF70u, 0x131870u, 0x131878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131878u;
label_131878:
    // 0x131878: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x131878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13187c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x13187cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x131880: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x131880u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x131884: 0x2464003c  addiu       $a0, $v1, 0x3C
    ctx->pc = 0x131884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
    // 0x131888: 0xc04c590  jal         func_131640
    ctx->pc = 0x131888u;
    SET_GPR_U32(ctx, 31, 0x131890u);
    ctx->pc = 0x131640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131640u, 0x131888u, 0x131890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131890u;
label_131890:
    // 0x131890: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x131890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x131894: 0xc116bdc  jal         func_45AF70
    ctx->pc = 0x131894u;
    SET_GPR_U32(ctx, 31, 0x13189Cu);
    ctx->pc = 0x45AF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45AF70u, 0x131894u, 0x13189Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13189Cu;
label_13189c:
    // 0x13189c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13189cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1318a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1318a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1318a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1318a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1318a8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1318a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1318ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1318ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1318ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1318B4u;
    // 0x1318b4: 0x0  nop
    ctx->pc = 0x1318b4u;
    // NOP
    // 0x1318b8: 0x0  nop
    ctx->pc = 0x1318b8u;
    // NOP
    // 0x1318bc: 0x0  nop
    ctx->pc = 0x1318bcu;
    // NOP
    ctx->pc = 0x1318c0u;
}
