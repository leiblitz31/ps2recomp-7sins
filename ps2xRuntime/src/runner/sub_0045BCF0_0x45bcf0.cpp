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

// Function: sub_0045BCF0
// Address: 0x45bcf0 - 0x45bd60
void sub_0045BCF0_0x45bcf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045BCF0_0x45bcf0");
#endif

    switch (ctx->pc) {
        case 0x45bd08u: goto label_45bd08;
        case 0x45bd10u: goto label_45bd10;
        case 0x45bd18u: goto label_45bd18;
        case 0x45bd38u: goto label_45bd38;
        default: break;
    }

    ctx->pc = 0x45bcf0u;

    // 0x45bcf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x45bcf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x45bcf4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x45bcf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x45bcf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x45bcf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x45bcfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45bcfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x45bd00: 0xc11904c  jal         func_464130
    ctx->pc = 0x45BD00u;
    SET_GPR_U32(ctx, 31, 0x45BD08u);
    ctx->pc = 0x464130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464130u, 0x45BD00u, 0x45BD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45BD08u;
label_45bd08:
    // 0x45bd08: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x45bd08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45bd0c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x45bd0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45bd10:
    // 0x45bd10: 0xc116edc  jal         func_45BB70
    ctx->pc = 0x45BD10u;
    SET_GPR_U32(ctx, 31, 0x45BD18u);
    ctx->pc = 0x45BB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45BB70u, 0x45BD10u, 0x45BD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45BD18u;
label_45bd18:
    // 0x45bd18: 0x0  nop
    ctx->pc = 0x45bd18u;
    // NOP
    // 0x45bd1c: 0x0  nop
    ctx->pc = 0x45bd1cu;
    // NOP
    // 0x45bd20: 0x0  nop
    ctx->pc = 0x45bd20u;
    // NOP
    // 0x45bd24: 0x0  nop
    ctx->pc = 0x45bd24u;
    // NOP
    // 0x45bd28: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x45BD28u;
    {
        const bool branch_taken_0x45bd28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45bd28) {
            ctx->pc = 0x45BD10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45bd10;
        }
    }
    ctx->pc = 0x45BD30u;
    // 0x45bd30: 0xc11904c  jal         func_464130
    ctx->pc = 0x45BD30u;
    SET_GPR_U32(ctx, 31, 0x45BD38u);
    ctx->pc = 0x464130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464130u, 0x45BD30u, 0x45BD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45BD38u;
label_45bd38:
    // 0x45bd38: 0x51102f  dsubu       $v0, $v0, $s1
    ctx->pc = 0x45bd38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 17));
    // 0x45bd3c: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x45bd3cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x45bd40: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x45bd40u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x45bd44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x45bd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x45bd48: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x45bd48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45bd4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x45bd4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45bd50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45bd50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45bd54: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x45bd54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x45bd58: 0x3e00008  jr          $ra
    ctx->pc = 0x45BD58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45BD58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45BD60u;
}
