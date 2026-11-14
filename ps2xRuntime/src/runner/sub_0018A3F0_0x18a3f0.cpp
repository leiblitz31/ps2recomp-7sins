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

// Function: sub_0018A3F0
// Address: 0x18a3f0 - 0x18aec0
void sub_0018A3F0_0x18a3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018A3F0_0x18a3f0");
#endif

    switch (ctx->pc) {
        case 0x18a434u: goto label_18a434;
        case 0x18a460u: goto label_18a460;
        case 0x18a478u: goto label_18a478;
        case 0x18a498u: goto label_18a498;
        case 0x18a4c0u: goto label_18a4c0;
        case 0x18a4d8u: goto label_18a4d8;
        case 0x18a4ecu: goto label_18a4ec;
        case 0x18a50cu: goto label_18a50c;
        case 0x18a528u: goto label_18a528;
        case 0x18a57cu: goto label_18a57c;
        case 0x18a5e0u: goto label_18a5e0;
        case 0x18a750u: goto label_18a750;
        case 0x18a768u: goto label_18a768;
        case 0x18a77cu: goto label_18a77c;
        case 0x18a794u: goto label_18a794;
        case 0x18a7a8u: goto label_18a7a8;
        case 0x18a7c0u: goto label_18a7c0;
        case 0x18a7d4u: goto label_18a7d4;
        case 0x18a7f8u: goto label_18a7f8;
        case 0x18a81cu: goto label_18a81c;
        case 0x18a844u: goto label_18a844;
        case 0x18a858u: goto label_18a858;
        case 0x18a888u: goto label_18a888;
        case 0x18a8acu: goto label_18a8ac;
        case 0x18a8b8u: goto label_18a8b8;
        case 0x18a8d4u: goto label_18a8d4;
        case 0x18a900u: goto label_18a900;
        case 0x18a914u: goto label_18a914;
        case 0x18a940u: goto label_18a940;
        case 0x18a960u: goto label_18a960;
        case 0x18a98cu: goto label_18a98c;
        case 0x18a9c0u: goto label_18a9c0;
        case 0x18a9f0u: goto label_18a9f0;
        case 0x18aa3cu: goto label_18aa3c;
        case 0x18aa6cu: goto label_18aa6c;
        case 0x18aa8cu: goto label_18aa8c;
        case 0x18aabcu: goto label_18aabc;
        case 0x18ab00u: goto label_18ab00;
        case 0x18ab30u: goto label_18ab30;
        case 0x18ab8cu: goto label_18ab8c;
        case 0x18abbcu: goto label_18abbc;
        case 0x18abe8u: goto label_18abe8;
        case 0x18ac00u: goto label_18ac00;
        case 0x18ac9cu: goto label_18ac9c;
        case 0x18acd8u: goto label_18acd8;
        case 0x18acf8u: goto label_18acf8;
        case 0x18ad2cu: goto label_18ad2c;
        case 0x18ad4cu: goto label_18ad4c;
        case 0x18ad8cu: goto label_18ad8c;
        case 0x18adbcu: goto label_18adbc;
        case 0x18adf4u: goto label_18adf4;
        case 0x18ae10u: goto label_18ae10;
        case 0x18ae44u: goto label_18ae44;
        case 0x18ae64u: goto label_18ae64;
        case 0x18ae90u: goto label_18ae90;
        default: break;
    }

    ctx->pc = 0x18a3f0u;

label_18a3f0:
    // 0x18a3f0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x18a3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x18a3f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x18a3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x18a3f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18a3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18a3fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18a3fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18a400: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18a400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18a404: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x18a404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
    // 0x18a408: 0xafa500c0  sw          $a1, 0xC0($sp)
    ctx->pc = 0x18a408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 5));
    // 0x18a40c: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x18a40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x18a410: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x18a410u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x18a414: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18a414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18a418: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x18a418u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18a41c: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x18a41cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x18a420: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x18a420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18a424: 0x24510068  addiu       $s1, $v0, 0x68
    ctx->pc = 0x18a424u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x18a428: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18a428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a42c: 0xc0628ac  jal         func_18A2B0
    ctx->pc = 0x18A42Cu;
    SET_GPR_U32(ctx, 31, 0x18A434u);
    ctx->pc = 0x18A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A2B0u, 0x18A42Cu, 0x18A434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A434u;
label_18a434:
    // 0x18a434: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18A434u;
    {
        const bool branch_taken_0x18a434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a434) {
            ctx->pc = 0x18A448u;
            goto label_18a448;
        }
    }
    ctx->pc = 0x18A43Cu;
    // 0x18a43c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18a43cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a440: 0x10000295  b           . + 4 + (0x295 << 2)
    ctx->pc = 0x18A440u;
    {
        const bool branch_taken_0x18a440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a440) {
            ctx->pc = 0x18AE98u;
            goto label_18ae98;
        }
    }
    ctx->pc = 0x18A448u;
label_18a448:
    // 0x18a448: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x18a448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x18a44c: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x18a44cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x18a450: 0x24660050  addiu       $a2, $v1, 0x50
    ctx->pc = 0x18a450u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x18a454: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x18a454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a458: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x18A458u;
    SET_GPR_U32(ctx, 31, 0x18A460u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x18A458u, 0x18A460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A460u;
label_18a460:
    // 0x18a460: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x18a460u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18a464: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x18a464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x18a468: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x18a468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x18a46c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x18a46cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a470: 0xc08c9a8  jal         func_2326A0
    ctx->pc = 0x18A470u;
    SET_GPR_U32(ctx, 31, 0x18A478u);
    ctx->pc = 0x2326A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2326A0u, 0x18A470u, 0x18A478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A478u;
label_18a478:
    // 0x18a478: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18A478u;
    {
        const bool branch_taken_0x18a478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a478) {
            ctx->pc = 0x18A48Cu;
            goto label_18a48c;
        }
    }
    ctx->pc = 0x18A480u;
    // 0x18a480: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18a480u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a484: 0x10000284  b           . + 4 + (0x284 << 2)
    ctx->pc = 0x18A484u;
    {
        const bool branch_taken_0x18a484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a484) {
            ctx->pc = 0x18AE98u;
            goto label_18ae98;
        }
    }
    ctx->pc = 0x18A48Cu;
label_18a48c:
    // 0x18a48c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18a48cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a490: 0xc0626d4  jal         func_189B50
    ctx->pc = 0x18A490u;
    SET_GPR_U32(ctx, 31, 0x18A498u);
    ctx->pc = 0x189B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189B50u, 0x18A490u, 0x18A498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A498u;
label_18a498:
    // 0x18a498: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x18a498u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a49c: 0x92450010  lbu         $a1, 0x10($s2)
    ctx->pc = 0x18a49cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x18a4a0: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x18a4a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x18a4a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18a4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a4a8: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x18A4A8u;
    {
        const bool branch_taken_0x18a4a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18a4a8) {
            ctx->pc = 0x18A4E0u;
            goto label_18a4e0;
        }
    }
    ctx->pc = 0x18A4B0u;
    // 0x18a4b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18a4b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a4b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x18a4b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a4b8: 0xc062888  jal         func_18A220
    ctx->pc = 0x18A4B8u;
    SET_GPR_U32(ctx, 31, 0x18A4C0u);
    ctx->pc = 0x18A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A220u, 0x18A4B8u, 0x18A4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A4C0u;
label_18a4c0:
    // 0x18a4c0: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x18a4c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x18a4c4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x18a4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a4c8: 0x8fa700c0  lw          $a3, 0xC0($sp)
    ctx->pc = 0x18a4c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x18a4cc: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x18a4ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a4d0: 0xc0628fc  jal         func_18A3F0
    ctx->pc = 0x18A4D0u;
    SET_GPR_U32(ctx, 31, 0x18A4D8u);
    ctx->pc = 0x18A3F0u;
    goto label_18a3f0;
    ctx->pc = 0x18A4D8u;
label_18a4d8:
    // 0x18a4d8: 0x1000026f  b           . + 4 + (0x26F << 2)
    ctx->pc = 0x18A4D8u;
    {
        const bool branch_taken_0x18a4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a4d8) {
            ctx->pc = 0x18AE98u;
            goto label_18ae98;
        }
    }
    ctx->pc = 0x18A4E0u;
label_18a4e0:
    // 0x18a4e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18a4e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a4e4: 0xc0626d4  jal         func_189B50
    ctx->pc = 0x18A4E4u;
    SET_GPR_U32(ctx, 31, 0x18A4ECu);
    ctx->pc = 0x189B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189B50u, 0x18A4E4u, 0x18A4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A4ECu;
label_18a4ec:
    // 0x18a4ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18a4ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a4f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18a4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a4f4: 0xa2020010  sb          $v0, 0x10($s0)
    ctx->pc = 0x18a4f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x18a4f8: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x18a4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x18a4fc: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x18a4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x18a500: 0x24840050  addiu       $a0, $a0, 0x50
    ctx->pc = 0x18a500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x18a504: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x18A504u;
    SET_GPR_U32(ctx, 31, 0x18A50Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x18A504u, 0x18A50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A50Cu;
label_18a50c:
    // 0x18a50c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x18a50cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18a510: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x18a510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x18a514: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x18a514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x18a518: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x18a518u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a51c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x18a51cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a520: 0xc08c378  jal         func_230DE0
    ctx->pc = 0x18A520u;
    SET_GPR_U32(ctx, 31, 0x18A528u);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x18A520u, 0x18A528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A528u;
label_18a528:
    // 0x18a528: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x18a528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x18a52c: 0x2c410007  sltiu       $at, $v0, 0x7
    ctx->pc = 0x18a52cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x18a530: 0x10200073  beqz        $at, . + 4 + (0x73 << 2)
    ctx->pc = 0x18A530u;
    {
        const bool branch_taken_0x18a530 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a530) {
            ctx->pc = 0x18A700u;
            goto label_18a700;
        }
    }
    ctx->pc = 0x18A538u;
    // 0x18a538: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x18a538u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x18a53c: 0x24638650  addiu       $v1, $v1, -0x79B0
    ctx->pc = 0x18a53cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936144));
    // 0x18a540: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18a540u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18a544: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x18a544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18a548: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x18a548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18a54c: 0x800008  jr          $a0
    ctx->pc = 0x18A54Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18A554u: goto label_18a554;
            case 0x18A5B8u: goto label_18a5b8;
            case 0x18A61Cu: goto label_18a61c;
            case 0x18A658u: goto label_18a658;
            case 0x18A690u: goto label_18a690;
            case 0x18A6D0u: goto label_18a6d0;
            case 0x18A700u: goto label_18a700;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A54Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x18A554u;
label_18a554:
    // 0x18a554: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18a554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18a558: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18a558u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18a55c: 0x8f82bbec  lw          $v0, -0x4414($gp)
    ctx->pc = 0x18a55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x18a560: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18a560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a564: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x18a564u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x18a568: 0x24a55350  addiu       $a1, $a1, 0x5350
    ctx->pc = 0x18a568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21328));
    // 0x18a56c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18a56cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a570: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x18a570u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18a574: 0xc08f558  jal         func_23D560
    ctx->pc = 0x18A574u;
    SET_GPR_U32(ctx, 31, 0x18A57Cu);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x18A574u, 0x18A57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A57Cu;
label_18a57c:
    // 0x18a57c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18a57cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18a580: 0x0  nop
    ctx->pc = 0x18a580u;
    // NOP
    // 0x18a584: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x18a584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x18a588: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x18a588u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x18a58c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x18a58cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18a590: 0x0  nop
    ctx->pc = 0x18a590u;
    // NOP
    // 0x18a594: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x18a594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x18a598: 0xc78082b8  lwc1        $f0, -0x7D48($gp)
    ctx->pc = 0x18a598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18a59c: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x18a59cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x18a5a0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18a5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18a5a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18a5a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18a5a8: 0x0  nop
    ctx->pc = 0x18a5a8u;
    // NOP
    // 0x18a5ac: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x18a5acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x18a5b0: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x18A5B0u;
    {
        const bool branch_taken_0x18a5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a5b0) {
            ctx->pc = 0x18A738u;
            goto label_18a738;
        }
    }
    ctx->pc = 0x18A5B8u;
label_18a5b8:
    // 0x18a5b8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x18a5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x18a5bc: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x18a5bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18a5c0: 0x8f82bbec  lw          $v0, -0x4414($gp)
    ctx->pc = 0x18a5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x18a5c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18a5c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a5c8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x18a5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x18a5cc: 0x24a55360  addiu       $a1, $a1, 0x5360
    ctx->pc = 0x18a5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21344));
    // 0x18a5d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18a5d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a5d4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x18a5d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18a5d8: 0xc08f558  jal         func_23D560
    ctx->pc = 0x18A5D8u;
    SET_GPR_U32(ctx, 31, 0x18A5E0u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x18A5D8u, 0x18A5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A5E0u;
label_18a5e0:
    // 0x18a5e0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x18a5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x18a5e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18a5e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18a5e8: 0x0  nop
    ctx->pc = 0x18a5e8u;
    // NOP
    // 0x18a5ec: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x18a5ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x18a5f0: 0xc78082bc  lwc1        $f0, -0x7D44($gp)
    ctx->pc = 0x18a5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18a5f4: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x18a5f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x18a5f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18a5f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18a5fc: 0x0  nop
    ctx->pc = 0x18a5fcu;
    // NOP
    // 0x18a600: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x18a600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x18a604: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x18a604u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x18a608: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x18a608u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18a60c: 0x0  nop
    ctx->pc = 0x18a60cu;
    // NOP
    // 0x18a610: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x18a610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x18a614: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x18A614u;
    {
        const bool branch_taken_0x18a614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a614) {
            ctx->pc = 0x18A738u;
            goto label_18a738;
        }
    }
    ctx->pc = 0x18A61Cu;
label_18a61c:
    // 0x18a61c: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x18a61cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x18a620: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x18a620u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18a624: 0x0  nop
    ctx->pc = 0x18a624u;
    // NOP
    // 0x18a628: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x18a628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x18a62c: 0xc78082c0  lwc1        $f0, -0x7D40($gp)
    ctx->pc = 0x18a62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18a630: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x18a630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x18a634: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18a634u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18a638: 0x0  nop
    ctx->pc = 0x18a638u;
    // NOP
    // 0x18a63c: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x18a63cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x18a640: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x18a640u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x18a644: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x18a644u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18a648: 0x0  nop
    ctx->pc = 0x18a648u;
    // NOP
    // 0x18a64c: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x18a64cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x18a650: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x18A650u;
    {
        const bool branch_taken_0x18a650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a650) {
            ctx->pc = 0x18A738u;
            goto label_18a738;
        }
    }
    ctx->pc = 0x18A658u;
label_18a658:
    // 0x18a658: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18a658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18a65c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18a65cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18a660: 0x0  nop
    ctx->pc = 0x18a660u;
    // NOP
    // 0x18a664: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x18a664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x18a668: 0xc78081a0  lwc1        $f0, -0x7E60($gp)
    ctx->pc = 0x18a668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18a66c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x18a66cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x18a670: 0xc7808288  lwc1        $f0, -0x7D78($gp)
    ctx->pc = 0x18a670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18a674: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x18a674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x18a678: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18a678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18a67c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18a67cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18a680: 0x0  nop
    ctx->pc = 0x18a680u;
    // NOP
    // 0x18a684: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x18a684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x18a688: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x18A688u;
    {
        const bool branch_taken_0x18a688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a688) {
            ctx->pc = 0x18A738u;
            goto label_18a738;
        }
    }
    ctx->pc = 0x18A690u;
label_18a690:
    // 0x18a690: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18a690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18a694: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18a694u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18a698: 0x0  nop
    ctx->pc = 0x18a698u;
    // NOP
    // 0x18a69c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x18a69cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x18a6a0: 0xc78082c4  lwc1        $f0, -0x7D3C($gp)
    ctx->pc = 0x18a6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18a6a4: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x18a6a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x18a6a8: 0x3c043f40  lui         $a0, 0x3F40
    ctx->pc = 0x18a6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16192 << 16));
    // 0x18a6ac: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x18a6acu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18a6b0: 0x0  nop
    ctx->pc = 0x18a6b0u;
    // NOP
    // 0x18a6b4: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x18a6b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x18a6b8: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x18a6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x18a6bc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x18a6bcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18a6c0: 0x0  nop
    ctx->pc = 0x18a6c0u;
    // NOP
    // 0x18a6c4: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x18a6c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x18a6c8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x18A6C8u;
    {
        const bool branch_taken_0x18a6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a6c8) {
            ctx->pc = 0x18A738u;
            goto label_18a738;
        }
    }
    ctx->pc = 0x18A6D0u;
label_18a6d0:
    // 0x18a6d0: 0xc78081b8  lwc1        $f0, -0x7E48($gp)
    ctx->pc = 0x18a6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18a6d4: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x18a6d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x18a6d8: 0xc78082c4  lwc1        $f0, -0x7D3C($gp)
    ctx->pc = 0x18a6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18a6dc: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x18a6dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x18a6e0: 0xc78082c8  lwc1        $f0, -0x7D38($gp)
    ctx->pc = 0x18a6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18a6e4: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x18a6e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x18a6e8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18a6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18a6ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18a6ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18a6f0: 0x0  nop
    ctx->pc = 0x18a6f0u;
    // NOP
    // 0x18a6f4: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x18a6f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x18a6f8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x18A6F8u;
    {
        const bool branch_taken_0x18a6f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a6f8) {
            ctx->pc = 0x18A738u;
            goto label_18a738;
        }
    }
    ctx->pc = 0x18A700u;
label_18a700:
    // 0x18a700: 0xc7808288  lwc1        $f0, -0x7D78($gp)
    ctx->pc = 0x18a700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18a704: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x18a704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x18a708: 0x3c053e80  lui         $a1, 0x3E80
    ctx->pc = 0x18a708u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16000 << 16));
    // 0x18a70c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x18a70cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18a710: 0x0  nop
    ctx->pc = 0x18a710u;
    // NOP
    // 0x18a714: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x18a714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x18a718: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18a718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18a71c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18a71cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18a720: 0x0  nop
    ctx->pc = 0x18a720u;
    // NOP
    // 0x18a724: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x18a724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x18a728: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x18a728u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x18a72c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x18a72cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18a730: 0x0  nop
    ctx->pc = 0x18a730u;
    // NOP
    // 0x18a734: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x18a734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_18a738:
    // 0x18a738: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x18a738u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x18a73c: 0x8fa700c0  lw          $a3, 0xC0($sp)
    ctx->pc = 0x18a73cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x18a740: 0x24c40050  addiu       $a0, $a2, 0x50
    ctx->pc = 0x18a740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x18a744: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x18a744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a748: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x18A748u;
    SET_GPR_U32(ctx, 31, 0x18A750u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x18A748u, 0x18A750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A750u;
label_18a750:
    // 0x18a750: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x18a750u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18a754: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x18a754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x18a758: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x18a758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x18a75c: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x18a75cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x18a760: 0xc08c6c8  jal         func_231B20
    ctx->pc = 0x18A760u;
    SET_GPR_U32(ctx, 31, 0x18A768u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x18A760u, 0x18A768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A768u;
label_18a768:
    // 0x18a768: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x18a768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x18a76c: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x18a76cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x18a770: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x18a770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x18a774: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x18A774u;
    SET_GPR_U32(ctx, 31, 0x18A77Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x18A774u, 0x18A77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A77Cu;
label_18a77c:
    // 0x18a77c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x18a77cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18a780: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x18a780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x18a784: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x18a784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x18a788: 0x27a60088  addiu       $a2, $sp, 0x88
    ctx->pc = 0x18a788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x18a78c: 0xc08c6c8  jal         func_231B20
    ctx->pc = 0x18A78Cu;
    SET_GPR_U32(ctx, 31, 0x18A794u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x18A78Cu, 0x18A794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A794u;
label_18a794:
    // 0x18a794: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x18a794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x18a798: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x18a798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x18a79c: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x18a79cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x18a7a0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x18A7A0u;
    SET_GPR_U32(ctx, 31, 0x18A7A8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x18A7A0u, 0x18A7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A7A8u;
label_18a7a8:
    // 0x18a7a8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x18a7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18a7ac: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x18a7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x18a7b0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x18a7b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18a7b4: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x18a7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x18a7b8: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x18A7B8u;
    SET_GPR_U32(ctx, 31, 0x18A7C0u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x18A7B8u, 0x18A7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A7C0u;
label_18a7c0:
    // 0x18a7c0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x18a7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x18a7c4: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x18a7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x18a7c8: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x18a7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x18a7cc: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x18A7CCu;
    SET_GPR_U32(ctx, 31, 0x18A7D4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x18A7CCu, 0x18A7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A7D4u;
label_18a7d4:
    // 0x18a7d4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x18a7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18a7d8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x18a7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x18a7dc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x18a7dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18a7e0: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x18a7e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x18a7e4: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x18a7e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x18a7e8: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x18a7e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x18a7ec: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x18a7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x18a7f0: 0xc08c4d0  jal         func_231340
    ctx->pc = 0x18A7F0u;
    SET_GPR_U32(ctx, 31, 0x18A7F8u);
    ctx->pc = 0x231340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231340u, 0x18A7F0u, 0x18A7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A7F8u;
label_18a7f8:
    // 0x18a7f8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18a7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18a7fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18a7fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18a800: 0x0  nop
    ctx->pc = 0x18a800u;
    // NOP
    // 0x18a804: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x18a804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x18a808: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x18a808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x18a80c: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x18a80cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x18a810: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x18a810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x18a814: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x18A814u;
    SET_GPR_U32(ctx, 31, 0x18A81Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x18A814u, 0x18A81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A81Cu;
label_18a81c:
    // 0x18a81c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x18a81cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18a820: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x18a820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x18a824: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18a824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18a828: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x18a828u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x18a82c: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x18a82cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x18a830: 0xc7ac00a8  lwc1        $f12, 0xA8($sp)
    ctx->pc = 0x18a830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18a834: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18a834u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a838: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x18a838u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a83c: 0xc08c544  jal         func_231510
    ctx->pc = 0x18A83Cu;
    SET_GPR_U32(ctx, 31, 0x18A844u);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x18A83Cu, 0x18A844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A844u;
label_18a844:
    // 0x18a844: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x18a844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x18a848: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x18a848u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x18a84c: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x18a84cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x18a850: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x18A850u;
    SET_GPR_U32(ctx, 31, 0x18A858u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x18A850u, 0x18A858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A858u;
label_18a858:
    // 0x18a858: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x18a858u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18a85c: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x18a85cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x18a860: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x18a860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18a864: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x18a864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18a868: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x18a868u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x18a86c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18a86cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18a870: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x18a870u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x18a874: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x18a874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x18a878: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18a878u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a87c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x18a87cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a880: 0xc08c544  jal         func_231510
    ctx->pc = 0x18A880u;
    SET_GPR_U32(ctx, 31, 0x18A888u);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x18A880u, 0x18A888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A888u;
label_18a888:
    // 0x18a888: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18a888u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18a88c: 0x0  nop
    ctx->pc = 0x18a88cu;
    // NOP
    // 0x18a890: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x18a890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x18a894: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18a894u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18a898: 0x0  nop
    ctx->pc = 0x18a898u;
    // NOP
    // 0x18a89c: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x18a89cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x18a8a0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x18a8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x18a8a4: 0xc05db34  jal         func_176CD0
    ctx->pc = 0x18A8A4u;
    SET_GPR_U32(ctx, 31, 0x18A8ACu);
    ctx->pc = 0x176CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176CD0u, 0x18A8A4u, 0x18A8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A8ACu;
label_18a8ac:
    // 0x18a8ac: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x18a8acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x18a8b0: 0xc05db34  jal         func_176CD0
    ctx->pc = 0x18A8B0u;
    SET_GPR_U32(ctx, 31, 0x18A8B8u);
    ctx->pc = 0x176CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176CD0u, 0x18A8B0u, 0x18A8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A8B8u;
label_18a8b8:
    // 0x18a8b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18a8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a8bc: 0xa3a200af  sb          $v0, 0xAF($sp)
    ctx->pc = 0x18a8bcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 175), (uint8_t)GPR_U32(ctx, 2));
    // 0x18a8c0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x18a8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x18a8c4: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x18a8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x18a8c8: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x18a8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x18a8cc: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x18A8CCu;
    SET_GPR_U32(ctx, 31, 0x18A8D4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x18A8CCu, 0x18A8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A8D4u;
label_18a8d4:
    // 0x18a8d4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x18a8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18a8d8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x18a8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x18a8dc: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x18a8dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x18a8e0: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x18a8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x18a8e4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x18a8e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18a8e8: 0x27a700af  addiu       $a3, $sp, 0xAF
    ctx->pc = 0x18a8e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 175));
    // 0x18a8ec: 0xc7ac00a4  lwc1        $f12, 0xA4($sp)
    ctx->pc = 0x18a8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18a8f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18a8f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a8f4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x18a8f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a8f8: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x18A8F8u;
    SET_GPR_U32(ctx, 31, 0x18A900u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x18A8F8u, 0x18A900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A900u;
label_18a900:
    // 0x18a900: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x18a900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x18a904: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x18a904u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x18a908: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x18a908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x18a90c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x18A90Cu;
    SET_GPR_U32(ctx, 31, 0x18A914u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x18A90Cu, 0x18A914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A914u;
label_18a914:
    // 0x18a914: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x18a914u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18a918: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x18a918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x18a91c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x18a91cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x18a920: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x18a920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x18a924: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x18a924u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18a928: 0x27a700af  addiu       $a3, $sp, 0xAF
    ctx->pc = 0x18a928u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 175));
    // 0x18a92c: 0xc7ac00a4  lwc1        $f12, 0xA4($sp)
    ctx->pc = 0x18a92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18a930: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18a930u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a934: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x18a934u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a938: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x18A938u;
    SET_GPR_U32(ctx, 31, 0x18A940u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x18A938u, 0x18A940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A940u;
label_18a940:
    // 0x18a940: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x18a940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x18a944: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x18A944u;
    {
        const bool branch_taken_0x18a944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a944) {
            ctx->pc = 0x18A98Cu;
            goto label_18a98c;
        }
    }
    ctx->pc = 0x18A94Cu;
    // 0x18a94c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x18a94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x18a950: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x18a950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x18a954: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18a954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18a958: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x18A958u;
    SET_GPR_U32(ctx, 31, 0x18A960u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x18A958u, 0x18A960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A960u;
label_18a960:
    // 0x18a960: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x18a960u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18a964: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x18a964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x18a968: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x18a968u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x18a96c: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x18a96cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x18a970: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x18a970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18a974: 0x27a700af  addiu       $a3, $sp, 0xAF
    ctx->pc = 0x18a974u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 175));
    // 0x18a978: 0xc7ac00a4  lwc1        $f12, 0xA4($sp)
    ctx->pc = 0x18a978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18a97c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18a97cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a980: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x18a980u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a984: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x18A984u;
    SET_GPR_U32(ctx, 31, 0x18A98Cu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x18A984u, 0x18A98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A98Cu;
label_18a98c:
    // 0x18a98c: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x18a98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18a990: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x18a990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x18a994: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x18a994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18a998: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x18a998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x18a99c: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x18a99cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18a9a0: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x18a9a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x18a9a4: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x18a9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18a9a8: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x18a9a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x18a9ac: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x18a9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x18a9b0: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x18a9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x18a9b4: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x18a9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x18a9b8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x18A9B8u;
    SET_GPR_U32(ctx, 31, 0x18A9C0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x18A9B8u, 0x18A9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A9C0u;
label_18a9c0:
    // 0x18a9c0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x18a9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18a9c4: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x18a9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x18a9c8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x18a9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x18a9cc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x18a9ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x18a9d0: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x18a9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x18a9d4: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x18a9d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18a9d8: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x18a9d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x18a9dc: 0xc7ac00a4  lwc1        $f12, 0xA4($sp)
    ctx->pc = 0x18a9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18a9e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18a9e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a9e4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x18a9e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a9e8: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x18A9E8u;
    SET_GPR_U32(ctx, 31, 0x18A9F0u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x18A9E8u, 0x18A9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A9F0u;
label_18a9f0:
    // 0x18a9f0: 0xc7818288  lwc1        $f1, -0x7D78($gp)
    ctx->pc = 0x18a9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18a9f4: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x18a9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18a9f8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18a9f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18a9fc: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x18a9fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x18aa00: 0xc7818288  lwc1        $f1, -0x7D78($gp)
    ctx->pc = 0x18aa00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18aa04: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x18aa04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18aa08: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18aa08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18aa0c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x18aa0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x18aa10: 0xc7818288  lwc1        $f1, -0x7D78($gp)
    ctx->pc = 0x18aa10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18aa14: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x18aa14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18aa18: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18aa18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18aa1c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x18aa1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x18aa20: 0xc78082cc  lwc1        $f0, -0x7D34($gp)
    ctx->pc = 0x18aa20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18aa24: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x18aa24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x18aa28: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x18aa28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x18aa2c: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x18aa2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x18aa30: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x18aa30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x18aa34: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x18AA34u;
    SET_GPR_U32(ctx, 31, 0x18AA3Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x18AA34u, 0x18AA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AA3Cu;
label_18aa3c:
    // 0x18aa3c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x18aa3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18aa40: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x18aa40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x18aa44: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x18aa44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x18aa48: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x18aa48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x18aa4c: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x18aa4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x18aa50: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x18aa50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18aa54: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x18aa54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x18aa58: 0xc7ac00a4  lwc1        $f12, 0xA4($sp)
    ctx->pc = 0x18aa58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18aa5c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18aa5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aa60: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x18aa60u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aa64: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x18AA64u;
    SET_GPR_U32(ctx, 31, 0x18AA6Cu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x18AA64u, 0x18AA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AA6Cu;
label_18aa6c:
    // 0x18aa6c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x18aa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x18aa70: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x18AA70u;
    {
        const bool branch_taken_0x18aa70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18aa70) {
            ctx->pc = 0x18AABCu;
            goto label_18aabc;
        }
    }
    ctx->pc = 0x18AA78u;
    // 0x18aa78: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x18aa78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x18aa7c: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x18aa7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x18aa80: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18aa80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18aa84: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x18AA84u;
    SET_GPR_U32(ctx, 31, 0x18AA8Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x18AA84u, 0x18AA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AA8Cu;
label_18aa8c:
    // 0x18aa8c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x18aa8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18aa90: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x18aa90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x18aa94: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x18aa94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x18aa98: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x18aa98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x18aa9c: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x18aa9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x18aaa0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x18aaa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18aaa4: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x18aaa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x18aaa8: 0xc7ac00a4  lwc1        $f12, 0xA4($sp)
    ctx->pc = 0x18aaa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18aaac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18aaacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aab0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x18aab0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aab4: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x18AAB4u;
    SET_GPR_U32(ctx, 31, 0x18AABCu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x18AAB4u, 0x18AABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AABCu;
label_18aabc:
    // 0x18aabc: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x18aabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18aac0: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x18aac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18aac4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x18aac4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x18aac8: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x18aac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x18aacc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18aaccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18aad0: 0x0  nop
    ctx->pc = 0x18aad0u;
    // NOP
    // 0x18aad4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x18aad4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x18aad8: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x18aad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x18aadc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18aadcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18aae0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18aae0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18aae4: 0x0  nop
    ctx->pc = 0x18aae4u;
    // NOP
    // 0x18aae8: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x18aae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x18aaec: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x18aaecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x18aaf0: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x18aaf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x18aaf4: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x18aaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x18aaf8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x18AAF8u;
    SET_GPR_U32(ctx, 31, 0x18AB00u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x18AAF8u, 0x18AB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AB00u;
label_18ab00:
    // 0x18ab00: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x18ab00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18ab04: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x18ab04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x18ab08: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x18ab08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x18ab0c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x18ab0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x18ab10: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x18ab10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x18ab14: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18ab14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18ab18: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x18ab18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x18ab1c: 0xc7ac00a4  lwc1        $f12, 0xA4($sp)
    ctx->pc = 0x18ab1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18ab20: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18ab20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ab24: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x18ab24u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ab28: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x18AB28u;
    SET_GPR_U32(ctx, 31, 0x18AB30u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x18AB28u, 0x18AB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AB30u;
label_18ab30:
    // 0x18ab30: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x18ab30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18ab34: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x18ab34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x18ab38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ab38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18ab3c: 0x0  nop
    ctx->pc = 0x18ab3cu;
    // NOP
    // 0x18ab40: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18ab40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18ab44: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x18ab44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x18ab48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18ab48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18ab4c: 0x0  nop
    ctx->pc = 0x18ab4cu;
    // NOP
    // 0x18ab50: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x18ab50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x18ab54: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18ab54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18ab58: 0x0  nop
    ctx->pc = 0x18ab58u;
    // NOP
    // 0x18ab5c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x18ab5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x18ab60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18ab60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18ab64: 0x0  nop
    ctx->pc = 0x18ab64u;
    // NOP
    // 0x18ab68: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x18ab68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x18ab6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18ab6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18ab70: 0x0  nop
    ctx->pc = 0x18ab70u;
    // NOP
    // 0x18ab74: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x18ab74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x18ab78: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x18ab78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x18ab7c: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x18ab7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x18ab80: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x18ab80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x18ab84: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x18AB84u;
    SET_GPR_U32(ctx, 31, 0x18AB8Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x18AB84u, 0x18AB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AB8Cu;
label_18ab8c:
    // 0x18ab8c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x18ab8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18ab90: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x18ab90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x18ab94: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x18ab94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x18ab98: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x18ab98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x18ab9c: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x18ab9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x18aba0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x18aba0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18aba4: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x18aba4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x18aba8: 0xc7ac00a4  lwc1        $f12, 0xA4($sp)
    ctx->pc = 0x18aba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18abac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18abacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18abb0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x18abb0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18abb4: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x18ABB4u;
    SET_GPR_U32(ctx, 31, 0x18ABBCu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x18ABB4u, 0x18ABBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18ABBCu;
label_18abbc:
    // 0x18abbc: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x18abbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18abc0: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x18abc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x18abc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18abc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18abc8: 0x0  nop
    ctx->pc = 0x18abc8u;
    // NOP
    // 0x18abcc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18abccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18abd0: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x18abd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x18abd4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x18abd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x18abd8: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x18abd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x18abdc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18abdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18abe0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x18ABE0u;
    SET_GPR_U32(ctx, 31, 0x18ABE8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x18ABE0u, 0x18ABE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18ABE8u;
label_18abe8:
    // 0x18abe8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x18abe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18abec: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x18abecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x18abf0: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x18abf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x18abf4: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x18abf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x18abf8: 0xc08c6c8  jal         func_231B20
    ctx->pc = 0x18ABF8u;
    SET_GPR_U32(ctx, 31, 0x18AC00u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x18ABF8u, 0x18AC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AC00u;
label_18ac00:
    // 0x18ac00: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x18ac00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x18ac04: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x18ac04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x18ac08: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18AC08u;
    {
        const bool branch_taken_0x18ac08 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x18ac08) {
            ctx->pc = 0x18AC24u;
            goto label_18ac24;
        }
    }
    ctx->pc = 0x18AC10u;
    // 0x18ac10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ac10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18ac14: 0x0  nop
    ctx->pc = 0x18ac14u;
    // NOP
    // 0x18ac18: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x18ac18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x18ac1c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18AC1Cu;
    {
        const bool branch_taken_0x18ac1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ac1c) {
            ctx->pc = 0x18AC40u;
            goto label_18ac40;
        }
    }
    ctx->pc = 0x18AC24u;
label_18ac24:
    // 0x18ac24: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x18ac24u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x18ac28: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18ac28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x18ac2c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18ac2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18ac30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18ac30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18ac34: 0x0  nop
    ctx->pc = 0x18ac34u;
    // NOP
    // 0x18ac38: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x18ac38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x18ac3c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x18ac3cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_18ac40:
    // 0x18ac40: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x18ac40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x18ac44: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18ac44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18ac48: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x18ac48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18ac4c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x18ac4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x18ac50: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x18ac50u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x18ac54: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x18ac54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x18ac58: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x18ac58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18ac5c: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x18ac5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18ac60: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18ac60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18ac64: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x18ac64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x18ac68: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x18ac68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x18ac6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18ac6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18ac70: 0x0  nop
    ctx->pc = 0x18ac70u;
    // NOP
    // 0x18ac74: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x18ac74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x18ac78: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x18ac78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x18ac7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ac7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18ac80: 0x0  nop
    ctx->pc = 0x18ac80u;
    // NOP
    // 0x18ac84: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x18ac84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x18ac88: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x18ac88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x18ac8c: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x18ac8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x18ac90: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x18ac90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x18ac94: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x18AC94u;
    SET_GPR_U32(ctx, 31, 0x18AC9Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x18AC94u, 0x18AC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AC9Cu;
label_18ac9c:
    // 0x18ac9c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x18ac9cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18aca0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x18aca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x18aca4: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x18aca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x18aca8: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x18aca8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x18acac: 0x8c450034  lw          $a1, 0x34($v0)
    ctx->pc = 0x18acacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x18acb0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x18acb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18acb4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18acb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18acb8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18acb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18acbc: 0x27a20078  addiu       $v0, $sp, 0x78
    ctx->pc = 0x18acbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x18acc0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x18acc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18acc4: 0xc7ac00a4  lwc1        $f12, 0xA4($sp)
    ctx->pc = 0x18acc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18acc8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18acc8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18accc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x18acccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18acd0: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x18ACD0u;
    SET_GPR_U32(ctx, 31, 0x18ACD8u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x18ACD0u, 0x18ACD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18ACD8u;
label_18acd8:
    // 0x18acd8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18acd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18acdc: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x18acdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x18ace0: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x18ace0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x18ace4: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x18ace4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x18ace8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18ace8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18acec: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x18acecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18acf0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x18ACF0u;
    SET_GPR_U32(ctx, 31, 0x18ACF8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x18ACF0u, 0x18ACF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18ACF8u;
label_18acf8:
    // 0x18acf8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x18acf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18acfc: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x18acfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x18ad00: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x18ad00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x18ad04: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x18ad04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x18ad08: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x18ad08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x18ad0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18ad0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ad10: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x18ad10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18ad14: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x18ad14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x18ad18: 0xc7ac00a4  lwc1        $f12, 0xA4($sp)
    ctx->pc = 0x18ad18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18ad1c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18ad1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ad20: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x18ad20u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ad24: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x18AD24u;
    SET_GPR_U32(ctx, 31, 0x18AD2Cu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x18AD24u, 0x18AD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AD2Cu;
label_18ad2c:
    // 0x18ad2c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x18ad2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x18ad30: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x18AD30u;
    {
        const bool branch_taken_0x18ad30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ad30) {
            ctx->pc = 0x18AD8Cu;
            goto label_18ad8c;
        }
    }
    ctx->pc = 0x18AD38u;
    // 0x18ad38: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x18ad38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x18ad3c: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x18ad3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x18ad40: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18ad40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18ad44: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x18AD44u;
    SET_GPR_U32(ctx, 31, 0x18AD4Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x18AD44u, 0x18AD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AD4Cu;
label_18ad4c:
    // 0x18ad4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18ad4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ad50: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x18ad50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18ad54: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x18ad54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x18ad58: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x18ad58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x18ad5c: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x18ad5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x18ad60: 0x8ca40034  lw          $a0, 0x34($a1)
    ctx->pc = 0x18ad60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x18ad64: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18ad64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ad68: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x18ad68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18ad6c: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x18ad6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ad70: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x18ad70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x18ad74: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x18ad74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ad78: 0xc7ac00a4  lwc1        $f12, 0xA4($sp)
    ctx->pc = 0x18ad78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18ad7c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18ad7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ad80: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x18ad80u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ad84: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x18AD84u;
    SET_GPR_U32(ctx, 31, 0x18AD8Cu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x18AD84u, 0x18AD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AD8Cu;
label_18ad8c:
    // 0x18ad8c: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x18ad8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18ad90: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x18ad90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x18ad94: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18ad94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18ad98: 0x0  nop
    ctx->pc = 0x18ad98u;
    // NOP
    // 0x18ad9c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18ad9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18ada0: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x18ada0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x18ada4: 0xa3a000af  sb          $zero, 0xAF($sp)
    ctx->pc = 0x18ada4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 175), (uint8_t)GPR_U32(ctx, 0));
    // 0x18ada8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x18ada8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x18adac: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x18adacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x18adb0: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x18adb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x18adb4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x18ADB4u;
    SET_GPR_U32(ctx, 31, 0x18ADBCu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x18ADB4u, 0x18ADBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18ADBCu;
label_18adbc:
    // 0x18adbc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18adbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18adc0: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x18adc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x18adc4: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x18adc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x18adc8: 0x8ca70034  lw          $a3, 0x34($a1)
    ctx->pc = 0x18adc8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x18adcc: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x18adccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18add0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18add0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18add4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18add4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18add8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x18add8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18addc: 0x27a700af  addiu       $a3, $sp, 0xAF
    ctx->pc = 0x18addcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 175));
    // 0x18ade0: 0xc7ac00a4  lwc1        $f12, 0xA4($sp)
    ctx->pc = 0x18ade0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18ade4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18ade4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ade8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x18ade8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18adec: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x18ADECu;
    SET_GPR_U32(ctx, 31, 0x18ADF4u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x18ADECu, 0x18ADF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18ADF4u;
label_18adf4:
    // 0x18adf4: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x18adf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x18adf8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x18adf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x18adfc: 0x2465005c  addiu       $a1, $v1, 0x5C
    ctx->pc = 0x18adfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 92));
    // 0x18ae00: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x18ae00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ae04: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18ae04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ae08: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x18AE08u;
    SET_GPR_U32(ctx, 31, 0x18AE10u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x18AE08u, 0x18AE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AE10u;
label_18ae10:
    // 0x18ae10: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x18ae10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ae14: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x18ae14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x18ae18: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x18ae18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x18ae1c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x18ae1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x18ae20: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x18ae20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x18ae24: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18ae24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ae28: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x18ae28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18ae2c: 0x27a700af  addiu       $a3, $sp, 0xAF
    ctx->pc = 0x18ae2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 175));
    // 0x18ae30: 0xc7ac00a4  lwc1        $f12, 0xA4($sp)
    ctx->pc = 0x18ae30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18ae34: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18ae34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ae38: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x18ae38u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ae3c: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x18AE3Cu;
    SET_GPR_U32(ctx, 31, 0x18AE44u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x18AE3Cu, 0x18AE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AE44u;
label_18ae44:
    // 0x18ae44: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x18ae44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x18ae48: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x18AE48u;
    {
        const bool branch_taken_0x18ae48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ae48) {
            ctx->pc = 0x18AE94u;
            goto label_18ae94;
        }
    }
    ctx->pc = 0x18AE50u;
    // 0x18ae50: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x18ae50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x18ae54: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x18ae54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x18ae58: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18ae58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18ae5c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x18AE5Cu;
    SET_GPR_U32(ctx, 31, 0x18AE64u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x18AE5Cu, 0x18AE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AE64u;
label_18ae64:
    // 0x18ae64: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x18ae64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18ae68: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x18ae68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x18ae6c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x18ae6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x18ae70: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x18ae70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x18ae74: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x18ae74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18ae78: 0x27a700af  addiu       $a3, $sp, 0xAF
    ctx->pc = 0x18ae78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 175));
    // 0x18ae7c: 0xc7ac00a4  lwc1        $f12, 0xA4($sp)
    ctx->pc = 0x18ae7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18ae80: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18ae80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ae84: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x18ae84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ae88: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x18AE88u;
    SET_GPR_U32(ctx, 31, 0x18AE90u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x18AE88u, 0x18AE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AE90u;
label_18ae90:
    // 0x18ae90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18ae90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18ae94:
    // 0x18ae94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18ae94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18ae98:
    // 0x18ae98: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x18ae98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18ae9c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18ae9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18aea0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18aea0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18aea4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18aea4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18aea8: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x18aea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x18aeac: 0x3e00008  jr          $ra
    ctx->pc = 0x18AEACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18AEACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18AEB4u;
    // 0x18aeb4: 0x0  nop
    ctx->pc = 0x18aeb4u;
    // NOP
    // 0x18aeb8: 0x0  nop
    ctx->pc = 0x18aeb8u;
    // NOP
    // 0x18aebc: 0x0  nop
    ctx->pc = 0x18aebcu;
    // NOP
    ctx->pc = 0x18aec0u;
}
