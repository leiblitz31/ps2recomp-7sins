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

// Function: sub_00271390
// Address: 0x271390 - 0x271600
void sub_00271390_0x271390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00271390_0x271390");
#endif

    switch (ctx->pc) {
        case 0x2713d4u: goto label_2713d4;
        case 0x2713e4u: goto label_2713e4;
        case 0x271400u: goto label_271400;
        case 0x271414u: goto label_271414;
        case 0x271424u: goto label_271424;
        case 0x271430u: goto label_271430;
        case 0x271440u: goto label_271440;
        case 0x271460u: goto label_271460;
        case 0x271480u: goto label_271480;
        case 0x271490u: goto label_271490;
        case 0x2714b8u: goto label_2714b8;
        case 0x2714c4u: goto label_2714c4;
        case 0x2714e4u: goto label_2714e4;
        case 0x2714f4u: goto label_2714f4;
        case 0x271504u: goto label_271504;
        case 0x27151cu: goto label_27151c;
        case 0x271538u: goto label_271538;
        case 0x27154cu: goto label_27154c;
        case 0x271560u: goto label_271560;
        case 0x271578u: goto label_271578;
        case 0x27158cu: goto label_27158c;
        case 0x2715a0u: goto label_2715a0;
        case 0x2715b0u: goto label_2715b0;
        case 0x2715c4u: goto label_2715c4;
        default: break;
    }

    ctx->pc = 0x271390u;

    // 0x271390: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x271390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x271394: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x271394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x271398: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x271398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x27139c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x27139cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2713a0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2713a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2713a4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2713a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2713a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2713a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2713ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2713acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2713b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2713b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2713b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2713b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2713b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2713b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2713bc: 0xafa400c0  sw          $a0, 0xC0($sp)
    ctx->pc = 0x2713bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 4));
    // 0x2713c0: 0xafa500d0  sw          $a1, 0xD0($sp)
    ctx->pc = 0x2713c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 5));
    // 0x2713c4: 0xa3a600e0  sb          $a2, 0xE0($sp)
    ctx->pc = 0x2713c4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 224), (uint8_t)GPR_U32(ctx, 6));
    // 0x2713c8: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x2713c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2713cc: 0xc096ea4  jal         func_25BA90
    ctx->pc = 0x2713CCu;
    SET_GPR_U32(ctx, 31, 0x2713D4u);
    ctx->pc = 0x25BA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BA90u, 0x2713CCu, 0x2713D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2713D4u;
label_2713d4:
    // 0x2713d4: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x2713d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x2713d8: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x2713d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2713dc: 0xc0968a8  jal         func_25A2A0
    ctx->pc = 0x2713DCu;
    SET_GPR_U32(ctx, 31, 0x2713E4u);
    ctx->pc = 0x25A2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A2A0u, 0x2713DCu, 0x2713E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2713E4u;
label_2713e4:
    // 0x2713e4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2713e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2713e8: 0x10120020  beq         $zero, $s2, . + 4 + (0x20 << 2)
    ctx->pc = 0x2713E8u;
    {
        const bool branch_taken_0x2713e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 18));
        if (branch_taken_0x2713e8) {
            ctx->pc = 0x27146Cu;
            goto label_27146c;
        }
    }
    ctx->pc = 0x2713F0u;
    // 0x2713f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2713f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2713f4: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2713f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2713f8: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2713F8u;
    SET_GPR_U32(ctx, 31, 0x271400u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2713F8u, 0x271400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271400u;
label_271400:
    // 0x271400: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x271400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x271404: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x271404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271408: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x271408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x27140c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x27140Cu;
    SET_GPR_U32(ctx, 31, 0x271414u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x27140Cu, 0x271414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271414u;
label_271414:
    // 0x271414: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x271414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
    // 0x271418: 0x8fa400b4  lw          $a0, 0xB4($sp)
    ctx->pc = 0x271418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x27141c: 0xc09b03c  jal         func_26C0F0
    ctx->pc = 0x27141Cu;
    SET_GPR_U32(ctx, 31, 0x271424u);
    ctx->pc = 0x26C0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C0F0u, 0x27141Cu, 0x271424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271424u;
label_271424:
    // 0x271424: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x271424u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x271428: 0xc090864  jal         func_242190
    ctx->pc = 0x271428u;
    SET_GPR_U32(ctx, 31, 0x271430u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x271428u, 0x271430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271430u;
label_271430:
    // 0x271430: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x271430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271434: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x271434u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x271438: 0xc090844  jal         func_242110
    ctx->pc = 0x271438u;
    SET_GPR_U32(ctx, 31, 0x271440u);
    ctx->pc = 0x242110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242110u, 0x271438u, 0x271440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271440u;
label_271440:
    // 0x271440: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x271440u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271444: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x271444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x271448: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x271448u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x27144c: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x27144cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x271450: 0x8c5500b4  lw          $s5, 0xB4($v0)
    ctx->pc = 0x271450u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x271454: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x271454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x271458: 0xc0976f0  jal         func_25DBC0
    ctx->pc = 0x271458u;
    SET_GPR_U32(ctx, 31, 0x271460u);
    ctx->pc = 0x25DBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25DBC0u, 0x271458u, 0x271460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271460u;
label_271460:
    // 0x271460: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x271460u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271464: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x271464u;
    {
        const bool branch_taken_0x271464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x271464) {
            ctx->pc = 0x271474u;
            goto label_271474;
        }
    }
    ctx->pc = 0x27146Cu;
label_27146c:
    // 0x27146c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x27146cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271470: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x271470u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_271474:
    // 0x271474: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x271474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x271478: 0xc096950  jal         func_25A540
    ctx->pc = 0x271478u;
    SET_GPR_U32(ctx, 31, 0x271480u);
    ctx->pc = 0x25A540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A540u, 0x271478u, 0x271480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271480u;
label_271480:
    // 0x271480: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x271480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x271484: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x271484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x271488: 0xc096880  jal         func_25A200
    ctx->pc = 0x271488u;
    SET_GPR_U32(ctx, 31, 0x271490u);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x271488u, 0x271490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271490u;
label_271490:
    // 0x271490: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x271490u;
    {
        const bool branch_taken_0x271490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x271490) {
            ctx->pc = 0x2714A8u;
            goto label_2714a8;
        }
    }
    ctx->pc = 0x271498u;
    // 0x271498: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x271498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27149c: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x27149cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2714a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2714A0u;
    {
        const bool branch_taken_0x2714a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2714a0) {
            ctx->pc = 0x2714ACu;
            goto label_2714ac;
        }
    }
    ctx->pc = 0x2714A8u;
label_2714a8:
    // 0x2714a8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2714a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2714ac:
    // 0x2714ac: 0x327e00ff  andi        $fp, $s3, 0xFF
    ctx->pc = 0x2714acu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x2714b0: 0xc090864  jal         func_242190
    ctx->pc = 0x2714B0u;
    SET_GPR_U32(ctx, 31, 0x2714B8u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x2714B0u, 0x2714B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2714B8u;
label_2714b8:
    // 0x2714b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2714b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2714bc: 0xc0905a8  jal         func_2416A0
    ctx->pc = 0x2714BCu;
    SET_GPR_U32(ctx, 31, 0x2714C4u);
    ctx->pc = 0x2416A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2416A0u, 0x2714BCu, 0x2714C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2714C4u;
label_2714c4:
    // 0x2714c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2714c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2714c8: 0x8fa500ac  lw          $a1, 0xAC($sp)
    ctx->pc = 0x2714c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x2714cc: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2714ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2714d0: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2714d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2714d4: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x2714d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2714d8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2714d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2714dc: 0xc09941c  jal         func_265070
    ctx->pc = 0x2714DCu;
    SET_GPR_U32(ctx, 31, 0x2714E4u);
    ctx->pc = 0x265070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265070u, 0x2714DCu, 0x2714E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2714E4u;
label_2714e4:
    // 0x2714e4: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2714e4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2714e8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2714e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2714ec: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x2714ECu;
    SET_GPR_U32(ctx, 31, 0x2714F4u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2714ECu, 0x2714F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2714F4u;
label_2714f4:
    // 0x2714f4: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2714f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2714f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2714f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2714fc: 0xc0400e0  jal         func_100380
    ctx->pc = 0x2714FCu;
    SET_GPR_U32(ctx, 31, 0x271504u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2714FCu, 0x271504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271504u;
label_271504:
    // 0x271504: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x271504u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271508: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x271508u;
    {
        const bool branch_taken_0x271508 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x271508) {
            ctx->pc = 0x271520u;
            goto label_271520;
        }
    }
    ctx->pc = 0x271510u;
    // 0x271510: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x271510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271514: 0xc09d084  jal         func_274210
    ctx->pc = 0x271514u;
    SET_GPR_U32(ctx, 31, 0x27151Cu);
    ctx->pc = 0x274210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274210u, 0x271514u, 0x27151Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27151Cu;
label_27151c:
    // 0x27151c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27151cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_271520:
    // 0x271520: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x271520u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271524: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x271524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271528: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x271528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x27152c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27152cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271530: 0xc09d0c0  jal         func_274300
    ctx->pc = 0x271530u;
    SET_GPR_U32(ctx, 31, 0x271538u);
    ctx->pc = 0x274300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274300u, 0x271530u, 0x271538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271538u;
label_271538:
    // 0x271538: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x271538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27153c: 0x240504aa  addiu       $a1, $zero, 0x4AA
    ctx->pc = 0x27153cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1194));
    // 0x271540: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x271540u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271544: 0xc0433dc  jal         func_10CF70
    ctx->pc = 0x271544u;
    SET_GPR_U32(ctx, 31, 0x27154Cu);
    ctx->pc = 0x10CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CF70u, 0x271544u, 0x27154Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27154Cu;
label_27154c:
    // 0x27154c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27154cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271550: 0x240504ab  addiu       $a1, $zero, 0x4AB
    ctx->pc = 0x271550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1195));
    // 0x271554: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x271554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271558: 0xc041b54  jal         func_106D50
    ctx->pc = 0x271558u;
    SET_GPR_U32(ctx, 31, 0x271560u);
    ctx->pc = 0x106D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D50u, 0x271558u, 0x271560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271560u;
label_271560:
    // 0x271560: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x271560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x271564: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x271564u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x271568: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x271568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27156c: 0x240504ac  addiu       $a1, $zero, 0x4AC
    ctx->pc = 0x27156cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1196));
    // 0x271570: 0xc041bc4  jal         func_106F10
    ctx->pc = 0x271570u;
    SET_GPR_U32(ctx, 31, 0x271578u);
    ctx->pc = 0x106F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106F10u, 0x271570u, 0x271578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271578u;
label_271578:
    // 0x271578: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x271578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27157c: 0x24050537  addiu       $a1, $zero, 0x537
    ctx->pc = 0x27157cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1335));
    // 0x271580: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x271580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271584: 0xc041b54  jal         func_106D50
    ctx->pc = 0x271584u;
    SET_GPR_U32(ctx, 31, 0x27158Cu);
    ctx->pc = 0x106D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D50u, 0x271584u, 0x27158Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27158Cu;
label_27158c:
    // 0x27158c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27158cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271590: 0x240504ae  addiu       $a1, $zero, 0x4AE
    ctx->pc = 0x271590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1198));
    // 0x271594: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x271594u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271598: 0xc040924  jal         func_102490
    ctx->pc = 0x271598u;
    SET_GPR_U32(ctx, 31, 0x2715A0u);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x271598u, 0x2715A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2715A0u;
label_2715a0:
    // 0x2715a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2715a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2715a4: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x2715a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2715a8: 0xc09d0dc  jal         func_274370
    ctx->pc = 0x2715A8u;
    SET_GPR_U32(ctx, 31, 0x2715B0u);
    ctx->pc = 0x274370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274370u, 0x2715A8u, 0x2715B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2715B0u;
label_2715b0:
    // 0x2715b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2715b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2715b4: 0x24050483  addiu       $a1, $zero, 0x483
    ctx->pc = 0x2715b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1155));
    // 0x2715b8: 0x93a600e0  lbu         $a2, 0xE0($sp)
    ctx->pc = 0x2715b8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2715bc: 0xc041b54  jal         func_106D50
    ctx->pc = 0x2715BCu;
    SET_GPR_U32(ctx, 31, 0x2715C4u);
    ctx->pc = 0x106D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D50u, 0x2715BCu, 0x2715C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2715C4u;
label_2715c4:
    // 0x2715c4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2715c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2715c8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2715c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2715cc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2715ccu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2715d0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2715d0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2715d4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2715d4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2715d8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2715d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2715dc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2715dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2715e0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2715e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2715e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2715e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2715e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2715e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2715ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2715ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2715f0: 0x27bd00f0  addiu       $sp, $sp, 0xF0
    ctx->pc = 0x2715f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2715f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2715F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2715F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2715FCu;
    // 0x2715fc: 0x0  nop
    ctx->pc = 0x2715fcu;
    // NOP
    ctx->pc = 0x271600u;
}
