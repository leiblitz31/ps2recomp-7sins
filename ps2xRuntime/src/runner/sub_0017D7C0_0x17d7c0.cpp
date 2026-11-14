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

// Function: sub_0017D7C0
// Address: 0x17d7c0 - 0x17d980
void sub_0017D7C0_0x17d7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D7C0_0x17d7c0");
#endif

    switch (ctx->pc) {
        case 0x17d7c0u: goto label_17d7c0;
        case 0x17d7c4u: goto label_17d7c4;
        case 0x17d7c8u: goto label_17d7c8;
        case 0x17d7ccu: goto label_17d7cc;
        case 0x17d7d0u: goto label_17d7d0;
        case 0x17d7d4u: goto label_17d7d4;
        case 0x17d7d8u: goto label_17d7d8;
        case 0x17d7dcu: goto label_17d7dc;
        case 0x17d7e0u: goto label_17d7e0;
        case 0x17d7e4u: goto label_17d7e4;
        case 0x17d7e8u: goto label_17d7e8;
        case 0x17d7ecu: goto label_17d7ec;
        case 0x17d7f0u: goto label_17d7f0;
        case 0x17d7f4u: goto label_17d7f4;
        case 0x17d7f8u: goto label_17d7f8;
        case 0x17d7fcu: goto label_17d7fc;
        case 0x17d800u: goto label_17d800;
        case 0x17d804u: goto label_17d804;
        case 0x17d808u: goto label_17d808;
        case 0x17d80cu: goto label_17d80c;
        case 0x17d810u: goto label_17d810;
        case 0x17d814u: goto label_17d814;
        case 0x17d818u: goto label_17d818;
        case 0x17d81cu: goto label_17d81c;
        case 0x17d820u: goto label_17d820;
        case 0x17d824u: goto label_17d824;
        case 0x17d828u: goto label_17d828;
        case 0x17d82cu: goto label_17d82c;
        case 0x17d830u: goto label_17d830;
        case 0x17d834u: goto label_17d834;
        case 0x17d838u: goto label_17d838;
        case 0x17d83cu: goto label_17d83c;
        case 0x17d840u: goto label_17d840;
        case 0x17d844u: goto label_17d844;
        case 0x17d848u: goto label_17d848;
        case 0x17d84cu: goto label_17d84c;
        case 0x17d850u: goto label_17d850;
        case 0x17d854u: goto label_17d854;
        case 0x17d858u: goto label_17d858;
        case 0x17d85cu: goto label_17d85c;
        case 0x17d860u: goto label_17d860;
        case 0x17d864u: goto label_17d864;
        case 0x17d868u: goto label_17d868;
        case 0x17d86cu: goto label_17d86c;
        case 0x17d870u: goto label_17d870;
        case 0x17d874u: goto label_17d874;
        case 0x17d878u: goto label_17d878;
        case 0x17d87cu: goto label_17d87c;
        case 0x17d880u: goto label_17d880;
        case 0x17d884u: goto label_17d884;
        case 0x17d888u: goto label_17d888;
        case 0x17d88cu: goto label_17d88c;
        case 0x17d890u: goto label_17d890;
        case 0x17d894u: goto label_17d894;
        case 0x17d898u: goto label_17d898;
        case 0x17d89cu: goto label_17d89c;
        case 0x17d8a0u: goto label_17d8a0;
        case 0x17d8a4u: goto label_17d8a4;
        case 0x17d8a8u: goto label_17d8a8;
        case 0x17d8acu: goto label_17d8ac;
        case 0x17d8b0u: goto label_17d8b0;
        case 0x17d8b4u: goto label_17d8b4;
        case 0x17d8b8u: goto label_17d8b8;
        case 0x17d8bcu: goto label_17d8bc;
        case 0x17d8c0u: goto label_17d8c0;
        case 0x17d8c4u: goto label_17d8c4;
        case 0x17d8c8u: goto label_17d8c8;
        case 0x17d8ccu: goto label_17d8cc;
        case 0x17d8d0u: goto label_17d8d0;
        case 0x17d8d4u: goto label_17d8d4;
        case 0x17d8d8u: goto label_17d8d8;
        case 0x17d8dcu: goto label_17d8dc;
        case 0x17d8e0u: goto label_17d8e0;
        case 0x17d8e4u: goto label_17d8e4;
        case 0x17d8e8u: goto label_17d8e8;
        case 0x17d8ecu: goto label_17d8ec;
        case 0x17d8f0u: goto label_17d8f0;
        case 0x17d8f4u: goto label_17d8f4;
        case 0x17d8f8u: goto label_17d8f8;
        case 0x17d8fcu: goto label_17d8fc;
        case 0x17d900u: goto label_17d900;
        case 0x17d904u: goto label_17d904;
        case 0x17d908u: goto label_17d908;
        case 0x17d90cu: goto label_17d90c;
        case 0x17d910u: goto label_17d910;
        case 0x17d914u: goto label_17d914;
        case 0x17d918u: goto label_17d918;
        case 0x17d91cu: goto label_17d91c;
        case 0x17d920u: goto label_17d920;
        case 0x17d924u: goto label_17d924;
        case 0x17d928u: goto label_17d928;
        case 0x17d92cu: goto label_17d92c;
        case 0x17d930u: goto label_17d930;
        case 0x17d934u: goto label_17d934;
        case 0x17d938u: goto label_17d938;
        case 0x17d93cu: goto label_17d93c;
        case 0x17d940u: goto label_17d940;
        case 0x17d944u: goto label_17d944;
        case 0x17d948u: goto label_17d948;
        case 0x17d94cu: goto label_17d94c;
        case 0x17d950u: goto label_17d950;
        case 0x17d954u: goto label_17d954;
        case 0x17d958u: goto label_17d958;
        case 0x17d95cu: goto label_17d95c;
        case 0x17d960u: goto label_17d960;
        case 0x17d964u: goto label_17d964;
        case 0x17d968u: goto label_17d968;
        case 0x17d96cu: goto label_17d96c;
        case 0x17d970u: goto label_17d970;
        case 0x17d974u: goto label_17d974;
        case 0x17d978u: goto label_17d978;
        case 0x17d97cu: goto label_17d97c;
        default: break;
    }

    ctx->pc = 0x17d7c0u;

label_17d7c0:
    // 0x17d7c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17d7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_17d7c4:
    // 0x17d7c4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x17d7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_17d7c8:
    // 0x17d7c8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x17d7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_17d7cc:
    // 0x17d7cc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17d7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17d7d0:
    // 0x17d7d0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x17d7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_17d7d4:
    // 0x17d7d4: 0x3e00008  jr          $ra
label_17d7d8:
    if (ctx->pc == 0x17D7D8u) {
        ctx->pc = 0x17D7DCu;
        goto label_17d7dc;
    }
    ctx->pc = 0x17D7D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D7D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D7DCu;
label_17d7dc:
    // 0x17d7dc: 0x0  nop
    ctx->pc = 0x17d7dcu;
    // NOP
label_17d7e0:
    // 0x17d7e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17d7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_17d7e4:
    // 0x17d7e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17d7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_17d7e8:
    // 0x17d7e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17d7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_17d7ec:
    // 0x17d7ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17d7ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17d7f0:
    // 0x17d7f0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x17d7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_17d7f4:
    // 0x17d7f4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x17d7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_17d7f8:
    // 0x17d7f8: 0xc055974  jal         func_1565D0
label_17d7fc:
    if (ctx->pc == 0x17D7FCu) {
        ctx->pc = 0x17D800u;
        goto label_17d800;
    }
    ctx->pc = 0x17D7F8u;
    SET_GPR_U32(ctx, 31, 0x17D800u);
    ctx->pc = 0x1565D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1565D0u, 0x17D7F8u, 0x17D800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D800u;
label_17d800:
    // 0x17d800: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x17d800u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_17d804:
    // 0x17d804: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x17d804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_17d808:
    // 0x17d808: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17d808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17d80c:
    // 0x17d80c: 0x14620025  bne         $v1, $v0, . + 4 + (0x25 << 2)
label_17d810:
    if (ctx->pc == 0x17D810u) {
        ctx->pc = 0x17D814u;
        goto label_17d814;
    }
    ctx->pc = 0x17D80Cu;
    {
        const bool branch_taken_0x17d80c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x17d80c) {
            ctx->pc = 0x17D8A4u;
            goto label_17d8a4;
        }
    }
    ctx->pc = 0x17D814u;
label_17d814:
    // 0x17d814: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x17d814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_17d818:
    // 0x17d818: 0xc119b68  jal         func_466DA0
label_17d81c:
    if (ctx->pc == 0x17D81Cu) {
        ctx->pc = 0x17D820u;
        goto label_17d820;
    }
    ctx->pc = 0x17D818u;
    SET_GPR_U32(ctx, 31, 0x17D820u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x17D818u, 0x17D820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D820u;
label_17d820:
    // 0x17d820: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x17d820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_17d824:
    // 0x17d824: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17d824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17d828:
    // 0x17d828: 0xc0400e0  jal         func_100380
label_17d82c:
    if (ctx->pc == 0x17D82Cu) {
        ctx->pc = 0x17D830u;
        goto label_17d830;
    }
    ctx->pc = 0x17D828u;
    SET_GPR_U32(ctx, 31, 0x17D830u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x17D828u, 0x17D830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D830u;
label_17d830:
    // 0x17d830: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17d830u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17d834:
    // 0x17d834: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_17d838:
    if (ctx->pc == 0x17D838u) {
        ctx->pc = 0x17D83Cu;
        goto label_17d83c;
    }
    ctx->pc = 0x17D834u;
    {
        const bool branch_taken_0x17d834 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d834) {
            ctx->pc = 0x17D84Cu;
            goto label_17d84c;
        }
    }
    ctx->pc = 0x17D83Cu;
label_17d83c:
    // 0x17d83c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17d83cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17d840:
    // 0x17d840: 0xc060a60  jal         func_182980
label_17d844:
    if (ctx->pc == 0x17D844u) {
        ctx->pc = 0x17D848u;
        goto label_17d848;
    }
    ctx->pc = 0x17D840u;
    SET_GPR_U32(ctx, 31, 0x17D848u);
    ctx->pc = 0x182980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182980u, 0x17D840u, 0x17D848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D848u;
label_17d848:
    // 0x17d848: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17d848u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17d84c:
    // 0x17d84c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x17d84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_17d850:
    // 0x17d850: 0xac5000b0  sw          $s0, 0xB0($v0)
    ctx->pc = 0x17d850u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 176), GPR_U32(ctx, 16));
label_17d854:
    // 0x17d854: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x17d854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_17d858:
    // 0x17d858: 0x8c4400b0  lw          $a0, 0xB0($v0)
    ctx->pc = 0x17d858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
label_17d85c:
    // 0x17d85c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x17d85cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17d860:
    // 0x17d860: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x17d860u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_17d864:
    // 0x17d864: 0x320f809  jalr        $t9
label_17d868:
    if (ctx->pc == 0x17D868u) {
        ctx->pc = 0x17D86Cu;
        goto label_17d86c;
    }
    ctx->pc = 0x17D864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17D86Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D864u, 0x17D86Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17D86Cu;
label_17d86c:
    // 0x17d86c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x17d86cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_17d870:
    // 0x17d870: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x17d870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_17d874:
    // 0x17d874: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x17d874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_17d878:
    // 0x17d878: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x17d878u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_17d87c:
    // 0x17d87c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x17d87cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_17d880:
    // 0x17d880: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x17d880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_17d884:
    // 0x17d884: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x17d884u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_17d888:
    // 0x17d888: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x17d888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_17d88c:
    // 0x17d88c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x17d88cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_17d890:
    // 0x17d890: 0x24a55000  addiu       $a1, $a1, 0x5000
    ctx->pc = 0x17d890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20480));
label_17d894:
    // 0x17d894: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x17d894u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17d898:
    // 0x17d898: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x17d898u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_17d89c:
    // 0x17d89c: 0x320f809  jalr        $t9
label_17d8a0:
    if (ctx->pc == 0x17D8A0u) {
        ctx->pc = 0x17D8A4u;
        goto label_17d8a4;
    }
    ctx->pc = 0x17D89Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17D8A4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D89Cu, 0x17D8A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17D8A4u;
label_17d8a4:
    // 0x17d8a4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x17d8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_17d8a8:
    // 0x17d8a8: 0xc05efa0  jal         func_17BE80
label_17d8ac:
    if (ctx->pc == 0x17D8ACu) {
        ctx->pc = 0x17D8B0u;
        goto label_17d8b0;
    }
    ctx->pc = 0x17D8A8u;
    SET_GPR_U32(ctx, 31, 0x17D8B0u);
    ctx->pc = 0x17BE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BE80u, 0x17D8A8u, 0x17D8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D8B0u;
label_17d8b0:
    // 0x17d8b0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x17d8b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17d8b4:
    // 0x17d8b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17d8b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_17d8b8:
    // 0x17d8b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17d8b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17d8bc:
    // 0x17d8bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17d8bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17d8c0:
    // 0x17d8c0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x17d8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_17d8c4:
    // 0x17d8c4: 0x3e00008  jr          $ra
label_17d8c8:
    if (ctx->pc == 0x17D8C8u) {
        ctx->pc = 0x17D8CCu;
        goto label_17d8cc;
    }
    ctx->pc = 0x17D8C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D8C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D8CCu;
label_17d8cc:
    // 0x17d8cc: 0x0  nop
    ctx->pc = 0x17d8ccu;
    // NOP
label_17d8d0:
    // 0x17d8d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17d8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_17d8d4:
    // 0x17d8d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17d8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_17d8d8:
    // 0x17d8d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17d8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17d8dc:
    // 0x17d8dc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x17d8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_17d8e0:
    // 0x17d8e0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x17d8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_17d8e4:
    // 0x17d8e4: 0xc0559ac  jal         func_1566B0
label_17d8e8:
    if (ctx->pc == 0x17D8E8u) {
        ctx->pc = 0x17D8ECu;
        goto label_17d8ec;
    }
    ctx->pc = 0x17D8E4u;
    SET_GPR_U32(ctx, 31, 0x17D8ECu);
    ctx->pc = 0x1566B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1566B0u, 0x17D8E4u, 0x17D8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D8ECu;
label_17d8ec:
    // 0x17d8ec: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x17d8ecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_17d8f0:
    // 0x17d8f0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x17d8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_17d8f4:
    // 0x17d8f4: 0x8c4400b0  lw          $a0, 0xB0($v0)
    ctx->pc = 0x17d8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
label_17d8f8:
    // 0x17d8f8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x17d8f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17d8fc:
    // 0x17d8fc: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x17d8fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_17d900:
    // 0x17d900: 0x320f809  jalr        $t9
label_17d904:
    if (ctx->pc == 0x17D904u) {
        ctx->pc = 0x17D908u;
        goto label_17d908;
    }
    ctx->pc = 0x17D900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17D908u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D900u, 0x17D908u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17D908u;
label_17d908:
    // 0x17d908: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x17d908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_17d90c:
    // 0x17d90c: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x17d90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_17d910:
    // 0x17d910: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x17d910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_17d914:
    // 0x17d914: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x17d914u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_17d918:
    // 0x17d918: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x17d918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_17d91c:
    // 0x17d91c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x17d91cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_17d920:
    // 0x17d920: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x17d920u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_17d924:
    // 0x17d924: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x17d924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_17d928:
    // 0x17d928: 0x8c4200b0  lw          $v0, 0xB0($v0)
    ctx->pc = 0x17d928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
label_17d92c:
    // 0x17d92c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_17d930:
    if (ctx->pc == 0x17D930u) {
        ctx->pc = 0x17D934u;
        goto label_17d934;
    }
    ctx->pc = 0x17D92Cu;
    {
        const bool branch_taken_0x17d92c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d92c) {
            ctx->pc = 0x17D95Cu;
            goto label_17d95c;
        }
    }
    ctx->pc = 0x17D934u;
label_17d934:
    // 0x17d934: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x17d934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_17d938:
    // 0x17d938: 0x8c4400b0  lw          $a0, 0xB0($v0)
    ctx->pc = 0x17d938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
label_17d93c:
    // 0x17d93c: 0xc05f660  jal         func_17D980
label_17d940:
    if (ctx->pc == 0x17D940u) {
        ctx->pc = 0x17D944u;
        goto label_17d944;
    }
    ctx->pc = 0x17D93Cu;
    SET_GPR_U32(ctx, 31, 0x17D944u);
    ctx->pc = 0x17D980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D980u, 0x17D93Cu, 0x17D944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D944u;
label_17d944:
    // 0x17d944: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x17d944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_17d948:
    // 0x17d948: 0x8c4400b0  lw          $a0, 0xB0($v0)
    ctx->pc = 0x17d948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
label_17d94c:
    // 0x17d94c: 0xc119c5c  jal         func_467170
label_17d950:
    if (ctx->pc == 0x17D950u) {
        ctx->pc = 0x17D954u;
        goto label_17d954;
    }
    ctx->pc = 0x17D94Cu;
    SET_GPR_U32(ctx, 31, 0x17D954u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x17D94Cu, 0x17D954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D954u;
label_17d954:
    // 0x17d954: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x17d954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_17d958:
    // 0x17d958: 0xac4000b0  sw          $zero, 0xB0($v0)
    ctx->pc = 0x17d958u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 176), GPR_U32(ctx, 0));
label_17d95c:
    // 0x17d95c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17d95cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17d960:
    // 0x17d960: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17d960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17d964:
    // 0x17d964: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17d964u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17d968:
    // 0x17d968: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x17d968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_17d96c:
    // 0x17d96c: 0x3e00008  jr          $ra
label_17d970:
    if (ctx->pc == 0x17D970u) {
        ctx->pc = 0x17D974u;
        goto label_17d974;
    }
    ctx->pc = 0x17D96Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D96Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D974u;
label_17d974:
    // 0x17d974: 0x0  nop
    ctx->pc = 0x17d974u;
    // NOP
label_17d978:
    // 0x17d978: 0x0  nop
    ctx->pc = 0x17d978u;
    // NOP
label_17d97c:
    // 0x17d97c: 0x0  nop
    ctx->pc = 0x17d97cu;
    // NOP
    ctx->pc = 0x17d980u;
}
