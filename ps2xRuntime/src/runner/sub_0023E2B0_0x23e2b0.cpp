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

// Function: sub_0023E2B0
// Address: 0x23e2b0 - 0x23e360
void sub_0023E2B0_0x23e2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023E2B0_0x23e2b0");
#endif

    switch (ctx->pc) {
        case 0x23e2b0u: goto label_23e2b0;
        case 0x23e2b4u: goto label_23e2b4;
        case 0x23e2b8u: goto label_23e2b8;
        case 0x23e2bcu: goto label_23e2bc;
        case 0x23e2c0u: goto label_23e2c0;
        case 0x23e2c4u: goto label_23e2c4;
        case 0x23e2c8u: goto label_23e2c8;
        case 0x23e2ccu: goto label_23e2cc;
        case 0x23e2d0u: goto label_23e2d0;
        case 0x23e2d4u: goto label_23e2d4;
        case 0x23e2d8u: goto label_23e2d8;
        case 0x23e2dcu: goto label_23e2dc;
        case 0x23e2e0u: goto label_23e2e0;
        case 0x23e2e4u: goto label_23e2e4;
        case 0x23e2e8u: goto label_23e2e8;
        case 0x23e2ecu: goto label_23e2ec;
        case 0x23e2f0u: goto label_23e2f0;
        case 0x23e2f4u: goto label_23e2f4;
        case 0x23e2f8u: goto label_23e2f8;
        case 0x23e2fcu: goto label_23e2fc;
        case 0x23e300u: goto label_23e300;
        case 0x23e304u: goto label_23e304;
        case 0x23e308u: goto label_23e308;
        case 0x23e30cu: goto label_23e30c;
        case 0x23e310u: goto label_23e310;
        case 0x23e314u: goto label_23e314;
        case 0x23e318u: goto label_23e318;
        case 0x23e31cu: goto label_23e31c;
        case 0x23e320u: goto label_23e320;
        case 0x23e324u: goto label_23e324;
        case 0x23e328u: goto label_23e328;
        case 0x23e32cu: goto label_23e32c;
        case 0x23e330u: goto label_23e330;
        case 0x23e334u: goto label_23e334;
        case 0x23e338u: goto label_23e338;
        case 0x23e33cu: goto label_23e33c;
        case 0x23e340u: goto label_23e340;
        case 0x23e344u: goto label_23e344;
        case 0x23e348u: goto label_23e348;
        case 0x23e34cu: goto label_23e34c;
        case 0x23e350u: goto label_23e350;
        case 0x23e354u: goto label_23e354;
        case 0x23e358u: goto label_23e358;
        case 0x23e35cu: goto label_23e35c;
        default: break;
    }

    ctx->pc = 0x23e2b0u;

label_23e2b0:
    // 0x23e2b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x23e2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_23e2b4:
    // 0x23e2b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x23e2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_23e2b8:
    // 0x23e2b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23e2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_23e2bc:
    // 0x23e2bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23e2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_23e2c0:
    // 0x23e2c0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x23e2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_23e2c4:
    // 0x23e2c4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x23e2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_23e2c8:
    // 0x23e2c8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_23e2cc:
    if (ctx->pc == 0x23E2CCu) {
        ctx->pc = 0x23E2D0u;
        goto label_23e2d0;
    }
    ctx->pc = 0x23E2C8u;
    {
        const bool branch_taken_0x23e2c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e2c8) {
            ctx->pc = 0x23E2D8u;
            goto label_23e2d8;
        }
    }
    ctx->pc = 0x23E2D0u;
label_23e2d0:
    // 0x23e2d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23e2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23e2d4:
    // 0x23e2d4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x23e2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_23e2d8:
    // 0x23e2d8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x23e2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_23e2dc:
    // 0x23e2dc: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x23e2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_23e2e0:
    // 0x23e2e0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x23e2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_23e2e4:
    // 0x23e2e4: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x23e2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_23e2e8:
    // 0x23e2e8: 0xc119b68  jal         func_466DA0
label_23e2ec:
    if (ctx->pc == 0x23E2ECu) {
        ctx->pc = 0x23E2F0u;
        goto label_23e2f0;
    }
    ctx->pc = 0x23E2E8u;
    SET_GPR_U32(ctx, 31, 0x23E2F0u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x23E2E8u, 0x23E2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E2F0u;
label_23e2f0:
    // 0x23e2f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x23e2f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23e2f4:
    // 0x23e2f4: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_23e2f8:
    if (ctx->pc == 0x23E2F8u) {
        ctx->pc = 0x23E2FCu;
        goto label_23e2fc;
    }
    ctx->pc = 0x23E2F4u;
    {
        const bool branch_taken_0x23e2f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e2f4) {
            ctx->pc = 0x23E308u;
            goto label_23e308;
        }
    }
    ctx->pc = 0x23E2FCu;
label_23e2fc:
    // 0x23e2fc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x23e2fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23e300:
    // 0x23e300: 0x1000000e  b           . + 4 + (0xE << 2)
label_23e304:
    if (ctx->pc == 0x23E304u) {
        ctx->pc = 0x23E308u;
        goto label_23e308;
    }
    ctx->pc = 0x23E300u;
    {
        const bool branch_taken_0x23e300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e300) {
            ctx->pc = 0x23E33Cu;
            goto label_23e33c;
        }
    }
    ctx->pc = 0x23E308u;
label_23e308:
    // 0x23e308: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x23e308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23e30c:
    // 0x23e30c: 0xc0ba088  jal         func_2E8220
label_23e310:
    if (ctx->pc == 0x23E310u) {
        ctx->pc = 0x23E314u;
        goto label_23e314;
    }
    ctx->pc = 0x23E30Cu;
    SET_GPR_U32(ctx, 31, 0x23E314u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x23E30Cu, 0x23E314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E314u;
label_23e314:
    // 0x23e314: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23e314u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23e318:
    // 0x23e318: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23e318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23e31c:
    // 0x23e31c: 0xc0ba088  jal         func_2E8220
label_23e320:
    if (ctx->pc == 0x23E320u) {
        ctx->pc = 0x23E324u;
        goto label_23e324;
    }
    ctx->pc = 0x23E31Cu;
    SET_GPR_U32(ctx, 31, 0x23E324u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x23E31Cu, 0x23E324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E324u;
label_23e324:
    // 0x23e324: 0x1200ffec  beqz        $s0, . + 4 + (-0x14 << 2)
label_23e328:
    if (ctx->pc == 0x23E328u) {
        ctx->pc = 0x23E32Cu;
        goto label_23e32c;
    }
    ctx->pc = 0x23E324u;
    {
        const bool branch_taken_0x23e324 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e324) {
            ctx->pc = 0x23E2D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23e2d8;
        }
    }
    ctx->pc = 0x23E32Cu;
label_23e32c:
    // 0x23e32c: 0x200f809  jalr        $s0
label_23e330:
    if (ctx->pc == 0x23E330u) {
        ctx->pc = 0x23E334u;
        goto label_23e334;
    }
    ctx->pc = 0x23E32Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x23E334u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E32Cu, 0x23E334u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23E334u;
label_23e334:
    // 0x23e334: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_23e338:
    if (ctx->pc == 0x23E338u) {
        ctx->pc = 0x23E33Cu;
        goto label_23e33c;
    }
    ctx->pc = 0x23E334u;
    {
        const bool branch_taken_0x23e334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e334) {
            ctx->pc = 0x23E2D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23e2d8;
        }
    }
    ctx->pc = 0x23E33Cu;
label_23e33c:
    // 0x23e33c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23e33cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23e340:
    // 0x23e340: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23e340u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_23e344:
    // 0x23e344: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23e344u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_23e348:
    // 0x23e348: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x23e348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_23e34c:
    // 0x23e34c: 0x3e00008  jr          $ra
label_23e350:
    if (ctx->pc == 0x23E350u) {
        ctx->pc = 0x23E354u;
        goto label_23e354;
    }
    ctx->pc = 0x23E34Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E34Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23E354u;
label_23e354:
    // 0x23e354: 0x0  nop
    ctx->pc = 0x23e354u;
    // NOP
label_23e358:
    // 0x23e358: 0x0  nop
    ctx->pc = 0x23e358u;
    // NOP
label_23e35c:
    // 0x23e35c: 0x0  nop
    ctx->pc = 0x23e35cu;
    // NOP
    ctx->pc = 0x23e360u;
}
