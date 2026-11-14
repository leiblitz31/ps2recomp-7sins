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

// Function: sub_002685D0
// Address: 0x2685d0 - 0x268770
void sub_002685D0_0x2685d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002685D0_0x2685d0");
#endif

    switch (ctx->pc) {
        case 0x2685e8u: goto label_2685e8;
        case 0x268608u: goto label_268608;
        case 0x2686a4u: goto label_2686a4;
        case 0x2686b4u: goto label_2686b4;
        case 0x2686d4u: goto label_2686d4;
        case 0x268710u: goto label_268710;
        case 0x268720u: goto label_268720;
        case 0x268730u: goto label_268730;
        case 0x268748u: goto label_268748;
        default: break;
    }

    ctx->pc = 0x2685d0u;

    // 0x2685d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2685d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2685d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2685d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2685d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2685d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2685dc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2685dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2685e0: 0xc08ec10  jal         func_23B040
    ctx->pc = 0x2685E0u;
    SET_GPR_U32(ctx, 31, 0x2685E8u);
    ctx->pc = 0x23B040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B040u, 0x2685E0u, 0x2685E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2685E8u;
label_2685e8:
    // 0x2685e8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2685e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2685ec: 0x246359f0  addiu       $v1, $v1, 0x59F0
    ctx->pc = 0x2685ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23024));
    // 0x2685f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2685f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2685f4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2685f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2685f8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2685f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2685fc: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2685fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x268600: 0xc0514a8  jal         func_1452A0
    ctx->pc = 0x268600u;
    SET_GPR_U32(ctx, 31, 0x268608u);
    ctx->pc = 0x1452A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1452A0u, 0x268600u, 0x268608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268608u;
label_268608:
    // 0x268608: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x268608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26860c: 0xa0400038  sb          $zero, 0x38($v0)
    ctx->pc = 0x26860cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 56), (uint8_t)GPR_U32(ctx, 0));
    // 0x268610: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x268610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x268614: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x268614u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
    // 0x268618: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x268618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26861c: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x26861cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    // 0x268620: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x268620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x268624: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x268624u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
    // 0x268628: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x268628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26862c: 0xac400068  sw          $zero, 0x68($v0)
    ctx->pc = 0x26862cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 0));
    // 0x268630: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x268630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x268634: 0xaf82bbfc  sw          $v0, -0x4404($gp)
    ctx->pc = 0x268634u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949884), GPR_U32(ctx, 2));
    // 0x268638: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x268638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26863c: 0xa0400048  sb          $zero, 0x48($v0)
    ctx->pc = 0x26863cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x268640: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x268640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x268644: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x268644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x268648: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x268648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26864c: 0x3e00008  jr          $ra
    ctx->pc = 0x26864Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26864Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x268654u;
    // 0x268654: 0x0  nop
    ctx->pc = 0x268654u;
    // NOP
    // 0x268658: 0x0  nop
    ctx->pc = 0x268658u;
    // NOP
    // 0x26865c: 0x0  nop
    ctx->pc = 0x26865cu;
    // NOP
    // 0x268660: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x268660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x268664: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x268664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x268668: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x268668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x26866c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x26866cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x268670: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x268670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x268674: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x268674u;
    {
        const bool branch_taken_0x268674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x268674) {
            ctx->pc = 0x2686D4u;
            goto label_2686d4;
        }
    }
    ctx->pc = 0x26867Cu;
    // 0x26867c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x26867cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x268680: 0x246359f0  addiu       $v1, $v1, 0x59F0
    ctx->pc = 0x268680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23024));
    // 0x268684: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x268684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x268688: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x268688u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x26868c: 0xaf80bbfc  sw          $zero, -0x4404($gp)
    ctx->pc = 0x26868cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949884), GPR_U32(ctx, 0));
    // 0x268690: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x268690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x268694: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x268694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x268698: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x268698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26869c: 0xc051428  jal         func_1450A0
    ctx->pc = 0x26869Cu;
    SET_GPR_U32(ctx, 31, 0x2686A4u);
    ctx->pc = 0x1450A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1450A0u, 0x26869Cu, 0x2686A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2686A4u;
label_2686a4:
    // 0x2686a4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2686a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2686a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2686a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2686ac: 0xc08ec24  jal         func_23B090
    ctx->pc = 0x2686ACu;
    SET_GPR_U32(ctx, 31, 0x2686B4u);
    ctx->pc = 0x23B090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B090u, 0x2686ACu, 0x2686B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2686B4u;
label_2686b4:
    // 0x2686b4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2686b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2686b8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2686b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2686bc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2686bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2686c0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2686C0u;
    {
        const bool branch_taken_0x2686c0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2686c0) {
            ctx->pc = 0x2686D4u;
            goto label_2686d4;
        }
    }
    ctx->pc = 0x2686C8u;
    // 0x2686c8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2686c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2686cc: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2686CCu;
    SET_GPR_U32(ctx, 31, 0x2686D4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2686CCu, 0x2686D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2686D4u;
label_2686d4:
    // 0x2686d4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2686d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2686d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2686d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2686dc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2686dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2686e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2686E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2686E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2686E8u;
    // 0x2686e8: 0x0  nop
    ctx->pc = 0x2686e8u;
    // NOP
    // 0x2686ec: 0x0  nop
    ctx->pc = 0x2686ecu;
    // NOP
    // 0x2686f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2686f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2686f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2686f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2686f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2686f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2686fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2686fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x268700: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x268700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x268704: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x268704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x268708: 0xc08ec3c  jal         func_23B0F0
    ctx->pc = 0x268708u;
    SET_GPR_U32(ctx, 31, 0x268710u);
    ctx->pc = 0x23B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B0F0u, 0x268708u, 0x268710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268710u;
label_268710:
    // 0x268710: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x268710u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x268714: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x268714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x268718: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x268718u;
    SET_GPR_U32(ctx, 31, 0x268720u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x268718u, 0x268720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268720u;
label_268720:
    // 0x268720: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x268720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x268724: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x268724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268728: 0xc0400e0  jal         func_100380
    ctx->pc = 0x268728u;
    SET_GPR_U32(ctx, 31, 0x268730u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x268728u, 0x268730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268730u;
label_268730:
    // 0x268730: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x268730u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268734: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x268734u;
    {
        const bool branch_taken_0x268734 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x268734) {
            ctx->pc = 0x26874Cu;
            goto label_26874c;
        }
    }
    ctx->pc = 0x26873Cu;
    // 0x26873c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26873cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268740: 0xc09a1dc  jal         func_268770
    ctx->pc = 0x268740u;
    SET_GPR_U32(ctx, 31, 0x268748u);
    ctx->pc = 0x268770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268770u, 0x268740u, 0x268748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268748u;
label_268748:
    // 0x268748: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x268748u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26874c:
    // 0x26874c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x26874cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x268750: 0xac500068  sw          $s0, 0x68($v0)
    ctx->pc = 0x268750u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 16));
    // 0x268754: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x268754u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268758: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x268758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26875c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26875cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x268760: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x268760u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x268764: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x268764u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x268768: 0x3e00008  jr          $ra
    ctx->pc = 0x268768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x268770u;
}
