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

// Function: sub_00142320
// Address: 0x142320 - 0x142380
void sub_00142320_0x142320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00142320_0x142320");
#endif

    switch (ctx->pc) {
        case 0x142320u: goto label_142320;
        case 0x142324u: goto label_142324;
        case 0x142328u: goto label_142328;
        case 0x14232cu: goto label_14232c;
        case 0x142330u: goto label_142330;
        case 0x142334u: goto label_142334;
        case 0x142338u: goto label_142338;
        case 0x14233cu: goto label_14233c;
        case 0x142340u: goto label_142340;
        case 0x142344u: goto label_142344;
        case 0x142348u: goto label_142348;
        case 0x14234cu: goto label_14234c;
        case 0x142350u: goto label_142350;
        case 0x142354u: goto label_142354;
        case 0x142358u: goto label_142358;
        case 0x14235cu: goto label_14235c;
        case 0x142360u: goto label_142360;
        case 0x142364u: goto label_142364;
        case 0x142368u: goto label_142368;
        case 0x14236cu: goto label_14236c;
        case 0x142370u: goto label_142370;
        case 0x142374u: goto label_142374;
        case 0x142378u: goto label_142378;
        case 0x14237cu: goto label_14237c;
        default: break;
    }

    ctx->pc = 0x142320u;

label_142320:
    // 0x142320: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x142320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_142324:
    // 0x142324: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x142324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_142328:
    // 0x142328: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x142328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_14232c:
    // 0x14232c: 0x8f82ba84  lw          $v0, -0x457C($gp)
    ctx->pc = 0x14232cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949508)));
label_142330:
    // 0x142330: 0x1002000e  beq         $zero, $v0, . + 4 + (0xE << 2)
label_142334:
    if (ctx->pc == 0x142334u) {
        ctx->pc = 0x142338u;
        goto label_142338;
    }
    ctx->pc = 0x142330u;
    {
        const bool branch_taken_0x142330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x142330) {
            ctx->pc = 0x14236Cu;
            goto label_14236c;
        }
    }
    ctx->pc = 0x142338u;
label_142338:
    // 0x142338: 0x8f82ba84  lw          $v0, -0x457C($gp)
    ctx->pc = 0x142338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949508)));
label_14233c:
    // 0x14233c: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x14233cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_142340:
    // 0x142340: 0x1002000a  beq         $zero, $v0, . + 4 + (0xA << 2)
label_142344:
    if (ctx->pc == 0x142344u) {
        ctx->pc = 0x142348u;
        goto label_142348;
    }
    ctx->pc = 0x142340u;
    {
        const bool branch_taken_0x142340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x142340) {
            ctx->pc = 0x14236Cu;
            goto label_14236c;
        }
    }
    ctx->pc = 0x142348u;
label_142348:
    // 0x142348: 0x8f83ba84  lw          $v1, -0x457C($gp)
    ctx->pc = 0x142348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949508)));
label_14234c:
    // 0x14234c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x14234cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_142350:
    // 0x142350: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x142350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_142354:
    // 0x142354: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x142354u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_142358:
    // 0x142358: 0x8c640028  lw          $a0, 0x28($v1)
    ctx->pc = 0x142358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_14235c:
    // 0x14235c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x14235cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_142360:
    // 0x142360: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x142360u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_142364:
    // 0x142364: 0x320f809  jalr        $t9
label_142368:
    if (ctx->pc == 0x142368u) {
        ctx->pc = 0x14236Cu;
        goto label_14236c;
    }
    ctx->pc = 0x142364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x14236Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142364u, 0x14236Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14236Cu;
label_14236c:
    // 0x14236c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14236cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_142370:
    // 0x142370: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x142370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_142374:
    // 0x142374: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x142374u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_142378:
    // 0x142378: 0x3e00008  jr          $ra
label_14237c:
    if (ctx->pc == 0x14237Cu) {
        ctx->pc = 0x142380u;
        goto label_fallthrough_0x142378;
    }
    ctx->pc = 0x142378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x142378:
    ctx->pc = 0x142380u;
}
