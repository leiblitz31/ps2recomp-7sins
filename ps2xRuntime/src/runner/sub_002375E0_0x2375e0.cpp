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

// Function: sub_002375E0
// Address: 0x2375e0 - 0x237780
void sub_002375E0_0x2375e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002375E0_0x2375e0");
#endif

    switch (ctx->pc) {
        case 0x23761cu: goto label_23761c;
        case 0x23763cu: goto label_23763c;
        case 0x237670u: goto label_237670;
        case 0x237690u: goto label_237690;
        case 0x2376a0u: goto label_2376a0;
        case 0x2376b8u: goto label_2376b8;
        case 0x2376dcu: goto label_2376dc;
        case 0x237720u: goto label_237720;
        case 0x237740u: goto label_237740;
        case 0x237750u: goto label_237750;
        case 0x237764u: goto label_237764;
        default: break;
    }

    ctx->pc = 0x2375e0u;

    // 0x2375e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2375e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2375e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2375e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2375e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2375e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2375ec: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2375ecu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2375f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2375f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2375f4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2375F4u;
    {
        const bool branch_taken_0x2375f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2375f4) {
            ctx->pc = 0x23763Cu;
            goto label_23763c;
        }
    }
    ctx->pc = 0x2375FCu;
    // 0x2375fc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2375fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x237600: 0x246355a0  addiu       $v1, $v1, 0x55A0
    ctx->pc = 0x237600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21920));
    // 0x237604: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x237604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x237608: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x237608u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x23760c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23760cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x237610: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x237610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237614: 0xc08ec24  jal         func_23B090
    ctx->pc = 0x237614u;
    SET_GPR_U32(ctx, 31, 0x23761Cu);
    ctx->pc = 0x23B090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B090u, 0x237614u, 0x23761Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23761Cu;
label_23761c:
    // 0x23761c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x23761cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x237620: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x237620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x237624: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x237624u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x237628: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x237628u;
    {
        const bool branch_taken_0x237628 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x237628) {
            ctx->pc = 0x23763Cu;
            goto label_23763c;
        }
    }
    ctx->pc = 0x237630u;
    // 0x237630: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x237630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x237634: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x237634u;
    SET_GPR_U32(ctx, 31, 0x23763Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x237634u, 0x23763Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23763Cu;
label_23763c:
    // 0x23763c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23763cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x237640: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x237640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x237644: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x237644u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x237648: 0x3e00008  jr          $ra
    ctx->pc = 0x237648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237650u;
    // 0x237650: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x237650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x237654: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x237654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x237658: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x237658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23765c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23765cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x237660: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x237660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x237664: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x237664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x237668: 0xc08ec3c  jal         func_23B0F0
    ctx->pc = 0x237668u;
    SET_GPR_U32(ctx, 31, 0x237670u);
    ctx->pc = 0x23B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B0F0u, 0x237668u, 0x237670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237670u;
label_237670:
    // 0x237670: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x237670u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x237674: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x237674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x237678: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x237678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23767c: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x23767Cu;
    {
        const bool branch_taken_0x23767c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23767c) {
            ctx->pc = 0x2376DCu;
            goto label_2376dc;
        }
    }
    ctx->pc = 0x237684u;
    // 0x237684: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x237684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x237688: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x237688u;
    SET_GPR_U32(ctx, 31, 0x237690u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x237688u, 0x237690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237690u;
label_237690:
    // 0x237690: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x237690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x237694: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x237694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237698: 0xc0400e0  jal         func_100380
    ctx->pc = 0x237698u;
    SET_GPR_U32(ctx, 31, 0x2376A0u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x237698u, 0x2376A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2376A0u;
label_2376a0:
    // 0x2376a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2376a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2376a4: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2376A4u;
    {
        const bool branch_taken_0x2376a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2376a4) {
            ctx->pc = 0x2376BCu;
            goto label_2376bc;
        }
    }
    ctx->pc = 0x2376ACu;
    // 0x2376ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2376acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2376b0: 0xc119f38  jal         func_467CE0
    ctx->pc = 0x2376B0u;
    SET_GPR_U32(ctx, 31, 0x2376B8u);
    ctx->pc = 0x467CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467CE0u, 0x2376B0u, 0x2376B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2376B8u;
label_2376b8:
    // 0x2376b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2376b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2376bc:
    // 0x2376bc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2376bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2376c0: 0xac500028  sw          $s0, 0x28($v0)
    ctx->pc = 0x2376c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 16));
    // 0x2376c4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2376c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2376c8: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x2376c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x2376cc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2376ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2376d0: 0x34459000  ori         $a1, $v0, 0x9000
    ctx->pc = 0x2376d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x2376d4: 0xc119f5c  jal         func_467D70
    ctx->pc = 0x2376D4u;
    SET_GPR_U32(ctx, 31, 0x2376DCu);
    ctx->pc = 0x467D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467D70u, 0x2376D4u, 0x2376DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2376DCu;
label_2376dc:
    // 0x2376dc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2376dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2376e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2376e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2376e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2376e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2376e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2376e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2376ec: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2376ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2376f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2376F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2376F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2376F8u;
    // 0x2376f8: 0x0  nop
    ctx->pc = 0x2376f8u;
    // NOP
    // 0x2376fc: 0x0  nop
    ctx->pc = 0x2376fcu;
    // NOP
    // 0x237700: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x237700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x237704: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x237704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x237708: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x237708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23770c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x23770cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x237710: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x237710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x237714: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x237714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x237718: 0xc119f88  jal         func_467E20
    ctx->pc = 0x237718u;
    SET_GPR_U32(ctx, 31, 0x237720u);
    ctx->pc = 0x467E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467E20u, 0x237718u, 0x237720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237720u;
label_237720:
    // 0x237720: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x237720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x237724: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x237724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x237728: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x237728u;
    {
        const bool branch_taken_0x237728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x237728) {
            ctx->pc = 0x237758u;
            goto label_237758;
        }
    }
    ctx->pc = 0x237730u;
    // 0x237730: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x237730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x237734: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x237734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x237738: 0xc049384  jal         func_124E10
    ctx->pc = 0x237738u;
    SET_GPR_U32(ctx, 31, 0x237740u);
    ctx->pc = 0x124E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E10u, 0x237738u, 0x237740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237740u;
label_237740:
    // 0x237740: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x237740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x237744: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x237744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x237748: 0xc119c5c  jal         func_467170
    ctx->pc = 0x237748u;
    SET_GPR_U32(ctx, 31, 0x237750u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x237748u, 0x237750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237750u;
label_237750:
    // 0x237750: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x237750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x237754: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x237754u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
label_237758:
    // 0x237758: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x237758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23775c: 0xc08ec48  jal         func_23B120
    ctx->pc = 0x23775Cu;
    SET_GPR_U32(ctx, 31, 0x237764u);
    ctx->pc = 0x23B120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B120u, 0x23775Cu, 0x237764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237764u;
label_237764:
    // 0x237764: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x237764u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x237768: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x237768u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23776c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23776cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x237770: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x237770u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x237774: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x237774u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x237778: 0x3e00008  jr          $ra
    ctx->pc = 0x237778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237780u;
}
