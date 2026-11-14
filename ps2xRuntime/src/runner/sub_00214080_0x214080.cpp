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

// Function: sub_00214080
// Address: 0x214080 - 0x214170
void sub_00214080_0x214080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214080_0x214080");
#endif

    switch (ctx->pc) {
        case 0x2140b0u: goto label_2140b0;
        case 0x2140c0u: goto label_2140c0;
        case 0x2140d8u: goto label_2140d8;
        case 0x2140f0u: goto label_2140f0;
        case 0x2140fcu: goto label_2140fc;
        case 0x21410cu: goto label_21410c;
        case 0x214120u: goto label_214120;
        case 0x214130u: goto label_214130;
        case 0x214148u: goto label_214148;
        case 0x214154u: goto label_214154;
        default: break;
    }

    ctx->pc = 0x214080u;

    // 0x214080: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x214080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x214084: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x214084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x214088: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x214088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x21408c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21408cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x214090: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x214090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x214094: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x214094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x214098: 0x8f82bb6c  lw          $v0, -0x4494($gp)
    ctx->pc = 0x214098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949740)));
    // 0x21409c: 0x14020014  bne         $zero, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x21409Cu;
    {
        const bool branch_taken_0x21409c = (GPR_U64(ctx, 0) != GPR_U64(ctx, 2));
        if (branch_taken_0x21409c) {
            ctx->pc = 0x2140F0u;
            goto label_2140f0;
        }
    }
    ctx->pc = 0x2140A4u;
    // 0x2140a4: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2140a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2140a8: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x2140A8u;
    SET_GPR_U32(ctx, 31, 0x2140B0u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2140A8u, 0x2140B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2140B0u;
label_2140b0:
    // 0x2140b0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2140b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2140b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2140b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2140b8: 0xc0400e0  jal         func_100380
    ctx->pc = 0x2140B8u;
    SET_GPR_U32(ctx, 31, 0x2140C0u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2140B8u, 0x2140C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2140C0u;
label_2140c0:
    // 0x2140c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2140c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2140c4: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2140C4u;
    {
        const bool branch_taken_0x2140c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2140c4) {
            ctx->pc = 0x2140DCu;
            goto label_2140dc;
        }
    }
    ctx->pc = 0x2140CCu;
    // 0x2140cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2140ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2140d0: 0xc085160  jal         func_214580
    ctx->pc = 0x2140D0u;
    SET_GPR_U32(ctx, 31, 0x2140D8u);
    ctx->pc = 0x214580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214580u, 0x2140D0u, 0x2140D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2140D8u;
label_2140d8:
    // 0x2140d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2140d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2140dc:
    // 0x2140dc: 0xaf90bb6c  sw          $s0, -0x4494($gp)
    ctx->pc = 0x2140dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949740), GPR_U32(ctx, 16));
    // 0x2140e0: 0x8f84bb6c  lw          $a0, -0x4494($gp)
    ctx->pc = 0x2140e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949740)));
    // 0x2140e4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2140e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2140e8: 0xc0853f0  jal         func_214FC0
    ctx->pc = 0x2140E8u;
    SET_GPR_U32(ctx, 31, 0x2140F0u);
    ctx->pc = 0x214FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214FC0u, 0x2140E8u, 0x2140F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2140F0u;
label_2140f0:
    // 0x2140f0: 0x8f84bb6c  lw          $a0, -0x4494($gp)
    ctx->pc = 0x2140f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949740)));
    // 0x2140f4: 0xc041008  jal         func_104020
    ctx->pc = 0x2140F4u;
    SET_GPR_U32(ctx, 31, 0x2140FCu);
    ctx->pc = 0x104020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104020u, 0x2140F4u, 0x2140FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2140FCu;
label_2140fc:
    // 0x2140fc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2140fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214100: 0x8f84bb6c  lw          $a0, -0x4494($gp)
    ctx->pc = 0x214100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949740)));
    // 0x214104: 0xc041000  jal         func_104000
    ctx->pc = 0x214104u;
    SET_GPR_U32(ctx, 31, 0x21410Cu);
    ctx->pc = 0x104000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104000u, 0x214104u, 0x21410Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21410Cu;
label_21410c:
    // 0x21410c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21410cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214110: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x214110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214114: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x214114u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x214118: 0xc08535c  jal         func_214D70
    ctx->pc = 0x214118u;
    SET_GPR_U32(ctx, 31, 0x214120u);
    ctx->pc = 0x214D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D70u, 0x214118u, 0x214120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214120u;
label_214120:
    // 0x214120: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x214120u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214124: 0x8f84bb6c  lw          $a0, -0x4494($gp)
    ctx->pc = 0x214124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949740)));
    // 0x214128: 0xc041000  jal         func_104000
    ctx->pc = 0x214128u;
    SET_GPR_U32(ctx, 31, 0x214130u);
    ctx->pc = 0x104000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104000u, 0x214128u, 0x214130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214130u;
label_214130:
    // 0x214130: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x214130u;
    {
        const bool branch_taken_0x214130 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x214130) {
            ctx->pc = 0x214148u;
            goto label_214148;
        }
    }
    ctx->pc = 0x214138u;
    // 0x214138: 0x8f84bb6c  lw          $a0, -0x4494($gp)
    ctx->pc = 0x214138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949740)));
    // 0x21413c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x21413cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x214140: 0xc08505c  jal         func_214170
    ctx->pc = 0x214140u;
    SET_GPR_U32(ctx, 31, 0x214148u);
    ctx->pc = 0x214170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214170u, 0x214140u, 0x214148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214148u;
label_214148:
    // 0x214148: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x214148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21414c: 0xc08ec3c  jal         func_23B0F0
    ctx->pc = 0x21414Cu;
    SET_GPR_U32(ctx, 31, 0x214154u);
    ctx->pc = 0x23B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B0F0u, 0x21414Cu, 0x214154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214154u;
label_214154:
    // 0x214154: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x214154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x214158: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x214158u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21415c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21415cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214160: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x214160u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214164: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x214164u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x214168: 0x3e00008  jr          $ra
    ctx->pc = 0x214168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214170u;
}
