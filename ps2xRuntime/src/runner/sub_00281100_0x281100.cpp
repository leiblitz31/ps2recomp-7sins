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

// Function: sub_00281100
// Address: 0x281100 - 0x2811c0
void sub_00281100_0x281100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281100_0x281100");
#endif

    switch (ctx->pc) {
        case 0x281120u: goto label_281120;
        case 0x281134u: goto label_281134;
        case 0x281154u: goto label_281154;
        case 0x281168u: goto label_281168;
        case 0x281184u: goto label_281184;
        case 0x2811a0u: goto label_2811a0;
        default: break;
    }

    ctx->pc = 0x281100u;

    // 0x281100: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x281100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x281104: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x281104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x281108: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x281108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28110c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x28110cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x281110: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x281110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x281114: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x281114u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281118: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x281118u;
    {
        const bool branch_taken_0x281118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x281118) {
            ctx->pc = 0x281174u;
            goto label_281174;
        }
    }
    ctx->pc = 0x281120u;
label_281120:
    // 0x281120: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x281120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x281124: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x281124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x281128: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x281128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28112c: 0xc04e51c  jal         func_139470
    ctx->pc = 0x28112Cu;
    SET_GPR_U32(ctx, 31, 0x281134u);
    ctx->pc = 0x139470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139470u, 0x28112Cu, 0x281134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281134u;
label_281134:
    // 0x281134: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x281134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x281138: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x281138u;
    {
        const bool branch_taken_0x281138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x281138) {
            ctx->pc = 0x281170u;
            goto label_281170;
        }
    }
    ctx->pc = 0x281140u;
    // 0x281140: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x281140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x281144: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x281144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x281148: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x281148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28114c: 0xc04e51c  jal         func_139470
    ctx->pc = 0x28114Cu;
    SET_GPR_U32(ctx, 31, 0x281154u);
    ctx->pc = 0x139470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139470u, 0x28114Cu, 0x281154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281154u;
label_281154:
    // 0x281154: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x281154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x281158: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x281158u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28115c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x28115cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x281160: 0xc0a02a4  jal         func_280A90
    ctx->pc = 0x281160u;
    SET_GPR_U32(ctx, 31, 0x281168u);
    ctx->pc = 0x280A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280A90u, 0x281160u, 0x281168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281168u;
label_281168:
    // 0x281168: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x281168u;
    {
        const bool branch_taken_0x281168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x281168) {
            ctx->pc = 0x2811A4u;
            goto label_2811a4;
        }
    }
    ctx->pc = 0x281170u;
label_281170:
    // 0x281170: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x281170u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_281174:
    // 0x281174: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x281174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x281178: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x281178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x28117c: 0xc04e50c  jal         func_139430
    ctx->pc = 0x28117Cu;
    SET_GPR_U32(ctx, 31, 0x281184u);
    ctx->pc = 0x139430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139430u, 0x28117Cu, 0x281184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281184u;
label_281184:
    // 0x281184: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x281184u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x281188: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x281188u;
    {
        const bool branch_taken_0x281188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x281188) {
            ctx->pc = 0x281120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_281120;
        }
    }
    ctx->pc = 0x281190u;
    // 0x281190: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x281190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x281194: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x281194u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x281198: 0xc0a0294  jal         func_280A50
    ctx->pc = 0x281198u;
    SET_GPR_U32(ctx, 31, 0x2811A0u);
    ctx->pc = 0x280A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280A50u, 0x281198u, 0x2811A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2811A0u;
label_2811a0:
    // 0x2811a0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2811a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2811a4:
    // 0x2811a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2811a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2811a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2811a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2811ac: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2811acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2811b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2811B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2811B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2811B8u;
    // 0x2811b8: 0x0  nop
    ctx->pc = 0x2811b8u;
    // NOP
    // 0x2811bc: 0x0  nop
    ctx->pc = 0x2811bcu;
    // NOP
    ctx->pc = 0x2811c0u;
}
