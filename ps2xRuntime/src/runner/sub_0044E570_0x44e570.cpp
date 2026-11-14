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

// Function: sub_0044E570
// Address: 0x44e570 - 0x44e660
void sub_0044E570_0x44e570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044E570_0x44e570");
#endif

    switch (ctx->pc) {
        case 0x44e570u: goto label_44e570;
        case 0x44e574u: goto label_44e574;
        case 0x44e578u: goto label_44e578;
        case 0x44e57cu: goto label_44e57c;
        case 0x44e580u: goto label_44e580;
        case 0x44e584u: goto label_44e584;
        case 0x44e588u: goto label_44e588;
        case 0x44e58cu: goto label_44e58c;
        case 0x44e590u: goto label_44e590;
        case 0x44e594u: goto label_44e594;
        case 0x44e598u: goto label_44e598;
        case 0x44e59cu: goto label_44e59c;
        case 0x44e5a0u: goto label_44e5a0;
        case 0x44e5a4u: goto label_44e5a4;
        case 0x44e5a8u: goto label_44e5a8;
        case 0x44e5acu: goto label_44e5ac;
        case 0x44e5b0u: goto label_44e5b0;
        case 0x44e5b4u: goto label_44e5b4;
        case 0x44e5b8u: goto label_44e5b8;
        case 0x44e5bcu: goto label_44e5bc;
        case 0x44e5c0u: goto label_44e5c0;
        case 0x44e5c4u: goto label_44e5c4;
        case 0x44e5c8u: goto label_44e5c8;
        case 0x44e5ccu: goto label_44e5cc;
        case 0x44e5d0u: goto label_44e5d0;
        case 0x44e5d4u: goto label_44e5d4;
        case 0x44e5d8u: goto label_44e5d8;
        case 0x44e5dcu: goto label_44e5dc;
        case 0x44e5e0u: goto label_44e5e0;
        case 0x44e5e4u: goto label_44e5e4;
        case 0x44e5e8u: goto label_44e5e8;
        case 0x44e5ecu: goto label_44e5ec;
        case 0x44e5f0u: goto label_44e5f0;
        case 0x44e5f4u: goto label_44e5f4;
        case 0x44e5f8u: goto label_44e5f8;
        case 0x44e5fcu: goto label_44e5fc;
        case 0x44e600u: goto label_44e600;
        case 0x44e604u: goto label_44e604;
        case 0x44e608u: goto label_44e608;
        case 0x44e60cu: goto label_44e60c;
        case 0x44e610u: goto label_44e610;
        case 0x44e614u: goto label_44e614;
        case 0x44e618u: goto label_44e618;
        case 0x44e61cu: goto label_44e61c;
        case 0x44e620u: goto label_44e620;
        case 0x44e624u: goto label_44e624;
        case 0x44e628u: goto label_44e628;
        case 0x44e62cu: goto label_44e62c;
        case 0x44e630u: goto label_44e630;
        case 0x44e634u: goto label_44e634;
        case 0x44e638u: goto label_44e638;
        case 0x44e63cu: goto label_44e63c;
        case 0x44e640u: goto label_44e640;
        case 0x44e644u: goto label_44e644;
        case 0x44e648u: goto label_44e648;
        case 0x44e64cu: goto label_44e64c;
        case 0x44e650u: goto label_44e650;
        case 0x44e654u: goto label_44e654;
        case 0x44e658u: goto label_44e658;
        case 0x44e65cu: goto label_44e65c;
        default: break;
    }

    ctx->pc = 0x44e570u;

label_44e570:
    // 0x44e570: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x44e570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_44e574:
    // 0x44e574: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x44e574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_44e578:
    // 0x44e578: 0xafa40140  sw          $a0, 0x140($sp)
    ctx->pc = 0x44e578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 4));
label_44e57c:
    // 0x44e57c: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x44e57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_44e580:
    // 0x44e580: 0x28420012  slti        $v0, $v0, 0x12
    ctx->pc = 0x44e580u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)18) ? 1 : 0);
label_44e584:
    // 0x44e584: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x44e584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_44e588:
    // 0x44e588: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_44e58c:
    if (ctx->pc == 0x44E58Cu) {
        ctx->pc = 0x44E590u;
        goto label_44e590;
    }
    ctx->pc = 0x44E588u;
    {
        const bool branch_taken_0x44e588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x44e588) {
            ctx->pc = 0x44E638u;
            goto label_44e638;
        }
    }
    ctx->pc = 0x44E590u;
label_44e590:
    // 0x44e590: 0x8f82afa0  lw          $v0, -0x5060($gp)
    ctx->pc = 0x44e590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946720)));
label_44e594:
    // 0x44e594: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_44e598:
    if (ctx->pc == 0x44E598u) {
        ctx->pc = 0x44E59Cu;
        goto label_44e59c;
    }
    ctx->pc = 0x44E594u;
    {
        const bool branch_taken_0x44e594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44e594) {
            ctx->pc = 0x44E638u;
            goto label_44e638;
        }
    }
    ctx->pc = 0x44E59Cu;
label_44e59c:
    // 0x44e59c: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x44e59cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_44e5a0:
    // 0x44e5a0: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x44e5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_44e5a4:
    // 0x44e5a4: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x44e5a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_44e5a8:
    // 0x44e5a8: 0xc115ee8  jal         func_457BA0
label_44e5ac:
    if (ctx->pc == 0x44E5ACu) {
        ctx->pc = 0x44E5B0u;
        goto label_44e5b0;
    }
    ctx->pc = 0x44E5A8u;
    SET_GPR_U32(ctx, 31, 0x44E5B0u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x44E5A8u, 0x44E5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44E5B0u;
label_44e5b0:
    // 0x44e5b0: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_44e5b4:
    if (ctx->pc == 0x44E5B4u) {
        ctx->pc = 0x44E5B8u;
        goto label_44e5b8;
    }
    ctx->pc = 0x44E5B0u;
    {
        const bool branch_taken_0x44e5b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44e5b0) {
            ctx->pc = 0x44E638u;
            goto label_44e638;
        }
    }
    ctx->pc = 0x44E5B8u;
label_44e5b8:
    // 0x44e5b8: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x44e5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_44e5bc:
    // 0x44e5bc: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_44e5c0:
    if (ctx->pc == 0x44E5C0u) {
        ctx->pc = 0x44E5C4u;
        goto label_44e5c4;
    }
    ctx->pc = 0x44E5BCu;
    {
        const bool branch_taken_0x44e5bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44e5bc) {
            ctx->pc = 0x44E638u;
            goto label_44e638;
        }
    }
    ctx->pc = 0x44E5C4u;
label_44e5c4:
    // 0x44e5c4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x44e5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_44e5c8:
    // 0x44e5c8: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x44e5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_44e5cc:
    // 0x44e5cc: 0x8fa60134  lw          $a2, 0x134($sp)
    ctx->pc = 0x44e5ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
label_44e5d0:
    // 0x44e5d0: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x44e5d0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_44e5d4:
    // 0x44e5d4: 0x24e7d8d0  addiu       $a3, $a3, -0x2730
    ctx->pc = 0x44e5d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957264));
label_44e5d8:
    // 0x44e5d8: 0x240800e8  addiu       $t0, $zero, 0xE8
    ctx->pc = 0x44e5d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
label_44e5dc:
    // 0x44e5dc: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x44e5dcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_44e5e0:
    // 0x44e5e0: 0x2529d920  addiu       $t1, $t1, -0x26E0
    ctx->pc = 0x44e5e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294957344));
label_44e5e4:
    // 0x44e5e4: 0xc113940  jal         func_44E500
label_44e5e8:
    if (ctx->pc == 0x44E5E8u) {
        ctx->pc = 0x44E5ECu;
        goto label_44e5ec;
    }
    ctx->pc = 0x44E5E4u;
    SET_GPR_U32(ctx, 31, 0x44E5ECu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x44E5E4u, 0x44E5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44E5ECu;
label_44e5ec:
    // 0x44e5ec: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x44e5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_44e5f0:
    // 0x44e5f0: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x44e5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_44e5f4:
    // 0x44e5f4: 0x24a5d940  addiu       $a1, $a1, -0x26C0
    ctx->pc = 0x44e5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957376));
label_44e5f8:
    // 0x44e5f8: 0xc115c24  jal         func_457090
label_44e5fc:
    if (ctx->pc == 0x44E5FCu) {
        ctx->pc = 0x44E600u;
        goto label_44e600;
    }
    ctx->pc = 0x44E5F8u;
    SET_GPR_U32(ctx, 31, 0x44E600u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x44E5F8u, 0x44E600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44E600u;
label_44e600:
    // 0x44e600: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x44e600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_44e604:
    // 0x44e604: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x44e604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_44e608:
    // 0x44e608: 0x40f809  jalr        $v0
label_44e60c:
    if (ctx->pc == 0x44E60Cu) {
        ctx->pc = 0x44E610u;
        goto label_44e610;
    }
    ctx->pc = 0x44E608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x44E610u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44E608u, 0x44E610u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44E610u;
label_44e610:
    // 0x44e610: 0xaf82afa0  sw          $v0, -0x5060($gp)
    ctx->pc = 0x44e610u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946720), GPR_U32(ctx, 2));
label_44e614:
    // 0x44e614: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44e614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44e618:
    // 0x44e618: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_44e61c:
    if (ctx->pc == 0x44E61Cu) {
        ctx->pc = 0x44E620u;
        goto label_44e620;
    }
    ctx->pc = 0x44E618u;
    {
        const bool branch_taken_0x44e618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44e618) {
            ctx->pc = 0x44E628u;
            goto label_44e628;
        }
    }
    ctx->pc = 0x44E620u;
label_44e620:
    // 0x44e620: 0xd  break       0
    ctx->pc = 0x44e620u;
    runtime->handleBreak(rdram, ctx);
label_44e624:
    // 0x44e624: 0x0  nop
    ctx->pc = 0x44e624u;
    // NOP
label_44e628:
    // 0x44e628: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x44e628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_44e62c:
    // 0x44e62c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x44e62cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_44e630:
    // 0x44e630: 0xc11392c  jal         func_44E4B0
label_44e634:
    if (ctx->pc == 0x44E634u) {
        ctx->pc = 0x44E638u;
        goto label_44e638;
    }
    ctx->pc = 0x44E630u;
    SET_GPR_U32(ctx, 31, 0x44E638u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x44E630u, 0x44E638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44E638u;
label_44e638:
    // 0x44e638: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x44e638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_44e63c:
    // 0x44e63c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x44e63cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_44e640:
    // 0x44e640: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x44e640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_44e644:
    // 0x44e644: 0x244217e0  addiu       $v0, $v0, 0x17E0
    ctx->pc = 0x44e644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6112));
label_44e648:
    // 0x44e648: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x44e648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_44e64c:
    // 0x44e64c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x44e64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_44e650:
    // 0x44e650: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x44e650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_44e654:
    // 0x44e654: 0x27bd0150  addiu       $sp, $sp, 0x150
    ctx->pc = 0x44e654u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_44e658:
    // 0x44e658: 0x3e00008  jr          $ra
label_44e65c:
    if (ctx->pc == 0x44E65Cu) {
        ctx->pc = 0x44E660u;
        goto label_fallthrough_0x44e658;
    }
    ctx->pc = 0x44E658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44E658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x44e658:
    ctx->pc = 0x44E660u;
}
