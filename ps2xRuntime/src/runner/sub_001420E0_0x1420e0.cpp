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

// Function: sub_001420E0
// Address: 0x1420e0 - 0x142140
void sub_001420E0_0x1420e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001420E0_0x1420e0");
#endif

    switch (ctx->pc) {
        case 0x1420e0u: goto label_1420e0;
        case 0x1420e4u: goto label_1420e4;
        case 0x1420e8u: goto label_1420e8;
        case 0x1420ecu: goto label_1420ec;
        case 0x1420f0u: goto label_1420f0;
        case 0x1420f4u: goto label_1420f4;
        case 0x1420f8u: goto label_1420f8;
        case 0x1420fcu: goto label_1420fc;
        case 0x142100u: goto label_142100;
        case 0x142104u: goto label_142104;
        case 0x142108u: goto label_142108;
        case 0x14210cu: goto label_14210c;
        case 0x142110u: goto label_142110;
        case 0x142114u: goto label_142114;
        case 0x142118u: goto label_142118;
        case 0x14211cu: goto label_14211c;
        case 0x142120u: goto label_142120;
        case 0x142124u: goto label_142124;
        case 0x142128u: goto label_142128;
        case 0x14212cu: goto label_14212c;
        case 0x142130u: goto label_142130;
        case 0x142134u: goto label_142134;
        case 0x142138u: goto label_142138;
        case 0x14213cu: goto label_14213c;
        default: break;
    }

    ctx->pc = 0x1420e0u;

label_1420e0:
    // 0x1420e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1420e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1420e4:
    // 0x1420e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1420e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1420e8:
    // 0x1420e8: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1420e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_1420ec:
    // 0x1420ec: 0x8f82ba84  lw          $v0, -0x457C($gp)
    ctx->pc = 0x1420ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949508)));
label_1420f0:
    // 0x1420f0: 0x1002000e  beq         $zero, $v0, . + 4 + (0xE << 2)
label_1420f4:
    if (ctx->pc == 0x1420F4u) {
        ctx->pc = 0x1420F8u;
        goto label_1420f8;
    }
    ctx->pc = 0x1420F0u;
    {
        const bool branch_taken_0x1420f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x1420f0) {
            ctx->pc = 0x14212Cu;
            goto label_14212c;
        }
    }
    ctx->pc = 0x1420F8u;
label_1420f8:
    // 0x1420f8: 0x8f82ba84  lw          $v0, -0x457C($gp)
    ctx->pc = 0x1420f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949508)));
label_1420fc:
    // 0x1420fc: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x1420fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_142100:
    // 0x142100: 0x1002000a  beq         $zero, $v0, . + 4 + (0xA << 2)
label_142104:
    if (ctx->pc == 0x142104u) {
        ctx->pc = 0x142108u;
        goto label_142108;
    }
    ctx->pc = 0x142100u;
    {
        const bool branch_taken_0x142100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x142100) {
            ctx->pc = 0x14212Cu;
            goto label_14212c;
        }
    }
    ctx->pc = 0x142108u;
label_142108:
    // 0x142108: 0x8f83ba84  lw          $v1, -0x457C($gp)
    ctx->pc = 0x142108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949508)));
label_14210c:
    // 0x14210c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x14210cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_142110:
    // 0x142110: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x142110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_142114:
    // 0x142114: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x142114u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_142118:
    // 0x142118: 0x8c640028  lw          $a0, 0x28($v1)
    ctx->pc = 0x142118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_14211c:
    // 0x14211c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x14211cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_142120:
    // 0x142120: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x142120u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_142124:
    // 0x142124: 0x320f809  jalr        $t9
label_142128:
    if (ctx->pc == 0x142128u) {
        ctx->pc = 0x14212Cu;
        goto label_14212c;
    }
    ctx->pc = 0x142124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x14212Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142124u, 0x14212Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14212Cu;
label_14212c:
    // 0x14212c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14212cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_142130:
    // 0x142130: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x142130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_142134:
    // 0x142134: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x142134u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_142138:
    // 0x142138: 0x3e00008  jr          $ra
label_14213c:
    if (ctx->pc == 0x14213Cu) {
        ctx->pc = 0x142140u;
        goto label_fallthrough_0x142138;
    }
    ctx->pc = 0x142138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x142138:
    ctx->pc = 0x142140u;
}
