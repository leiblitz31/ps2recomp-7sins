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

// Function: sub_0011E5C0
// Address: 0x11e5c0 - 0x11e6d0
void sub_0011E5C0_0x11e5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011E5C0_0x11e5c0");
#endif

    switch (ctx->pc) {
        case 0x11e5c0u: goto label_11e5c0;
        case 0x11e5c4u: goto label_11e5c4;
        case 0x11e5c8u: goto label_11e5c8;
        case 0x11e5ccu: goto label_11e5cc;
        case 0x11e5d0u: goto label_11e5d0;
        case 0x11e5d4u: goto label_11e5d4;
        case 0x11e5d8u: goto label_11e5d8;
        case 0x11e5dcu: goto label_11e5dc;
        case 0x11e5e0u: goto label_11e5e0;
        case 0x11e5e4u: goto label_11e5e4;
        case 0x11e5e8u: goto label_11e5e8;
        case 0x11e5ecu: goto label_11e5ec;
        case 0x11e5f0u: goto label_11e5f0;
        case 0x11e5f4u: goto label_11e5f4;
        case 0x11e5f8u: goto label_11e5f8;
        case 0x11e5fcu: goto label_11e5fc;
        case 0x11e600u: goto label_11e600;
        case 0x11e604u: goto label_11e604;
        case 0x11e608u: goto label_11e608;
        case 0x11e60cu: goto label_11e60c;
        case 0x11e610u: goto label_11e610;
        case 0x11e614u: goto label_11e614;
        case 0x11e618u: goto label_11e618;
        case 0x11e61cu: goto label_11e61c;
        case 0x11e620u: goto label_11e620;
        case 0x11e624u: goto label_11e624;
        case 0x11e628u: goto label_11e628;
        case 0x11e62cu: goto label_11e62c;
        case 0x11e630u: goto label_11e630;
        case 0x11e634u: goto label_11e634;
        case 0x11e638u: goto label_11e638;
        case 0x11e63cu: goto label_11e63c;
        case 0x11e640u: goto label_11e640;
        case 0x11e644u: goto label_11e644;
        case 0x11e648u: goto label_11e648;
        case 0x11e64cu: goto label_11e64c;
        case 0x11e650u: goto label_11e650;
        case 0x11e654u: goto label_11e654;
        case 0x11e658u: goto label_11e658;
        case 0x11e65cu: goto label_11e65c;
        case 0x11e660u: goto label_11e660;
        case 0x11e664u: goto label_11e664;
        case 0x11e668u: goto label_11e668;
        case 0x11e66cu: goto label_11e66c;
        case 0x11e670u: goto label_11e670;
        case 0x11e674u: goto label_11e674;
        case 0x11e678u: goto label_11e678;
        case 0x11e67cu: goto label_11e67c;
        case 0x11e680u: goto label_11e680;
        case 0x11e684u: goto label_11e684;
        case 0x11e688u: goto label_11e688;
        case 0x11e68cu: goto label_11e68c;
        case 0x11e690u: goto label_11e690;
        case 0x11e694u: goto label_11e694;
        case 0x11e698u: goto label_11e698;
        case 0x11e69cu: goto label_11e69c;
        case 0x11e6a0u: goto label_11e6a0;
        case 0x11e6a4u: goto label_11e6a4;
        case 0x11e6a8u: goto label_11e6a8;
        case 0x11e6acu: goto label_11e6ac;
        case 0x11e6b0u: goto label_11e6b0;
        case 0x11e6b4u: goto label_11e6b4;
        case 0x11e6b8u: goto label_11e6b8;
        case 0x11e6bcu: goto label_11e6bc;
        case 0x11e6c0u: goto label_11e6c0;
        case 0x11e6c4u: goto label_11e6c4;
        case 0x11e6c8u: goto label_11e6c8;
        case 0x11e6ccu: goto label_11e6cc;
        default: break;
    }

    ctx->pc = 0x11e5c0u;

label_11e5c0:
    // 0x11e5c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11e5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_11e5c4:
    // 0x11e5c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11e5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_11e5c8:
    // 0x11e5c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x11e5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_11e5cc:
    // 0x11e5cc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x11e5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_11e5d0:
    // 0x11e5d0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x11e5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
label_11e5d4:
    // 0x11e5d4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x11e5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_11e5d8:
    // 0x11e5d8: 0xc086230  jal         func_2188C0
label_11e5dc:
    if (ctx->pc == 0x11E5DCu) {
        ctx->pc = 0x11E5E0u;
        goto label_11e5e0;
    }
    ctx->pc = 0x11E5D8u;
    SET_GPR_U32(ctx, 31, 0x11E5E0u);
    ctx->pc = 0x2188C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2188C0u, 0x11E5D8u, 0x11E5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E5E0u;
label_11e5e0:
    // 0x11e5e0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11e5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_11e5e4:
    // 0x11e5e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11e5e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11e5e8:
    // 0x11e5e8: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x11e5e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_11e5ec:
    // 0x11e5ec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x11e5ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_11e5f0:
    // 0x11e5f0: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x11e5f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_11e5f4:
    // 0x11e5f4: 0x320f809  jalr        $t9
label_11e5f8:
    if (ctx->pc == 0x11E5F8u) {
        ctx->pc = 0x11E5FCu;
        goto label_11e5fc;
    }
    ctx->pc = 0x11E5F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x11E5FCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E5F4u, 0x11E5FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11E5FCu;
label_11e5fc:
    // 0x11e5fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11e5fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11e600:
    // 0x11e600: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x11e600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_11e604:
    // 0x11e604: 0x3e00008  jr          $ra
label_11e608:
    if (ctx->pc == 0x11E608u) {
        ctx->pc = 0x11E60Cu;
        goto label_11e60c;
    }
    ctx->pc = 0x11E604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E60Cu;
label_11e60c:
    // 0x11e60c: 0x0  nop
    ctx->pc = 0x11e60cu;
    // NOP
label_11e610:
    // 0x11e610: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11e610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_11e614:
    // 0x11e614: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11e614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_11e618:
    // 0x11e618: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11e618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_11e61c:
    // 0x11e61c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x11e61cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_11e620:
    // 0x11e620: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x11e620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_11e624:
    // 0x11e624: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x11e624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_11e628:
    // 0x11e628: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x11e628u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_11e62c:
    // 0x11e62c: 0x24a51e08  addiu       $a1, $a1, 0x1E08
    ctx->pc = 0x11e62cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7688));
label_11e630:
    // 0x11e630: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11e630u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11e634:
    // 0x11e634: 0xc047970  jal         func_11E5C0
label_11e638:
    if (ctx->pc == 0x11E638u) {
        ctx->pc = 0x11E63Cu;
        goto label_11e63c;
    }
    ctx->pc = 0x11E634u;
    SET_GPR_U32(ctx, 31, 0x11E63Cu);
    ctx->pc = 0x11E5C0u;
    goto label_11e5c0;
    ctx->pc = 0x11E63Cu;
label_11e63c:
    // 0x11e63c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11e63cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11e640:
    // 0x11e640: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x11e640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_11e644:
    // 0x11e644: 0x12030001  beq         $s0, $v1, . + 4 + (0x1 << 2)
label_11e648:
    if (ctx->pc == 0x11E648u) {
        ctx->pc = 0x11E64Cu;
        goto label_11e64c;
    }
    ctx->pc = 0x11E644u;
    {
        const bool branch_taken_0x11e644 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x11e644) {
            ctx->pc = 0x11E64Cu;
            goto label_11e64c;
        }
    }
    ctx->pc = 0x11E64Cu;
label_11e64c:
    // 0x11e64c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11e64cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11e650:
    // 0x11e650: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11e650u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_11e654:
    // 0x11e654: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x11e654u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_11e658:
    // 0x11e658: 0x3e00008  jr          $ra
label_11e65c:
    if (ctx->pc == 0x11E65Cu) {
        ctx->pc = 0x11E660u;
        goto label_11e660;
    }
    ctx->pc = 0x11E658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E660u;
label_11e660:
    // 0x11e660: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11e660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_11e664:
    // 0x11e664: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11e664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_11e668:
    // 0x11e668: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x11e668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_11e66c:
    // 0x11e66c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x11e66cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
label_11e670:
    // 0x11e670: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11e670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_11e674:
    // 0x11e674: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_11e678:
    if (ctx->pc == 0x11E678u) {
        ctx->pc = 0x11E67Cu;
        goto label_11e67c;
    }
    ctx->pc = 0x11E674u;
    {
        const bool branch_taken_0x11e674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e674) {
            ctx->pc = 0x11E6BCu;
            goto label_11e6bc;
        }
    }
    ctx->pc = 0x11E67Cu;
label_11e67c:
    // 0x11e67c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x11e67cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_11e680:
    // 0x11e680: 0x246334d0  addiu       $v1, $v1, 0x34D0
    ctx->pc = 0x11e680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13520));
label_11e684:
    // 0x11e684: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11e684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_11e688:
    // 0x11e688: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x11e688u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_11e68c:
    // 0x11e68c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11e68cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_11e690:
    // 0x11e690: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11e690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11e694:
    // 0x11e694: 0xc047088  jal         func_11C220
label_11e698:
    if (ctx->pc == 0x11E698u) {
        ctx->pc = 0x11E69Cu;
        goto label_11e69c;
    }
    ctx->pc = 0x11E694u;
    SET_GPR_U32(ctx, 31, 0x11E69Cu);
    ctx->pc = 0x11C220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C220u, 0x11E694u, 0x11E69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E69Cu;
label_11e69c:
    // 0x11e69c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x11e69cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_11e6a0:
    // 0x11e6a0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x11e6a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_11e6a4:
    // 0x11e6a4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x11e6a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_11e6a8:
    // 0x11e6a8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_11e6ac:
    if (ctx->pc == 0x11E6ACu) {
        ctx->pc = 0x11E6B0u;
        goto label_11e6b0;
    }
    ctx->pc = 0x11E6A8u;
    {
        const bool branch_taken_0x11e6a8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x11e6a8) {
            ctx->pc = 0x11E6BCu;
            goto label_11e6bc;
        }
    }
    ctx->pc = 0x11E6B0u;
label_11e6b0:
    // 0x11e6b0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11e6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_11e6b4:
    // 0x11e6b4: 0xc0ba070  jal         func_2E81C0
label_11e6b8:
    if (ctx->pc == 0x11E6B8u) {
        ctx->pc = 0x11E6BCu;
        goto label_11e6bc;
    }
    ctx->pc = 0x11E6B4u;
    SET_GPR_U32(ctx, 31, 0x11E6BCu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x11E6B4u, 0x11E6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E6BCu;
label_11e6bc:
    // 0x11e6bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11e6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_11e6c0:
    // 0x11e6c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11e6c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11e6c4:
    // 0x11e6c4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x11e6c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_11e6c8:
    // 0x11e6c8: 0x3e00008  jr          $ra
label_11e6cc:
    if (ctx->pc == 0x11E6CCu) {
        ctx->pc = 0x11E6D0u;
        goto label_fallthrough_0x11e6c8;
    }
    ctx->pc = 0x11E6C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E6C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x11e6c8:
    ctx->pc = 0x11E6D0u;
}
