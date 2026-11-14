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

// Function: sub_00490100
// Address: 0x490100 - 0x4901b0
void sub_00490100_0x490100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00490100_0x490100");
#endif

    switch (ctx->pc) {
        case 0x490134u: goto label_490134;
        case 0x490148u: goto label_490148;
        case 0x490158u: goto label_490158;
        case 0x490170u: goto label_490170;
        default: break;
    }

    ctx->pc = 0x490100u;

    // 0x490100: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x490100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x490104: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x490104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x490108: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x490108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x49010c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x49010cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x490110: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x490110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x490114: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x490114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x490118: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x490118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x49011c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x49011cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x490120: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x490120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x490124: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x490124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x490128: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x490128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x49012c: 0xc123f6c  jal         func_48FDB0
    ctx->pc = 0x49012Cu;
    SET_GPR_U32(ctx, 31, 0x490134u);
    ctx->pc = 0x48FDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48FDB0u, 0x49012Cu, 0x490134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x490134u;
label_490134:
    // 0x490134: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x490134u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x490138: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x490138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x49013c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x49013cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x490140: 0xc12406c  jal         func_4901B0
    ctx->pc = 0x490140u;
    SET_GPR_U32(ctx, 31, 0x490148u);
    ctx->pc = 0x4901B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4901B0u, 0x490140u, 0x490148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x490148u;
label_490148:
    // 0x490148: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x490148u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49014c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x49014cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x490150: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x490150u;
    {
        const bool branch_taken_0x490150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x490150) {
            ctx->pc = 0x490174u;
            goto label_490174;
        }
    }
    ctx->pc = 0x490158u;
label_490158:
    // 0x490158: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x490158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x49015c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x49015cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x490160: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x490160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x490164: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x490164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x490168: 0xc04e51c  jal         func_139470
    ctx->pc = 0x490168u;
    SET_GPR_U32(ctx, 31, 0x490170u);
    ctx->pc = 0x139470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139470u, 0x490168u, 0x490170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x490170u;
label_490170:
    // 0x490170: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x490170u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_490174:
    // 0x490174: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x490174u;
    {
        const bool branch_taken_0x490174 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x490174) {
            ctx->pc = 0x49018Cu;
            goto label_49018c;
        }
    }
    ctx->pc = 0x49017Cu;
    // 0x49017c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x49017cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x490180: 0x232102b  sltu        $v0, $s1, $s2
    ctx->pc = 0x490180u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x490184: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x490184u;
    {
        const bool branch_taken_0x490184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x490184) {
            ctx->pc = 0x490158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_490158;
        }
    }
    ctx->pc = 0x49018Cu;
label_49018c:
    // 0x49018c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x49018cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x490190: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x490190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x490194: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x490194u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x490198: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x490198u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49019c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x49019cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4901a0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x4901a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4901a4: 0x3e00008  jr          $ra
    ctx->pc = 0x4901A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4901A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4901ACu;
    // 0x4901ac: 0x0  nop
    ctx->pc = 0x4901acu;
    // NOP
    ctx->pc = 0x4901b0u;
}
