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

// Function: sub_00187320
// Address: 0x187320 - 0x1873c0
void sub_00187320_0x187320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187320_0x187320");
#endif

    switch (ctx->pc) {
        case 0x187320u: goto label_187320;
        case 0x187324u: goto label_187324;
        case 0x187328u: goto label_187328;
        case 0x18732cu: goto label_18732c;
        case 0x187330u: goto label_187330;
        case 0x187334u: goto label_187334;
        case 0x187338u: goto label_187338;
        case 0x18733cu: goto label_18733c;
        case 0x187340u: goto label_187340;
        case 0x187344u: goto label_187344;
        case 0x187348u: goto label_187348;
        case 0x18734cu: goto label_18734c;
        case 0x187350u: goto label_187350;
        case 0x187354u: goto label_187354;
        case 0x187358u: goto label_187358;
        case 0x18735cu: goto label_18735c;
        case 0x187360u: goto label_187360;
        case 0x187364u: goto label_187364;
        case 0x187368u: goto label_187368;
        case 0x18736cu: goto label_18736c;
        case 0x187370u: goto label_187370;
        case 0x187374u: goto label_187374;
        case 0x187378u: goto label_187378;
        case 0x18737cu: goto label_18737c;
        case 0x187380u: goto label_187380;
        case 0x187384u: goto label_187384;
        case 0x187388u: goto label_187388;
        case 0x18738cu: goto label_18738c;
        case 0x187390u: goto label_187390;
        case 0x187394u: goto label_187394;
        case 0x187398u: goto label_187398;
        case 0x18739cu: goto label_18739c;
        case 0x1873a0u: goto label_1873a0;
        case 0x1873a4u: goto label_1873a4;
        case 0x1873a8u: goto label_1873a8;
        case 0x1873acu: goto label_1873ac;
        case 0x1873b0u: goto label_1873b0;
        case 0x1873b4u: goto label_1873b4;
        case 0x1873b8u: goto label_1873b8;
        case 0x1873bcu: goto label_1873bc;
        default: break;
    }

    ctx->pc = 0x187320u;

label_187320:
    // 0x187320: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x187320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_187324:
    // 0x187324: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x187324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_187328:
    // 0x187328: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x187328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_18732c:
    // 0x18732c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18732cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_187330:
    // 0x187330: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x187330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_187334:
    // 0x187334: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x187334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_187338:
    // 0x187338: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_18733c:
    if (ctx->pc == 0x18733Cu) {
        ctx->pc = 0x187340u;
        goto label_187340;
    }
    ctx->pc = 0x187338u;
    {
        const bool branch_taken_0x187338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x187338) {
            ctx->pc = 0x187348u;
            goto label_187348;
        }
    }
    ctx->pc = 0x187340u;
label_187340:
    // 0x187340: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x187340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_187344:
    // 0x187344: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x187344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_187348:
    // 0x187348: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x187348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_18734c:
    // 0x18734c: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x18734cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_187350:
    // 0x187350: 0xc119b68  jal         func_466DA0
label_187354:
    if (ctx->pc == 0x187354u) {
        ctx->pc = 0x187358u;
        goto label_187358;
    }
    ctx->pc = 0x187350u;
    SET_GPR_U32(ctx, 31, 0x187358u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x187350u, 0x187358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187358u;
label_187358:
    // 0x187358: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x187358u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18735c:
    // 0x18735c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_187360:
    if (ctx->pc == 0x187360u) {
        ctx->pc = 0x187364u;
        goto label_187364;
    }
    ctx->pc = 0x18735Cu;
    {
        const bool branch_taken_0x18735c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x18735c) {
            ctx->pc = 0x187370u;
            goto label_187370;
        }
    }
    ctx->pc = 0x187364u;
label_187364:
    // 0x187364: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x187364u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_187368:
    // 0x187368: 0x1000000e  b           . + 4 + (0xE << 2)
label_18736c:
    if (ctx->pc == 0x18736Cu) {
        ctx->pc = 0x187370u;
        goto label_187370;
    }
    ctx->pc = 0x187368u;
    {
        const bool branch_taken_0x187368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187368) {
            ctx->pc = 0x1873A4u;
            goto label_1873a4;
        }
    }
    ctx->pc = 0x187370u;
label_187370:
    // 0x187370: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x187370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_187374:
    // 0x187374: 0xc0ba088  jal         func_2E8220
label_187378:
    if (ctx->pc == 0x187378u) {
        ctx->pc = 0x18737Cu;
        goto label_18737c;
    }
    ctx->pc = 0x187374u;
    SET_GPR_U32(ctx, 31, 0x18737Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x187374u, 0x18737Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18737Cu;
label_18737c:
    // 0x18737c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18737cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_187380:
    // 0x187380: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x187380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_187384:
    // 0x187384: 0xc0ba088  jal         func_2E8220
label_187388:
    if (ctx->pc == 0x187388u) {
        ctx->pc = 0x18738Cu;
        goto label_18738c;
    }
    ctx->pc = 0x187384u;
    SET_GPR_U32(ctx, 31, 0x18738Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x187384u, 0x18738Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18738Cu;
label_18738c:
    // 0x18738c: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_187390:
    if (ctx->pc == 0x187390u) {
        ctx->pc = 0x187394u;
        goto label_187394;
    }
    ctx->pc = 0x18738Cu;
    {
        const bool branch_taken_0x18738c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x18738c) {
            ctx->pc = 0x187348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187348;
        }
    }
    ctx->pc = 0x187394u;
label_187394:
    // 0x187394: 0x200f809  jalr        $s0
label_187398:
    if (ctx->pc == 0x187398u) {
        ctx->pc = 0x18739Cu;
        goto label_18739c;
    }
    ctx->pc = 0x187394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x18739Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187394u, 0x18739Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18739Cu;
label_18739c:
    // 0x18739c: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_1873a0:
    if (ctx->pc == 0x1873A0u) {
        ctx->pc = 0x1873A4u;
        goto label_1873a4;
    }
    ctx->pc = 0x18739Cu;
    {
        const bool branch_taken_0x18739c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18739c) {
            ctx->pc = 0x187348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187348;
        }
    }
    ctx->pc = 0x1873A4u;
label_1873a4:
    // 0x1873a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1873a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1873a8:
    // 0x1873a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1873a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1873ac:
    // 0x1873ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1873acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1873b0:
    // 0x1873b0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1873b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1873b4:
    // 0x1873b4: 0x3e00008  jr          $ra
label_1873b8:
    if (ctx->pc == 0x1873B8u) {
        ctx->pc = 0x1873BCu;
        goto label_1873bc;
    }
    ctx->pc = 0x1873B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1873B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1873BCu;
label_1873bc:
    // 0x1873bc: 0x0  nop
    ctx->pc = 0x1873bcu;
    // NOP
    ctx->pc = 0x1873c0u;
}
