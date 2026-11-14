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

// Function: sub_00142020
// Address: 0x142020 - 0x142080
void sub_00142020_0x142020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00142020_0x142020");
#endif

    switch (ctx->pc) {
        case 0x142020u: goto label_142020;
        case 0x142024u: goto label_142024;
        case 0x142028u: goto label_142028;
        case 0x14202cu: goto label_14202c;
        case 0x142030u: goto label_142030;
        case 0x142034u: goto label_142034;
        case 0x142038u: goto label_142038;
        case 0x14203cu: goto label_14203c;
        case 0x142040u: goto label_142040;
        case 0x142044u: goto label_142044;
        case 0x142048u: goto label_142048;
        case 0x14204cu: goto label_14204c;
        case 0x142050u: goto label_142050;
        case 0x142054u: goto label_142054;
        case 0x142058u: goto label_142058;
        case 0x14205cu: goto label_14205c;
        case 0x142060u: goto label_142060;
        case 0x142064u: goto label_142064;
        case 0x142068u: goto label_142068;
        case 0x14206cu: goto label_14206c;
        case 0x142070u: goto label_142070;
        case 0x142074u: goto label_142074;
        case 0x142078u: goto label_142078;
        case 0x14207cu: goto label_14207c;
        default: break;
    }

    ctx->pc = 0x142020u;

label_142020:
    // 0x142020: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x142020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_142024:
    // 0x142024: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x142024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_142028:
    // 0x142028: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x142028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_14202c:
    // 0x14202c: 0x8f82ba84  lw          $v0, -0x457C($gp)
    ctx->pc = 0x14202cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949508)));
label_142030:
    // 0x142030: 0x1002000e  beq         $zero, $v0, . + 4 + (0xE << 2)
label_142034:
    if (ctx->pc == 0x142034u) {
        ctx->pc = 0x142038u;
        goto label_142038;
    }
    ctx->pc = 0x142030u;
    {
        const bool branch_taken_0x142030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x142030) {
            ctx->pc = 0x14206Cu;
            goto label_14206c;
        }
    }
    ctx->pc = 0x142038u;
label_142038:
    // 0x142038: 0x8f82ba84  lw          $v0, -0x457C($gp)
    ctx->pc = 0x142038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949508)));
label_14203c:
    // 0x14203c: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x14203cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_142040:
    // 0x142040: 0x1002000a  beq         $zero, $v0, . + 4 + (0xA << 2)
label_142044:
    if (ctx->pc == 0x142044u) {
        ctx->pc = 0x142048u;
        goto label_142048;
    }
    ctx->pc = 0x142040u;
    {
        const bool branch_taken_0x142040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x142040) {
            ctx->pc = 0x14206Cu;
            goto label_14206c;
        }
    }
    ctx->pc = 0x142048u;
label_142048:
    // 0x142048: 0x8f83ba84  lw          $v1, -0x457C($gp)
    ctx->pc = 0x142048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949508)));
label_14204c:
    // 0x14204c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x14204cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_142050:
    // 0x142050: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x142050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_142054:
    // 0x142054: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x142054u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_142058:
    // 0x142058: 0x8c640028  lw          $a0, 0x28($v1)
    ctx->pc = 0x142058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_14205c:
    // 0x14205c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x14205cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_142060:
    // 0x142060: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x142060u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_142064:
    // 0x142064: 0x320f809  jalr        $t9
label_142068:
    if (ctx->pc == 0x142068u) {
        ctx->pc = 0x14206Cu;
        goto label_14206c;
    }
    ctx->pc = 0x142064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x14206Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142064u, 0x14206Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14206Cu;
label_14206c:
    // 0x14206c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14206cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_142070:
    // 0x142070: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x142070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_142074:
    // 0x142074: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x142074u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_142078:
    // 0x142078: 0x3e00008  jr          $ra
label_14207c:
    if (ctx->pc == 0x14207Cu) {
        ctx->pc = 0x142080u;
        goto label_fallthrough_0x142078;
    }
    ctx->pc = 0x142078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x142078:
    ctx->pc = 0x142080u;
}
