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

// Function: sub_00142140
// Address: 0x142140 - 0x1421a0
void sub_00142140_0x142140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00142140_0x142140");
#endif

    switch (ctx->pc) {
        case 0x142140u: goto label_142140;
        case 0x142144u: goto label_142144;
        case 0x142148u: goto label_142148;
        case 0x14214cu: goto label_14214c;
        case 0x142150u: goto label_142150;
        case 0x142154u: goto label_142154;
        case 0x142158u: goto label_142158;
        case 0x14215cu: goto label_14215c;
        case 0x142160u: goto label_142160;
        case 0x142164u: goto label_142164;
        case 0x142168u: goto label_142168;
        case 0x14216cu: goto label_14216c;
        case 0x142170u: goto label_142170;
        case 0x142174u: goto label_142174;
        case 0x142178u: goto label_142178;
        case 0x14217cu: goto label_14217c;
        case 0x142180u: goto label_142180;
        case 0x142184u: goto label_142184;
        case 0x142188u: goto label_142188;
        case 0x14218cu: goto label_14218c;
        case 0x142190u: goto label_142190;
        case 0x142194u: goto label_142194;
        case 0x142198u: goto label_142198;
        case 0x14219cu: goto label_14219c;
        default: break;
    }

    ctx->pc = 0x142140u;

label_142140:
    // 0x142140: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x142140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_142144:
    // 0x142144: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x142144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_142148:
    // 0x142148: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x142148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_14214c:
    // 0x14214c: 0x8f82ba84  lw          $v0, -0x457C($gp)
    ctx->pc = 0x14214cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949508)));
label_142150:
    // 0x142150: 0x1002000e  beq         $zero, $v0, . + 4 + (0xE << 2)
label_142154:
    if (ctx->pc == 0x142154u) {
        ctx->pc = 0x142158u;
        goto label_142158;
    }
    ctx->pc = 0x142150u;
    {
        const bool branch_taken_0x142150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x142150) {
            ctx->pc = 0x14218Cu;
            goto label_14218c;
        }
    }
    ctx->pc = 0x142158u;
label_142158:
    // 0x142158: 0x8f82ba84  lw          $v0, -0x457C($gp)
    ctx->pc = 0x142158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949508)));
label_14215c:
    // 0x14215c: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x14215cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_142160:
    // 0x142160: 0x1002000a  beq         $zero, $v0, . + 4 + (0xA << 2)
label_142164:
    if (ctx->pc == 0x142164u) {
        ctx->pc = 0x142168u;
        goto label_142168;
    }
    ctx->pc = 0x142160u;
    {
        const bool branch_taken_0x142160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x142160) {
            ctx->pc = 0x14218Cu;
            goto label_14218c;
        }
    }
    ctx->pc = 0x142168u;
label_142168:
    // 0x142168: 0x8f83ba84  lw          $v1, -0x457C($gp)
    ctx->pc = 0x142168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949508)));
label_14216c:
    // 0x14216c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x14216cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_142170:
    // 0x142170: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x142170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_142174:
    // 0x142174: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x142174u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_142178:
    // 0x142178: 0x8c640028  lw          $a0, 0x28($v1)
    ctx->pc = 0x142178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_14217c:
    // 0x14217c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x14217cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_142180:
    // 0x142180: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x142180u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_142184:
    // 0x142184: 0x320f809  jalr        $t9
label_142188:
    if (ctx->pc == 0x142188u) {
        ctx->pc = 0x14218Cu;
        goto label_14218c;
    }
    ctx->pc = 0x142184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x14218Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142184u, 0x14218Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14218Cu;
label_14218c:
    // 0x14218c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14218cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_142190:
    // 0x142190: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x142190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_142194:
    // 0x142194: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x142194u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_142198:
    // 0x142198: 0x3e00008  jr          $ra
label_14219c:
    if (ctx->pc == 0x14219Cu) {
        ctx->pc = 0x1421A0u;
        goto label_fallthrough_0x142198;
    }
    ctx->pc = 0x142198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x142198:
    ctx->pc = 0x1421A0u;
}
