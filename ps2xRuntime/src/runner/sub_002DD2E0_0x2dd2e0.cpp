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

// Function: sub_002DD2E0
// Address: 0x2dd2e0 - 0x2dd3b0
void sub_002DD2E0_0x2dd2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DD2E0_0x2dd2e0");
#endif

    switch (ctx->pc) {
        case 0x2dd318u: goto label_2dd318;
        case 0x2dd328u: goto label_2dd328;
        case 0x2dd338u: goto label_2dd338;
        case 0x2dd348u: goto label_2dd348;
        case 0x2dd358u: goto label_2dd358;
        case 0x2dd368u: goto label_2dd368;
        case 0x2dd37cu: goto label_2dd37c;
        default: break;
    }

    ctx->pc = 0x2dd2e0u;

    // 0x2dd2e0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2dd2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2dd2e4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2dd2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2dd2e8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2dd2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2dd2ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2dd2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2dd2f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2dd2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2dd2f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dd2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2dd2f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2dd2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2dd2fc: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x2dd2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x2dd300: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x2dd300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
    // 0x2dd304: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2dd304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2dd308: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2dd308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2dd30c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x2dd30cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2dd310: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2DD310u;
    SET_GPR_U32(ctx, 31, 0x2DD318u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2DD310u, 0x2DD318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD318u;
label_2dd318:
    // 0x2dd318: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2dd318u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd31c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2dd31cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd320: 0xc091aa8  jal         func_246AA0
    ctx->pc = 0x2DD320u;
    SET_GPR_U32(ctx, 31, 0x2DD328u);
    ctx->pc = 0x246AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246AA0u, 0x2DD320u, 0x2DD328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD328u;
label_2dd328:
    // 0x2dd328: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2dd328u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd32c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dd32cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd330: 0xc0411f0  jal         func_1047C0
    ctx->pc = 0x2DD330u;
    SET_GPR_U32(ctx, 31, 0x2DD338u);
    ctx->pc = 0x1047C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1047C0u, 0x2DD330u, 0x2DD338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD338u;
label_2dd338:
    // 0x2dd338: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2dd338u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd33c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2dd33cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd340: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2DD340u;
    {
        const bool branch_taken_0x2dd340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd340) {
            ctx->pc = 0x2DD380u;
            goto label_2dd380;
        }
    }
    ctx->pc = 0x2DD348u;
label_2dd348:
    // 0x2dd348: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dd348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd34c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2dd34cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd350: 0xc09748c  jal         func_25D230
    ctx->pc = 0x2DD350u;
    SET_GPR_U32(ctx, 31, 0x2DD358u);
    ctx->pc = 0x25D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D230u, 0x2DD350u, 0x2DD358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD358u;
label_2dd358:
    // 0x2dd358: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2dd358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dd35c: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x2dd35cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2dd360: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2DD360u;
    SET_GPR_U32(ctx, 31, 0x2DD368u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2DD360u, 0x2DD368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD368u;
label_2dd368:
    // 0x2dd368: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2dd368u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd36c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dd36cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd370: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x2dd370u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2dd374: 0xc0b82ac  jal         func_2E0AB0
    ctx->pc = 0x2DD374u;
    SET_GPR_U32(ctx, 31, 0x2DD37Cu);
    ctx->pc = 0x2E0AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0AB0u, 0x2DD374u, 0x2DD37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD37Cu;
label_2dd37c:
    // 0x2dd37c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2dd37cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2dd380:
    // 0x2dd380: 0x213182b  sltu        $v1, $s0, $s3
    ctx->pc = 0x2dd380u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x2dd384: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2DD384u;
    {
        const bool branch_taken_0x2dd384 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dd384) {
            ctx->pc = 0x2DD348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dd348;
        }
    }
    ctx->pc = 0x2DD38Cu;
    // 0x2dd38c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2dd38cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2dd390: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2dd390u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2dd394: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2dd394u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dd398: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2dd398u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dd39c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dd39cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dd3a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dd3a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dd3a4: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x2dd3a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2dd3a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DD3A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD3A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DD3B0u;
}
