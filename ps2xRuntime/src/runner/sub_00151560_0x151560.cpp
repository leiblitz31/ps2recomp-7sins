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

// Function: sub_00151560
// Address: 0x151560 - 0x151640
void sub_00151560_0x151560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151560_0x151560");
#endif

    switch (ctx->pc) {
        case 0x15158cu: goto label_15158c;
        case 0x1515a8u: goto label_1515a8;
        case 0x1515c4u: goto label_1515c4;
        case 0x1515d4u: goto label_1515d4;
        case 0x1515e8u: goto label_1515e8;
        case 0x1515f8u: goto label_1515f8;
        case 0x151610u: goto label_151610;
        case 0x151628u: goto label_151628;
        default: break;
    }

    ctx->pc = 0x151560u;

label_151560:
    // 0x151560: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x151560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x151564: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x151564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x151568: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x151568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15156c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15156cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x151570: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x151570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x151574: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x151574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x151578: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x151578u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x15157c: 0x2484bdf0  addiu       $a0, $a0, -0x4210
    ctx->pc = 0x15157cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950384));
    // 0x151580: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x151580u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x151584: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x151584u;
    SET_GPR_U32(ctx, 31, 0x15158Cu);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x151584u, 0x15158Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15158Cu;
label_15158c:
    // 0x15158c: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x15158Cu;
    {
        const bool branch_taken_0x15158c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15158c) {
            ctx->pc = 0x151628u;
            goto label_151628;
        }
    }
    ctx->pc = 0x151594u;
    // 0x151594: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x151594u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x151598: 0x2484bdf0  addiu       $a0, $a0, -0x4210
    ctx->pc = 0x151598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950384));
    // 0x15159c: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x15159cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1515a0: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x1515A0u;
    SET_GPR_U32(ctx, 31, 0x1515A8u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x1515A0u, 0x1515A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1515A8u;
label_1515a8:
    // 0x1515a8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1515a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1515ac: 0x14020005  bne         $zero, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1515ACu;
    {
        const bool branch_taken_0x1515ac = (GPR_U64(ctx, 0) != GPR_U64(ctx, 2));
        if (branch_taken_0x1515ac) {
            ctx->pc = 0x1515C4u;
            goto label_1515c4;
        }
    }
    ctx->pc = 0x1515B4u;
    // 0x1515b4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1515b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1515b8: 0x27858cc0  addiu       $a1, $gp, -0x7340
    ctx->pc = 0x1515b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937792));
    // 0x1515bc: 0xc054558  jal         func_151560
    ctx->pc = 0x1515BCu;
    SET_GPR_U32(ctx, 31, 0x1515C4u);
    ctx->pc = 0x151560u;
    goto label_151560;
    ctx->pc = 0x1515C4u;
label_1515c4:
    // 0x1515c4: 0x8f84ba90  lw          $a0, -0x4570($gp)
    ctx->pc = 0x1515c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949520)));
    // 0x1515c8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1515c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1515cc: 0xc085538  jal         func_2154E0
    ctx->pc = 0x1515CCu;
    SET_GPR_U32(ctx, 31, 0x1515D4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1515CCu, 0x1515D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1515D4u;
label_1515d4:
    // 0x1515d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1515d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1515d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1515d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1515dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1515dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1515e0: 0xc090fa8  jal         func_243EA0
    ctx->pc = 0x1515E0u;
    SET_GPR_U32(ctx, 31, 0x1515E8u);
    ctx->pc = 0x243EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243EA0u, 0x1515E0u, 0x1515E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1515E8u;
label_1515e8:
    // 0x1515e8: 0x8f84ba90  lw          $a0, -0x4570($gp)
    ctx->pc = 0x1515e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949520)));
    // 0x1515ec: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1515ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1515f0: 0xc085538  jal         func_2154E0
    ctx->pc = 0x1515F0u;
    SET_GPR_U32(ctx, 31, 0x1515F8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1515F0u, 0x1515F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1515F8u;
label_1515f8:
    // 0x1515f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1515f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1515fc: 0x1010000a  beq         $zero, $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1515FCu;
    {
        const bool branch_taken_0x1515fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        if (branch_taken_0x1515fc) {
            ctx->pc = 0x151628u;
            goto label_151628;
        }
    }
    ctx->pc = 0x151604u;
    // 0x151604: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x151604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151608: 0xc0a535c  jal         func_294D70
    ctx->pc = 0x151608u;
    SET_GPR_U32(ctx, 31, 0x151610u);
    ctx->pc = 0x294D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294D70u, 0x151608u, 0x151610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151610u;
label_151610:
    // 0x151610: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x151610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151614: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x151614u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x151618: 0x24a51640  addiu       $a1, $a1, 0x1640
    ctx->pc = 0x151618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5696));
    // 0x15161c: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x15161cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x151620: 0xc0e2628  jal         func_3898A0
    ctx->pc = 0x151620u;
    SET_GPR_U32(ctx, 31, 0x151628u);
    ctx->pc = 0x3898A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3898A0u, 0x151620u, 0x151628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151628u;
label_151628:
    // 0x151628: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x151628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15162c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15162cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x151630: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x151630u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x151634: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x151634u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x151638: 0x3e00008  jr          $ra
    ctx->pc = 0x151638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151640u;
}
