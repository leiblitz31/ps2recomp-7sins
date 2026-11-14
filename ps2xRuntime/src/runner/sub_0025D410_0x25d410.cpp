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

// Function: sub_0025D410
// Address: 0x25d410 - 0x25d610
void sub_0025D410_0x25d410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025D410_0x25d410");
#endif

    switch (ctx->pc) {
        case 0x25d458u: goto label_25d458;
        case 0x25d46cu: goto label_25d46c;
        case 0x25d480u: goto label_25d480;
        case 0x25d494u: goto label_25d494;
        case 0x25d4b4u: goto label_25d4b4;
        case 0x25d4ccu: goto label_25d4cc;
        case 0x25d4e4u: goto label_25d4e4;
        case 0x25d500u: goto label_25d500;
        case 0x25d510u: goto label_25d510;
        case 0x25d528u: goto label_25d528;
        case 0x25d538u: goto label_25d538;
        case 0x25d598u: goto label_25d598;
        case 0x25d5acu: goto label_25d5ac;
        case 0x25d5c0u: goto label_25d5c0;
        case 0x25d5d4u: goto label_25d5d4;
        default: break;
    }

    ctx->pc = 0x25d410u;

    // 0x25d410: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x25d410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x25d414: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x25d414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x25d418: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x25d418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x25d41c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x25d41cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x25d420: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x25d420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x25d424: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x25d424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x25d428: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x25d428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x25d42c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x25d42cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x25d430: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25d430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25d434: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25d434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25d438: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25d438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25d43c: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x25d43cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
    // 0x25d440: 0xafa500c0  sw          $a1, 0xC0($sp)
    ctx->pc = 0x25d440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 5));
    // 0x25d444: 0xafa600d0  sw          $a2, 0xD0($sp)
    ctx->pc = 0x25d444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 6));
    // 0x25d448: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x25d448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x25d44c: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x25d44cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x25d450: 0xc042290  jal         func_108A40
    ctx->pc = 0x25D450u;
    SET_GPR_U32(ctx, 31, 0x25D458u);
    ctx->pc = 0x108A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A40u, 0x25D450u, 0x25D458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D458u;
label_25d458:
    // 0x25d458: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x25d458u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d45c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x25d45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x25d460: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x25d460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x25d464: 0xc042288  jal         func_108A20
    ctx->pc = 0x25D464u;
    SET_GPR_U32(ctx, 31, 0x25D46Cu);
    ctx->pc = 0x108A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A20u, 0x25D464u, 0x25D46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D46Cu;
label_25d46c:
    // 0x25d46c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x25d46cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d470: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x25d470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d474: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x25d474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x25d478: 0xc050540  jal         func_141500
    ctx->pc = 0x25D478u;
    SET_GPR_U32(ctx, 31, 0x25D480u);
    ctx->pc = 0x141500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141500u, 0x25D478u, 0x25D480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D480u;
label_25d480:
    // 0x25d480: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x25d480u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d484: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x25d484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x25d488: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x25d488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x25d48c: 0xc042288  jal         func_108A20
    ctx->pc = 0x25D48Cu;
    SET_GPR_U32(ctx, 31, 0x25D494u);
    ctx->pc = 0x108A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A20u, 0x25D48Cu, 0x25D494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D494u;
label_25d494:
    // 0x25d494: 0x12e20004  beq         $s7, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25D494u;
    {
        const bool branch_taken_0x25d494 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        if (branch_taken_0x25d494) {
            ctx->pc = 0x25D4A8u;
            goto label_25d4a8;
        }
    }
    ctx->pc = 0x25D49Cu;
    // 0x25d49c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25d49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25d4a0: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x25D4A0u;
    {
        const bool branch_taken_0x25d4a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d4a0) {
            ctx->pc = 0x25D5D8u;
            goto label_25d5d8;
        }
    }
    ctx->pc = 0x25D4A8u;
label_25d4a8:
    // 0x25d4a8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x25d4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x25d4ac: 0xc097640  jal         func_25D900
    ctx->pc = 0x25D4ACu;
    SET_GPR_U32(ctx, 31, 0x25D4B4u);
    ctx->pc = 0x25D900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D900u, 0x25D4ACu, 0x25D4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D4B4u;
label_25d4b4:
    // 0x25d4b4: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x25d4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x25d4b8: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x25d4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x25d4bc: 0x8fa600c0  lw          $a2, 0xC0($sp)
    ctx->pc = 0x25d4bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x25d4c0: 0x8fa700d0  lw          $a3, 0xD0($sp)
    ctx->pc = 0x25d4c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x25d4c4: 0xc097704  jal         func_25DC10
    ctx->pc = 0x25D4C4u;
    SET_GPR_U32(ctx, 31, 0x25D4CCu);
    ctx->pc = 0x25DC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25DC10u, 0x25D4C4u, 0x25D4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D4CCu;
label_25d4cc:
    // 0x25d4cc: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x25d4ccu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25d4d0: 0x1240003b  beqz        $s2, . + 4 + (0x3B << 2)
    ctx->pc = 0x25D4D0u;
    {
        const bool branch_taken_0x25d4d0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d4d0) {
            ctx->pc = 0x25D5C0u;
            goto label_25d5c0;
        }
    }
    ctx->pc = 0x25D4D8u;
    // 0x25d4d8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x25d4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x25d4dc: 0xc097634  jal         func_25D8D0
    ctx->pc = 0x25D4DCu;
    SET_GPR_U32(ctx, 31, 0x25D4E4u);
    ctx->pc = 0x25D8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D8D0u, 0x25D4DCu, 0x25D4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D4E4u;
label_25d4e4:
    // 0x25d4e4: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x25D4E4u;
    {
        const bool branch_taken_0x25d4e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25d4e4) {
            ctx->pc = 0x25D5ACu;
            goto label_25d5ac;
        }
    }
    ctx->pc = 0x25D4ECu;
    // 0x25d4ec: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x25d4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x25d4f0: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x25d4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x25d4f4: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x25d4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x25d4f8: 0xc085538  jal         func_2154E0
    ctx->pc = 0x25D4F8u;
    SET_GPR_U32(ctx, 31, 0x25D500u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x25D4F8u, 0x25D500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D500u;
label_25d500:
    // 0x25d500: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x25d500u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d504: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x25d504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d508: 0xc09b03c  jal         func_26C0F0
    ctx->pc = 0x25D508u;
    SET_GPR_U32(ctx, 31, 0x25D510u);
    ctx->pc = 0x26C0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C0F0u, 0x25D508u, 0x25D510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D510u;
label_25d510:
    // 0x25d510: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x25d510u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d514: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x25d514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x25d518: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x25d518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x25d51c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x25d51cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d520: 0xc090844  jal         func_242110
    ctx->pc = 0x25D520u;
    SET_GPR_U32(ctx, 31, 0x25D528u);
    ctx->pc = 0x242110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242110u, 0x25D520u, 0x25D528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D528u;
label_25d528:
    // 0x25d528: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25d528u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d52c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x25d52cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x25d530: 0xc097620  jal         func_25D880
    ctx->pc = 0x25D530u;
    SET_GPR_U32(ctx, 31, 0x25D538u);
    ctx->pc = 0x25D880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D880u, 0x25D530u, 0x25D538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D538u;
label_25d538:
    // 0x25d538: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x25d538u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25d53c: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x25d53cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x25d540: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x25d540u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x25d544: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x25d544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x25d548: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25d548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25d54c: 0xac44003c  sw          $a0, 0x3C($v0)
    ctx->pc = 0x25d54cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 4));
    // 0x25d550: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x25d550u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x25d554: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x25d554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x25d558: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x25d558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x25d55c: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x25d55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x25d560: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x25D560u;
    {
        const bool branch_taken_0x25d560 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x25d560) {
            ctx->pc = 0x25D588u;
            goto label_25d588;
        }
    }
    ctx->pc = 0x25D568u;
    // 0x25d568: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x25d568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x25d56c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x25d56cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x25d570: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x25d570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x25d574: 0x8c42006c  lw          $v0, 0x6C($v0)
    ctx->pc = 0x25d574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x25d578: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x25d578u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x25d57c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x25d57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x25d580: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25d580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25d584: 0xac44003c  sw          $a0, 0x3C($v0)
    ctx->pc = 0x25d584u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 4));
label_25d588:
    // 0x25d588: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x25d588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x25d58c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x25d58cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x25d590: 0xc085538  jal         func_2154E0
    ctx->pc = 0x25D590u;
    SET_GPR_U32(ctx, 31, 0x25D598u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x25D590u, 0x25D598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D598u;
label_25d598:
    // 0x25d598: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x25d598u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d59c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x25d59cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d5a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25d5a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d5a4: 0xc096e98  jal         func_25BA60
    ctx->pc = 0x25D5A4u;
    SET_GPR_U32(ctx, 31, 0x25D5ACu);
    ctx->pc = 0x25BA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BA60u, 0x25D5A4u, 0x25D5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D5ACu;
label_25d5ac:
    // 0x25d5ac: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x25d5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x25d5b0: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x25d5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x25d5b4: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x25d5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x25d5b8: 0xc042128  jal         func_1084A0
    ctx->pc = 0x25D5B8u;
    SET_GPR_U32(ctx, 31, 0x25D5C0u);
    ctx->pc = 0x1084A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084A0u, 0x25D5B8u, 0x25D5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D5C0u;
label_25d5c0:
    // 0x25d5c0: 0x325300ff  andi        $s3, $s2, 0xFF
    ctx->pc = 0x25d5c0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x25d5c4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x25d5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x25d5c8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x25d5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25d5cc: 0xc097584  jal         func_25D610
    ctx->pc = 0x25D5CCu;
    SET_GPR_U32(ctx, 31, 0x25D5D4u);
    ctx->pc = 0x25D610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D610u, 0x25D5CCu, 0x25D5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D5D4u;
label_25d5d4:
    // 0x25d5d4: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x25d5d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25d5d8:
    // 0x25d5d8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x25d5d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x25d5dc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x25d5dcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25d5e0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x25d5e0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25d5e4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x25d5e4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25d5e8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x25d5e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25d5ec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x25d5ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25d5f0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x25d5f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25d5f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25d5f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25d5f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25d5f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d5fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25d5fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25d600: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x25d600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x25d604: 0x3e00008  jr          $ra
    ctx->pc = 0x25D604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25D60Cu;
    // 0x25d60c: 0x0  nop
    ctx->pc = 0x25d60cu;
    // NOP
    ctx->pc = 0x25d610u;
}
