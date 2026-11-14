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

// Function: sub_00470820
// Address: 0x470820 - 0x470950
void sub_00470820_0x470820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00470820_0x470820");
#endif

    switch (ctx->pc) {
        case 0x470820u: goto label_470820;
        case 0x470824u: goto label_470824;
        case 0x470828u: goto label_470828;
        case 0x47082cu: goto label_47082c;
        case 0x470830u: goto label_470830;
        case 0x470834u: goto label_470834;
        case 0x470838u: goto label_470838;
        case 0x47083cu: goto label_47083c;
        case 0x470840u: goto label_470840;
        case 0x470844u: goto label_470844;
        case 0x470848u: goto label_470848;
        case 0x47084cu: goto label_47084c;
        case 0x470850u: goto label_470850;
        case 0x470854u: goto label_470854;
        case 0x470858u: goto label_470858;
        case 0x47085cu: goto label_47085c;
        case 0x470860u: goto label_470860;
        case 0x470864u: goto label_470864;
        case 0x470868u: goto label_470868;
        case 0x47086cu: goto label_47086c;
        case 0x470870u: goto label_470870;
        case 0x470874u: goto label_470874;
        case 0x470878u: goto label_470878;
        case 0x47087cu: goto label_47087c;
        case 0x470880u: goto label_470880;
        case 0x470884u: goto label_470884;
        case 0x470888u: goto label_470888;
        case 0x47088cu: goto label_47088c;
        case 0x470890u: goto label_470890;
        case 0x470894u: goto label_470894;
        case 0x470898u: goto label_470898;
        case 0x47089cu: goto label_47089c;
        case 0x4708a0u: goto label_4708a0;
        case 0x4708a4u: goto label_4708a4;
        case 0x4708a8u: goto label_4708a8;
        case 0x4708acu: goto label_4708ac;
        case 0x4708b0u: goto label_4708b0;
        case 0x4708b4u: goto label_4708b4;
        case 0x4708b8u: goto label_4708b8;
        case 0x4708bcu: goto label_4708bc;
        case 0x4708c0u: goto label_4708c0;
        case 0x4708c4u: goto label_4708c4;
        case 0x4708c8u: goto label_4708c8;
        case 0x4708ccu: goto label_4708cc;
        case 0x4708d0u: goto label_4708d0;
        case 0x4708d4u: goto label_4708d4;
        case 0x4708d8u: goto label_4708d8;
        case 0x4708dcu: goto label_4708dc;
        case 0x4708e0u: goto label_4708e0;
        case 0x4708e4u: goto label_4708e4;
        case 0x4708e8u: goto label_4708e8;
        case 0x4708ecu: goto label_4708ec;
        case 0x4708f0u: goto label_4708f0;
        case 0x4708f4u: goto label_4708f4;
        case 0x4708f8u: goto label_4708f8;
        case 0x4708fcu: goto label_4708fc;
        case 0x470900u: goto label_470900;
        case 0x470904u: goto label_470904;
        case 0x470908u: goto label_470908;
        case 0x47090cu: goto label_47090c;
        case 0x470910u: goto label_470910;
        case 0x470914u: goto label_470914;
        case 0x470918u: goto label_470918;
        case 0x47091cu: goto label_47091c;
        case 0x470920u: goto label_470920;
        case 0x470924u: goto label_470924;
        case 0x470928u: goto label_470928;
        case 0x47092cu: goto label_47092c;
        case 0x470930u: goto label_470930;
        case 0x470934u: goto label_470934;
        case 0x470938u: goto label_470938;
        case 0x47093cu: goto label_47093c;
        case 0x470940u: goto label_470940;
        case 0x470944u: goto label_470944;
        case 0x470948u: goto label_470948;
        case 0x47094cu: goto label_47094c;
        default: break;
    }

    ctx->pc = 0x470820u;

label_470820:
    // 0x470820: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x470820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_470824:
    // 0x470824: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x470824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_470828:
    // 0x470828: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x470828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_47082c:
    // 0x47082c: 0xafa40150  sw          $a0, 0x150($sp)
    ctx->pc = 0x47082cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 4));
label_470830:
    // 0x470830: 0xafa50160  sw          $a1, 0x160($sp)
    ctx->pc = 0x470830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 5));
label_470834:
    // 0x470834: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x470834u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_470838:
    // 0x470838: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x470838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_47083c:
    // 0x47083c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_470840:
    if (ctx->pc == 0x470840u) {
        ctx->pc = 0x470844u;
        goto label_470844;
    }
    ctx->pc = 0x47083Cu;
    {
        const bool branch_taken_0x47083c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x47083c) {
            ctx->pc = 0x470858u;
            goto label_470858;
        }
    }
    ctx->pc = 0x470844u;
label_470844:
    // 0x470844: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x470844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_470848:
    // 0x470848: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_47084c:
    if (ctx->pc == 0x47084Cu) {
        ctx->pc = 0x470850u;
        goto label_470850;
    }
    ctx->pc = 0x470848u;
    {
        const bool branch_taken_0x470848 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x470848) {
            ctx->pc = 0x470858u;
            goto label_470858;
        }
    }
    ctx->pc = 0x470850u;
label_470850:
    // 0x470850: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x470850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_470854:
    // 0x470854: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x470854u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_470858:
    // 0x470858: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x470858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_47085c:
    // 0x47085c: 0x1460002b  bnez        $v1, . + 4 + (0x2B << 2)
label_470860:
    if (ctx->pc == 0x470860u) {
        ctx->pc = 0x470864u;
        goto label_470864;
    }
    ctx->pc = 0x47085Cu;
    {
        const bool branch_taken_0x47085c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x47085c) {
            ctx->pc = 0x47090Cu;
            goto label_47090c;
        }
    }
    ctx->pc = 0x470864u;
label_470864:
    // 0x470864: 0x8f83b354  lw          $v1, -0x4CAC($gp)
    ctx->pc = 0x470864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947668)));
label_470868:
    // 0x470868: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
label_47086c:
    if (ctx->pc == 0x47086Cu) {
        ctx->pc = 0x470870u;
        goto label_470870;
    }
    ctx->pc = 0x470868u;
    {
        const bool branch_taken_0x470868 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x470868) {
            ctx->pc = 0x47090Cu;
            goto label_47090c;
        }
    }
    ctx->pc = 0x470870u;
label_470870:
    // 0x470870: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x470870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_470874:
    // 0x470874: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x470874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_470878:
    // 0x470878: 0x27a60138  addiu       $a2, $sp, 0x138
    ctx->pc = 0x470878u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
label_47087c:
    // 0x47087c: 0xc115ee8  jal         func_457BA0
label_470880:
    if (ctx->pc == 0x470880u) {
        ctx->pc = 0x470884u;
        goto label_470884;
    }
    ctx->pc = 0x47087Cu;
    SET_GPR_U32(ctx, 31, 0x470884u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x47087Cu, 0x470884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x470884u;
label_470884:
    // 0x470884: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_470888:
    if (ctx->pc == 0x470888u) {
        ctx->pc = 0x47088Cu;
        goto label_47088c;
    }
    ctx->pc = 0x470884u;
    {
        const bool branch_taken_0x470884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x470884) {
            ctx->pc = 0x47090Cu;
            goto label_47090c;
        }
    }
    ctx->pc = 0x47088Cu;
label_47088c:
    // 0x47088c: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x47088cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_470890:
    // 0x470890: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
label_470894:
    if (ctx->pc == 0x470894u) {
        ctx->pc = 0x470898u;
        goto label_470898;
    }
    ctx->pc = 0x470890u;
    {
        const bool branch_taken_0x470890 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x470890) {
            ctx->pc = 0x47090Cu;
            goto label_47090c;
        }
    }
    ctx->pc = 0x470898u;
label_470898:
    // 0x470898: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x470898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_47089c:
    // 0x47089c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47089cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4708a0:
    // 0x4708a0: 0x8fa6013c  lw          $a2, 0x13C($sp)
    ctx->pc = 0x4708a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_4708a4:
    // 0x4708a4: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x4708a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_4708a8:
    // 0x4708a8: 0x24e7fe30  addiu       $a3, $a3, -0x1D0
    ctx->pc = 0x4708a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966832));
label_4708ac:
    // 0x4708ac: 0x240800dd  addiu       $t0, $zero, 0xDD
    ctx->pc = 0x4708acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 221));
label_4708b0:
    // 0x4708b0: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x4708b0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_4708b4:
    // 0x4708b4: 0x2529ffa0  addiu       $t1, $t1, -0x60
    ctx->pc = 0x4708b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967200));
label_4708b8:
    // 0x4708b8: 0xc113940  jal         func_44E500
label_4708bc:
    if (ctx->pc == 0x4708BCu) {
        ctx->pc = 0x4708C0u;
        goto label_4708c0;
    }
    ctx->pc = 0x4708B8u;
    SET_GPR_U32(ctx, 31, 0x4708C0u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x4708B8u, 0x4708C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4708C0u;
label_4708c0:
    // 0x4708c0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x4708c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4708c4:
    // 0x4708c4: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x4708c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_4708c8:
    // 0x4708c8: 0x24a5ffd0  addiu       $a1, $a1, -0x30
    ctx->pc = 0x4708c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967248));
label_4708cc:
    // 0x4708cc: 0xc115c24  jal         func_457090
label_4708d0:
    if (ctx->pc == 0x4708D0u) {
        ctx->pc = 0x4708D4u;
        goto label_4708d4;
    }
    ctx->pc = 0x4708CCu;
    SET_GPR_U32(ctx, 31, 0x4708D4u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x4708CCu, 0x4708D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4708D4u;
label_4708d4:
    // 0x4708d4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x4708d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4708d8:
    // 0x4708d8: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x4708d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_4708dc:
    // 0x4708dc: 0x40f809  jalr        $v0
label_4708e0:
    if (ctx->pc == 0x4708E0u) {
        ctx->pc = 0x4708E4u;
        goto label_4708e4;
    }
    ctx->pc = 0x4708DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4708E4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4708DCu, 0x4708E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4708E4u;
label_4708e4:
    // 0x4708e4: 0xaf82b354  sw          $v0, -0x4CAC($gp)
    ctx->pc = 0x4708e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947668), GPR_U32(ctx, 2));
label_4708e8:
    // 0x4708e8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4708e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_4708ec:
    // 0x4708ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4708f0:
    if (ctx->pc == 0x4708F0u) {
        ctx->pc = 0x4708F4u;
        goto label_4708f4;
    }
    ctx->pc = 0x4708ECu;
    {
        const bool branch_taken_0x4708ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4708ec) {
            ctx->pc = 0x4708FCu;
            goto label_4708fc;
        }
    }
    ctx->pc = 0x4708F4u;
label_4708f4:
    // 0x4708f4: 0xd  break       0
    ctx->pc = 0x4708f4u;
    runtime->handleBreak(rdram, ctx);
label_4708f8:
    // 0x4708f8: 0x0  nop
    ctx->pc = 0x4708f8u;
    // NOP
label_4708fc:
    // 0x4708fc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x4708fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_470900:
    // 0x470900: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x470900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_470904:
    // 0x470904: 0xc11392c  jal         func_44E4B0
label_470908:
    if (ctx->pc == 0x470908u) {
        ctx->pc = 0x47090Cu;
        goto label_47090c;
    }
    ctx->pc = 0x470904u;
    SET_GPR_U32(ctx, 31, 0x47090Cu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x470904u, 0x47090Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47090Cu;
label_47090c:
    // 0x47090c: 0x8f83c048  lw          $v1, -0x3FB8($gp)
    ctx->pc = 0x47090cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950984)));
label_470910:
    // 0x470910: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_470914:
    if (ctx->pc == 0x470914u) {
        ctx->pc = 0x470918u;
        goto label_470918;
    }
    ctx->pc = 0x470910u;
    {
        const bool branch_taken_0x470910 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x470910) {
            ctx->pc = 0x470930u;
            goto label_470930;
        }
    }
    ctx->pc = 0x470918u;
label_470918:
    // 0x470918: 0x27a4014c  addiu       $a0, $sp, 0x14C
    ctx->pc = 0x470918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
label_47091c:
    // 0x47091c: 0x27a50148  addiu       $a1, $sp, 0x148
    ctx->pc = 0x47091cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
label_470920:
    // 0x470920: 0x8fa60150  lw          $a2, 0x150($sp)
    ctx->pc = 0x470920u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_470924:
    // 0x470924: 0x8fa70160  lw          $a3, 0x160($sp)
    ctx->pc = 0x470924u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_470928:
    // 0x470928: 0xc0eb99c  jal         func_3AE670
label_47092c:
    if (ctx->pc == 0x47092Cu) {
        ctx->pc = 0x470930u;
        goto label_470930;
    }
    ctx->pc = 0x470928u;
    SET_GPR_U32(ctx, 31, 0x470930u);
    ctx->pc = 0x3AE670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE670u, 0x470928u, 0x470930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x470930u;
label_470930:
    // 0x470930: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x470930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_470934:
    // 0x470934: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x470934u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_470938:
    // 0x470938: 0x27bd0170  addiu       $sp, $sp, 0x170
    ctx->pc = 0x470938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_47093c:
    // 0x47093c: 0x3e00008  jr          $ra
label_470940:
    if (ctx->pc == 0x470940u) {
        ctx->pc = 0x470944u;
        goto label_470944;
    }
    ctx->pc = 0x47093Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47093Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x470944u;
label_470944:
    // 0x470944: 0x0  nop
    ctx->pc = 0x470944u;
    // NOP
label_470948:
    // 0x470948: 0x0  nop
    ctx->pc = 0x470948u;
    // NOP
label_47094c:
    // 0x47094c: 0x0  nop
    ctx->pc = 0x47094cu;
    // NOP
    ctx->pc = 0x470950u;
}
