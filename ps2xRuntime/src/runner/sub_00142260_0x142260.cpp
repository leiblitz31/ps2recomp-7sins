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

// Function: sub_00142260
// Address: 0x142260 - 0x1422c0
void sub_00142260_0x142260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00142260_0x142260");
#endif

    switch (ctx->pc) {
        case 0x142260u: goto label_142260;
        case 0x142264u: goto label_142264;
        case 0x142268u: goto label_142268;
        case 0x14226cu: goto label_14226c;
        case 0x142270u: goto label_142270;
        case 0x142274u: goto label_142274;
        case 0x142278u: goto label_142278;
        case 0x14227cu: goto label_14227c;
        case 0x142280u: goto label_142280;
        case 0x142284u: goto label_142284;
        case 0x142288u: goto label_142288;
        case 0x14228cu: goto label_14228c;
        case 0x142290u: goto label_142290;
        case 0x142294u: goto label_142294;
        case 0x142298u: goto label_142298;
        case 0x14229cu: goto label_14229c;
        case 0x1422a0u: goto label_1422a0;
        case 0x1422a4u: goto label_1422a4;
        case 0x1422a8u: goto label_1422a8;
        case 0x1422acu: goto label_1422ac;
        case 0x1422b0u: goto label_1422b0;
        case 0x1422b4u: goto label_1422b4;
        case 0x1422b8u: goto label_1422b8;
        case 0x1422bcu: goto label_1422bc;
        default: break;
    }

    ctx->pc = 0x142260u;

label_142260:
    // 0x142260: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x142260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_142264:
    // 0x142264: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x142264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_142268:
    // 0x142268: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x142268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_14226c:
    // 0x14226c: 0x8f82ba84  lw          $v0, -0x457C($gp)
    ctx->pc = 0x14226cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949508)));
label_142270:
    // 0x142270: 0x1002000e  beq         $zero, $v0, . + 4 + (0xE << 2)
label_142274:
    if (ctx->pc == 0x142274u) {
        ctx->pc = 0x142278u;
        goto label_142278;
    }
    ctx->pc = 0x142270u;
    {
        const bool branch_taken_0x142270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x142270) {
            ctx->pc = 0x1422ACu;
            goto label_1422ac;
        }
    }
    ctx->pc = 0x142278u;
label_142278:
    // 0x142278: 0x8f82ba84  lw          $v0, -0x457C($gp)
    ctx->pc = 0x142278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949508)));
label_14227c:
    // 0x14227c: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x14227cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_142280:
    // 0x142280: 0x1002000a  beq         $zero, $v0, . + 4 + (0xA << 2)
label_142284:
    if (ctx->pc == 0x142284u) {
        ctx->pc = 0x142288u;
        goto label_142288;
    }
    ctx->pc = 0x142280u;
    {
        const bool branch_taken_0x142280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x142280) {
            ctx->pc = 0x1422ACu;
            goto label_1422ac;
        }
    }
    ctx->pc = 0x142288u;
label_142288:
    // 0x142288: 0x8f83ba84  lw          $v1, -0x457C($gp)
    ctx->pc = 0x142288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949508)));
label_14228c:
    // 0x14228c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x14228cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_142290:
    // 0x142290: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x142290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_142294:
    // 0x142294: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x142294u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_142298:
    // 0x142298: 0x8c640028  lw          $a0, 0x28($v1)
    ctx->pc = 0x142298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_14229c:
    // 0x14229c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x14229cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1422a0:
    // 0x1422a0: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x1422a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_1422a4:
    // 0x1422a4: 0x320f809  jalr        $t9
label_1422a8:
    if (ctx->pc == 0x1422A8u) {
        ctx->pc = 0x1422ACu;
        goto label_1422ac;
    }
    ctx->pc = 0x1422A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1422ACu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1422A4u, 0x1422ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1422ACu;
label_1422ac:
    // 0x1422ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1422acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1422b0:
    // 0x1422b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1422b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1422b4:
    // 0x1422b4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1422b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1422b8:
    // 0x1422b8: 0x3e00008  jr          $ra
label_1422bc:
    if (ctx->pc == 0x1422BCu) {
        ctx->pc = 0x1422C0u;
        goto label_fallthrough_0x1422b8;
    }
    ctx->pc = 0x1422B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1422B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1422b8:
    ctx->pc = 0x1422C0u;
}
