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

// Function: sub_002CC5B0
// Address: 0x2cc5b0 - 0x2cc740
void sub_002CC5B0_0x2cc5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CC5B0_0x2cc5b0");
#endif

    switch (ctx->pc) {
        case 0x2cc5f4u: goto label_2cc5f4;
        case 0x2cc608u: goto label_2cc608;
        case 0x2cc618u: goto label_2cc618;
        case 0x2cc624u: goto label_2cc624;
        case 0x2cc648u: goto label_2cc648;
        case 0x2cc658u: goto label_2cc658;
        case 0x2cc66cu: goto label_2cc66c;
        case 0x2cc684u: goto label_2cc684;
        case 0x2cc690u: goto label_2cc690;
        case 0x2cc6a8u: goto label_2cc6a8;
        case 0x2cc6b0u: goto label_2cc6b0;
        case 0x2cc6c0u: goto label_2cc6c0;
        case 0x2cc6d4u: goto label_2cc6d4;
        case 0x2cc6e8u: goto label_2cc6e8;
        case 0x2cc6f8u: goto label_2cc6f8;
        case 0x2cc708u: goto label_2cc708;
        default: break;
    }

    ctx->pc = 0x2cc5b0u;

    // 0x2cc5b0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2cc5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x2cc5b4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2cc5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2cc5b8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2cc5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2cc5bc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2cc5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2cc5c0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2cc5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2cc5c4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2cc5c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2cc5c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cc5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2cc5cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cc5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cc5d0: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x2cc5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
    // 0x2cc5d4: 0xafa600a0  sw          $a2, 0xA0($sp)
    ctx->pc = 0x2cc5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 6));
    // 0x2cc5d8: 0xafa700b0  sw          $a3, 0xB0($sp)
    ctx->pc = 0x2cc5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 7));
    // 0x2cc5dc: 0xafa800c0  sw          $t0, 0xC0($sp)
    ctx->pc = 0x2cc5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 8));
    // 0x2cc5e0: 0xafa900d0  sw          $t1, 0xD0($sp)
    ctx->pc = 0x2cc5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 9));
    // 0x2cc5e4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2cc5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2cc5e8: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x2cc5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x2cc5ec: 0xc090590  jal         func_241640
    ctx->pc = 0x2CC5ECu;
    SET_GPR_U32(ctx, 31, 0x2CC5F4u);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x2CC5ECu, 0x2CC5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC5F4u;
label_2cc5f4:
    // 0x2cc5f4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2cc5f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc5f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2cc5f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc5fc: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x2cc5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2cc600: 0xc09157c  jal         func_2455F0
    ctx->pc = 0x2CC600u;
    SET_GPR_U32(ctx, 31, 0x2CC608u);
    ctx->pc = 0x2455F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455F0u, 0x2CC600u, 0x2CC608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC608u;
label_2cc608:
    // 0x2cc608: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2cc608u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc60c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2cc60cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc610: 0xc040e7c  jal         func_1039F0
    ctx->pc = 0x2CC610u;
    SET_GPR_U32(ctx, 31, 0x2CC618u);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x2CC610u, 0x2CC618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC618u;
label_2cc618:
    // 0x2cc618: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cc618u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc61c: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x2CC61Cu;
    {
        const bool branch_taken_0x2cc61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc61c) {
            ctx->pc = 0x2CC6FCu;
            goto label_2cc6fc;
        }
    }
    ctx->pc = 0x2CC624u;
label_2cc624:
    // 0x2cc624: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2cc624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2cc628: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2cc628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2cc62c: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x2cc62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2cc630: 0x10620031  beq         $v1, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x2CC630u;
    {
        const bool branch_taken_0x2cc630 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2cc630) {
            ctx->pc = 0x2CC6F8u;
            goto label_2cc6f8;
        }
    }
    ctx->pc = 0x2CC638u;
    // 0x2cc638: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2cc638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2cc63c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2cc63cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2cc640: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2CC640u;
    SET_GPR_U32(ctx, 31, 0x2CC648u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2CC640u, 0x2CC648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC648u;
label_2cc648:
    // 0x2cc648: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2cc648u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc64c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cc64cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc650: 0xc09b044  jal         func_26C110
    ctx->pc = 0x2CC650u;
    SET_GPR_U32(ctx, 31, 0x2CC658u);
    ctx->pc = 0x26C110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C110u, 0x2CC650u, 0x2CC658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC658u;
label_2cc658:
    // 0x2cc658: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2CC658u;
    {
        const bool branch_taken_0x2cc658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc658) {
            ctx->pc = 0x2CC6F8u;
            goto label_2cc6f8;
        }
    }
    ctx->pc = 0x2CC660u;
    // 0x2cc660: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2cc660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2cc664: 0xc0965f8  jal         func_2597E0
    ctx->pc = 0x2CC664u;
    SET_GPR_U32(ctx, 31, 0x2CC66Cu);
    ctx->pc = 0x2597E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2597E0u, 0x2CC664u, 0x2CC66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC66Cu;
label_2cc66c:
    // 0x2cc66c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cc66cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc670: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x2cc670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2cc674: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x2cc674u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2cc678: 0x8fa700c0  lw          $a3, 0xC0($sp)
    ctx->pc = 0x2cc678u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2cc67c: 0xc09ae04  jal         func_26B810
    ctx->pc = 0x2CC67Cu;
    SET_GPR_U32(ctx, 31, 0x2CC684u);
    ctx->pc = 0x26B810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B810u, 0x2CC67Cu, 0x2CC684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC684u;
label_2cc684:
    // 0x2cc684: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2cc684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2cc688: 0xc056a94  jal         func_15AA50
    ctx->pc = 0x2CC688u;
    SET_GPR_U32(ctx, 31, 0x2CC690u);
    ctx->pc = 0x15AA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15AA50u, 0x2CC688u, 0x2CC690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC690u;
label_2cc690:
    // 0x2cc690: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2CC690u;
    {
        const bool branch_taken_0x2cc690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cc690) {
            ctx->pc = 0x2CC6E8u;
            goto label_2cc6e8;
        }
    }
    ctx->pc = 0x2CC698u;
    // 0x2cc698: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x2cc698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2cc69c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cc69cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc6a0: 0xc042128  jal         func_1084A0
    ctx->pc = 0x2CC6A0u;
    SET_GPR_U32(ctx, 31, 0x2CC6A8u);
    ctx->pc = 0x1084A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084A0u, 0x2CC6A0u, 0x2CC6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC6A8u;
label_2cc6a8:
    // 0x2cc6a8: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x2CC6A8u;
    SET_GPR_U32(ctx, 31, 0x2CC6B0u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x2CC6A8u, 0x2CC6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC6B0u;
label_2cc6b0:
    // 0x2cc6b0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2cc6b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc6b4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2cc6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2cc6b8: 0xc09ac80  jal         func_26B200
    ctx->pc = 0x2CC6B8u;
    SET_GPR_U32(ctx, 31, 0x2CC6C0u);
    ctx->pc = 0x26B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B200u, 0x2CC6B8u, 0x2CC6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC6C0u;
label_2cc6c0:
    // 0x2cc6c0: 0x2a2001b  divu        $zero, $s5, $v0
    ctx->pc = 0x2cc6c0u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 21) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 21) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,21); } }
    // 0x2cc6c4: 0x2810  mfhi        $a1
    ctx->pc = 0x2cc6c4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x2cc6c8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2cc6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2cc6cc: 0xc09ac70  jal         func_26B1C0
    ctx->pc = 0x2CC6CCu;
    SET_GPR_U32(ctx, 31, 0x2CC6D4u);
    ctx->pc = 0x26B1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B1C0u, 0x2CC6CCu, 0x2CC6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC6D4u;
label_2cc6d4:
    // 0x2cc6d4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2cc6d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc6d8: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x2cc6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2cc6dc: 0x26650004  addiu       $a1, $s3, 0x4
    ctx->pc = 0x2cc6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2cc6e0: 0xc09a42c  jal         func_2690B0
    ctx->pc = 0x2CC6E0u;
    SET_GPR_U32(ctx, 31, 0x2CC6E8u);
    ctx->pc = 0x2690B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2690B0u, 0x2CC6E0u, 0x2CC6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC6E8u;
label_2cc6e8:
    // 0x2cc6e8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2cc6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2cc6ec: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2cc6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cc6f0: 0xc096218  jal         func_258860
    ctx->pc = 0x2CC6F0u;
    SET_GPR_U32(ctx, 31, 0x2CC6F8u);
    ctx->pc = 0x258860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258860u, 0x2CC6F0u, 0x2CC6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC6F8u;
label_2cc6f8:
    // 0x2cc6f8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2cc6f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2cc6fc:
    // 0x2cc6fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2cc6fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc700: 0xc04147c  jal         func_1051F0
    ctx->pc = 0x2CC700u;
    SET_GPR_U32(ctx, 31, 0x2CC708u);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x2CC700u, 0x2CC708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC708u;
label_2cc708:
    // 0x2cc708: 0x1602ffc6  bne         $s0, $v0, . + 4 + (-0x3A << 2)
    ctx->pc = 0x2CC708u;
    {
        const bool branch_taken_0x2cc708 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2cc708) {
            ctx->pc = 0x2CC624u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cc624;
        }
    }
    ctx->pc = 0x2CC710u;
    // 0x2cc710: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2cc710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2cc714: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2cc714u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cc718: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2cc718u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cc71c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2cc71cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cc720: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2cc720u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cc724: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cc724u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cc728: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cc728u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cc72c: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x2cc72cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2cc730: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC738u;
    // 0x2cc738: 0x0  nop
    ctx->pc = 0x2cc738u;
    // NOP
    // 0x2cc73c: 0x0  nop
    ctx->pc = 0x2cc73cu;
    // NOP
    ctx->pc = 0x2cc740u;
}
