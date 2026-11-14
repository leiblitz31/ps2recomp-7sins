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

// Function: sub_00142200
// Address: 0x142200 - 0x142260
void sub_00142200_0x142200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00142200_0x142200");
#endif

    switch (ctx->pc) {
        case 0x142200u: goto label_142200;
        case 0x142204u: goto label_142204;
        case 0x142208u: goto label_142208;
        case 0x14220cu: goto label_14220c;
        case 0x142210u: goto label_142210;
        case 0x142214u: goto label_142214;
        case 0x142218u: goto label_142218;
        case 0x14221cu: goto label_14221c;
        case 0x142220u: goto label_142220;
        case 0x142224u: goto label_142224;
        case 0x142228u: goto label_142228;
        case 0x14222cu: goto label_14222c;
        case 0x142230u: goto label_142230;
        case 0x142234u: goto label_142234;
        case 0x142238u: goto label_142238;
        case 0x14223cu: goto label_14223c;
        case 0x142240u: goto label_142240;
        case 0x142244u: goto label_142244;
        case 0x142248u: goto label_142248;
        case 0x14224cu: goto label_14224c;
        case 0x142250u: goto label_142250;
        case 0x142254u: goto label_142254;
        case 0x142258u: goto label_142258;
        case 0x14225cu: goto label_14225c;
        default: break;
    }

    ctx->pc = 0x142200u;

label_142200:
    // 0x142200: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x142200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_142204:
    // 0x142204: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x142204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_142208:
    // 0x142208: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x142208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_14220c:
    // 0x14220c: 0x8f82ba84  lw          $v0, -0x457C($gp)
    ctx->pc = 0x14220cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949508)));
label_142210:
    // 0x142210: 0x1002000e  beq         $zero, $v0, . + 4 + (0xE << 2)
label_142214:
    if (ctx->pc == 0x142214u) {
        ctx->pc = 0x142218u;
        goto label_142218;
    }
    ctx->pc = 0x142210u;
    {
        const bool branch_taken_0x142210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x142210) {
            ctx->pc = 0x14224Cu;
            goto label_14224c;
        }
    }
    ctx->pc = 0x142218u;
label_142218:
    // 0x142218: 0x8f82ba84  lw          $v0, -0x457C($gp)
    ctx->pc = 0x142218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949508)));
label_14221c:
    // 0x14221c: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x14221cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_142220:
    // 0x142220: 0x1002000a  beq         $zero, $v0, . + 4 + (0xA << 2)
label_142224:
    if (ctx->pc == 0x142224u) {
        ctx->pc = 0x142228u;
        goto label_142228;
    }
    ctx->pc = 0x142220u;
    {
        const bool branch_taken_0x142220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x142220) {
            ctx->pc = 0x14224Cu;
            goto label_14224c;
        }
    }
    ctx->pc = 0x142228u;
label_142228:
    // 0x142228: 0x8f83ba84  lw          $v1, -0x457C($gp)
    ctx->pc = 0x142228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949508)));
label_14222c:
    // 0x14222c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x14222cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_142230:
    // 0x142230: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x142230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_142234:
    // 0x142234: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x142234u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_142238:
    // 0x142238: 0x8c640028  lw          $a0, 0x28($v1)
    ctx->pc = 0x142238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_14223c:
    // 0x14223c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x14223cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_142240:
    // 0x142240: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x142240u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_142244:
    // 0x142244: 0x320f809  jalr        $t9
label_142248:
    if (ctx->pc == 0x142248u) {
        ctx->pc = 0x14224Cu;
        goto label_14224c;
    }
    ctx->pc = 0x142244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x14224Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142244u, 0x14224Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14224Cu;
label_14224c:
    // 0x14224c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14224cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_142250:
    // 0x142250: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x142250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_142254:
    // 0x142254: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x142254u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_142258:
    // 0x142258: 0x3e00008  jr          $ra
label_14225c:
    if (ctx->pc == 0x14225Cu) {
        ctx->pc = 0x142260u;
        goto label_fallthrough_0x142258;
    }
    ctx->pc = 0x142258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x142258:
    ctx->pc = 0x142260u;
}
