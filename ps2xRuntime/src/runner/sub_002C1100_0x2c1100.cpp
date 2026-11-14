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

// Function: sub_002C1100
// Address: 0x2c1100 - 0x2c1180
void sub_002C1100_0x2c1100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C1100_0x2c1100");
#endif

    switch (ctx->pc) {
        case 0x2c1134u: goto label_2c1134;
        case 0x2c1144u: goto label_2c1144;
        case 0x2c1164u: goto label_2c1164;
        default: break;
    }

    ctx->pc = 0x2c1100u;

    // 0x2c1100: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c1100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c1104: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c1104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c1108: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2c1108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2c110c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2c110cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2c1110: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2c1110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c1114: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2C1114u;
    {
        const bool branch_taken_0x2c1114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1114) {
            ctx->pc = 0x2C1164u;
            goto label_2c1164;
        }
    }
    ctx->pc = 0x2C111Cu;
    // 0x2c111c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2c111cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c1120: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2c1120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c1124: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2c1124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c1128: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2c1128u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c112c: 0xc0b048c  jal         func_2C1230
    ctx->pc = 0x2C112Cu;
    SET_GPR_U32(ctx, 31, 0x2C1134u);
    ctx->pc = 0x2C1230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1230u, 0x2C112Cu, 0x2C1134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1134u;
label_2c1134:
    // 0x2c1134: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2c1134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c1138: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c1138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c113c: 0xc0b0460  jal         func_2C1180
    ctx->pc = 0x2C113Cu;
    SET_GPR_U32(ctx, 31, 0x2C1144u);
    ctx->pc = 0x2C1180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1180u, 0x2C113Cu, 0x2C1144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1144u;
label_2c1144:
    // 0x2c1144: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2c1144u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c1148: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2c1148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2c114c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c114cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c1150: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C1150u;
    {
        const bool branch_taken_0x2c1150 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c1150) {
            ctx->pc = 0x2C1164u;
            goto label_2c1164;
        }
    }
    ctx->pc = 0x2C1158u;
    // 0x2c1158: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2c1158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c115c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2C115Cu;
    SET_GPR_U32(ctx, 31, 0x2C1164u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2C115Cu, 0x2C1164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1164u;
label_2c1164:
    // 0x2c1164: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2c1164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c1168: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c1168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c116c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2c116cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2c1170: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C1170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C1178u;
    // 0x2c1178: 0x0  nop
    ctx->pc = 0x2c1178u;
    // NOP
    // 0x2c117c: 0x0  nop
    ctx->pc = 0x2c117cu;
    // NOP
    ctx->pc = 0x2c1180u;
}
