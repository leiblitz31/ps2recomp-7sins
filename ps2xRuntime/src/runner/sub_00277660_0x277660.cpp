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

// Function: sub_00277660
// Address: 0x277660 - 0x277ea0
void sub_00277660_0x277660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00277660_0x277660");
#endif

    switch (ctx->pc) {
        case 0x277678u: goto label_277678;
        case 0x2776dcu: goto label_2776dc;
        case 0x277714u: goto label_277714;
        case 0x277728u: goto label_277728;
        case 0x277738u: goto label_277738;
        case 0x27774cu: goto label_27774c;
        case 0x2777a0u: goto label_2777a0;
        case 0x2777b4u: goto label_2777b4;
        case 0x2777c4u: goto label_2777c4;
        case 0x2777e8u: goto label_2777e8;
        case 0x2777fcu: goto label_2777fc;
        case 0x277810u: goto label_277810;
        case 0x27781cu: goto label_27781c;
        case 0x27782cu: goto label_27782c;
        case 0x277834u: goto label_277834;
        case 0x277844u: goto label_277844;
        case 0x277854u: goto label_277854;
        case 0x277868u: goto label_277868;
        case 0x277880u: goto label_277880;
        case 0x277898u: goto label_277898;
        case 0x2778a8u: goto label_2778a8;
        case 0x2778b4u: goto label_2778b4;
        case 0x2778c4u: goto label_2778c4;
        case 0x2778d4u: goto label_2778d4;
        case 0x2778e0u: goto label_2778e0;
        case 0x277918u: goto label_277918;
        case 0x27792cu: goto label_27792c;
        case 0x27793cu: goto label_27793c;
        case 0x277954u: goto label_277954;
        case 0x277968u: goto label_277968;
        case 0x27797cu: goto label_27797c;
        case 0x277990u: goto label_277990;
        case 0x2779a4u: goto label_2779a4;
        case 0x2779d8u: goto label_2779d8;
        case 0x2779ecu: goto label_2779ec;
        case 0x277a00u: goto label_277a00;
        case 0x277a14u: goto label_277a14;
        case 0x277a4cu: goto label_277a4c;
        case 0x277a58u: goto label_277a58;
        case 0x277a6cu: goto label_277a6c;
        case 0x277a84u: goto label_277a84;
        case 0x277a98u: goto label_277a98;
        case 0x277aacu: goto label_277aac;
        case 0x277ac0u: goto label_277ac0;
        case 0x277ae0u: goto label_277ae0;
        case 0x277af4u: goto label_277af4;
        case 0x277b0cu: goto label_277b0c;
        case 0x277b18u: goto label_277b18;
        case 0x277b28u: goto label_277b28;
        case 0x277b48u: goto label_277b48;
        case 0x277b58u: goto label_277b58;
        case 0x277b64u: goto label_277b64;
        case 0x277b8cu: goto label_277b8c;
        case 0x277bacu: goto label_277bac;
        case 0x277bbcu: goto label_277bbc;
        case 0x277be4u: goto label_277be4;
        case 0x277c08u: goto label_277c08;
        case 0x277c18u: goto label_277c18;
        case 0x277c30u: goto label_277c30;
        case 0x277c5cu: goto label_277c5c;
        case 0x277c68u: goto label_277c68;
        case 0x277c7cu: goto label_277c7c;
        case 0x277c88u: goto label_277c88;
        case 0x277c94u: goto label_277c94;
        case 0x277ca8u: goto label_277ca8;
        case 0x277cb8u: goto label_277cb8;
        case 0x277cc4u: goto label_277cc4;
        case 0x277ce8u: goto label_277ce8;
        case 0x277cf8u: goto label_277cf8;
        case 0x277d08u: goto label_277d08;
        case 0x277d18u: goto label_277d18;
        case 0x277d3cu: goto label_277d3c;
        case 0x277d4cu: goto label_277d4c;
        case 0x277d74u: goto label_277d74;
        case 0x277d88u: goto label_277d88;
        case 0x277da4u: goto label_277da4;
        case 0x277db8u: goto label_277db8;
        case 0x277dc8u: goto label_277dc8;
        case 0x277ddcu: goto label_277ddc;
        case 0x277df0u: goto label_277df0;
        case 0x277e0cu: goto label_277e0c;
        case 0x277e24u: goto label_277e24;
        case 0x277e3cu: goto label_277e3c;
        case 0x277e4cu: goto label_277e4c;
        case 0x277e68u: goto label_277e68;
        default: break;
    }

    ctx->pc = 0x277660u;

    // 0x277660: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x277660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x277664: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x277664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x277668: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x277668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x27766c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x27766cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277670: 0xc09d130  jal         func_2744C0
    ctx->pc = 0x277670u;
    SET_GPR_U32(ctx, 31, 0x277678u);
    ctx->pc = 0x2744C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2744C0u, 0x277670u, 0x277678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277678u;
label_277678:
    // 0x277678: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x277678u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x27767c: 0x24635ed0  addiu       $v1, $v1, 0x5ED0
    ctx->pc = 0x27767cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24272));
    // 0x277680: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x277680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277684: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x277684u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x277688: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x277688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27768c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27768cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x277690: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x277690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x277694: 0x3e00008  jr          $ra
    ctx->pc = 0x277694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27769Cu;
    // 0x27769c: 0x0  nop
    ctx->pc = 0x27769cu;
    // NOP
    // 0x2776a0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x2776a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x2776a4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2776a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2776a8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2776a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2776ac: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2776acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2776b0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2776b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2776b4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2776b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2776b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2776b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2776bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2776bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2776c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2776c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2776c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2776c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2776c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2776c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2776cc: 0xafa40110  sw          $a0, 0x110($sp)
    ctx->pc = 0x2776ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 4));
    // 0x2776d0: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x2776d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2776d4: 0xc09d248  jal         func_274920
    ctx->pc = 0x2776D4u;
    SET_GPR_U32(ctx, 31, 0x2776DCu);
    ctx->pc = 0x274920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274920u, 0x2776D4u, 0x2776DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2776DCu;
label_2776dc:
    // 0x2776dc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2776dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2776e0: 0x104301dc  beq         $v0, $v1, . + 4 + (0x1DC << 2)
    ctx->pc = 0x2776E0u;
    {
        const bool branch_taken_0x2776e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2776e0) {
            ctx->pc = 0x277E54u;
            goto label_277e54;
        }
    }
    ctx->pc = 0x2776E8u;
    // 0x2776e8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2776e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2776ec: 0x104301d9  beq         $v0, $v1, . + 4 + (0x1D9 << 2)
    ctx->pc = 0x2776ECu;
    {
        const bool branch_taken_0x2776ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2776ec) {
            ctx->pc = 0x277E54u;
            goto label_277e54;
        }
    }
    ctx->pc = 0x2776F4u;
    // 0x2776f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2776f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2776f8: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2776F8u;
    {
        const bool branch_taken_0x2776f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2776f8) {
            ctx->pc = 0x277708u;
            goto label_277708;
        }
    }
    ctx->pc = 0x277700u;
    // 0x277700: 0x100001da  b           . + 4 + (0x1DA << 2)
    ctx->pc = 0x277700u;
    {
        const bool branch_taken_0x277700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x277700) {
            ctx->pc = 0x277E6Cu;
            goto label_277e6c;
        }
    }
    ctx->pc = 0x277708u;
label_277708:
    // 0x277708: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x277708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x27770c: 0xc09d274  jal         func_2749D0
    ctx->pc = 0x27770Cu;
    SET_GPR_U32(ctx, 31, 0x277714u);
    ctx->pc = 0x2749D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2749D0u, 0x27770Cu, 0x277714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277714u;
label_277714:
    // 0x277714: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x277714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277718: 0x240504c1  addiu       $a1, $zero, 0x4C1
    ctx->pc = 0x277718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1217));
    // 0x27771c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x27771cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x277720: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x277720u;
    SET_GPR_U32(ctx, 31, 0x277728u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x277720u, 0x277728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277728u;
label_277728:
    // 0x277728: 0xafa20108  sw          $v0, 0x108($sp)
    ctx->pc = 0x277728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
    // 0x27772c: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x27772cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x277730: 0xc09d274  jal         func_2749D0
    ctx->pc = 0x277730u;
    SET_GPR_U32(ctx, 31, 0x277738u);
    ctx->pc = 0x2749D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2749D0u, 0x277730u, 0x277738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277738u;
label_277738:
    // 0x277738: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x277738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27773c: 0x240504c2  addiu       $a1, $zero, 0x4C2
    ctx->pc = 0x27773cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1218));
    // 0x277740: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x277740u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277744: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x277744u;
    SET_GPR_U32(ctx, 31, 0x27774Cu);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x277744u, 0x27774Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27774Cu;
label_27774c:
    // 0x27774c: 0xafa20104  sw          $v0, 0x104($sp)
    ctx->pc = 0x27774cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 2));
    // 0x277750: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x277750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x277754: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x277754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x277758: 0x106201b4  beq         $v1, $v0, . + 4 + (0x1B4 << 2)
    ctx->pc = 0x277758u;
    {
        const bool branch_taken_0x277758 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x277758) {
            ctx->pc = 0x277E2Cu;
            goto label_277e2c;
        }
    }
    ctx->pc = 0x277760u;
    // 0x277760: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x277760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x277764: 0x1062019a  beq         $v1, $v0, . + 4 + (0x19A << 2)
    ctx->pc = 0x277764u;
    {
        const bool branch_taken_0x277764 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x277764) {
            ctx->pc = 0x277DD0u;
            goto label_277dd0;
        }
    }
    ctx->pc = 0x27776Cu;
    // 0x27776c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27776cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x277770: 0x106200cb  beq         $v1, $v0, . + 4 + (0xCB << 2)
    ctx->pc = 0x277770u;
    {
        const bool branch_taken_0x277770 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x277770) {
            ctx->pc = 0x277AA0u;
            goto label_277aa0;
        }
    }
    ctx->pc = 0x277778u;
    // 0x277778: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x277778u;
    {
        const bool branch_taken_0x277778 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x277778) {
            ctx->pc = 0x2777F0u;
            goto label_2777f0;
        }
    }
    ctx->pc = 0x277780u;
    // 0x277780: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x277780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x277784: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x277784u;
    {
        const bool branch_taken_0x277784 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x277784) {
            ctx->pc = 0x277794u;
            goto label_277794;
        }
    }
    ctx->pc = 0x27778Cu;
    // 0x27778c: 0x100001ab  b           . + 4 + (0x1AB << 2)
    ctx->pc = 0x27778Cu;
    {
        const bool branch_taken_0x27778c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27778c) {
            ctx->pc = 0x277E3Cu;
            goto label_277e3c;
        }
    }
    ctx->pc = 0x277794u;
label_277794:
    // 0x277794: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x277794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x277798: 0xc09d274  jal         func_2749D0
    ctx->pc = 0x277798u;
    SET_GPR_U32(ctx, 31, 0x2777A0u);
    ctx->pc = 0x2749D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2749D0u, 0x277798u, 0x2777A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2777A0u;
label_2777a0:
    // 0x2777a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2777a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2777a4: 0x240504c5  addiu       $a1, $zero, 0x4C5
    ctx->pc = 0x2777a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1221));
    // 0x2777a8: 0x2786a200  addiu       $a2, $gp, -0x5E00
    ctx->pc = 0x2777a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943232));
    // 0x2777ac: 0xc041a50  jal         func_106940
    ctx->pc = 0x2777ACu;
    SET_GPR_U32(ctx, 31, 0x2777B4u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x2777ACu, 0x2777B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2777B4u;
label_2777b4:
    // 0x2777b4: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x2777b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x2777b8: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x2777b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2777bc: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x2777BCu;
    SET_GPR_U32(ctx, 31, 0x2777C4u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x2777BCu, 0x2777C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2777C4u;
label_2777c4:
    // 0x2777c4: 0x1040019d  beqz        $v0, . + 4 + (0x19D << 2)
    ctx->pc = 0x2777C4u;
    {
        const bool branch_taken_0x2777c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2777c4) {
            ctx->pc = 0x277E3Cu;
            goto label_277e3c;
        }
    }
    ctx->pc = 0x2777CCu;
    // 0x2777cc: 0x8f84bbf0  lw          $a0, -0x4410($gp)
    ctx->pc = 0x2777ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949872)));
    // 0x2777d0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2777d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2777d4: 0x8fa60100  lw          $a2, 0x100($sp)
    ctx->pc = 0x2777d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2777d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2777d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2777dc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2777dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2777e0: 0xc08febc  jal         func_23FAF0
    ctx->pc = 0x2777E0u;
    SET_GPR_U32(ctx, 31, 0x2777E8u);
    ctx->pc = 0x23FAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FAF0u, 0x2777E0u, 0x2777E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2777E8u;
label_2777e8:
    // 0x2777e8: 0x10000194  b           . + 4 + (0x194 << 2)
    ctx->pc = 0x2777E8u;
    {
        const bool branch_taken_0x2777e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2777e8) {
            ctx->pc = 0x277E3Cu;
            goto label_277e3c;
        }
    }
    ctx->pc = 0x2777F0u;
label_2777f0:
    // 0x2777f0: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x2777f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2777f4: 0xc09d274  jal         func_2749D0
    ctx->pc = 0x2777F4u;
    SET_GPR_U32(ctx, 31, 0x2777FCu);
    ctx->pc = 0x2749D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2749D0u, 0x2777F4u, 0x2777FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2777FCu;
label_2777fc:
    // 0x2777fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2777fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277800: 0x240504c4  addiu       $a1, $zero, 0x4C4
    ctx->pc = 0x277800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1220));
    // 0x277804: 0x2786a200  addiu       $a2, $gp, -0x5E00
    ctx->pc = 0x277804u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943232));
    // 0x277808: 0xc041a50  jal         func_106940
    ctx->pc = 0x277808u;
    SET_GPR_U32(ctx, 31, 0x277810u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x277808u, 0x277810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277810u;
label_277810:
    // 0x277810: 0xafa200fc  sw          $v0, 0xFC($sp)
    ctx->pc = 0x277810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
    // 0x277814: 0xc09a360  jal         func_268D80
    ctx->pc = 0x277814u;
    SET_GPR_U32(ctx, 31, 0x27781Cu);
    ctx->pc = 0x268D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D80u, 0x277814u, 0x27781Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27781Cu;
label_27781c:
    // 0x27781c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27781cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277820: 0x8fa500fc  lw          $a1, 0xFC($sp)
    ctx->pc = 0x277820u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x277824: 0xc09a364  jal         func_268D90
    ctx->pc = 0x277824u;
    SET_GPR_U32(ctx, 31, 0x27782Cu);
    ctx->pc = 0x268D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D90u, 0x277824u, 0x27782Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27782Cu;
label_27782c:
    // 0x27782c: 0xc09a360  jal         func_268D80
    ctx->pc = 0x27782Cu;
    SET_GPR_U32(ctx, 31, 0x277834u);
    ctx->pc = 0x268D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D80u, 0x27782Cu, 0x277834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277834u;
label_277834:
    // 0x277834: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x277834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277838: 0x8fa500fc  lw          $a1, 0xFC($sp)
    ctx->pc = 0x277838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x27783c: 0xc09a714  jal         func_269C50
    ctx->pc = 0x27783Cu;
    SET_GPR_U32(ctx, 31, 0x277844u);
    ctx->pc = 0x269C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269C50u, 0x27783Cu, 0x277844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277844u;
label_277844:
    // 0x277844: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x277844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x277848: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x277848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x27784c: 0xc09d274  jal         func_2749D0
    ctx->pc = 0x27784Cu;
    SET_GPR_U32(ctx, 31, 0x277854u);
    ctx->pc = 0x2749D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2749D0u, 0x27784Cu, 0x277854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277854u;
label_277854:
    // 0x277854: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x277854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277858: 0x240504c3  addiu       $a1, $zero, 0x4C3
    ctx->pc = 0x277858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1219));
    // 0x27785c: 0x2786a200  addiu       $a2, $gp, -0x5E00
    ctx->pc = 0x27785cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943232));
    // 0x277860: 0xc041a50  jal         func_106940
    ctx->pc = 0x277860u;
    SET_GPR_U32(ctx, 31, 0x277868u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x277860u, 0x277868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277868u;
label_277868:
    // 0x277868: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x277868u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27786c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x27786cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277870: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x277870u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x277874: 0x2484d2f8  addiu       $a0, $a0, -0x2D08
    ctx->pc = 0x277874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955768));
    // 0x277878: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x277878u;
    SET_GPR_U32(ctx, 31, 0x277880u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x277878u, 0x277880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277880u;
label_277880:
    // 0x277880: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x277880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277884: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x277884u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x277888: 0x24a5d2f8  addiu       $a1, $a1, -0x2D08
    ctx->pc = 0x277888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955768));
    // 0x27788c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x27788cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277890: 0xc0bc66e  jal         func_2F19B8
    ctx->pc = 0x277890u;
    SET_GPR_U32(ctx, 31, 0x277898u);
    ctx->pc = 0x2F19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19B8u, 0x277890u, 0x277898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277898u;
label_277898:
    // 0x277898: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x277898u;
    {
        const bool branch_taken_0x277898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x277898) {
            ctx->pc = 0x27795Cu;
            goto label_27795c;
        }
    }
    ctx->pc = 0x2778A0u;
    // 0x2778a0: 0xc090864  jal         func_242190
    ctx->pc = 0x2778A0u;
    SET_GPR_U32(ctx, 31, 0x2778A8u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x2778A0u, 0x2778A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2778A8u;
label_2778a8:
    // 0x2778a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2778a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2778ac: 0xc090590  jal         func_241640
    ctx->pc = 0x2778ACu;
    SET_GPR_U32(ctx, 31, 0x2778B4u);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x2778ACu, 0x2778B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2778B4u;
label_2778b4:
    // 0x2778b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2778b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2778b8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2778b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2778bc: 0xc09157c  jal         func_2455F0
    ctx->pc = 0x2778BCu;
    SET_GPR_U32(ctx, 31, 0x2778C4u);
    ctx->pc = 0x2455F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455F0u, 0x2778BCu, 0x2778C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2778C4u;
label_2778c4:
    // 0x2778c4: 0xafa200f4  sw          $v0, 0xF4($sp)
    ctx->pc = 0x2778c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
    // 0x2778c8: 0x8fa400f4  lw          $a0, 0xF4($sp)
    ctx->pc = 0x2778c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x2778cc: 0xc040e7c  jal         func_1039F0
    ctx->pc = 0x2778CCu;
    SET_GPR_U32(ctx, 31, 0x2778D4u);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x2778CCu, 0x2778D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2778D4u;
label_2778d4:
    // 0x2778d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2778d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2778d8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2778D8u;
    {
        const bool branch_taken_0x2778d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2778d8) {
            ctx->pc = 0x277930u;
            goto label_277930;
        }
    }
    ctx->pc = 0x2778E0u;
label_2778e0:
    // 0x2778e0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2778e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2778e4: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x2778e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2778e8: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x2778e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x2778ec: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2778ECu;
    {
        const bool branch_taken_0x2778ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2778ec) {
            ctx->pc = 0x27792Cu;
            goto label_27792c;
        }
    }
    ctx->pc = 0x2778F4u;
    // 0x2778f4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2778f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2778f8: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x2778f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x2778fc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2778fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x277900: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x277900u;
    {
        const bool branch_taken_0x277900 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x277900) {
            ctx->pc = 0x27792Cu;
            goto label_27792c;
        }
    }
    ctx->pc = 0x277908u;
    // 0x277908: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x277908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x27790c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x27790cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x277910: 0xc085538  jal         func_2154E0
    ctx->pc = 0x277910u;
    SET_GPR_U32(ctx, 31, 0x277918u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x277910u, 0x277918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277918u;
label_277918:
    // 0x277918: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x277918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x27791c: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x27791cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x277920: 0x8fa500f8  lw          $a1, 0xF8($sp)
    ctx->pc = 0x277920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x277924: 0xc096eec  jal         func_25BBB0
    ctx->pc = 0x277924u;
    SET_GPR_U32(ctx, 31, 0x27792Cu);
    ctx->pc = 0x25BBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BBB0u, 0x277924u, 0x27792Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27792Cu;
label_27792c:
    // 0x27792c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x27792cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_277930:
    // 0x277930: 0x8fa400f4  lw          $a0, 0xF4($sp)
    ctx->pc = 0x277930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x277934: 0xc04147c  jal         func_1051F0
    ctx->pc = 0x277934u;
    SET_GPR_U32(ctx, 31, 0x27793Cu);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x277934u, 0x27793Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27793Cu;
label_27793c:
    // 0x27793c: 0x1622ffe8  bne         $s1, $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x27793Cu;
    {
        const bool branch_taken_0x27793c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x27793c) {
            ctx->pc = 0x2778E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2778e0;
        }
    }
    ctx->pc = 0x277944u;
    // 0x277944: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x277944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x277948: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x277948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27794c: 0xc09d250  jal         func_274940
    ctx->pc = 0x27794Cu;
    SET_GPR_U32(ctx, 31, 0x277954u);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x27794Cu, 0x277954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277954u;
label_277954:
    // 0x277954: 0x10000145  b           . + 4 + (0x145 << 2)
    ctx->pc = 0x277954u;
    {
        const bool branch_taken_0x277954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x277954) {
            ctx->pc = 0x277E6Cu;
            goto label_277e6c;
        }
    }
    ctx->pc = 0x27795Cu;
label_27795c:
    // 0x27795c: 0x2784a208  addiu       $a0, $gp, -0x5DF8
    ctx->pc = 0x27795cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943240));
    // 0x277960: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x277960u;
    SET_GPR_U32(ctx, 31, 0x277968u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x277960u, 0x277968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277968u;
label_277968:
    // 0x277968: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x277968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27796c: 0x2785a208  addiu       $a1, $gp, -0x5DF8
    ctx->pc = 0x27796cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943240));
    // 0x277970: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x277970u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277974: 0xc0bc66e  jal         func_2F19B8
    ctx->pc = 0x277974u;
    SET_GPR_U32(ctx, 31, 0x27797Cu);
    ctx->pc = 0x2F19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19B8u, 0x277974u, 0x27797Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27797Cu;
label_27797c:
    // 0x27797c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x27797Cu;
    {
        const bool branch_taken_0x27797c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27797c) {
            ctx->pc = 0x2779CCu;
            goto label_2779cc;
        }
    }
    ctx->pc = 0x277984u;
    // 0x277984: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x277984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x277988: 0xc09d274  jal         func_2749D0
    ctx->pc = 0x277988u;
    SET_GPR_U32(ctx, 31, 0x277990u);
    ctx->pc = 0x2749D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2749D0u, 0x277988u, 0x277990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277990u;
label_277990:
    // 0x277990: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x277990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277994: 0x24050483  addiu       $a1, $zero, 0x483
    ctx->pc = 0x277994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1155));
    // 0x277998: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x277998u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27799c: 0xc04146c  jal         func_1051B0
    ctx->pc = 0x27799Cu;
    SET_GPR_U32(ctx, 31, 0x2779A4u);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x27799Cu, 0x2779A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2779A4u;
label_2779a4:
    // 0x2779a4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2779A4u;
    {
        const bool branch_taken_0x2779a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2779a4) {
            ctx->pc = 0x2779BCu;
            goto label_2779bc;
        }
    }
    ctx->pc = 0x2779ACu;
    // 0x2779ac: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x2779acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2779b0: 0x8c520040  lw          $s2, 0x40($v0)
    ctx->pc = 0x2779b0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x2779b4: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x2779B4u;
    {
        const bool branch_taken_0x2779b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2779b4) {
            ctx->pc = 0x277A6Cu;
            goto label_277a6c;
        }
    }
    ctx->pc = 0x2779BCu;
label_2779bc:
    // 0x2779bc: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x2779bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2779c0: 0x8c52003c  lw          $s2, 0x3C($v0)
    ctx->pc = 0x2779c0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x2779c4: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2779C4u;
    {
        const bool branch_taken_0x2779c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2779c4) {
            ctx->pc = 0x277A6Cu;
            goto label_277a6c;
        }
    }
    ctx->pc = 0x2779CCu;
label_2779cc:
    // 0x2779cc: 0x2784a210  addiu       $a0, $gp, -0x5DF0
    ctx->pc = 0x2779ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943248));
    // 0x2779d0: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x2779D0u;
    SET_GPR_U32(ctx, 31, 0x2779D8u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x2779D0u, 0x2779D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2779D8u;
label_2779d8:
    // 0x2779d8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2779d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2779dc: 0x2785a210  addiu       $a1, $gp, -0x5DF0
    ctx->pc = 0x2779dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943248));
    // 0x2779e0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2779e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2779e4: 0xc0bc66e  jal         func_2F19B8
    ctx->pc = 0x2779E4u;
    SET_GPR_U32(ctx, 31, 0x2779ECu);
    ctx->pc = 0x2F19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19B8u, 0x2779E4u, 0x2779ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2779ECu;
label_2779ec:
    // 0x2779ec: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2779ECu;
    {
        const bool branch_taken_0x2779ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2779ec) {
            ctx->pc = 0x277A3Cu;
            goto label_277a3c;
        }
    }
    ctx->pc = 0x2779F4u;
    // 0x2779f4: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x2779f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2779f8: 0xc09d274  jal         func_2749D0
    ctx->pc = 0x2779F8u;
    SET_GPR_U32(ctx, 31, 0x277A00u);
    ctx->pc = 0x2749D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2749D0u, 0x2779F8u, 0x277A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277A00u;
label_277a00:
    // 0x277a00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x277a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277a04: 0x24050483  addiu       $a1, $zero, 0x483
    ctx->pc = 0x277a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1155));
    // 0x277a08: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x277a08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277a0c: 0xc04146c  jal         func_1051B0
    ctx->pc = 0x277A0Cu;
    SET_GPR_U32(ctx, 31, 0x277A14u);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x277A0Cu, 0x277A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277A14u;
label_277a14:
    // 0x277a14: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x277A14u;
    {
        const bool branch_taken_0x277a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x277a14) {
            ctx->pc = 0x277A2Cu;
            goto label_277a2c;
        }
    }
    ctx->pc = 0x277A1Cu;
    // 0x277a1c: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x277a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x277a20: 0x8c52003c  lw          $s2, 0x3C($v0)
    ctx->pc = 0x277a20u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x277a24: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x277A24u;
    {
        const bool branch_taken_0x277a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x277a24) {
            ctx->pc = 0x277A6Cu;
            goto label_277a6c;
        }
    }
    ctx->pc = 0x277A2Cu;
label_277a2c:
    // 0x277a2c: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x277a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x277a30: 0x8c520040  lw          $s2, 0x40($v0)
    ctx->pc = 0x277a30u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x277a34: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x277A34u;
    {
        const bool branch_taken_0x277a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x277a34) {
            ctx->pc = 0x277A6Cu;
            goto label_277a6c;
        }
    }
    ctx->pc = 0x277A3Cu;
label_277a3c:
    // 0x277a3c: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x277a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x277a40: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x277a40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277a44: 0xc040304  jal         func_100C10
    ctx->pc = 0x277A44u;
    SET_GPR_U32(ctx, 31, 0x277A4Cu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x277A44u, 0x277A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277A4Cu;
label_277a4c:
    // 0x277a4c: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x277a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x277a50: 0xc045768  jal         func_115DA0
    ctx->pc = 0x277A50u;
    SET_GPR_U32(ctx, 31, 0x277A58u);
    ctx->pc = 0x115DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115DA0u, 0x277A50u, 0x277A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277A58u;
label_277a58:
    // 0x277a58: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x277a58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277a5c: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x277a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x277a60: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x277a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x277a64: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x277A64u;
    SET_GPR_U32(ctx, 31, 0x277A6Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x277A64u, 0x277A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277A6Cu;
label_277a6c:
    // 0x277a6c: 0x124000f3  beqz        $s2, . + 4 + (0xF3 << 2)
    ctx->pc = 0x277A6Cu;
    {
        const bool branch_taken_0x277a6c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x277a6c) {
            ctx->pc = 0x277E3Cu;
            goto label_277e3c;
        }
    }
    ctx->pc = 0x277A74u;
    // 0x277a74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x277a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277a78: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x277a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x277a7c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x277A7Cu;
    SET_GPR_U32(ctx, 31, 0x277A84u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x277A7Cu, 0x277A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277A84u;
label_277a84:
    // 0x277a84: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x277a84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
    // 0x277a88: 0x8fa400ec  lw          $a0, 0xEC($sp)
    ctx->pc = 0x277a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x277a8c: 0x8fa500f8  lw          $a1, 0xF8($sp)
    ctx->pc = 0x277a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x277a90: 0xc096eec  jal         func_25BBB0
    ctx->pc = 0x277A90u;
    SET_GPR_U32(ctx, 31, 0x277A98u);
    ctx->pc = 0x25BBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BBB0u, 0x277A90u, 0x277A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277A98u;
label_277a98:
    // 0x277a98: 0x100000e8  b           . + 4 + (0xE8 << 2)
    ctx->pc = 0x277A98u;
    {
        const bool branch_taken_0x277a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x277a98) {
            ctx->pc = 0x277E3Cu;
            goto label_277e3c;
        }
    }
    ctx->pc = 0x277AA0u;
label_277aa0:
    // 0x277aa0: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x277aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x277aa4: 0xc09d274  jal         func_2749D0
    ctx->pc = 0x277AA4u;
    SET_GPR_U32(ctx, 31, 0x277AACu);
    ctx->pc = 0x2749D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2749D0u, 0x277AA4u, 0x277AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277AACu;
label_277aac:
    // 0x277aac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x277aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277ab0: 0x240504c2  addiu       $a1, $zero, 0x4C2
    ctx->pc = 0x277ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1218));
    // 0x277ab4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x277ab4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277ab8: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x277AB8u;
    SET_GPR_U32(ctx, 31, 0x277AC0u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x277AB8u, 0x277AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277AC0u;
label_277ac0:
    // 0x277ac0: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x277ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
    // 0x277ac4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x277ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x277ac8: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x277ac8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x277acc: 0x102000db  beqz        $at, . + 4 + (0xDB << 2)
    ctx->pc = 0x277ACCu;
    {
        const bool branch_taken_0x277acc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x277acc) {
            ctx->pc = 0x277E3Cu;
            goto label_277e3c;
        }
    }
    ctx->pc = 0x277AD4u;
    // 0x277ad4: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x277ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x277ad8: 0xc09d274  jal         func_2749D0
    ctx->pc = 0x277AD8u;
    SET_GPR_U32(ctx, 31, 0x277AE0u);
    ctx->pc = 0x2749D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2749D0u, 0x277AD8u, 0x277AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277AE0u;
label_277ae0:
    // 0x277ae0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x277ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277ae4: 0x240504c4  addiu       $a1, $zero, 0x4C4
    ctx->pc = 0x277ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1220));
    // 0x277ae8: 0x2786a200  addiu       $a2, $gp, -0x5E00
    ctx->pc = 0x277ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943232));
    // 0x277aec: 0xc041a50  jal         func_106940
    ctx->pc = 0x277AECu;
    SET_GPR_U32(ctx, 31, 0x277AF4u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x277AECu, 0x277AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277AF4u;
label_277af4:
    // 0x277af4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x277af4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277af8: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x277af8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x277afc: 0x104000cf  beqz        $v0, . + 4 + (0xCF << 2)
    ctx->pc = 0x277AFCu;
    {
        const bool branch_taken_0x277afc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x277afc) {
            ctx->pc = 0x277E3Cu;
            goto label_277e3c;
        }
    }
    ctx->pc = 0x277B04u;
    // 0x277b04: 0xc090864  jal         func_242190
    ctx->pc = 0x277B04u;
    SET_GPR_U32(ctx, 31, 0x277B0Cu);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x277B04u, 0x277B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277B0Cu;
label_277b0c:
    // 0x277b0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x277b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277b10: 0xc0905a0  jal         func_241680
    ctx->pc = 0x277B10u;
    SET_GPR_U32(ctx, 31, 0x277B18u);
    ctx->pc = 0x241680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241680u, 0x277B10u, 0x277B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277B18u;
label_277b18:
    // 0x277b18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x277b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277b1c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x277b1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277b20: 0xc09a364  jal         func_268D90
    ctx->pc = 0x277B20u;
    SET_GPR_U32(ctx, 31, 0x277B28u);
    ctx->pc = 0x268D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D90u, 0x277B20u, 0x277B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277B28u;
label_277b28:
    // 0x277b28: 0xafa200e4  sw          $v0, 0xE4($sp)
    ctx->pc = 0x277b28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
    // 0x277b2c: 0x8fa200e4  lw          $v0, 0xE4($sp)
    ctx->pc = 0x277b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x277b30: 0x100200c2  beq         $zero, $v0, . + 4 + (0xC2 << 2)
    ctx->pc = 0x277B30u;
    {
        const bool branch_taken_0x277b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x277b30) {
            ctx->pc = 0x277E3Cu;
            goto label_277e3c;
        }
    }
    ctx->pc = 0x277B38u;
    // 0x277b38: 0xa3a0010f  sb          $zero, 0x10F($sp)
    ctx->pc = 0x277b38u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 271), (uint8_t)GPR_U32(ctx, 0));
    // 0x277b3c: 0x8f84bbf0  lw          $a0, -0x4410($gp)
    ctx->pc = 0x277b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949872)));
    // 0x277b40: 0xc090018  jal         func_240060
    ctx->pc = 0x277B40u;
    SET_GPR_U32(ctx, 31, 0x277B48u);
    ctx->pc = 0x240060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240060u, 0x277B40u, 0x277B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277B48u;
label_277b48:
    // 0x277b48: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x277b48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x277b4c: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x277b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x277b50: 0xc08feb4  jal         func_23FAD0
    ctx->pc = 0x277B50u;
    SET_GPR_U32(ctx, 31, 0x277B58u);
    ctx->pc = 0x23FAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FAD0u, 0x277B50u, 0x277B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277B58u;
label_277b58:
    // 0x277b58: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x277b58u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277b5c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x277B5Cu;
    {
        const bool branch_taken_0x277b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x277b5c) {
            ctx->pc = 0x277BD8u;
            goto label_277bd8;
        }
    }
    ctx->pc = 0x277B64u;
label_277b64:
    // 0x277b64: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x277b64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277b68: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x277b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x277b6c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x277b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x277b70: 0x14620018  bne         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x277B70u;
    {
        const bool branch_taken_0x277b70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x277b70) {
            ctx->pc = 0x277BD4u;
            goto label_277bd4;
        }
    }
    ctx->pc = 0x277B78u;
    // 0x277b78: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x277b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x277b7c: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x277b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x277b80: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x277b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x277b84: 0xc09d234  jal         func_2748D0
    ctx->pc = 0x277B84u;
    SET_GPR_U32(ctx, 31, 0x277B8Cu);
    ctx->pc = 0x2748D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2748D0u, 0x277B84u, 0x277B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277B8Cu;
label_277b8c:
    // 0x277b8c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x277b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x277b90: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x277b90u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x277b94: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x277B94u;
    {
        const bool branch_taken_0x277b94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x277b94) {
            ctx->pc = 0x277BD4u;
            goto label_277bd4;
        }
    }
    ctx->pc = 0x277B9Cu;
    // 0x277b9c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x277b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x277ba0: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x277ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x277ba4: 0xc041874  jal         func_1061D0
    ctx->pc = 0x277BA4u;
    SET_GPR_U32(ctx, 31, 0x277BACu);
    ctx->pc = 0x1061D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1061D0u, 0x277BA4u, 0x277BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277BACu;
label_277bac:
    // 0x277bac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x277bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277bb0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x277bb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277bb4: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x277BB4u;
    SET_GPR_U32(ctx, 31, 0x277BBCu);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x277BB4u, 0x277BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277BBCu;
label_277bbc:
    // 0x277bbc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x277BBCu;
    {
        const bool branch_taken_0x277bbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x277bbc) {
            ctx->pc = 0x277BD4u;
            goto label_277bd4;
        }
    }
    ctx->pc = 0x277BC4u;
    // 0x277bc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x277bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x277bc8: 0xa3a2010f  sb          $v0, 0x10F($sp)
    ctx->pc = 0x277bc8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 271), (uint8_t)GPR_U32(ctx, 2));
    // 0x277bcc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x277BCCu;
    {
        const bool branch_taken_0x277bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x277bcc) {
            ctx->pc = 0x277BECu;
            goto label_277bec;
        }
    }
    ctx->pc = 0x277BD4u;
label_277bd4:
    // 0x277bd4: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x277bd4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_277bd8:
    // 0x277bd8: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x277bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x277bdc: 0xc08feac  jal         func_23FAB0
    ctx->pc = 0x277BDCu;
    SET_GPR_U32(ctx, 31, 0x277BE4u);
    ctx->pc = 0x23FAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FAB0u, 0x277BDCu, 0x277BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277BE4u;
label_277be4:
    // 0x277be4: 0x1682ffdf  bne         $s4, $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x277BE4u;
    {
        const bool branch_taken_0x277be4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x277be4) {
            ctx->pc = 0x277B64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_277b64;
        }
    }
    ctx->pc = 0x277BECu;
label_277bec:
    // 0x277bec: 0x93a2010f  lbu         $v0, 0x10F($sp)
    ctx->pc = 0x277becu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 271)));
    // 0x277bf0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x277bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x277bf4: 0x1440004a  bnez        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x277BF4u;
    {
        const bool branch_taken_0x277bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x277bf4) {
            ctx->pc = 0x277D20u;
            goto label_277d20;
        }
    }
    ctx->pc = 0x277BFCu;
    // 0x277bfc: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x277bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x277c00: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x277C00u;
    SET_GPR_U32(ctx, 31, 0x277C08u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x277C00u, 0x277C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277C08u;
label_277c08:
    // 0x277c08: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x277c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x277c0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x277c0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277c10: 0xc0400e0  jal         func_100380
    ctx->pc = 0x277C10u;
    SET_GPR_U32(ctx, 31, 0x277C18u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x277C10u, 0x277C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277C18u;
label_277c18:
    // 0x277c18: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x277c18u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277c1c: 0x12c00005  beqz        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x277C1Cu;
    {
        const bool branch_taken_0x277c1c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x277c1c) {
            ctx->pc = 0x277C34u;
            goto label_277c34;
        }
    }
    ctx->pc = 0x277C24u;
    // 0x277c24: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x277c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277c28: 0xc09dfa8  jal         func_277EA0
    ctx->pc = 0x277C28u;
    SET_GPR_U32(ctx, 31, 0x277C30u);
    ctx->pc = 0x277EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277EA0u, 0x277C28u, 0x277C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277C30u;
label_277c30:
    // 0x277c30: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x277c30u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_277c34:
    // 0x277c34: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x277c34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277c38: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x277c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x277c3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x277c3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x277c40: 0x0  nop
    ctx->pc = 0x277c40u;
    // NOP
    // 0x277c44: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x277c44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x277c48: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x277c48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x277c4c: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x277c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x277c50: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x277c50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277c54: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x277C54u;
    SET_GPR_U32(ctx, 31, 0x277C5Cu);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x277C54u, 0x277C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277C5Cu;
label_277c5c:
    // 0x277c5c: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x277c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x277c60: 0xc09d234  jal         func_2748D0
    ctx->pc = 0x277C60u;
    SET_GPR_U32(ctx, 31, 0x277C68u);
    ctx->pc = 0x2748D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2748D0u, 0x277C60u, 0x277C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277C68u;
label_277c68:
    // 0x277c68: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x277c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x277c6c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x277c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x277c70: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x277c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x277c74: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x277C74u;
    SET_GPR_U32(ctx, 31, 0x277C7Cu);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x277C74u, 0x277C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277C7Cu;
label_277c7c:
    // 0x277c7c: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x277c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x277c80: 0xc09d234  jal         func_2748D0
    ctx->pc = 0x277C80u;
    SET_GPR_U32(ctx, 31, 0x277C88u);
    ctx->pc = 0x2748D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2748D0u, 0x277C80u, 0x277C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277C88u;
label_277c88:
    // 0x277c88: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x277c88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x277c8c: 0xc048094  jal         func_120250
    ctx->pc = 0x277C8Cu;
    SET_GPR_U32(ctx, 31, 0x277C94u);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x277C8Cu, 0x277C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277C94u;
label_277c94:
    // 0x277c94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x277c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277c98: 0x24050475  addiu       $a1, $zero, 0x475
    ctx->pc = 0x277c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1141));
    // 0x277c9c: 0x2786a200  addiu       $a2, $gp, -0x5E00
    ctx->pc = 0x277c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943232));
    // 0x277ca0: 0xc041a50  jal         func_106940
    ctx->pc = 0x277CA0u;
    SET_GPR_U32(ctx, 31, 0x277CA8u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x277CA0u, 0x277CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277CA8u;
label_277ca8:
    // 0x277ca8: 0x2604001c  addiu       $a0, $s0, 0x1C
    ctx->pc = 0x277ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x277cac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x277cacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277cb0: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x277CB0u;
    SET_GPR_U32(ctx, 31, 0x277CB8u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x277CB0u, 0x277CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277CB8u;
label_277cb8:
    // 0x277cb8: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x277cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x277cbc: 0xc09d234  jal         func_2748D0
    ctx->pc = 0x277CBCu;
    SET_GPR_U32(ctx, 31, 0x277CC4u);
    ctx->pc = 0x2748D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2748D0u, 0x277CBCu, 0x277CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277CC4u;
label_277cc4:
    // 0x277cc4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x277cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x277cc8: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x277cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x277ccc: 0x8f84bbf0  lw          $a0, -0x4410($gp)
    ctx->pc = 0x277cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949872)));
    // 0x277cd0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x277cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x277cd4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x277cd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277cd8: 0x8e070028  lw          $a3, 0x28($s0)
    ctx->pc = 0x277cd8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x277cdc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x277cdcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277ce0: 0xc08febc  jal         func_23FAF0
    ctx->pc = 0x277CE0u;
    SET_GPR_U32(ctx, 31, 0x277CE8u);
    ctx->pc = 0x23FAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FAF0u, 0x277CE0u, 0x277CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277CE8u;
label_277ce8:
    // 0x277ce8: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x277ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x277cec: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x277cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x277cf0: 0xc085538  jal         func_2154E0
    ctx->pc = 0x277CF0u;
    SET_GPR_U32(ctx, 31, 0x277CF8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x277CF0u, 0x277CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277CF8u;
label_277cf8:
    // 0x277cf8: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x277cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x277cfc: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x277cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x277d00: 0xc09d234  jal         func_2748D0
    ctx->pc = 0x277D00u;
    SET_GPR_U32(ctx, 31, 0x277D08u);
    ctx->pc = 0x2748D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2748D0u, 0x277D00u, 0x277D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277D08u;
label_277d08:
    // 0x277d08: 0x8fa400dc  lw          $a0, 0xDC($sp)
    ctx->pc = 0x277d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x277d0c: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x277d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x277d10: 0xc097020  jal         func_25C080
    ctx->pc = 0x277D10u;
    SET_GPR_U32(ctx, 31, 0x277D18u);
    ctx->pc = 0x25C080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C080u, 0x277D10u, 0x277D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277D18u;
label_277d18:
    // 0x277d18: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x277D18u;
    {
        const bool branch_taken_0x277d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x277d18) {
            ctx->pc = 0x277E3Cu;
            goto label_277e3c;
        }
    }
    ctx->pc = 0x277D20u;
label_277d20:
    // 0x277d20: 0xafb400d8  sw          $s4, 0xD8($sp)
    ctx->pc = 0x277d20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 20));
    // 0x277d24: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x277d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x277d28: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x277d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x277d2c: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x277d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    // 0x277d30: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x277d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x277d34: 0xc0495d4  jal         func_125750
    ctx->pc = 0x277D34u;
    SET_GPR_U32(ctx, 31, 0x277D3Cu);
    ctx->pc = 0x125750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125750u, 0x277D34u, 0x277D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277D3Cu;
label_277d3c:
    // 0x277d3c: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x277d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x277d40: 0x2444001c  addiu       $a0, $v0, 0x1C
    ctx->pc = 0x277d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x277d44: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x277D44u;
    SET_GPR_U32(ctx, 31, 0x277D4Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x277D44u, 0x277D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277D4Cu;
label_277d4c:
    // 0x277d4c: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x277d4cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x277d50: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x277d50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x277d54: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x277d54u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x277d58: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x277d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x277d5c: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x277D5Cu;
    {
        const bool branch_taken_0x277d5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x277d5c) {
            ctx->pc = 0x277D90u;
            goto label_277d90;
        }
    }
    ctx->pc = 0x277D64u;
    // 0x277d64: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x277d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x277d68: 0x2444001c  addiu       $a0, $v0, 0x1C
    ctx->pc = 0x277d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x277d6c: 0xc041874  jal         func_1061D0
    ctx->pc = 0x277D6Cu;
    SET_GPR_U32(ctx, 31, 0x277D74u);
    ctx->pc = 0x1061D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1061D0u, 0x277D6Cu, 0x277D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277D74u;
label_277d74:
    // 0x277d74: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x277d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
    // 0x277d78: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x277d78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277d7c: 0x27a600c8  addiu       $a2, $sp, 0xC8
    ctx->pc = 0x277d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x277d80: 0xc08e514  jal         func_239450
    ctx->pc = 0x277D80u;
    SET_GPR_U32(ctx, 31, 0x277D88u);
    ctx->pc = 0x239450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239450u, 0x277D80u, 0x277D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277D88u;
label_277d88:
    // 0x277d88: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x277D88u;
    {
        const bool branch_taken_0x277d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x277d88) {
            ctx->pc = 0x277DA4u;
            goto label_277da4;
        }
    }
    ctx->pc = 0x277D90u;
label_277d90:
    // 0x277d90: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x277d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x277d94: 0x2444001c  addiu       $a0, $v0, 0x1C
    ctx->pc = 0x277d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x277d98: 0x27a500c8  addiu       $a1, $sp, 0xC8
    ctx->pc = 0x277d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x277d9c: 0xc1195a4  jal         func_465690
    ctx->pc = 0x277D9Cu;
    SET_GPR_U32(ctx, 31, 0x277DA4u);
    ctx->pc = 0x465690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465690u, 0x277D9Cu, 0x277DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277DA4u;
label_277da4:
    // 0x277da4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x277da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x277da8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x277da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x277dac: 0x27a600c8  addiu       $a2, $sp, 0xC8
    ctx->pc = 0x277dacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x277db0: 0xc08d69c  jal         func_235A70
    ctx->pc = 0x277DB0u;
    SET_GPR_U32(ctx, 31, 0x277DB8u);
    ctx->pc = 0x235A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235A70u, 0x277DB0u, 0x277DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277DB8u;
label_277db8:
    // 0x277db8: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x277db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x277dbc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x277dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x277dc0: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x277DC0u;
    SET_GPR_U32(ctx, 31, 0x277DC8u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x277DC0u, 0x277DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277DC8u;
label_277dc8:
    // 0x277dc8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x277DC8u;
    {
        const bool branch_taken_0x277dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x277dc8) {
            ctx->pc = 0x277E3Cu;
            goto label_277e3c;
        }
    }
    ctx->pc = 0x277DD0u;
label_277dd0:
    // 0x277dd0: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x277dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x277dd4: 0xc09d274  jal         func_2749D0
    ctx->pc = 0x277DD4u;
    SET_GPR_U32(ctx, 31, 0x277DDCu);
    ctx->pc = 0x2749D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2749D0u, 0x277DD4u, 0x277DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277DDCu;
label_277ddc:
    // 0x277ddc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x277ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277de0: 0x240504c2  addiu       $a1, $zero, 0x4C2
    ctx->pc = 0x277de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1218));
    // 0x277de4: 0x240603e7  addiu       $a2, $zero, 0x3E7
    ctx->pc = 0x277de4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    // 0x277de8: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x277DE8u;
    SET_GPR_U32(ctx, 31, 0x277DF0u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x277DE8u, 0x277DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277DF0u;
label_277df0:
    // 0x277df0: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x277df0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277df4: 0x240203e7  addiu       $v0, $zero, 0x3E7
    ctx->pc = 0x277df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    // 0x277df8: 0x12e20010  beq         $s7, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x277DF8u;
    {
        const bool branch_taken_0x277df8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        if (branch_taken_0x277df8) {
            ctx->pc = 0x277E3Cu;
            goto label_277e3c;
        }
    }
    ctx->pc = 0x277E00u;
    // 0x277e00: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x277e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277e04: 0xc0ba892  jal         func_2EA248
    ctx->pc = 0x277E04u;
    SET_GPR_U32(ctx, 31, 0x277E0Cu);
    ctx->pc = 0x2EA248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA248u, 0x277E04u, 0x277E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277E0Cu;
label_277e0c:
    // 0x277e0c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x277e0cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277e10: 0x172823  negu        $a1, $s7
    ctx->pc = 0x277e10u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 23)));
    // 0x277e14: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x277e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x277e18: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x277e18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x277e1c: 0xc08d4a4  jal         func_235290
    ctx->pc = 0x277E1Cu;
    SET_GPR_U32(ctx, 31, 0x277E24u);
    ctx->pc = 0x235290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235290u, 0x277E1Cu, 0x277E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277E24u;
label_277e24:
    // 0x277e24: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x277E24u;
    {
        const bool branch_taken_0x277e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x277e24) {
            ctx->pc = 0x277E3Cu;
            goto label_277e3c;
        }
    }
    ctx->pc = 0x277E2Cu;
label_277e2c:
    // 0x277e2c: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x277e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x277e30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x277e30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277e34: 0xc08ef28  jal         func_23BCA0
    ctx->pc = 0x277E34u;
    SET_GPR_U32(ctx, 31, 0x277E3Cu);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x277E34u, 0x277E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277E3Cu;
label_277e3c:
    // 0x277e3c: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x277e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x277e40: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x277e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x277e44: 0xc09d250  jal         func_274940
    ctx->pc = 0x277E44u;
    SET_GPR_U32(ctx, 31, 0x277E4Cu);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x277E44u, 0x277E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277E4Cu;
label_277e4c:
    // 0x277e4c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x277E4Cu;
    {
        const bool branch_taken_0x277e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x277e4c) {
            ctx->pc = 0x277E6Cu;
            goto label_277e6c;
        }
    }
    ctx->pc = 0x277E54u;
label_277e54:
    // 0x277e54: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x277e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x277e58: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x277e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x277e5c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x277e5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277e60: 0xc09d250  jal         func_274940
    ctx->pc = 0x277E60u;
    SET_GPR_U32(ctx, 31, 0x277E68u);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x277E60u, 0x277E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277E68u;
label_277e68:
    // 0x277e68: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x277e68u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_277e6c:
    // 0x277e6c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x277e6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x277e70: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x277e70u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x277e74: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x277e74u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x277e78: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x277e78u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x277e7c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x277e7cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x277e80: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x277e80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x277e84: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x277e84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x277e88: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x277e88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x277e8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x277e8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277e90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x277e90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x277e94: 0x27bd0120  addiu       $sp, $sp, 0x120
    ctx->pc = 0x277e94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x277e98: 0x3e00008  jr          $ra
    ctx->pc = 0x277E98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277E98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x277EA0u;
}
