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

// Function: sub_002556A0
// Address: 0x2556a0 - 0x255cb0
void sub_002556A0_0x2556a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002556A0_0x2556a0");
#endif

    switch (ctx->pc) {
        case 0x2556e0u: goto label_2556e0;
        case 0x2556f4u: goto label_2556f4;
        case 0x255704u: goto label_255704;
        case 0x25570cu: goto label_25570c;
        case 0x255718u: goto label_255718;
        case 0x255730u: goto label_255730;
        case 0x25574cu: goto label_25574c;
        case 0x255768u: goto label_255768;
        case 0x255780u: goto label_255780;
        case 0x255794u: goto label_255794;
        case 0x2557acu: goto label_2557ac;
        case 0x2557c0u: goto label_2557c0;
        case 0x2557d8u: goto label_2557d8;
        case 0x2557ecu: goto label_2557ec;
        case 0x255804u: goto label_255804;
        case 0x255818u: goto label_255818;
        case 0x255830u: goto label_255830;
        case 0x255844u: goto label_255844;
        case 0x25585cu: goto label_25585c;
        case 0x255870u: goto label_255870;
        case 0x255888u: goto label_255888;
        case 0x25589cu: goto label_25589c;
        case 0x2558b4u: goto label_2558b4;
        case 0x2558c8u: goto label_2558c8;
        case 0x2558e0u: goto label_2558e0;
        case 0x2558f4u: goto label_2558f4;
        case 0x25590cu: goto label_25590c;
        case 0x255920u: goto label_255920;
        case 0x255938u: goto label_255938;
        case 0x25594cu: goto label_25594c;
        case 0x25595cu: goto label_25595c;
        case 0x25597cu: goto label_25597c;
        case 0x25598cu: goto label_25598c;
        case 0x255994u: goto label_255994;
        case 0x2559a8u: goto label_2559a8;
        case 0x2559b8u: goto label_2559b8;
        case 0x2559c4u: goto label_2559c4;
        case 0x2559f8u: goto label_2559f8;
        case 0x255a10u: goto label_255a10;
        case 0x255a24u: goto label_255a24;
        case 0x255a50u: goto label_255a50;
        case 0x255a7cu: goto label_255a7c;
        case 0x255a9cu: goto label_255a9c;
        case 0x255ab0u: goto label_255ab0;
        case 0x255ac0u: goto label_255ac0;
        case 0x255adcu: goto label_255adc;
        case 0x255aecu: goto label_255aec;
        case 0x255b04u: goto label_255b04;
        case 0x255b34u: goto label_255b34;
        case 0x255b40u: goto label_255b40;
        case 0x255b50u: goto label_255b50;
        case 0x255b68u: goto label_255b68;
        case 0x255b78u: goto label_255b78;
        case 0x255b90u: goto label_255b90;
        case 0x255ba0u: goto label_255ba0;
        case 0x255bb4u: goto label_255bb4;
        case 0x255bc4u: goto label_255bc4;
        case 0x255bdcu: goto label_255bdc;
        case 0x255c04u: goto label_255c04;
        case 0x255c18u: goto label_255c18;
        case 0x255c34u: goto label_255c34;
        case 0x255c48u: goto label_255c48;
        case 0x255c5cu: goto label_255c5c;
        case 0x255c6cu: goto label_255c6c;
        default: break;
    }

    ctx->pc = 0x2556a0u;

    // 0x2556a0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x2556a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x2556a4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2556a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2556a8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2556a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2556ac: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2556acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2556b0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2556b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2556b4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2556b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2556b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2556b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2556bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2556bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2556c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2556c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2556c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2556c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2556c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2556c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2556cc: 0xafa400f0  sw          $a0, 0xF0($sp)
    ctx->pc = 0x2556ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 4));
    // 0x2556d0: 0xafa50100  sw          $a1, 0x100($sp)
    ctx->pc = 0x2556d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 5));
    // 0x2556d4: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x2556d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x2556d8: 0xc09573c  jal         func_255CF0
    ctx->pc = 0x2556D8u;
    SET_GPR_U32(ctx, 31, 0x2556E0u);
    ctx->pc = 0x255CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255CF0u, 0x2556D8u, 0x2556E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2556E0u;
label_2556e0:
    // 0x2556e0: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x2556e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2556e4: 0x27a400d4  addiu       $a0, $sp, 0xD4
    ctx->pc = 0x2556e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x2556e8: 0x24450034  addiu       $a1, $v0, 0x34
    ctx->pc = 0x2556e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x2556ec: 0xc095410  jal         func_255040
    ctx->pc = 0x2556ECu;
    SET_GPR_U32(ctx, 31, 0x2556F4u);
    ctx->pc = 0x255040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255040u, 0x2556ECu, 0x2556F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2556F4u;
label_2556f4:
    // 0x2556f4: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x2556f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x2556f8: 0x27a500d4  addiu       $a1, $sp, 0xD4
    ctx->pc = 0x2556f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x2556fc: 0xc09572c  jal         func_255CB0
    ctx->pc = 0x2556FCu;
    SET_GPR_U32(ctx, 31, 0x255704u);
    ctx->pc = 0x255CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255CB0u, 0x2556FCu, 0x255704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255704u;
label_255704:
    // 0x255704: 0x10000150  b           . + 4 + (0x150 << 2)
    ctx->pc = 0x255704u;
    {
        const bool branch_taken_0x255704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x255704) {
            ctx->pc = 0x255C48u;
            goto label_255c48;
        }
    }
    ctx->pc = 0x25570Cu;
label_25570c:
    // 0x25570c: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x25570cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x255710: 0xc095408  jal         func_255020
    ctx->pc = 0x255710u;
    SET_GPR_U32(ctx, 31, 0x255718u);
    ctx->pc = 0x255020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255020u, 0x255710u, 0x255718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255718u;
label_255718:
    // 0x255718: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x255718u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25571c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x25571cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x255720: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x255720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x255724: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x255724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x255728: 0xc09138c  jal         func_244E30
    ctx->pc = 0x255728u;
    SET_GPR_U32(ctx, 31, 0x255730u);
    ctx->pc = 0x244E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244E30u, 0x255728u, 0x255730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255730u;
label_255730:
    // 0x255730: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x255730u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x255734: 0x14620141  bne         $v1, $v0, . + 4 + (0x141 << 2)
    ctx->pc = 0x255734u;
    {
        const bool branch_taken_0x255734 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x255734) {
            ctx->pc = 0x255C3Cu;
            goto label_255c3c;
        }
    }
    ctx->pc = 0x25573Cu;
    // 0x25573c: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x25573cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x255740: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x255740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x255744: 0xc085538  jal         func_2154E0
    ctx->pc = 0x255744u;
    SET_GPR_U32(ctx, 31, 0x25574Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x255744u, 0x25574Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25574Cu;
label_25574c:
    // 0x25574c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25574cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255750: 0x1011007e  beq         $zero, $s1, . + 4 + (0x7E << 2)
    ctx->pc = 0x255750u;
    {
        const bool branch_taken_0x255750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 17));
        if (branch_taken_0x255750) {
            ctx->pc = 0x25594Cu;
            goto label_25594c;
        }
    }
    ctx->pc = 0x255758u;
    // 0x255758: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x255758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25575c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25575cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255760: 0xc098108  jal         func_260420
    ctx->pc = 0x255760u;
    SET_GPR_U32(ctx, 31, 0x255768u);
    ctx->pc = 0x260420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260420u, 0x255760u, 0x255768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255768u;
label_255768:
    // 0x255768: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x255768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25576c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x25576cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x255770: 0x24a5bee0  addiu       $a1, $a1, -0x4120
    ctx->pc = 0x255770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950624));
    // 0x255774: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x255774u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255778: 0xc047328  jal         func_11CCA0
    ctx->pc = 0x255778u;
    SET_GPR_U32(ctx, 31, 0x255780u);
    ctx->pc = 0x11CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CCA0u, 0x255778u, 0x255780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255780u;
label_255780:
    // 0x255780: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x255780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255784: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x255784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x255788: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x255788u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25578c: 0xc0980bc  jal         func_2602F0
    ctx->pc = 0x25578Cu;
    SET_GPR_U32(ctx, 31, 0x255794u);
    ctx->pc = 0x2602F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2602F0u, 0x25578Cu, 0x255794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255794u;
label_255794:
    // 0x255794: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x255794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255798: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x255798u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x25579c: 0x24a5bf00  addiu       $a1, $a1, -0x4100
    ctx->pc = 0x25579cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950656));
    // 0x2557a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2557a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2557a4: 0xc047328  jal         func_11CCA0
    ctx->pc = 0x2557A4u;
    SET_GPR_U32(ctx, 31, 0x2557ACu);
    ctx->pc = 0x11CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CCA0u, 0x2557A4u, 0x2557ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2557ACu;
label_2557ac:
    // 0x2557ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2557acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2557b0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2557b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2557b4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2557b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2557b8: 0xc0980bc  jal         func_2602F0
    ctx->pc = 0x2557B8u;
    SET_GPR_U32(ctx, 31, 0x2557C0u);
    ctx->pc = 0x2602F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2602F0u, 0x2557B8u, 0x2557C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2557C0u;
label_2557c0:
    // 0x2557c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2557c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2557c4: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2557c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2557c8: 0x24a5bf20  addiu       $a1, $a1, -0x40E0
    ctx->pc = 0x2557c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950688));
    // 0x2557cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2557ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2557d0: 0xc047328  jal         func_11CCA0
    ctx->pc = 0x2557D0u;
    SET_GPR_U32(ctx, 31, 0x2557D8u);
    ctx->pc = 0x11CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CCA0u, 0x2557D0u, 0x2557D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2557D8u;
label_2557d8:
    // 0x2557d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2557d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2557dc: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x2557dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2557e0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2557e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2557e4: 0xc0980bc  jal         func_2602F0
    ctx->pc = 0x2557E4u;
    SET_GPR_U32(ctx, 31, 0x2557ECu);
    ctx->pc = 0x2602F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2602F0u, 0x2557E4u, 0x2557ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2557ECu;
label_2557ec:
    // 0x2557ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2557ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2557f0: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2557f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2557f4: 0x24a5bf40  addiu       $a1, $a1, -0x40C0
    ctx->pc = 0x2557f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950720));
    // 0x2557f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2557f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2557fc: 0xc047328  jal         func_11CCA0
    ctx->pc = 0x2557FCu;
    SET_GPR_U32(ctx, 31, 0x255804u);
    ctx->pc = 0x11CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CCA0u, 0x2557FCu, 0x255804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255804u;
label_255804:
    // 0x255804: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x255804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255808: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x255808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x25580c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x25580cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255810: 0xc0980bc  jal         func_2602F0
    ctx->pc = 0x255810u;
    SET_GPR_U32(ctx, 31, 0x255818u);
    ctx->pc = 0x2602F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2602F0u, 0x255810u, 0x255818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255818u;
label_255818:
    // 0x255818: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x255818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25581c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x25581cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x255820: 0x24a5bf60  addiu       $a1, $a1, -0x40A0
    ctx->pc = 0x255820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950752));
    // 0x255824: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x255824u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255828: 0xc047328  jal         func_11CCA0
    ctx->pc = 0x255828u;
    SET_GPR_U32(ctx, 31, 0x255830u);
    ctx->pc = 0x11CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CCA0u, 0x255828u, 0x255830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255830u;
label_255830:
    // 0x255830: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x255830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255834: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x255834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x255838: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x255838u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25583c: 0xc0980bc  jal         func_2602F0
    ctx->pc = 0x25583Cu;
    SET_GPR_U32(ctx, 31, 0x255844u);
    ctx->pc = 0x2602F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2602F0u, 0x25583Cu, 0x255844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255844u;
label_255844:
    // 0x255844: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x255844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255848: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x255848u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x25584c: 0x24a5bf80  addiu       $a1, $a1, -0x4080
    ctx->pc = 0x25584cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950784));
    // 0x255850: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x255850u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255854: 0xc047328  jal         func_11CCA0
    ctx->pc = 0x255854u;
    SET_GPR_U32(ctx, 31, 0x25585Cu);
    ctx->pc = 0x11CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CCA0u, 0x255854u, 0x25585Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25585Cu;
label_25585c:
    // 0x25585c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25585cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255860: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x255860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x255864: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x255864u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255868: 0xc0980bc  jal         func_2602F0
    ctx->pc = 0x255868u;
    SET_GPR_U32(ctx, 31, 0x255870u);
    ctx->pc = 0x2602F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2602F0u, 0x255868u, 0x255870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255870u;
label_255870:
    // 0x255870: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x255870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255874: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x255874u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x255878: 0x24a5bfa0  addiu       $a1, $a1, -0x4060
    ctx->pc = 0x255878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950816));
    // 0x25587c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25587cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255880: 0xc047328  jal         func_11CCA0
    ctx->pc = 0x255880u;
    SET_GPR_U32(ctx, 31, 0x255888u);
    ctx->pc = 0x11CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CCA0u, 0x255880u, 0x255888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255888u;
label_255888:
    // 0x255888: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x255888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25588c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x25588cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x255890: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x255890u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255894: 0xc0980bc  jal         func_2602F0
    ctx->pc = 0x255894u;
    SET_GPR_U32(ctx, 31, 0x25589Cu);
    ctx->pc = 0x2602F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2602F0u, 0x255894u, 0x25589Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25589Cu;
label_25589c:
    // 0x25589c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25589cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2558a0: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2558a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2558a4: 0x24a5bfc0  addiu       $a1, $a1, -0x4040
    ctx->pc = 0x2558a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950848));
    // 0x2558a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2558a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2558ac: 0xc047328  jal         func_11CCA0
    ctx->pc = 0x2558ACu;
    SET_GPR_U32(ctx, 31, 0x2558B4u);
    ctx->pc = 0x11CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CCA0u, 0x2558ACu, 0x2558B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2558B4u;
label_2558b4:
    // 0x2558b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2558b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2558b8: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x2558b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2558bc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2558bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2558c0: 0xc0980bc  jal         func_2602F0
    ctx->pc = 0x2558C0u;
    SET_GPR_U32(ctx, 31, 0x2558C8u);
    ctx->pc = 0x2602F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2602F0u, 0x2558C0u, 0x2558C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2558C8u;
label_2558c8:
    // 0x2558c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2558c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2558cc: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2558ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2558d0: 0x24a5bfe0  addiu       $a1, $a1, -0x4020
    ctx->pc = 0x2558d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950880));
    // 0x2558d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2558d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2558d8: 0xc047328  jal         func_11CCA0
    ctx->pc = 0x2558D8u;
    SET_GPR_U32(ctx, 31, 0x2558E0u);
    ctx->pc = 0x11CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CCA0u, 0x2558D8u, 0x2558E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2558E0u;
label_2558e0:
    // 0x2558e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2558e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2558e4: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2558e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2558e8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2558e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2558ec: 0xc0980bc  jal         func_2602F0
    ctx->pc = 0x2558ECu;
    SET_GPR_U32(ctx, 31, 0x2558F4u);
    ctx->pc = 0x2602F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2602F0u, 0x2558ECu, 0x2558F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2558F4u;
label_2558f4:
    // 0x2558f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2558f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2558f8: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2558f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2558fc: 0x24a5c000  addiu       $a1, $a1, -0x4000
    ctx->pc = 0x2558fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950912));
    // 0x255900: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x255900u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255904: 0xc047328  jal         func_11CCA0
    ctx->pc = 0x255904u;
    SET_GPR_U32(ctx, 31, 0x25590Cu);
    ctx->pc = 0x11CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CCA0u, 0x255904u, 0x25590Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25590Cu;
label_25590c:
    // 0x25590c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25590cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255910: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x255910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x255914: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x255914u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255918: 0xc0980bc  jal         func_2602F0
    ctx->pc = 0x255918u;
    SET_GPR_U32(ctx, 31, 0x255920u);
    ctx->pc = 0x2602F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2602F0u, 0x255918u, 0x255920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255920u;
label_255920:
    // 0x255920: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x255920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255924: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x255924u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x255928: 0x24a5c020  addiu       $a1, $a1, -0x3FE0
    ctx->pc = 0x255928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950944));
    // 0x25592c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25592cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255930: 0xc047328  jal         func_11CCA0
    ctx->pc = 0x255930u;
    SET_GPR_U32(ctx, 31, 0x255938u);
    ctx->pc = 0x11CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CCA0u, 0x255930u, 0x255938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255938u;
label_255938:
    // 0x255938: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x255938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25593c: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x25593cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x255940: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x255940u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255944: 0xc0980bc  jal         func_2602F0
    ctx->pc = 0x255944u;
    SET_GPR_U32(ctx, 31, 0x25594Cu);
    ctx->pc = 0x2602F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2602F0u, 0x255944u, 0x25594Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25594Cu;
label_25594c:
    // 0x25594c: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x25594cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x255950: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x255950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x255954: 0xc085538  jal         func_2154E0
    ctx->pc = 0x255954u;
    SET_GPR_U32(ctx, 31, 0x25595Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x255954u, 0x25595Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25595Cu;
label_25595c:
    // 0x25595c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x25595cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255960: 0x10160085  beq         $zero, $s6, . + 4 + (0x85 << 2)
    ctx->pc = 0x255960u;
    {
        const bool branch_taken_0x255960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 22));
        if (branch_taken_0x255960) {
            ctx->pc = 0x255B78u;
            goto label_255b78;
        }
    }
    ctx->pc = 0x255968u;
    // 0x255968: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x255968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25596c: 0x2405053f  addiu       $a1, $zero, 0x53F
    ctx->pc = 0x25596cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1343));
    // 0x255970: 0x27869ec0  addiu       $a2, $gp, -0x6140
    ctx->pc = 0x255970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942400));
    // 0x255974: 0xc041a50  jal         func_106940
    ctx->pc = 0x255974u;
    SET_GPR_U32(ctx, 31, 0x25597Cu);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x255974u, 0x25597Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25597Cu;
label_25597c:
    // 0x25597c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x25597cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255980: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x255980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x255984: 0xc0447ec  jal         func_111FB0
    ctx->pc = 0x255984u;
    SET_GPR_U32(ctx, 31, 0x25598Cu);
    ctx->pc = 0x111FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111FB0u, 0x255984u, 0x25598Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25598Cu;
label_25598c:
    // 0x25598c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x25598Cu;
    {
        const bool branch_taken_0x25598c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25598c) {
            ctx->pc = 0x2559E0u;
            goto label_2559e0;
        }
    }
    ctx->pc = 0x255994u;
label_255994:
    // 0x255994: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x255994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255998: 0x27859ec8  addiu       $a1, $gp, -0x6138
    ctx->pc = 0x255998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942408));
    // 0x25599c: 0x27a600e4  addiu       $a2, $sp, 0xE4
    ctx->pc = 0x25599cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x2559a0: 0xc0bc408  jal         func_2F1020
    ctx->pc = 0x2559A0u;
    SET_GPR_U32(ctx, 31, 0x2559A8u);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x2559A0u, 0x2559A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2559A8u;
label_2559a8:
    // 0x2559a8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2559a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2559ac: 0x27a500e4  addiu       $a1, $sp, 0xE4
    ctx->pc = 0x2559acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x2559b0: 0xc0444e0  jal         func_111380
    ctx->pc = 0x2559B0u;
    SET_GPR_U32(ctx, 31, 0x2559B8u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x2559B0u, 0x2559B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2559B8u;
label_2559b8:
    // 0x2559b8: 0x2652000a  addiu       $s2, $s2, 0xA
    ctx->pc = 0x2559b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 10));
    // 0x2559bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2559BCu;
    {
        const bool branch_taken_0x2559bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2559bc) {
            ctx->pc = 0x2559C8u;
            goto label_2559c8;
        }
    }
    ctx->pc = 0x2559C4u;
label_2559c4:
    // 0x2559c4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2559c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2559c8:
    // 0x2559c8: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x2559c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2559cc: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x2559ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2559d0: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2559d0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2559d4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2559d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2559d8: 0x1062fffa  beq         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2559D8u;
    {
        const bool branch_taken_0x2559d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2559d8) {
            ctx->pc = 0x2559C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2559c4;
        }
    }
    ctx->pc = 0x2559E0u;
label_2559e0:
    // 0x2559e0: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x2559e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2559e4: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2559E4u;
    {
        const bool branch_taken_0x2559e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2559e4) {
            ctx->pc = 0x255994u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_255994;
        }
    }
    ctx->pc = 0x2559ECu;
    // 0x2559ec: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2559ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2559f0: 0xc044598  jal         func_111660
    ctx->pc = 0x2559F0u;
    SET_GPR_U32(ctx, 31, 0x2559F8u);
    ctx->pc = 0x111660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111660u, 0x2559F0u, 0x2559F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2559F8u;
label_2559f8:
    // 0x2559f8: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x2559f8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2559fc: 0x1420003b  bnez        $at, . + 4 + (0x3B << 2)
    ctx->pc = 0x2559FCu;
    {
        const bool branch_taken_0x2559fc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2559fc) {
            ctx->pc = 0x255AECu;
            goto label_255aec;
        }
    }
    ctx->pc = 0x255A04u;
    // 0x255a04: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x255a04u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x255a08: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x255A08u;
    {
        const bool branch_taken_0x255a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x255a08) {
            ctx->pc = 0x255AB4u;
            goto label_255ab4;
        }
    }
    ctx->pc = 0x255A10u;
label_255a10:
    // 0x255a10: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x255a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x255a14: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x255a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x255a18: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x255A18u;
    {
        const bool branch_taken_0x255a18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x255a18) {
            ctx->pc = 0x255A40u;
            goto label_255a40;
        }
    }
    ctx->pc = 0x255A20u;
    // 0x255a20: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x255a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_255a24:
    // 0x255a24: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x255a24u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x255a28: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x255a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x255a2c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x255a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x255a30: 0x0  nop
    ctx->pc = 0x255a30u;
    // NOP
    // 0x255a34: 0x0  nop
    ctx->pc = 0x255a34u;
    // NOP
    // 0x255a38: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x255A38u;
    {
        const bool branch_taken_0x255a38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x255a38) {
            ctx->pc = 0x255A24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_255a24;
        }
    }
    ctx->pc = 0x255A40u;
label_255a40:
    // 0x255a40: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x255a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x255a44: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x255a44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255a48: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x255A48u;
    SET_GPR_U32(ctx, 31, 0x255A50u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x255A48u, 0x255A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255A50u;
label_255a50:
    // 0x255a50: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x255a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x255a54: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x255a54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x255a58: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x255a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x255a5c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x255A5Cu;
    {
        const bool branch_taken_0x255a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x255a5c) {
            ctx->pc = 0x255AB0u;
            goto label_255ab0;
        }
    }
    ctx->pc = 0x255A64u;
    // 0x255a64: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x255a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x255a68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x255a68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255a6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x255a6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255a70: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x255a70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255a74: 0xc08cd28  jal         func_2334A0
    ctx->pc = 0x255A74u;
    SET_GPR_U32(ctx, 31, 0x255A7Cu);
    ctx->pc = 0x2334A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2334A0u, 0x255A74u, 0x255A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255A7Cu;
label_255a7c:
    // 0x255a7c: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x255a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x255a80: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x255a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x255a84: 0x1002000a  beq         $zero, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x255A84u;
    {
        const bool branch_taken_0x255a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x255a84) {
            ctx->pc = 0x255AB0u;
            goto label_255ab0;
        }
    }
    ctx->pc = 0x255A8Cu;
    // 0x255a8c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x255a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x255a90: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x255a90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255a94: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x255A94u;
    SET_GPR_U32(ctx, 31, 0x255A9Cu);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x255A94u, 0x255A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255A9Cu;
label_255a9c:
    // 0x255a9c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x255a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255aa0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x255aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x255aa4: 0x8fa600dc  lw          $a2, 0xDC($sp)
    ctx->pc = 0x255aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x255aa8: 0xc096a20  jal         func_25A880
    ctx->pc = 0x255AA8u;
    SET_GPR_U32(ctx, 31, 0x255AB0u);
    ctx->pc = 0x25A880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A880u, 0x255AA8u, 0x255AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255AB0u;
label_255ab0:
    // 0x255ab0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x255ab0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_255ab4:
    // 0x255ab4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x255ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x255ab8: 0xc044598  jal         func_111660
    ctx->pc = 0x255AB8u;
    SET_GPR_U32(ctx, 31, 0x255AC0u);
    ctx->pc = 0x111660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111660u, 0x255AB8u, 0x255AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255AC0u;
label_255ac0:
    // 0x255ac0: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x255ac0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x255ac4: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x255AC4u;
    {
        const bool branch_taken_0x255ac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x255ac4) {
            ctx->pc = 0x255A10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_255a10;
        }
    }
    ctx->pc = 0x255ACCu;
    // 0x255acc: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x255accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x255ad0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x255ad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255ad4: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x255AD4u;
    SET_GPR_U32(ctx, 31, 0x255ADCu);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x255AD4u, 0x255ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255ADCu;
label_255adc:
    // 0x255adc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x255adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255ae0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x255ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x255ae4: 0xc096af0  jal         func_25ABC0
    ctx->pc = 0x255AE4u;
    SET_GPR_U32(ctx, 31, 0x255AECu);
    ctx->pc = 0x25ABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25ABC0u, 0x255AE4u, 0x255AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255AECu;
label_255aec:
    // 0x255aec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x255aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255af0: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x255af0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x255af4: 0x24a5c040  addiu       $a1, $a1, -0x3FC0
    ctx->pc = 0x255af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950976));
    // 0x255af8: 0x27869ec0  addiu       $a2, $gp, -0x6140
    ctx->pc = 0x255af8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942400));
    // 0x255afc: 0xc04206c  jal         func_1081B0
    ctx->pc = 0x255AFCu;
    SET_GPR_U32(ctx, 31, 0x255B04u);
    ctx->pc = 0x1081B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1081B0u, 0x255AFCu, 0x255B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255B04u;
label_255b04:
    // 0x255b04: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x255b04u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255b08: 0x82e20000  lb          $v0, 0x0($s7)
    ctx->pc = 0x255b08u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x255b0c: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x255b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x255b10: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x255b10u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x255b14: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x255B14u;
    {
        const bool branch_taken_0x255b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x255b14) {
            ctx->pc = 0x255B68u;
            goto label_255b68;
        }
    }
    ctx->pc = 0x255B1Cu;
    // 0x255b1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x255b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255b20: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x255b20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x255b24: 0x24a5c060  addiu       $a1, $a1, -0x3FA0
    ctx->pc = 0x255b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951008));
    // 0x255b28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x255b28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255b2c: 0xc047328  jal         func_11CCA0
    ctx->pc = 0x255B2Cu;
    SET_GPR_U32(ctx, 31, 0x255B34u);
    ctx->pc = 0x11CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CCA0u, 0x255B2Cu, 0x255B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255B34u;
label_255b34:
    // 0x255b34: 0xa3a200ef  sb          $v0, 0xEF($sp)
    ctx->pc = 0x255b34u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 239), (uint8_t)GPR_U32(ctx, 2));
    // 0x255b38: 0xc09a360  jal         func_268D80
    ctx->pc = 0x255B38u;
    SET_GPR_U32(ctx, 31, 0x255B40u);
    ctx->pc = 0x268D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D80u, 0x255B38u, 0x255B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255B40u;
label_255b40:
    // 0x255b40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x255b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255b44: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x255b44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255b48: 0xc09a364  jal         func_268D90
    ctx->pc = 0x255B48u;
    SET_GPR_U32(ctx, 31, 0x255B50u);
    ctx->pc = 0x268D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D90u, 0x255B48u, 0x255B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255B50u;
label_255b50:
    // 0x255b50: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x255b50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x255b54: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x255b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255b58: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x255b58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x255b5c: 0x93a600ef  lbu         $a2, 0xEF($sp)
    ctx->pc = 0x255b5cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 239)));
    // 0x255b60: 0xc096efc  jal         func_25BBF0
    ctx->pc = 0x255B60u;
    SET_GPR_U32(ctx, 31, 0x255B68u);
    ctx->pc = 0x25BBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BBF0u, 0x255B60u, 0x255B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255B68u;
label_255b68:
    // 0x255b68: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x255b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x255b6c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x255b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x255b70: 0xc0439c4  jal         func_10E710
    ctx->pc = 0x255B70u;
    SET_GPR_U32(ctx, 31, 0x255B78u);
    ctx->pc = 0x10E710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E710u, 0x255B70u, 0x255B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255B78u;
label_255b78:
    // 0x255b78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x255b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255b7c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x255b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x255b80: 0x24a5c078  addiu       $a1, $a1, -0x3F88
    ctx->pc = 0x255b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951032));
    // 0x255b84: 0x27869ec0  addiu       $a2, $gp, -0x6140
    ctx->pc = 0x255b84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942400));
    // 0x255b88: 0xc04206c  jal         func_1081B0
    ctx->pc = 0x255B88u;
    SET_GPR_U32(ctx, 31, 0x255B90u);
    ctx->pc = 0x1081B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1081B0u, 0x255B88u, 0x255B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255B90u;
label_255b90:
    // 0x255b90: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x255b90u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255b94: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x255b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255b98: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x255B98u;
    SET_GPR_U32(ctx, 31, 0x255BA0u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x255B98u, 0x255BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255BA0u;
label_255ba0:
    // 0x255ba0: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x255BA0u;
    {
        const bool branch_taken_0x255ba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x255ba0) {
            ctx->pc = 0x255C74u;
            goto label_255c74;
        }
    }
    ctx->pc = 0x255BA8u;
    // 0x255ba8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x255ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x255bac: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x255BACu;
    SET_GPR_U32(ctx, 31, 0x255BB4u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x255BACu, 0x255BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255BB4u;
label_255bb4:
    // 0x255bb4: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x255bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x255bb8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x255bb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255bbc: 0xc0400e0  jal         func_100380
    ctx->pc = 0x255BBCu;
    SET_GPR_U32(ctx, 31, 0x255BC4u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x255BBCu, 0x255BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255BC4u;
label_255bc4:
    // 0x255bc4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x255bc4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255bc8: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x255BC8u;
    {
        const bool branch_taken_0x255bc8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x255bc8) {
            ctx->pc = 0x255BE0u;
            goto label_255be0;
        }
    }
    ctx->pc = 0x255BD0u;
    // 0x255bd0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x255bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255bd4: 0xc09d9e8  jal         func_2767A0
    ctx->pc = 0x255BD4u;
    SET_GPR_U32(ctx, 31, 0x255BDCu);
    ctx->pc = 0x2767A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2767A0u, 0x255BD4u, 0x255BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255BDCu;
label_255bdc:
    // 0x255bdc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x255bdcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_255be0:
    // 0x255be0: 0x2a0982d  daddu       $s3, $s5, $zero
    ctx->pc = 0x255be0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255be4: 0xa2600010  sb          $zero, 0x10($s3)
    ctx->pc = 0x255be4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x255be8: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x255be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x255bec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x255becu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x255bf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x255bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255bf4: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x255bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x255bf8: 0x24a5c090  addiu       $a1, $a1, -0x3F70
    ctx->pc = 0x255bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951056));
    // 0x255bfc: 0xc049b6c  jal         func_126DB0
    ctx->pc = 0x255BFCu;
    SET_GPR_U32(ctx, 31, 0x255C04u);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x255BFCu, 0x255C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255C04u;
label_255c04:
    // 0x255c04: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x255c04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x255c08: 0x26640004  addiu       $a0, $s3, 0x4
    ctx->pc = 0x255c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x255c0c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x255c0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255c10: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x255C10u;
    SET_GPR_U32(ctx, 31, 0x255C18u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x255C10u, 0x255C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255C18u;
label_255c18:
    // 0x255c18: 0x8f84bbf0  lw          $a0, -0x4410($gp)
    ctx->pc = 0x255c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949872)));
    // 0x255c1c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x255c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x255c20: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x255c20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255c24: 0x8fa70100  lw          $a3, 0x100($sp)
    ctx->pc = 0x255c24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x255c28: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x255c28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255c2c: 0xc08febc  jal         func_23FAF0
    ctx->pc = 0x255C2Cu;
    SET_GPR_U32(ctx, 31, 0x255C34u);
    ctx->pc = 0x23FAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FAF0u, 0x255C2Cu, 0x255C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255C34u;
label_255c34:
    // 0x255c34: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x255C34u;
    {
        const bool branch_taken_0x255c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x255c34) {
            ctx->pc = 0x255C74u;
            goto label_255c74;
        }
    }
    ctx->pc = 0x255C3Cu;
label_255c3c:
    // 0x255c3c: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x255c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x255c40: 0xc0953cc  jal         func_254F30
    ctx->pc = 0x255C40u;
    SET_GPR_U32(ctx, 31, 0x255C48u);
    ctx->pc = 0x254F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254F30u, 0x255C40u, 0x255C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255C48u;
label_255c48:
    // 0x255c48: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x255c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x255c4c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x255c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x255c50: 0x24450034  addiu       $a1, $v0, 0x34
    ctx->pc = 0x255c50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x255c54: 0xc0953a0  jal         func_254E80
    ctx->pc = 0x255C54u;
    SET_GPR_U32(ctx, 31, 0x255C5Cu);
    ctx->pc = 0x254E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254E80u, 0x255C54u, 0x255C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255C5Cu;
label_255c5c:
    // 0x255c5c: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x255c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x255c60: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x255c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x255c64: 0xc041998  jal         func_106660
    ctx->pc = 0x255C64u;
    SET_GPR_U32(ctx, 31, 0x255C6Cu);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x255C64u, 0x255C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255C6Cu;
label_255c6c:
    // 0x255c6c: 0x1440fea7  bnez        $v0, . + 4 + (-0x159 << 2)
    ctx->pc = 0x255C6Cu;
    {
        const bool branch_taken_0x255c6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x255c6c) {
            ctx->pc = 0x25570Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25570c;
        }
    }
    ctx->pc = 0x255C74u;
label_255c74:
    // 0x255c74: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x255c74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x255c78: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x255c78u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x255c7c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x255c7cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x255c80: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x255c80u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x255c84: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x255c84u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x255c88: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x255c88u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x255c8c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x255c8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x255c90: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x255c90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x255c94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x255c94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x255c98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x255c98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x255c9c: 0x27bd0110  addiu       $sp, $sp, 0x110
    ctx->pc = 0x255c9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x255ca0: 0x3e00008  jr          $ra
    ctx->pc = 0x255CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255CA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x255CA8u;
    // 0x255ca8: 0x0  nop
    ctx->pc = 0x255ca8u;
    // NOP
    // 0x255cac: 0x0  nop
    ctx->pc = 0x255cacu;
    // NOP
    ctx->pc = 0x255cb0u;
}
