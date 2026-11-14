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

// Function: sub_0023E560
// Address: 0x23e560 - 0x23ebb0
void sub_0023E560_0x23e560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023E560_0x23e560");
#endif

    switch (ctx->pc) {
        case 0x23e5b0u: goto label_23e5b0;
        case 0x23e5ccu: goto label_23e5cc;
        case 0x23e5dcu: goto label_23e5dc;
        case 0x23e5f4u: goto label_23e5f4;
        case 0x23e608u: goto label_23e608;
        case 0x23e620u: goto label_23e620;
        case 0x23e650u: goto label_23e650;
        case 0x23e66cu: goto label_23e66c;
        case 0x23e680u: goto label_23e680;
        case 0x23e698u: goto label_23e698;
        case 0x23e6b8u: goto label_23e6b8;
        case 0x23e6d0u: goto label_23e6d0;
        case 0x23e6dcu: goto label_23e6dc;
        case 0x23e718u: goto label_23e718;
        case 0x23e734u: goto label_23e734;
        case 0x23e744u: goto label_23e744;
        case 0x23e75cu: goto label_23e75c;
        case 0x23e774u: goto label_23e774;
        case 0x23e7a8u: goto label_23e7a8;
        case 0x23e7d4u: goto label_23e7d4;
        case 0x23e7f4u: goto label_23e7f4;
        case 0x23e804u: goto label_23e804;
        case 0x23e830u: goto label_23e830;
        case 0x23e83cu: goto label_23e83c;
        case 0x23e850u: goto label_23e850;
        case 0x23e868u: goto label_23e868;
        case 0x23e87cu: goto label_23e87c;
        case 0x23e8a0u: goto label_23e8a0;
        case 0x23e8c0u: goto label_23e8c0;
        case 0x23e8d0u: goto label_23e8d0;
        case 0x23e8e8u: goto label_23e8e8;
        case 0x23e8f4u: goto label_23e8f4;
        case 0x23e904u: goto label_23e904;
        case 0x23e918u: goto label_23e918;
        case 0x23e930u: goto label_23e930;
        case 0x23e948u: goto label_23e948;
        case 0x23e95cu: goto label_23e95c;
        case 0x23e974u: goto label_23e974;
        case 0x23e988u: goto label_23e988;
        case 0x23e9b4u: goto label_23e9b4;
        case 0x23e9e8u: goto label_23e9e8;
        case 0x23ea04u: goto label_23ea04;
        case 0x23ea10u: goto label_23ea10;
        case 0x23ea34u: goto label_23ea34;
        case 0x23ea48u: goto label_23ea48;
        case 0x23ea60u: goto label_23ea60;
        case 0x23ea98u: goto label_23ea98;
        case 0x23eaa8u: goto label_23eaa8;
        case 0x23eac0u: goto label_23eac0;
        case 0x23ead8u: goto label_23ead8;
        case 0x23eb0cu: goto label_23eb0c;
        case 0x23eb38u: goto label_23eb38;
        case 0x23eb64u: goto label_23eb64;
        case 0x23eb80u: goto label_23eb80;
        case 0x23eb90u: goto label_23eb90;
        default: break;
    }

    ctx->pc = 0x23e560u;

    // 0x23e560: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x23e560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x23e564: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x23e564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x23e568: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x23e568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x23e56c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23e56cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x23e570: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23e570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23e574: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23e574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23e578: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x23e578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
    // 0x23e57c: 0xafa500b0  sw          $a1, 0xB0($sp)
    ctx->pc = 0x23e57cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 5));
    // 0x23e580: 0xafa600c0  sw          $a2, 0xC0($sp)
    ctx->pc = 0x23e580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 6));
    // 0x23e584: 0xafa700d0  sw          $a3, 0xD0($sp)
    ctx->pc = 0x23e584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 7));
    // 0x23e588: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x23e588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x23e58c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23e58cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23e590: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x23e590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x23e594: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x23e594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23e598: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x23e598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x23e59c: 0x1462009b  bne         $v1, $v0, . + 4 + (0x9B << 2)
    ctx->pc = 0x23E59Cu;
    {
        const bool branch_taken_0x23e59c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23e59c) {
            ctx->pc = 0x23E80Cu;
            goto label_23e80c;
        }
    }
    ctx->pc = 0x23E5A4u;
    // 0x23e5a4: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x23e5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x23e5a8: 0xc08fb24  jal         func_23EC90
    ctx->pc = 0x23E5A8u;
    SET_GPR_U32(ctx, 31, 0x23E5B0u);
    ctx->pc = 0x23EC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EC90u, 0x23E5A8u, 0x23E5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E5B0u;
label_23e5b0:
    // 0x23e5b0: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x23E5B0u;
    {
        const bool branch_taken_0x23e5b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e5b0) {
            ctx->pc = 0x23E5E4u;
            goto label_23e5e4;
        }
    }
    ctx->pc = 0x23E5B8u;
    // 0x23e5b8: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x23e5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x23e5bc: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x23e5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x23e5c0: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x23e5c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x23e5c4: 0xc08fb5c  jal         func_23ED70
    ctx->pc = 0x23E5C4u;
    SET_GPR_U32(ctx, 31, 0x23E5CCu);
    ctx->pc = 0x23ED70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23ED70u, 0x23E5C4u, 0x23E5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E5CCu;
label_23e5cc:
    // 0x23e5cc: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x23e5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x23e5d0: 0x27a50068  addiu       $a1, $sp, 0x68
    ctx->pc = 0x23e5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x23e5d4: 0xc08f378  jal         func_23CDE0
    ctx->pc = 0x23E5D4u;
    SET_GPR_U32(ctx, 31, 0x23E5DCu);
    ctx->pc = 0x23CDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CDE0u, 0x23E5D4u, 0x23E5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E5DCu;
label_23e5dc:
    // 0x23e5dc: 0x1000016c  b           . + 4 + (0x16C << 2)
    ctx->pc = 0x23E5DCu;
    {
        const bool branch_taken_0x23e5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e5dc) {
            ctx->pc = 0x23EB90u;
            goto label_23eb90;
        }
    }
    ctx->pc = 0x23E5E4u;
label_23e5e4:
    // 0x23e5e4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x23e5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x23e5e8: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x23e5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x23e5ec: 0xc08f45c  jal         func_23D170
    ctx->pc = 0x23E5ECu;
    SET_GPR_U32(ctx, 31, 0x23E5F4u);
    ctx->pc = 0x23D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D170u, 0x23E5ECu, 0x23E5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E5F4u;
label_23e5f4:
    // 0x23e5f4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x23e5f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e5f8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x23e5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x23e5fc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x23e5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23e600: 0xc08fb14  jal         func_23EC50
    ctx->pc = 0x23E600u;
    SET_GPR_U32(ctx, 31, 0x23E608u);
    ctx->pc = 0x23EC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EC50u, 0x23E600u, 0x23E608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E608u;
label_23e608:
    // 0x23e608: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x23e608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x23e60c: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x23e60cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x23e610: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x23e610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e614: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x23e614u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e618: 0xc0426d8  jal         func_109B60
    ctx->pc = 0x23E618u;
    SET_GPR_U32(ctx, 31, 0x23E620u);
    ctx->pc = 0x109B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109B60u, 0x23E618u, 0x23E620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E620u;
label_23e620:
    // 0x23e620: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x23E620u;
    {
        const bool branch_taken_0x23e620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e620) {
            ctx->pc = 0x23E65Cu;
            goto label_23e65c;
        }
    }
    ctx->pc = 0x23E628u;
    // 0x23e628: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x23e628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x23e62c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x23e62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x23e630: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x23e630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x23e634: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x23e634u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x23e638: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x23e638u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23e63c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x23e63cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23e640: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x23e640u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x23e644: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x23e644u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e648: 0xc08fbf4  jal         func_23EFD0
    ctx->pc = 0x23E648u;
    SET_GPR_U32(ctx, 31, 0x23E650u);
    ctx->pc = 0x23EFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EFD0u, 0x23E648u, 0x23E650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E650u;
label_23e650:
    // 0x23e650: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x23e650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x23e654: 0x1000014e  b           . + 4 + (0x14E << 2)
    ctx->pc = 0x23E654u;
    {
        const bool branch_taken_0x23e654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e654) {
            ctx->pc = 0x23EB90u;
            goto label_23eb90;
        }
    }
    ctx->pc = 0x23E65Cu;
label_23e65c:
    // 0x23e65c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x23e65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x23e660: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x23e660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23e664: 0xc08fb14  jal         func_23EC50
    ctx->pc = 0x23E664u;
    SET_GPR_U32(ctx, 31, 0x23E66Cu);
    ctx->pc = 0x23EC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EC50u, 0x23E664u, 0x23E66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E66Cu;
label_23e66c:
    // 0x23e66c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x23e66cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e670: 0x27a4008c  addiu       $a0, $sp, 0x8C
    ctx->pc = 0x23e670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x23e674: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x23e674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x23e678: 0xc08f45c  jal         func_23D170
    ctx->pc = 0x23E678u;
    SET_GPR_U32(ctx, 31, 0x23E680u);
    ctx->pc = 0x23D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D170u, 0x23E678u, 0x23E680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E680u;
label_23e680:
    // 0x23e680: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x23e680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x23e684: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x23e684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x23e688: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x23e688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e68c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x23e68cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e690: 0xc0426d8  jal         func_109B60
    ctx->pc = 0x23E690u;
    SET_GPR_U32(ctx, 31, 0x23E698u);
    ctx->pc = 0x109B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109B60u, 0x23E690u, 0x23E698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E698u;
label_23e698:
    // 0x23e698: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x23e698u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23e69c: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x23e69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x23e6a0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23E6A0u;
    {
        const bool branch_taken_0x23e6a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e6a0) {
            ctx->pc = 0x23E6C0u;
            goto label_23e6c0;
        }
    }
    ctx->pc = 0x23E6A8u;
    // 0x23e6a8: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x23e6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x23e6ac: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x23e6acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x23e6b0: 0xc08f378  jal         func_23CDE0
    ctx->pc = 0x23E6B0u;
    SET_GPR_U32(ctx, 31, 0x23E6B8u);
    ctx->pc = 0x23CDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CDE0u, 0x23E6B0u, 0x23E6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E6B8u;
label_23e6b8:
    // 0x23e6b8: 0x10000135  b           . + 4 + (0x135 << 2)
    ctx->pc = 0x23E6B8u;
    {
        const bool branch_taken_0x23e6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e6b8) {
            ctx->pc = 0x23EB90u;
            goto label_23eb90;
        }
    }
    ctx->pc = 0x23E6C0u;
label_23e6c0:
    // 0x23e6c0: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x23e6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x23e6c4: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x23e6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x23e6c8: 0xc08f378  jal         func_23CDE0
    ctx->pc = 0x23E6C8u;
    SET_GPR_U32(ctx, 31, 0x23E6D0u);
    ctx->pc = 0x23CDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CDE0u, 0x23E6C8u, 0x23E6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E6D0u;
label_23e6d0:
    // 0x23e6d0: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x23e6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x23e6d4: 0xc08fb04  jal         func_23EC10
    ctx->pc = 0x23E6D4u;
    SET_GPR_U32(ctx, 31, 0x23E6DCu);
    ctx->pc = 0x23EC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EC10u, 0x23E6D4u, 0x23E6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E6DCu;
label_23e6dc:
    // 0x23e6dc: 0x8fa3009c  lw          $v1, 0x9C($sp)
    ctx->pc = 0x23e6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x23e6e0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x23e6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x23e6e4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x23e6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23e6e8: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x23E6E8u;
    {
        const bool branch_taken_0x23e6e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23e6e8) {
            ctx->pc = 0x23E724u;
            goto label_23e724;
        }
    }
    ctx->pc = 0x23E6F0u;
    // 0x23e6f0: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x23e6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x23e6f4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x23e6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x23e6f8: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x23e6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x23e6fc: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x23e6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x23e700: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23e700u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e704: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x23e704u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23e708: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x23e708u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x23e70c: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x23e70cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23e710: 0xc08fbf4  jal         func_23EFD0
    ctx->pc = 0x23E710u;
    SET_GPR_U32(ctx, 31, 0x23E718u);
    ctx->pc = 0x23EFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EFD0u, 0x23E710u, 0x23E718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E718u;
label_23e718:
    // 0x23e718: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x23e718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x23e71c: 0x1000011c  b           . + 4 + (0x11C << 2)
    ctx->pc = 0x23E71Cu;
    {
        const bool branch_taken_0x23e71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e71c) {
            ctx->pc = 0x23EB90u;
            goto label_23eb90;
        }
    }
    ctx->pc = 0x23E724u;
label_23e724:
    // 0x23e724: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x23e724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x23e728: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x23e728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x23e72c: 0xc08f45c  jal         func_23D170
    ctx->pc = 0x23E72Cu;
    SET_GPR_U32(ctx, 31, 0x23E734u);
    ctx->pc = 0x23D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D170u, 0x23E72Cu, 0x23E734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E734u;
label_23e734:
    // 0x23e734: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x23e734u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e738: 0x8fa4009c  lw          $a0, 0x9C($sp)
    ctx->pc = 0x23e738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x23e73c: 0xc08fb14  jal         func_23EC50
    ctx->pc = 0x23E73Cu;
    SET_GPR_U32(ctx, 31, 0x23E744u);
    ctx->pc = 0x23EC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EC50u, 0x23E73Cu, 0x23E744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E744u;
label_23e744:
    // 0x23e744: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x23e744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x23e748: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x23e748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x23e74c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x23e74cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e750: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x23e750u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e754: 0xc0426d8  jal         func_109B60
    ctx->pc = 0x23E754u;
    SET_GPR_U32(ctx, 31, 0x23E75Cu);
    ctx->pc = 0x109B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109B60u, 0x23E754u, 0x23E75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E75Cu;
label_23e75c:
    // 0x23e75c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x23E75Cu;
    {
        const bool branch_taken_0x23e75c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e75c) {
            ctx->pc = 0x23E7E0u;
            goto label_23e7e0;
        }
    }
    ctx->pc = 0x23E764u;
    // 0x23e764: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x23e764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x23e768: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x23e768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23e76c: 0xc08fafc  jal         func_23EBF0
    ctx->pc = 0x23E76Cu;
    SET_GPR_U32(ctx, 31, 0x23E774u);
    ctx->pc = 0x23EBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EBF0u, 0x23E76Cu, 0x23E774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E774u;
label_23e774:
    // 0x23e774: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x23e774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23e778: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x23E778u;
    {
        const bool branch_taken_0x23e778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e778) {
            ctx->pc = 0x23E7B4u;
            goto label_23e7b4;
        }
    }
    ctx->pc = 0x23E780u;
    // 0x23e780: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x23e780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x23e784: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x23e784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x23e788: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x23e788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x23e78c: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x23e78cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x23e790: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23e790u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e794: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x23e794u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23e798: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x23e798u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x23e79c: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x23e79cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23e7a0: 0xc08fbf4  jal         func_23EFD0
    ctx->pc = 0x23E7A0u;
    SET_GPR_U32(ctx, 31, 0x23E7A8u);
    ctx->pc = 0x23EFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EFD0u, 0x23E7A0u, 0x23E7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E7A8u;
label_23e7a8:
    // 0x23e7a8: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x23e7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x23e7ac: 0x100000f8  b           . + 4 + (0xF8 << 2)
    ctx->pc = 0x23E7ACu;
    {
        const bool branch_taken_0x23e7ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e7ac) {
            ctx->pc = 0x23EB90u;
            goto label_23eb90;
        }
    }
    ctx->pc = 0x23E7B4u;
label_23e7b4:
    // 0x23e7b4: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x23e7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x23e7b8: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x23e7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x23e7bc: 0x8fa6009c  lw          $a2, 0x9C($sp)
    ctx->pc = 0x23e7bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x23e7c0: 0x8fa7009c  lw          $a3, 0x9C($sp)
    ctx->pc = 0x23e7c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x23e7c4: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x23e7c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x23e7c8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x23e7c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e7cc: 0xc08fbf4  jal         func_23EFD0
    ctx->pc = 0x23E7CCu;
    SET_GPR_U32(ctx, 31, 0x23E7D4u);
    ctx->pc = 0x23EFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EFD0u, 0x23E7CCu, 0x23E7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E7D4u;
label_23e7d4:
    // 0x23e7d4: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x23e7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x23e7d8: 0x100000ed  b           . + 4 + (0xED << 2)
    ctx->pc = 0x23E7D8u;
    {
        const bool branch_taken_0x23e7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e7d8) {
            ctx->pc = 0x23EB90u;
            goto label_23eb90;
        }
    }
    ctx->pc = 0x23E7E0u;
label_23e7e0:
    // 0x23e7e0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x23e7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x23e7e4: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x23e7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x23e7e8: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x23e7e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x23e7ec: 0xc08fb5c  jal         func_23ED70
    ctx->pc = 0x23E7ECu;
    SET_GPR_U32(ctx, 31, 0x23E7F4u);
    ctx->pc = 0x23ED70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23ED70u, 0x23E7ECu, 0x23E7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E7F4u;
label_23e7f4:
    // 0x23e7f4: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x23e7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x23e7f8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x23e7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x23e7fc: 0xc08f378  jal         func_23CDE0
    ctx->pc = 0x23E7FCu;
    SET_GPR_U32(ctx, 31, 0x23E804u);
    ctx->pc = 0x23CDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CDE0u, 0x23E7FCu, 0x23E804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E804u;
label_23e804:
    // 0x23e804: 0x100000e2  b           . + 4 + (0xE2 << 2)
    ctx->pc = 0x23E804u;
    {
        const bool branch_taken_0x23e804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e804) {
            ctx->pc = 0x23EB90u;
            goto label_23eb90;
        }
    }
    ctx->pc = 0x23E80Cu;
label_23e80c:
    // 0x23e80c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x23e80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x23e810: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23e810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23e814: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x23e814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x23e818: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x23e818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23e81c: 0x1462002e  bne         $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x23E81Cu;
    {
        const bool branch_taken_0x23e81c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23e81c) {
            ctx->pc = 0x23E8D8u;
            goto label_23e8d8;
        }
    }
    ctx->pc = 0x23E824u;
    // 0x23e824: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x23e824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x23e828: 0xc08f02c  jal         func_23C0B0
    ctx->pc = 0x23E828u;
    SET_GPR_U32(ctx, 31, 0x23E830u);
    ctx->pc = 0x23C0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C0B0u, 0x23E828u, 0x23E830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E830u;
label_23e830:
    // 0x23e830: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x23e830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23e834: 0xc08f44c  jal         func_23D130
    ctx->pc = 0x23E834u;
    SET_GPR_U32(ctx, 31, 0x23E83Cu);
    ctx->pc = 0x23D130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D130u, 0x23E834u, 0x23E83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E83Cu;
label_23e83c:
    // 0x23e83c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x23e83cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e840: 0x27a40084  addiu       $a0, $sp, 0x84
    ctx->pc = 0x23e840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x23e844: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x23e844u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x23e848: 0xc08f45c  jal         func_23D170
    ctx->pc = 0x23E848u;
    SET_GPR_U32(ctx, 31, 0x23E850u);
    ctx->pc = 0x23D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D170u, 0x23E848u, 0x23E850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E850u;
label_23e850:
    // 0x23e850: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x23e850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x23e854: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x23e854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x23e858: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x23e858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e85c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x23e85cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e860: 0xc0426d8  jal         func_109B60
    ctx->pc = 0x23E860u;
    SET_GPR_U32(ctx, 31, 0x23E868u);
    ctx->pc = 0x109B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109B60u, 0x23E860u, 0x23E868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E868u;
label_23e868:
    // 0x23e868: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x23E868u;
    {
        const bool branch_taken_0x23e868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e868) {
            ctx->pc = 0x23E8ACu;
            goto label_23e8ac;
        }
    }
    ctx->pc = 0x23E870u;
    // 0x23e870: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x23e870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x23e874: 0xc08f02c  jal         func_23C0B0
    ctx->pc = 0x23E874u;
    SET_GPR_U32(ctx, 31, 0x23E87Cu);
    ctx->pc = 0x23C0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C0B0u, 0x23E874u, 0x23E87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E87Cu;
label_23e87c:
    // 0x23e87c: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x23e87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x23e880: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x23e880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x23e884: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x23e884u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x23e888: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23e888u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e88c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x23e88cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23e890: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x23e890u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x23e894: 0x8c690000  lw          $t1, 0x0($v1)
    ctx->pc = 0x23e894u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23e898: 0xc08fbf4  jal         func_23EFD0
    ctx->pc = 0x23E898u;
    SET_GPR_U32(ctx, 31, 0x23E8A0u);
    ctx->pc = 0x23EFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EFD0u, 0x23E898u, 0x23E8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E8A0u;
label_23e8a0:
    // 0x23e8a0: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x23e8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x23e8a4: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x23E8A4u;
    {
        const bool branch_taken_0x23e8a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e8a4) {
            ctx->pc = 0x23EB90u;
            goto label_23eb90;
        }
    }
    ctx->pc = 0x23E8ACu;
label_23e8ac:
    // 0x23e8ac: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x23e8acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x23e8b0: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x23e8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x23e8b4: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x23e8b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x23e8b8: 0xc08fb5c  jal         func_23ED70
    ctx->pc = 0x23E8B8u;
    SET_GPR_U32(ctx, 31, 0x23E8C0u);
    ctx->pc = 0x23ED70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23ED70u, 0x23E8B8u, 0x23E8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E8C0u;
label_23e8c0:
    // 0x23e8c0: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x23e8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x23e8c4: 0x27a50058  addiu       $a1, $sp, 0x58
    ctx->pc = 0x23e8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x23e8c8: 0xc08f378  jal         func_23CDE0
    ctx->pc = 0x23E8C8u;
    SET_GPR_U32(ctx, 31, 0x23E8D0u);
    ctx->pc = 0x23CDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CDE0u, 0x23E8C8u, 0x23E8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E8D0u;
label_23e8d0:
    // 0x23e8d0: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x23E8D0u;
    {
        const bool branch_taken_0x23e8d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e8d0) {
            ctx->pc = 0x23EB90u;
            goto label_23eb90;
        }
    }
    ctx->pc = 0x23E8D8u;
label_23e8d8:
    // 0x23e8d8: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x23e8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x23e8dc: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x23e8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x23e8e0: 0xc08f378  jal         func_23CDE0
    ctx->pc = 0x23E8E0u;
    SET_GPR_U32(ctx, 31, 0x23E8E8u);
    ctx->pc = 0x23CDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CDE0u, 0x23E8E0u, 0x23E8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E8E8u;
label_23e8e8:
    // 0x23e8e8: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x23e8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x23e8ec: 0xc08faec  jal         func_23EBB0
    ctx->pc = 0x23E8ECu;
    SET_GPR_U32(ctx, 31, 0x23E8F4u);
    ctx->pc = 0x23EBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EBB0u, 0x23E8ECu, 0x23E8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E8F4u;
label_23e8f4:
    // 0x23e8f4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x23e8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x23e8f8: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x23e8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x23e8fc: 0xc08f45c  jal         func_23D170
    ctx->pc = 0x23E8FCu;
    SET_GPR_U32(ctx, 31, 0x23E904u);
    ctx->pc = 0x23D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D170u, 0x23E8FCu, 0x23E904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E904u;
label_23e904:
    // 0x23e904: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x23e904u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e908: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x23e908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x23e90c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x23e90cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23e910: 0xc08fb14  jal         func_23EC50
    ctx->pc = 0x23E910u;
    SET_GPR_U32(ctx, 31, 0x23E918u);
    ctx->pc = 0x23EC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EC50u, 0x23E910u, 0x23E918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E918u;
label_23e918:
    // 0x23e918: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x23e918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x23e91c: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x23e91cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x23e920: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x23e920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e924: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x23e924u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e928: 0xc0426d8  jal         func_109B60
    ctx->pc = 0x23E928u;
    SET_GPR_U32(ctx, 31, 0x23E930u);
    ctx->pc = 0x109B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109B60u, 0x23E928u, 0x23E930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E930u;
label_23e930:
    // 0x23e930: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x23e930u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23e934: 0x1200002f  beqz        $s0, . + 4 + (0x2F << 2)
    ctx->pc = 0x23E934u;
    {
        const bool branch_taken_0x23e934 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e934) {
            ctx->pc = 0x23E9F4u;
            goto label_23e9f4;
        }
    }
    ctx->pc = 0x23E93Cu;
    // 0x23e93c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x23e93cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x23e940: 0xc08fb14  jal         func_23EC50
    ctx->pc = 0x23E940u;
    SET_GPR_U32(ctx, 31, 0x23E948u);
    ctx->pc = 0x23EC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EC50u, 0x23E940u, 0x23E948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E948u;
label_23e948:
    // 0x23e948: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x23e948u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e94c: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x23e94cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x23e950: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x23e950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x23e954: 0xc08f45c  jal         func_23D170
    ctx->pc = 0x23E954u;
    SET_GPR_U32(ctx, 31, 0x23E95Cu);
    ctx->pc = 0x23D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D170u, 0x23E954u, 0x23E95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E95Cu;
label_23e95c:
    // 0x23e95c: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x23e95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x23e960: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x23e960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x23e964: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x23e964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e968: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x23e968u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e96c: 0xc0426d8  jal         func_109B60
    ctx->pc = 0x23E96Cu;
    SET_GPR_U32(ctx, 31, 0x23E974u);
    ctx->pc = 0x109B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109B60u, 0x23E96Cu, 0x23E974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E974u;
label_23e974:
    // 0x23e974: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x23E974u;
    {
        const bool branch_taken_0x23e974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e974) {
            ctx->pc = 0x23E9F4u;
            goto label_23e9f4;
        }
    }
    ctx->pc = 0x23E97Cu;
    // 0x23e97c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x23e97cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x23e980: 0xc08fafc  jal         func_23EBF0
    ctx->pc = 0x23E980u;
    SET_GPR_U32(ctx, 31, 0x23E988u);
    ctx->pc = 0x23EBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EBF0u, 0x23E980u, 0x23E988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E988u;
label_23e988:
    // 0x23e988: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x23e988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23e98c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x23E98Cu;
    {
        const bool branch_taken_0x23e98c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e98c) {
            ctx->pc = 0x23E9C0u;
            goto label_23e9c0;
        }
    }
    ctx->pc = 0x23E994u;
    // 0x23e994: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x23e994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x23e998: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x23e998u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x23e99c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23e99cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e9a0: 0x8fa70098  lw          $a3, 0x98($sp)
    ctx->pc = 0x23e9a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x23e9a4: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x23e9a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x23e9a8: 0x8fa90098  lw          $t1, 0x98($sp)
    ctx->pc = 0x23e9a8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x23e9ac: 0xc08fbf4  jal         func_23EFD0
    ctx->pc = 0x23E9ACu;
    SET_GPR_U32(ctx, 31, 0x23E9B4u);
    ctx->pc = 0x23EFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EFD0u, 0x23E9ACu, 0x23E9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E9B4u;
label_23e9b4:
    // 0x23e9b4: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x23e9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x23e9b8: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x23E9B8u;
    {
        const bool branch_taken_0x23e9b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e9b8) {
            ctx->pc = 0x23EB90u;
            goto label_23eb90;
        }
    }
    ctx->pc = 0x23E9C0u;
label_23e9c0:
    // 0x23e9c0: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x23e9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x23e9c4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x23e9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x23e9c8: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x23e9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x23e9cc: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x23e9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x23e9d0: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x23e9d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23e9d4: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x23e9d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23e9d8: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x23e9d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x23e9dc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x23e9dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e9e0: 0xc08fbf4  jal         func_23EFD0
    ctx->pc = 0x23E9E0u;
    SET_GPR_U32(ctx, 31, 0x23E9E8u);
    ctx->pc = 0x23EFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EFD0u, 0x23E9E0u, 0x23E9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E9E8u;
label_23e9e8:
    // 0x23e9e8: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x23e9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x23e9ec: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x23E9ECu;
    {
        const bool branch_taken_0x23e9ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e9ec) {
            ctx->pc = 0x23EB90u;
            goto label_23eb90;
        }
    }
    ctx->pc = 0x23E9F4u;
label_23e9f4:
    // 0x23e9f4: 0x27a40094  addiu       $a0, $sp, 0x94
    ctx->pc = 0x23e9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x23e9f8: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x23e9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x23e9fc: 0xc08f378  jal         func_23CDE0
    ctx->pc = 0x23E9FCu;
    SET_GPR_U32(ctx, 31, 0x23EA04u);
    ctx->pc = 0x23CDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CDE0u, 0x23E9FCu, 0x23EA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EA04u;
label_23ea04:
    // 0x23ea04: 0x27a40094  addiu       $a0, $sp, 0x94
    ctx->pc = 0x23ea04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x23ea08: 0xc08fb04  jal         func_23EC10
    ctx->pc = 0x23EA08u;
    SET_GPR_U32(ctx, 31, 0x23EA10u);
    ctx->pc = 0x23EC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EC10u, 0x23EA08u, 0x23EA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EA10u;
label_23ea10:
    // 0x23ea10: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x23ea10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x23ea14: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x23ea14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x23ea18: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x23ea18u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23ea1c: 0x16000011  bnez        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x23EA1Cu;
    {
        const bool branch_taken_0x23ea1c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x23ea1c) {
            ctx->pc = 0x23EA64u;
            goto label_23ea64;
        }
    }
    ctx->pc = 0x23EA24u;
    // 0x23ea24: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x23ea24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x23ea28: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x23ea28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23ea2c: 0xc08fb14  jal         func_23EC50
    ctx->pc = 0x23EA2Cu;
    SET_GPR_U32(ctx, 31, 0x23EA34u);
    ctx->pc = 0x23EC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EC50u, 0x23EA2Cu, 0x23EA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EA34u;
label_23ea34:
    // 0x23ea34: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x23ea34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ea38: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x23ea38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x23ea3c: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x23ea3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x23ea40: 0xc08f45c  jal         func_23D170
    ctx->pc = 0x23EA40u;
    SET_GPR_U32(ctx, 31, 0x23EA48u);
    ctx->pc = 0x23D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D170u, 0x23EA40u, 0x23EA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EA48u;
label_23ea48:
    // 0x23ea48: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x23ea48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x23ea4c: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x23ea4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x23ea50: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x23ea50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ea54: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x23ea54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ea58: 0xc0426d8  jal         func_109B60
    ctx->pc = 0x23EA58u;
    SET_GPR_U32(ctx, 31, 0x23EA60u);
    ctx->pc = 0x109B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109B60u, 0x23EA58u, 0x23EA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EA60u;
label_23ea60:
    // 0x23ea60: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x23ea60u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_23ea64:
    // 0x23ea64: 0x16000037  bnez        $s0, . + 4 + (0x37 << 2)
    ctx->pc = 0x23EA64u;
    {
        const bool branch_taken_0x23ea64 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x23ea64) {
            ctx->pc = 0x23EB44u;
            goto label_23eb44;
        }
    }
    ctx->pc = 0x23EA6Cu;
    // 0x23ea6c: 0x12200035  beqz        $s1, . + 4 + (0x35 << 2)
    ctx->pc = 0x23EA6Cu;
    {
        const bool branch_taken_0x23ea6c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ea6c) {
            ctx->pc = 0x23EB44u;
            goto label_23eb44;
        }
    }
    ctx->pc = 0x23EA74u;
    // 0x23ea74: 0x8fa30094  lw          $v1, 0x94($sp)
    ctx->pc = 0x23ea74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x23ea78: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x23ea78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x23ea7c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x23ea7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23ea80: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x23EA80u;
    {
        const bool branch_taken_0x23ea80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23ea80) {
            ctx->pc = 0x23EAC8u;
            goto label_23eac8;
        }
    }
    ctx->pc = 0x23EA88u;
    // 0x23ea88: 0x27a40074  addiu       $a0, $sp, 0x74
    ctx->pc = 0x23ea88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x23ea8c: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x23ea8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x23ea90: 0xc08f45c  jal         func_23D170
    ctx->pc = 0x23EA90u;
    SET_GPR_U32(ctx, 31, 0x23EA98u);
    ctx->pc = 0x23D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D170u, 0x23EA90u, 0x23EA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EA98u;
label_23ea98:
    // 0x23ea98: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x23ea98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ea9c: 0x8fa40094  lw          $a0, 0x94($sp)
    ctx->pc = 0x23ea9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x23eaa0: 0xc08fb14  jal         func_23EC50
    ctx->pc = 0x23EAA0u;
    SET_GPR_U32(ctx, 31, 0x23EAA8u);
    ctx->pc = 0x23EC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EC50u, 0x23EAA0u, 0x23EAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EAA8u;
label_23eaa8:
    // 0x23eaa8: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x23eaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x23eaac: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x23eaacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x23eab0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x23eab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23eab4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x23eab4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23eab8: 0xc0426d8  jal         func_109B60
    ctx->pc = 0x23EAB8u;
    SET_GPR_U32(ctx, 31, 0x23EAC0u);
    ctx->pc = 0x109B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109B60u, 0x23EAB8u, 0x23EAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EAC0u;
label_23eac0:
    // 0x23eac0: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x23EAC0u;
    {
        const bool branch_taken_0x23eac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23eac0) {
            ctx->pc = 0x23EB44u;
            goto label_23eb44;
        }
    }
    ctx->pc = 0x23EAC8u;
label_23eac8:
    // 0x23eac8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x23eac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x23eacc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x23eaccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23ead0: 0xc08fafc  jal         func_23EBF0
    ctx->pc = 0x23EAD0u;
    SET_GPR_U32(ctx, 31, 0x23EAD8u);
    ctx->pc = 0x23EBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EBF0u, 0x23EAD0u, 0x23EAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EAD8u;
label_23ead8:
    // 0x23ead8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x23ead8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23eadc: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x23EADCu;
    {
        const bool branch_taken_0x23eadc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23eadc) {
            ctx->pc = 0x23EB18u;
            goto label_23eb18;
        }
    }
    ctx->pc = 0x23EAE4u;
    // 0x23eae4: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x23eae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x23eae8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x23eae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x23eaec: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x23eaecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x23eaf0: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x23eaf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x23eaf4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23eaf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23eaf8: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x23eaf8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23eafc: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x23eafcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x23eb00: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x23eb00u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23eb04: 0xc08fbf4  jal         func_23EFD0
    ctx->pc = 0x23EB04u;
    SET_GPR_U32(ctx, 31, 0x23EB0Cu);
    ctx->pc = 0x23EFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EFD0u, 0x23EB04u, 0x23EB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EB0Cu;
label_23eb0c:
    // 0x23eb0c: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x23eb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x23eb10: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x23EB10u;
    {
        const bool branch_taken_0x23eb10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23eb10) {
            ctx->pc = 0x23EB90u;
            goto label_23eb90;
        }
    }
    ctx->pc = 0x23EB18u;
label_23eb18:
    // 0x23eb18: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x23eb18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x23eb1c: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x23eb1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x23eb20: 0x8fa60094  lw          $a2, 0x94($sp)
    ctx->pc = 0x23eb20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x23eb24: 0x8fa70094  lw          $a3, 0x94($sp)
    ctx->pc = 0x23eb24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x23eb28: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x23eb28u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x23eb2c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x23eb2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23eb30: 0xc08fbf4  jal         func_23EFD0
    ctx->pc = 0x23EB30u;
    SET_GPR_U32(ctx, 31, 0x23EB38u);
    ctx->pc = 0x23EFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EFD0u, 0x23EB30u, 0x23EB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EB38u;
label_23eb38:
    // 0x23eb38: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x23eb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x23eb3c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x23EB3Cu;
    {
        const bool branch_taken_0x23eb3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23eb3c) {
            ctx->pc = 0x23EB90u;
            goto label_23eb90;
        }
    }
    ctx->pc = 0x23EB44u;
label_23eb44:
    // 0x23eb44: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x23eb44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x23eb48: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x23eb48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x23eb4c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23EB4Cu;
    {
        const bool branch_taken_0x23eb4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23eb4c) {
            ctx->pc = 0x23EB6Cu;
            goto label_23eb6c;
        }
    }
    ctx->pc = 0x23EB54u;
    // 0x23eb54: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x23eb54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x23eb58: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x23eb58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x23eb5c: 0xc08f378  jal         func_23CDE0
    ctx->pc = 0x23EB5Cu;
    SET_GPR_U32(ctx, 31, 0x23EB64u);
    ctx->pc = 0x23CDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CDE0u, 0x23EB5Cu, 0x23EB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EB64u;
label_23eb64:
    // 0x23eb64: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x23EB64u;
    {
        const bool branch_taken_0x23eb64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23eb64) {
            ctx->pc = 0x23EB90u;
            goto label_23eb90;
        }
    }
    ctx->pc = 0x23EB6Cu;
label_23eb6c:
    // 0x23eb6c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x23eb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x23eb70: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x23eb70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x23eb74: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x23eb74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x23eb78: 0xc08fb5c  jal         func_23ED70
    ctx->pc = 0x23EB78u;
    SET_GPR_U32(ctx, 31, 0x23EB80u);
    ctx->pc = 0x23ED70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23ED70u, 0x23EB78u, 0x23EB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EB80u;
label_23eb80:
    // 0x23eb80: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x23eb80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x23eb84: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x23eb84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x23eb88: 0xc08f378  jal         func_23CDE0
    ctx->pc = 0x23EB88u;
    SET_GPR_U32(ctx, 31, 0x23EB90u);
    ctx->pc = 0x23CDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CDE0u, 0x23EB88u, 0x23EB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EB90u;
label_23eb90:
    // 0x23eb90: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x23eb90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23eb94: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x23eb94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23eb98: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23eb98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23eb9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23eb9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23eba0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23eba0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23eba4: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x23eba4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x23eba8: 0x3e00008  jr          $ra
    ctx->pc = 0x23EBA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23EBA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23EBB0u;
}
