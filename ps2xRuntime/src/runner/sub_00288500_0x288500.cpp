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

// Function: sub_00288500
// Address: 0x288500 - 0x288c50
void sub_00288500_0x288500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288500_0x288500");
#endif

    switch (ctx->pc) {
        case 0x288550u: goto label_288550;
        case 0x288560u: goto label_288560;
        case 0x288574u: goto label_288574;
        case 0x28858cu: goto label_28858c;
        case 0x2885a0u: goto label_2885a0;
        case 0x2885acu: goto label_2885ac;
        case 0x2885bcu: goto label_2885bc;
        case 0x2885ccu: goto label_2885cc;
        case 0x2885e4u: goto label_2885e4;
        case 0x2885f4u: goto label_2885f4;
        case 0x288608u: goto label_288608;
        case 0x288618u: goto label_288618;
        case 0x288630u: goto label_288630;
        case 0x28864cu: goto label_28864c;
        case 0x288668u: goto label_288668;
        case 0x28867cu: goto label_28867c;
        case 0x288690u: goto label_288690;
        case 0x28869cu: goto label_28869c;
        case 0x2886b4u: goto label_2886b4;
        case 0x2886c4u: goto label_2886c4;
        case 0x2886d8u: goto label_2886d8;
        case 0x2886e8u: goto label_2886e8;
        case 0x288704u: goto label_288704;
        case 0x288710u: goto label_288710;
        case 0x28872cu: goto label_28872c;
        case 0x288744u: goto label_288744;
        case 0x288768u: goto label_288768;
        case 0x288780u: goto label_288780;
        case 0x28879cu: goto label_28879c;
        case 0x2887acu: goto label_2887ac;
        case 0x2887b8u: goto label_2887b8;
        case 0x288830u: goto label_288830;
        case 0x288848u: goto label_288848;
        case 0x288864u: goto label_288864;
        case 0x288874u: goto label_288874;
        case 0x288880u: goto label_288880;
        case 0x2888f8u: goto label_2888f8;
        case 0x288910u: goto label_288910;
        case 0x28892cu: goto label_28892c;
        case 0x28893cu: goto label_28893c;
        case 0x288948u: goto label_288948;
        case 0x2889c0u: goto label_2889c0;
        case 0x2889d8u: goto label_2889d8;
        case 0x2889f4u: goto label_2889f4;
        case 0x288a04u: goto label_288a04;
        case 0x288a10u: goto label_288a10;
        case 0x288a8cu: goto label_288a8c;
        case 0x288aa0u: goto label_288aa0;
        case 0x288ab0u: goto label_288ab0;
        case 0x288ac0u: goto label_288ac0;
        case 0x288ad8u: goto label_288ad8;
        case 0x288ae8u: goto label_288ae8;
        case 0x288af8u: goto label_288af8;
        case 0x288b08u: goto label_288b08;
        case 0x288b1cu: goto label_288b1c;
        case 0x288b30u: goto label_288b30;
        case 0x288b48u: goto label_288b48;
        case 0x288b54u: goto label_288b54;
        case 0x288b64u: goto label_288b64;
        case 0x288b74u: goto label_288b74;
        case 0x288b80u: goto label_288b80;
        case 0x288b94u: goto label_288b94;
        case 0x288ba8u: goto label_288ba8;
        case 0x288bbcu: goto label_288bbc;
        case 0x288bccu: goto label_288bcc;
        case 0x288bdcu: goto label_288bdc;
        case 0x288becu: goto label_288bec;
        case 0x288c04u: goto label_288c04;
        case 0x288c14u: goto label_288c14;
        default: break;
    }

    ctx->pc = 0x288500u;

    // 0x288500: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x288500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x288504: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x288504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x288508: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x288508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x28850c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x28850cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x288510: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x288510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x288514: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x288514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x288518: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x288518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x28851c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x28851cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x288520: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x288520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x288524: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x288524u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x288528: 0xafa40100  sw          $a0, 0x100($sp)
    ctx->pc = 0x288528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 4));
    // 0x28852c: 0xafa50110  sw          $a1, 0x110($sp)
    ctx->pc = 0x28852cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 5));
    // 0x288530: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x288530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x288534: 0x100301b9  beq         $zero, $v1, . + 4 + (0x1B9 << 2)
    ctx->pc = 0x288534u;
    {
        const bool branch_taken_0x288534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x288534) {
            ctx->pc = 0x288C1Cu;
            goto label_288c1c;
        }
    }
    ctx->pc = 0x28853Cu;
    // 0x28853c: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x28853cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x288540: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x288540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x288544: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x288544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x288548: 0xc085538  jal         func_2154E0
    ctx->pc = 0x288548u;
    SET_GPR_U32(ctx, 31, 0x288550u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x288548u, 0x288550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288550u;
label_288550:
    // 0x288550: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x288550u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288554: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x288554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288558: 0xc093730  jal         func_24DCC0
    ctx->pc = 0x288558u;
    SET_GPR_U32(ctx, 31, 0x288560u);
    ctx->pc = 0x24DCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DCC0u, 0x288558u, 0x288560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288560u;
label_288560:
    // 0x288560: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x288560u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288564: 0x27a400fc  addiu       $a0, $sp, 0xFC
    ctx->pc = 0x288564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x288568: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x288568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28856c: 0xc064178  jal         func_1905E0
    ctx->pc = 0x28856Cu;
    SET_GPR_U32(ctx, 31, 0x288574u);
    ctx->pc = 0x1905E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1905E0u, 0x28856Cu, 0x288574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288574u;
label_288574:
    // 0x288574: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x288574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x288578: 0x2450004c  addiu       $s0, $v0, 0x4C
    ctx->pc = 0x288578u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x28857c: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x28857cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x288580: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x288580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288584: 0xc0a1788  jal         func_285E20
    ctx->pc = 0x288584u;
    SET_GPR_U32(ctx, 31, 0x28858Cu);
    ctx->pc = 0x285E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285E20u, 0x288584u, 0x28858Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28858Cu;
label_28858c:
    // 0x28858c: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x28858cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x288590: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x288590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x288594: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x288594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x288598: 0xc085538  jal         func_2154E0
    ctx->pc = 0x288598u;
    SET_GPR_U32(ctx, 31, 0x2885A0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x288598u, 0x2885A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2885A0u;
label_2885a0:
    // 0x2885a0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2885a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2885a4: 0x10000189  b           . + 4 + (0x189 << 2)
    ctx->pc = 0x2885A4u;
    {
        const bool branch_taken_0x2885a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2885a4) {
            ctx->pc = 0x288BCCu;
            goto label_288bcc;
        }
    }
    ctx->pc = 0x2885ACu;
label_2885ac:
    // 0x2885ac: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2885acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2885b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2885b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2885b4: 0xc064134  jal         func_1904D0
    ctx->pc = 0x2885B4u;
    SET_GPR_U32(ctx, 31, 0x2885BCu);
    ctx->pc = 0x1904D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1904D0u, 0x2885B4u, 0x2885BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2885BCu;
label_2885bc:
    // 0x2885bc: 0x27a400fc  addiu       $a0, $sp, 0xFC
    ctx->pc = 0x2885bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x2885c0: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x2885c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2885c4: 0xc041998  jal         func_106660
    ctx->pc = 0x2885C4u;
    SET_GPR_U32(ctx, 31, 0x2885CCu);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x2885C4u, 0x2885CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2885CCu;
label_2885cc:
    // 0x2885cc: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x2885CCu;
    {
        const bool branch_taken_0x2885cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2885cc) {
            ctx->pc = 0x2886A4u;
            goto label_2886a4;
        }
    }
    ctx->pc = 0x2885D4u;
    // 0x2885d4: 0x27a400dc  addiu       $a0, $sp, 0xDC
    ctx->pc = 0x2885d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
    // 0x2885d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2885d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2885dc: 0xc0a1734  jal         func_285CD0
    ctx->pc = 0x2885DCu;
    SET_GPR_U32(ctx, 31, 0x2885E4u);
    ctx->pc = 0x285CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CD0u, 0x2885DCu, 0x2885E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2885E4u;
label_2885e4:
    // 0x2885e4: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x2885e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x2885e8: 0x27a500dc  addiu       $a1, $sp, 0xDC
    ctx->pc = 0x2885e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
    // 0x2885ec: 0xc041998  jal         func_106660
    ctx->pc = 0x2885ECu;
    SET_GPR_U32(ctx, 31, 0x2885F4u);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x2885ECu, 0x2885F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2885F4u;
label_2885f4:
    // 0x2885f4: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2885F4u;
    {
        const bool branch_taken_0x2885f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2885f4) {
            ctx->pc = 0x2886A4u;
            goto label_2886a4;
        }
    }
    ctx->pc = 0x2885FCu;
    // 0x2885fc: 0x27a400fc  addiu       $a0, $sp, 0xFC
    ctx->pc = 0x2885fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x288600: 0xc0a23bc  jal         func_288EF0
    ctx->pc = 0x288600u;
    SET_GPR_U32(ctx, 31, 0x288608u);
    ctx->pc = 0x288EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288EF0u, 0x288600u, 0x288608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288608u;
label_288608:
    // 0x288608: 0x8c560000  lw          $s6, 0x0($v0)
    ctx->pc = 0x288608u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28860c: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x28860cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x288610: 0xc0a23b0  jal         func_288EC0
    ctx->pc = 0x288610u;
    SET_GPR_U32(ctx, 31, 0x288618u);
    ctx->pc = 0x288EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288EC0u, 0x288610u, 0x288618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288618u;
label_288618:
    // 0x288618: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x288618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28861c: 0x16c20021  bne         $s6, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x28861Cu;
    {
        const bool branch_taken_0x28861c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x28861c) {
            ctx->pc = 0x2886A4u;
            goto label_2886a4;
        }
    }
    ctx->pc = 0x288624u;
    // 0x288624: 0x27a400fc  addiu       $a0, $sp, 0xFC
    ctx->pc = 0x288624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x288628: 0xc0a23bc  jal         func_288EF0
    ctx->pc = 0x288628u;
    SET_GPR_U32(ctx, 31, 0x288630u);
    ctx->pc = 0x288EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288EF0u, 0x288628u, 0x288630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288630u;
label_288630:
    // 0x288630: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x288630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x288634: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x288634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x288638: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x288638u;
    {
        const bool branch_taken_0x288638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x288638) {
            ctx->pc = 0x288684u;
            goto label_288684;
        }
    }
    ctx->pc = 0x288640u;
    // 0x288640: 0x27a400fc  addiu       $a0, $sp, 0xFC
    ctx->pc = 0x288640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x288644: 0xc0a23bc  jal         func_288EF0
    ctx->pc = 0x288644u;
    SET_GPR_U32(ctx, 31, 0x28864Cu);
    ctx->pc = 0x288EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288EF0u, 0x288644u, 0x28864Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28864Cu;
label_28864c:
    // 0x28864c: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x28864cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x288650: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x288650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x288654: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x288654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x288658: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x288658u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x28865c: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x28865cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x288660: 0xc0a1770  jal         func_285DC0
    ctx->pc = 0x288660u;
    SET_GPR_U32(ctx, 31, 0x288668u);
    ctx->pc = 0x285DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285DC0u, 0x288660u, 0x288668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288668u;
label_288668:
    // 0x288668: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x288668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x28866c: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x28866cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x288670: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x288670u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288674: 0xc0a3574  jal         func_28D5D0
    ctx->pc = 0x288674u;
    SET_GPR_U32(ctx, 31, 0x28867Cu);
    ctx->pc = 0x28D5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D5D0u, 0x288674u, 0x28867Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28867Cu;
label_28867c:
    // 0x28867c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x28867Cu;
    {
        const bool branch_taken_0x28867c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28867c) {
            ctx->pc = 0x288744u;
            goto label_288744;
        }
    }
    ctx->pc = 0x288684u;
label_288684:
    // 0x288684: 0x27a400fc  addiu       $a0, $sp, 0xFC
    ctx->pc = 0x288684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x288688: 0xc064160  jal         func_190580
    ctx->pc = 0x288688u;
    SET_GPR_U32(ctx, 31, 0x288690u);
    ctx->pc = 0x190580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190580u, 0x288688u, 0x288690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288690u;
label_288690:
    // 0x288690: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x288690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x288694: 0xc0a1760  jal         func_285D80
    ctx->pc = 0x288694u;
    SET_GPR_U32(ctx, 31, 0x28869Cu);
    ctx->pc = 0x285D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285D80u, 0x288694u, 0x28869Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28869Cu;
label_28869c:
    // 0x28869c: 0x1000014b  b           . + 4 + (0x14B << 2)
    ctx->pc = 0x28869Cu;
    {
        const bool branch_taken_0x28869c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28869c) {
            ctx->pc = 0x288BCCu;
            goto label_288bcc;
        }
    }
    ctx->pc = 0x2886A4u;
label_2886a4:
    // 0x2886a4: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x2886a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x2886a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2886a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2886ac: 0xc0a1734  jal         func_285CD0
    ctx->pc = 0x2886ACu;
    SET_GPR_U32(ctx, 31, 0x2886B4u);
    ctx->pc = 0x285CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CD0u, 0x2886ACu, 0x2886B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2886B4u;
label_2886b4:
    // 0x2886b4: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x2886b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x2886b8: 0x27a500d8  addiu       $a1, $sp, 0xD8
    ctx->pc = 0x2886b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x2886bc: 0xc0426a0  jal         func_109A80
    ctx->pc = 0x2886BCu;
    SET_GPR_U32(ctx, 31, 0x2886C4u);
    ctx->pc = 0x109A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109A80u, 0x2886BCu, 0x2886C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2886C4u;
label_2886c4:
    // 0x2886c4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2886C4u;
    {
        const bool branch_taken_0x2886c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2886c4) {
            ctx->pc = 0x2886F8u;
            goto label_2886f8;
        }
    }
    ctx->pc = 0x2886CCu;
    // 0x2886cc: 0x27a400fc  addiu       $a0, $sp, 0xFC
    ctx->pc = 0x2886ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x2886d0: 0xc0a23bc  jal         func_288EF0
    ctx->pc = 0x2886D0u;
    SET_GPR_U32(ctx, 31, 0x2886D8u);
    ctx->pc = 0x288EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288EF0u, 0x2886D0u, 0x2886D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2886D8u;
label_2886d8:
    // 0x2886d8: 0x8c560000  lw          $s6, 0x0($v0)
    ctx->pc = 0x2886d8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2886dc: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x2886dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x2886e0: 0xc0a23b0  jal         func_288EC0
    ctx->pc = 0x2886E0u;
    SET_GPR_U32(ctx, 31, 0x2886E8u);
    ctx->pc = 0x288EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288EC0u, 0x2886E0u, 0x2886E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2886E8u;
label_2886e8:
    // 0x2886e8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2886e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2886ec: 0x2c2082b  sltu        $at, $s6, $v0
    ctx->pc = 0x2886ecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2886f0: 0x10200125  beqz        $at, . + 4 + (0x125 << 2)
    ctx->pc = 0x2886F0u;
    {
        const bool branch_taken_0x2886f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2886f0) {
            ctx->pc = 0x288B88u;
            goto label_288b88;
        }
    }
    ctx->pc = 0x2886F8u;
label_2886f8:
    // 0x2886f8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2886f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2886fc: 0xc0a23a8  jal         func_288EA0
    ctx->pc = 0x2886FCu;
    SET_GPR_U32(ctx, 31, 0x288704u);
    ctx->pc = 0x288EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288EA0u, 0x2886FCu, 0x288704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288704u;
label_288704:
    // 0x288704: 0x27a400fc  addiu       $a0, $sp, 0xFC
    ctx->pc = 0x288704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x288708: 0xc0a23bc  jal         func_288EF0
    ctx->pc = 0x288708u;
    SET_GPR_U32(ctx, 31, 0x288710u);
    ctx->pc = 0x288EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288EF0u, 0x288708u, 0x288710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288710u;
label_288710:
    // 0x288710: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x288710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x288714: 0xafa20090  sw          $v0, 0x90($sp)
    ctx->pc = 0x288714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
    // 0x288718: 0x27a400a8  addiu       $a0, $sp, 0xA8
    ctx->pc = 0x288718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x28871c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28871cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288720: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x288720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x288724: 0xc0a2380  jal         func_288E00
    ctx->pc = 0x288724u;
    SET_GPR_U32(ctx, 31, 0x28872Cu);
    ctx->pc = 0x288E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288E00u, 0x288724u, 0x28872Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28872Cu;
label_28872c:
    // 0x28872c: 0x93a200ac  lbu         $v0, 0xAC($sp)
    ctx->pc = 0x28872cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x288730: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x288730u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x288734: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x288734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x288738: 0x27a500a8  addiu       $a1, $sp, 0xA8
    ctx->pc = 0x288738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x28873c: 0xc0a1778  jal         func_285DE0
    ctx->pc = 0x28873Cu;
    SET_GPR_U32(ctx, 31, 0x288744u);
    ctx->pc = 0x285DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285DE0u, 0x28873Cu, 0x288744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288744u;
label_288744:
    // 0x288744: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x288744u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x288748: 0x0  nop
    ctx->pc = 0x288748u;
    // NOP
    // 0x28874c: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x28874cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x288750: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x288750u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x288754: 0x0  nop
    ctx->pc = 0x288754u;
    // NOP
    // 0x288758: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x288758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x28875c: 0x27a400fc  addiu       $a0, $sp, 0xFC
    ctx->pc = 0x28875cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x288760: 0xc0a23bc  jal         func_288EF0
    ctx->pc = 0x288760u;
    SET_GPR_U32(ctx, 31, 0x288768u);
    ctx->pc = 0x288EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288EF0u, 0x288760u, 0x288768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288768u;
label_288768:
    // 0x288768: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x288768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28876c: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x28876Cu;
    {
        const bool branch_taken_0x28876c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28876c) {
            ctx->pc = 0x288824u;
            goto label_288824;
        }
    }
    ctx->pc = 0x288774u;
    // 0x288774: 0x27a400fc  addiu       $a0, $sp, 0xFC
    ctx->pc = 0x288774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x288778: 0xc0a23bc  jal         func_288EF0
    ctx->pc = 0x288778u;
    SET_GPR_U32(ctx, 31, 0x288780u);
    ctx->pc = 0x288EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288EF0u, 0x288778u, 0x288780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288780u;
label_288780:
    // 0x288780: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x288780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x288784: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x288784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x288788: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x288788u;
    {
        const bool branch_taken_0x288788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x288788) {
            ctx->pc = 0x288824u;
            goto label_288824;
        }
    }
    ctx->pc = 0x288790u;
    // 0x288790: 0x27a400fc  addiu       $a0, $sp, 0xFC
    ctx->pc = 0x288790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x288794: 0xc0a23bc  jal         func_288EF0
    ctx->pc = 0x288794u;
    SET_GPR_U32(ctx, 31, 0x28879Cu);
    ctx->pc = 0x288EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288EF0u, 0x288794u, 0x28879Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28879Cu;
label_28879c:
    // 0x28879c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x28879cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2887a0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2887a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2887a4: 0xc094d24  jal         func_253490
    ctx->pc = 0x2887A4u;
    SET_GPR_U32(ctx, 31, 0x2887ACu);
    ctx->pc = 0x253490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253490u, 0x2887A4u, 0x2887ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2887ACu;
label_2887ac:
    // 0x2887ac: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2887acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2887b0: 0xc04d634  jal         func_1358D0
    ctx->pc = 0x2887B0u;
    SET_GPR_U32(ctx, 31, 0x2887B8u);
    ctx->pc = 0x1358D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1358D0u, 0x2887B0u, 0x2887B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2887B8u;
label_2887b8:
    // 0x2887b8: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x2887b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x2887bc: 0xc7a100f0  lwc1        $f1, 0xF0($sp)
    ctx->pc = 0x2887bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2887c0: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x2887c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2887c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2887c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2887c8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2887C8u;
    {
        const bool branch_taken_0x2887c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2887c8) {
            ctx->pc = 0x2887E0u;
            goto label_2887e0;
        }
    }
    ctx->pc = 0x2887D0u;
    // 0x2887d0: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x2887d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2887d4: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x2887d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x2887d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2887D8u;
    {
        const bool branch_taken_0x2887d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2887d8) {
            ctx->pc = 0x2887E8u;
            goto label_2887e8;
        }
    }
    ctx->pc = 0x2887E0u;
label_2887e0:
    // 0x2887e0: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x2887e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2887e4: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x2887e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_2887e8:
    // 0x2887e8: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x2887e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2887ec: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x2887ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2887f0: 0xc7a100ec  lwc1        $f1, 0xEC($sp)
    ctx->pc = 0x2887f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2887f4: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x2887f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2887f8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2887f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2887fc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2887FCu;
    {
        const bool branch_taken_0x2887fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2887fc) {
            ctx->pc = 0x288814u;
            goto label_288814;
        }
    }
    ctx->pc = 0x288804u;
    // 0x288804: 0xc7a000ec  lwc1        $f0, 0xEC($sp)
    ctx->pc = 0x288804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288808: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x288808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x28880c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x28880Cu;
    {
        const bool branch_taken_0x28880c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28880c) {
            ctx->pc = 0x28881Cu;
            goto label_28881c;
        }
    }
    ctx->pc = 0x288814u;
label_288814:
    // 0x288814: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x288814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288818: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x288818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_28881c:
    // 0x28881c: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x28881cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288820: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x288820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_288824:
    // 0x288824: 0x27a400fc  addiu       $a0, $sp, 0xFC
    ctx->pc = 0x288824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x288828: 0xc0a23bc  jal         func_288EF0
    ctx->pc = 0x288828u;
    SET_GPR_U32(ctx, 31, 0x288830u);
    ctx->pc = 0x288EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288EF0u, 0x288828u, 0x288830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288830u;
label_288830:
    // 0x288830: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x288830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x288834: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x288834u;
    {
        const bool branch_taken_0x288834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x288834) {
            ctx->pc = 0x2888ECu;
            goto label_2888ec;
        }
    }
    ctx->pc = 0x28883Cu;
    // 0x28883c: 0x27a400fc  addiu       $a0, $sp, 0xFC
    ctx->pc = 0x28883cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x288840: 0xc0a23bc  jal         func_288EF0
    ctx->pc = 0x288840u;
    SET_GPR_U32(ctx, 31, 0x288848u);
    ctx->pc = 0x288EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288EF0u, 0x288840u, 0x288848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288848u;
label_288848:
    // 0x288848: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x288848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x28884c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x28884cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x288850: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x288850u;
    {
        const bool branch_taken_0x288850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x288850) {
            ctx->pc = 0x2888ECu;
            goto label_2888ec;
        }
    }
    ctx->pc = 0x288858u;
    // 0x288858: 0x27a400fc  addiu       $a0, $sp, 0xFC
    ctx->pc = 0x288858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x28885c: 0xc0a23bc  jal         func_288EF0
    ctx->pc = 0x28885Cu;
    SET_GPR_U32(ctx, 31, 0x288864u);
    ctx->pc = 0x288EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288EF0u, 0x28885Cu, 0x288864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288864u;
label_288864:
    // 0x288864: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x288864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x288868: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x288868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28886c: 0xc094d24  jal         func_253490
    ctx->pc = 0x28886Cu;
    SET_GPR_U32(ctx, 31, 0x288874u);
    ctx->pc = 0x253490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253490u, 0x28886Cu, 0x288874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288874u;
label_288874:
    // 0x288874: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x288874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x288878: 0xc04d634  jal         func_1358D0
    ctx->pc = 0x288878u;
    SET_GPR_U32(ctx, 31, 0x288880u);
    ctx->pc = 0x1358D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1358D0u, 0x288878u, 0x288880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288880u;
label_288880:
    // 0x288880: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x288880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x288884: 0xc7a100f0  lwc1        $f1, 0xF0($sp)
    ctx->pc = 0x288884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x288888: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x288888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28888c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x28888cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x288890: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x288890u;
    {
        const bool branch_taken_0x288890 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x288890) {
            ctx->pc = 0x2888A8u;
            goto label_2888a8;
        }
    }
    ctx->pc = 0x288898u;
    // 0x288898: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x288898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28889c: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x28889cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x2888a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2888A0u;
    {
        const bool branch_taken_0x2888a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2888a0) {
            ctx->pc = 0x2888B0u;
            goto label_2888b0;
        }
    }
    ctx->pc = 0x2888A8u;
label_2888a8:
    // 0x2888a8: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x2888a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2888ac: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x2888acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_2888b0:
    // 0x2888b0: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x2888b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2888b4: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x2888b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2888b8: 0xc7a100ec  lwc1        $f1, 0xEC($sp)
    ctx->pc = 0x2888b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2888bc: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x2888bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2888c0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2888c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2888c4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2888C4u;
    {
        const bool branch_taken_0x2888c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2888c4) {
            ctx->pc = 0x2888DCu;
            goto label_2888dc;
        }
    }
    ctx->pc = 0x2888CCu;
    // 0x2888cc: 0xc7a000ec  lwc1        $f0, 0xEC($sp)
    ctx->pc = 0x2888ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2888d0: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x2888d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2888d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2888D4u;
    {
        const bool branch_taken_0x2888d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2888d4) {
            ctx->pc = 0x2888E4u;
            goto label_2888e4;
        }
    }
    ctx->pc = 0x2888DCu;
label_2888dc:
    // 0x2888dc: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x2888dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2888e0: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x2888e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_2888e4:
    // 0x2888e4: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x2888e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2888e8: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x2888e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_2888ec:
    // 0x2888ec: 0x27a400fc  addiu       $a0, $sp, 0xFC
    ctx->pc = 0x2888ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x2888f0: 0xc0a23bc  jal         func_288EF0
    ctx->pc = 0x2888F0u;
    SET_GPR_U32(ctx, 31, 0x2888F8u);
    ctx->pc = 0x288EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288EF0u, 0x2888F0u, 0x2888F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2888F8u;
label_2888f8:
    // 0x2888f8: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2888f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2888fc: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2888FCu;
    {
        const bool branch_taken_0x2888fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2888fc) {
            ctx->pc = 0x2889B4u;
            goto label_2889b4;
        }
    }
    ctx->pc = 0x288904u;
    // 0x288904: 0x27a400fc  addiu       $a0, $sp, 0xFC
    ctx->pc = 0x288904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x288908: 0xc0a23bc  jal         func_288EF0
    ctx->pc = 0x288908u;
    SET_GPR_U32(ctx, 31, 0x288910u);
    ctx->pc = 0x288EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288EF0u, 0x288908u, 0x288910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288910u;
label_288910:
    // 0x288910: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x288910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x288914: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x288914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x288918: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x288918u;
    {
        const bool branch_taken_0x288918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x288918) {
            ctx->pc = 0x2889B4u;
            goto label_2889b4;
        }
    }
    ctx->pc = 0x288920u;
    // 0x288920: 0x27a400fc  addiu       $a0, $sp, 0xFC
    ctx->pc = 0x288920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x288924: 0xc0a23bc  jal         func_288EF0
    ctx->pc = 0x288924u;
    SET_GPR_U32(ctx, 31, 0x28892Cu);
    ctx->pc = 0x288EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288EF0u, 0x288924u, 0x28892Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28892Cu;
label_28892c:
    // 0x28892c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x28892cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x288930: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x288930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x288934: 0xc094d24  jal         func_253490
    ctx->pc = 0x288934u;
    SET_GPR_U32(ctx, 31, 0x28893Cu);
    ctx->pc = 0x253490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253490u, 0x288934u, 0x28893Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28893Cu;
label_28893c:
    // 0x28893c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x28893cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x288940: 0xc04d634  jal         func_1358D0
    ctx->pc = 0x288940u;
    SET_GPR_U32(ctx, 31, 0x288948u);
    ctx->pc = 0x1358D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1358D0u, 0x288940u, 0x288948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288948u;
label_288948:
    // 0x288948: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x288948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x28894c: 0xc7a100f0  lwc1        $f1, 0xF0($sp)
    ctx->pc = 0x28894cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x288950: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x288950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288954: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x288954u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x288958: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x288958u;
    {
        const bool branch_taken_0x288958 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x288958) {
            ctx->pc = 0x288970u;
            goto label_288970;
        }
    }
    ctx->pc = 0x288960u;
    // 0x288960: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x288960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288964: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x288964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x288968: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x288968u;
    {
        const bool branch_taken_0x288968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x288968) {
            ctx->pc = 0x288978u;
            goto label_288978;
        }
    }
    ctx->pc = 0x288970u;
label_288970:
    // 0x288970: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x288970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288974: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x288974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_288978:
    // 0x288978: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x288978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28897c: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x28897cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x288980: 0xc7a100ec  lwc1        $f1, 0xEC($sp)
    ctx->pc = 0x288980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x288984: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x288984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288988: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x288988u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28898c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x28898Cu;
    {
        const bool branch_taken_0x28898c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28898c) {
            ctx->pc = 0x2889A4u;
            goto label_2889a4;
        }
    }
    ctx->pc = 0x288994u;
    // 0x288994: 0xc7a000ec  lwc1        $f0, 0xEC($sp)
    ctx->pc = 0x288994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288998: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x288998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x28899c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x28899Cu;
    {
        const bool branch_taken_0x28899c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28899c) {
            ctx->pc = 0x2889ACu;
            goto label_2889ac;
        }
    }
    ctx->pc = 0x2889A4u;
label_2889a4:
    // 0x2889a4: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x2889a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2889a8: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x2889a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_2889ac:
    // 0x2889ac: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x2889acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2889b0: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x2889b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_2889b4:
    // 0x2889b4: 0x27a400fc  addiu       $a0, $sp, 0xFC
    ctx->pc = 0x2889b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x2889b8: 0xc0a23bc  jal         func_288EF0
    ctx->pc = 0x2889B8u;
    SET_GPR_U32(ctx, 31, 0x2889C0u);
    ctx->pc = 0x288EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288EF0u, 0x2889B8u, 0x2889C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2889C0u;
label_2889c0:
    // 0x2889c0: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x2889c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2889c4: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2889C4u;
    {
        const bool branch_taken_0x2889c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2889c4) {
            ctx->pc = 0x288A7Cu;
            goto label_288a7c;
        }
    }
    ctx->pc = 0x2889CCu;
    // 0x2889cc: 0x27a400fc  addiu       $a0, $sp, 0xFC
    ctx->pc = 0x2889ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x2889d0: 0xc0a23bc  jal         func_288EF0
    ctx->pc = 0x2889D0u;
    SET_GPR_U32(ctx, 31, 0x2889D8u);
    ctx->pc = 0x288EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288EF0u, 0x2889D0u, 0x2889D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2889D8u;
label_2889d8:
    // 0x2889d8: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x2889d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2889dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2889dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2889e0: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2889E0u;
    {
        const bool branch_taken_0x2889e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2889e0) {
            ctx->pc = 0x288A7Cu;
            goto label_288a7c;
        }
    }
    ctx->pc = 0x2889E8u;
    // 0x2889e8: 0x27a400fc  addiu       $a0, $sp, 0xFC
    ctx->pc = 0x2889e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x2889ec: 0xc0a23bc  jal         func_288EF0
    ctx->pc = 0x2889ECu;
    SET_GPR_U32(ctx, 31, 0x2889F4u);
    ctx->pc = 0x288EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288EF0u, 0x2889ECu, 0x2889F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2889F4u;
label_2889f4:
    // 0x2889f4: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x2889f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2889f8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2889f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2889fc: 0xc094d24  jal         func_253490
    ctx->pc = 0x2889FCu;
    SET_GPR_U32(ctx, 31, 0x288A04u);
    ctx->pc = 0x253490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253490u, 0x2889FCu, 0x288A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288A04u;
label_288a04:
    // 0x288a04: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x288a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x288a08: 0xc04d634  jal         func_1358D0
    ctx->pc = 0x288A08u;
    SET_GPR_U32(ctx, 31, 0x288A10u);
    ctx->pc = 0x1358D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1358D0u, 0x288A08u, 0x288A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288A10u;
label_288a10:
    // 0x288a10: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x288a10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x288a14: 0xc7a100f0  lwc1        $f1, 0xF0($sp)
    ctx->pc = 0x288a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x288a18: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x288a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288a1c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x288a1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x288a20: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x288A20u;
    {
        const bool branch_taken_0x288a20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x288a20) {
            ctx->pc = 0x288A38u;
            goto label_288a38;
        }
    }
    ctx->pc = 0x288A28u;
    // 0x288a28: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x288a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288a2c: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x288a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x288a30: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x288A30u;
    {
        const bool branch_taken_0x288a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x288a30) {
            ctx->pc = 0x288A40u;
            goto label_288a40;
        }
    }
    ctx->pc = 0x288A38u;
label_288a38:
    // 0x288a38: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x288a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288a3c: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x288a3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_288a40:
    // 0x288a40: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x288a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288a44: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x288a44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x288a48: 0xc7a100ec  lwc1        $f1, 0xEC($sp)
    ctx->pc = 0x288a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x288a4c: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x288a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288a50: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x288a50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x288a54: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x288A54u;
    {
        const bool branch_taken_0x288a54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x288a54) {
            ctx->pc = 0x288A6Cu;
            goto label_288a6c;
        }
    }
    ctx->pc = 0x288A5Cu;
    // 0x288a5c: 0xc7a000ec  lwc1        $f0, 0xEC($sp)
    ctx->pc = 0x288a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288a60: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x288a60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x288a64: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x288A64u;
    {
        const bool branch_taken_0x288a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x288a64) {
            ctx->pc = 0x288A74u;
            goto label_288a74;
        }
    }
    ctx->pc = 0x288A6Cu;
label_288a6c:
    // 0x288a6c: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x288a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288a70: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x288a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_288a74:
    // 0x288a74: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x288a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288a78: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x288a78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_288a7c:
    // 0x288a7c: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x288a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x288a80: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x288a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x288a84: 0xc0a23b0  jal         func_288EC0
    ctx->pc = 0x288A84u;
    SET_GPR_U32(ctx, 31, 0x288A8Cu);
    ctx->pc = 0x288EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288EC0u, 0x288A84u, 0x288A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288A8Cu;
label_288a8c:
    // 0x288a8c: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x288a8cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x288a90: 0xc7b400ec  lwc1        $f20, 0xEC($sp)
    ctx->pc = 0x288a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x288a94: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x288a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x288a98: 0xc0a23b0  jal         func_288EC0
    ctx->pc = 0x288A98u;
    SET_GPR_U32(ctx, 31, 0x288AA0u);
    ctx->pc = 0x288EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288EC0u, 0x288A98u, 0x288AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288AA0u;
label_288aa0:
    // 0x288aa0: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x288aa0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x288aa4: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x288aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x288aa8: 0xc0a1770  jal         func_285DC0
    ctx->pc = 0x288AA8u;
    SET_GPR_U32(ctx, 31, 0x288AB0u);
    ctx->pc = 0x285DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285DC0u, 0x288AA8u, 0x288AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288AB0u;
label_288ab0:
    // 0x288ab0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x288ab0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288ab4: 0x27a400fc  addiu       $a0, $sp, 0xFC
    ctx->pc = 0x288ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x288ab8: 0xc064170  jal         func_1905C0
    ctx->pc = 0x288AB8u;
    SET_GPR_U32(ctx, 31, 0x288AC0u);
    ctx->pc = 0x1905C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1905C0u, 0x288AB8u, 0x288AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288AC0u;
label_288ac0:
    // 0x288ac0: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x288ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x288ac4: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x288ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x288ac8: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x288ac8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288acc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x288accu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288ad0: 0xc0a31c0  jal         func_28C700
    ctx->pc = 0x288AD0u;
    SET_GPR_U32(ctx, 31, 0x288AD8u);
    ctx->pc = 0x28C700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28C700u, 0x288AD0u, 0x288AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288AD8u;
label_288ad8:
    // 0x288ad8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x288ad8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288adc: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x288adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x288ae0: 0xc0a23b0  jal         func_288EC0
    ctx->pc = 0x288AE0u;
    SET_GPR_U32(ctx, 31, 0x288AE8u);
    ctx->pc = 0x288EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288EC0u, 0x288AE0u, 0x288AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288AE8u;
label_288ae8:
    // 0x288ae8: 0xac560004  sw          $s6, 0x4($v0)
    ctx->pc = 0x288ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 22));
    // 0x288aec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x288aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288af0: 0xc091018  jal         func_244060
    ctx->pc = 0x288AF0u;
    SET_GPR_U32(ctx, 31, 0x288AF8u);
    ctx->pc = 0x244060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244060u, 0x288AF0u, 0x288AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288AF8u;
label_288af8:
    // 0x288af8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x288af8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288afc: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x288afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x288b00: 0xc0a23b0  jal         func_288EC0
    ctx->pc = 0x288B00u;
    SET_GPR_U32(ctx, 31, 0x288B08u);
    ctx->pc = 0x288EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288EC0u, 0x288B00u, 0x288B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288B08u;
label_288b08:
    // 0x288b08: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x288b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x288b0c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x288b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288b10: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x288b10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x288b14: 0xc10671c  jal         func_419C70
    ctx->pc = 0x288B14u;
    SET_GPR_U32(ctx, 31, 0x288B1Cu);
    ctx->pc = 0x419C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419C70u, 0x288B14u, 0x288B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288B1Cu;
label_288b1c:
    // 0x288b1c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x288b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x288b20: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x288b20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
    // 0x288b24: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x288b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x288b28: 0xc0a23b0  jal         func_288EC0
    ctx->pc = 0x288B28u;
    SET_GPR_U32(ctx, 31, 0x288B30u);
    ctx->pc = 0x288EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288EC0u, 0x288B28u, 0x288B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288B30u;
label_288b30:
    // 0x288b30: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x288b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x288b34: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x288b34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x288b38: 0x24a575e0  addiu       $a1, $a1, 0x75E0
    ctx->pc = 0x288b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30176));
    // 0x288b3c: 0x27a600e8  addiu       $a2, $sp, 0xE8
    ctx->pc = 0x288b3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x288b40: 0xc0e2628  jal         func_3898A0
    ctx->pc = 0x288B40u;
    SET_GPR_U32(ctx, 31, 0x288B48u);
    ctx->pc = 0x3898A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3898A0u, 0x288B40u, 0x288B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288B48u;
label_288b48:
    // 0x288b48: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x288b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x288b4c: 0xc0a23b0  jal         func_288EC0
    ctx->pc = 0x288B4Cu;
    SET_GPR_U32(ctx, 31, 0x288B54u);
    ctx->pc = 0x288EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288EC0u, 0x288B4Cu, 0x288B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288B54u;
label_288b54:
    // 0x288b54: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x288b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x288b58: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x288b58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x288b5c: 0xc0e6ea6  jal         func_39BA98
    ctx->pc = 0x288B5Cu;
    SET_GPR_U32(ctx, 31, 0x288B64u);
    ctx->pc = 0x39BA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BA98u, 0x288B5Cu, 0x288B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288B64u;
label_288b64:
    // 0x288b64: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x288b64u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288b68: 0x27a400fc  addiu       $a0, $sp, 0xFC
    ctx->pc = 0x288b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x288b6c: 0xc064160  jal         func_190580
    ctx->pc = 0x288B6Cu;
    SET_GPR_U32(ctx, 31, 0x288B74u);
    ctx->pc = 0x190580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190580u, 0x288B6Cu, 0x288B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288B74u;
label_288b74:
    // 0x288b74: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x288b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x288b78: 0xc0a1760  jal         func_285D80
    ctx->pc = 0x288B78u;
    SET_GPR_U32(ctx, 31, 0x288B80u);
    ctx->pc = 0x285D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285D80u, 0x288B78u, 0x288B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288B80u;
label_288b80:
    // 0x288b80: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x288B80u;
    {
        const bool branch_taken_0x288b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x288b80) {
            ctx->pc = 0x288BCCu;
            goto label_288bcc;
        }
    }
    ctx->pc = 0x288B88u;
label_288b88:
    // 0x288b88: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x288b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x288b8c: 0xc0a1770  jal         func_285DC0
    ctx->pc = 0x288B8Cu;
    SET_GPR_U32(ctx, 31, 0x288B94u);
    ctx->pc = 0x285DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285DC0u, 0x288B8Cu, 0x288B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288B94u;
label_288b94:
    // 0x288b94: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x288b94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x288b98: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x288b98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x288b9c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x288b9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288ba0: 0xc0a3574  jal         func_28D5D0
    ctx->pc = 0x288BA0u;
    SET_GPR_U32(ctx, 31, 0x288BA8u);
    ctx->pc = 0x28D5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D5D0u, 0x288BA0u, 0x288BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288BA8u;
label_288ba8:
    // 0x288ba8: 0x27a400e4  addiu       $a0, $sp, 0xE4
    ctx->pc = 0x288ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x288bac: 0x27a500f8  addiu       $a1, $sp, 0xF8
    ctx->pc = 0x288bacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x288bb0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x288bb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288bb4: 0xc0a235c  jal         func_288D70
    ctx->pc = 0x288BB4u;
    SET_GPR_U32(ctx, 31, 0x288BBCu);
    ctx->pc = 0x288D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288D70u, 0x288BB4u, 0x288BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288BBCu;
label_288bbc:
    // 0x288bbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x288bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288bc0: 0x8fa500e4  lw          $a1, 0xE4($sp)
    ctx->pc = 0x288bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x288bc4: 0xc0a2314  jal         func_288C50
    ctx->pc = 0x288BC4u;
    SET_GPR_U32(ctx, 31, 0x288BCCu);
    ctx->pc = 0x288C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288C50u, 0x288BC4u, 0x288BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288BCCu;
label_288bcc:
    // 0x288bcc: 0x27a400d4  addiu       $a0, $sp, 0xD4
    ctx->pc = 0x288bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x288bd0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x288bd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288bd4: 0xc064134  jal         func_1904D0
    ctx->pc = 0x288BD4u;
    SET_GPR_U32(ctx, 31, 0x288BDCu);
    ctx->pc = 0x1904D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1904D0u, 0x288BD4u, 0x288BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288BDCu;
label_288bdc:
    // 0x288bdc: 0x27a400fc  addiu       $a0, $sp, 0xFC
    ctx->pc = 0x288bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x288be0: 0x27a500d4  addiu       $a1, $sp, 0xD4
    ctx->pc = 0x288be0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x288be4: 0xc041998  jal         func_106660
    ctx->pc = 0x288BE4u;
    SET_GPR_U32(ctx, 31, 0x288BECu);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x288BE4u, 0x288BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288BECu;
label_288bec:
    // 0x288bec: 0x1440fe6f  bnez        $v0, . + 4 + (-0x191 << 2)
    ctx->pc = 0x288BECu;
    {
        const bool branch_taken_0x288bec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x288bec) {
            ctx->pc = 0x2885ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2885ac;
        }
    }
    ctx->pc = 0x288BF4u;
    // 0x288bf4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x288bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x288bf8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x288bf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288bfc: 0xc0a1734  jal         func_285CD0
    ctx->pc = 0x288BFCu;
    SET_GPR_U32(ctx, 31, 0x288C04u);
    ctx->pc = 0x285CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CD0u, 0x288BFCu, 0x288C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288C04u;
label_288c04:
    // 0x288c04: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x288c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x288c08: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x288c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x288c0c: 0xc041998  jal         func_106660
    ctx->pc = 0x288C0Cu;
    SET_GPR_U32(ctx, 31, 0x288C14u);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x288C0Cu, 0x288C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288C14u;
label_288c14:
    // 0x288c14: 0x1440fe65  bnez        $v0, . + 4 + (-0x19B << 2)
    ctx->pc = 0x288C14u;
    {
        const bool branch_taken_0x288c14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x288c14) {
            ctx->pc = 0x2885ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2885ac;
        }
    }
    ctx->pc = 0x288C1Cu;
label_288c1c:
    // 0x288c1c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x288c1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x288c20: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x288c20u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x288c24: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x288c24u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x288c28: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x288c28u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x288c2c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x288c2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x288c30: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x288c30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x288c34: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x288c34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x288c38: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x288c38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x288c3c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x288c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x288c40: 0x27bd0120  addiu       $sp, $sp, 0x120
    ctx->pc = 0x288c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x288c44: 0x3e00008  jr          $ra
    ctx->pc = 0x288C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288C44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x288C4Cu;
    // 0x288c4c: 0x0  nop
    ctx->pc = 0x288c4cu;
    // NOP
    ctx->pc = 0x288c50u;
}
