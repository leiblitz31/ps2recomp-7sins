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

// Function: sub_002348C0
// Address: 0x2348c0 - 0x234ae0
void sub_002348C0_0x2348c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002348C0_0x2348c0");
#endif

    switch (ctx->pc) {
        case 0x2348c0u: goto label_2348c0;
        case 0x2348c4u: goto label_2348c4;
        case 0x2348c8u: goto label_2348c8;
        case 0x2348ccu: goto label_2348cc;
        case 0x2348d0u: goto label_2348d0;
        case 0x2348d4u: goto label_2348d4;
        case 0x2348d8u: goto label_2348d8;
        case 0x2348dcu: goto label_2348dc;
        case 0x2348e0u: goto label_2348e0;
        case 0x2348e4u: goto label_2348e4;
        case 0x2348e8u: goto label_2348e8;
        case 0x2348ecu: goto label_2348ec;
        case 0x2348f0u: goto label_2348f0;
        case 0x2348f4u: goto label_2348f4;
        case 0x2348f8u: goto label_2348f8;
        case 0x2348fcu: goto label_2348fc;
        case 0x234900u: goto label_234900;
        case 0x234904u: goto label_234904;
        case 0x234908u: goto label_234908;
        case 0x23490cu: goto label_23490c;
        case 0x234910u: goto label_234910;
        case 0x234914u: goto label_234914;
        case 0x234918u: goto label_234918;
        case 0x23491cu: goto label_23491c;
        case 0x234920u: goto label_234920;
        case 0x234924u: goto label_234924;
        case 0x234928u: goto label_234928;
        case 0x23492cu: goto label_23492c;
        case 0x234930u: goto label_234930;
        case 0x234934u: goto label_234934;
        case 0x234938u: goto label_234938;
        case 0x23493cu: goto label_23493c;
        case 0x234940u: goto label_234940;
        case 0x234944u: goto label_234944;
        case 0x234948u: goto label_234948;
        case 0x23494cu: goto label_23494c;
        case 0x234950u: goto label_234950;
        case 0x234954u: goto label_234954;
        case 0x234958u: goto label_234958;
        case 0x23495cu: goto label_23495c;
        case 0x234960u: goto label_234960;
        case 0x234964u: goto label_234964;
        case 0x234968u: goto label_234968;
        case 0x23496cu: goto label_23496c;
        case 0x234970u: goto label_234970;
        case 0x234974u: goto label_234974;
        case 0x234978u: goto label_234978;
        case 0x23497cu: goto label_23497c;
        case 0x234980u: goto label_234980;
        case 0x234984u: goto label_234984;
        case 0x234988u: goto label_234988;
        case 0x23498cu: goto label_23498c;
        case 0x234990u: goto label_234990;
        case 0x234994u: goto label_234994;
        case 0x234998u: goto label_234998;
        case 0x23499cu: goto label_23499c;
        case 0x2349a0u: goto label_2349a0;
        case 0x2349a4u: goto label_2349a4;
        case 0x2349a8u: goto label_2349a8;
        case 0x2349acu: goto label_2349ac;
        case 0x2349b0u: goto label_2349b0;
        case 0x2349b4u: goto label_2349b4;
        case 0x2349b8u: goto label_2349b8;
        case 0x2349bcu: goto label_2349bc;
        case 0x2349c0u: goto label_2349c0;
        case 0x2349c4u: goto label_2349c4;
        case 0x2349c8u: goto label_2349c8;
        case 0x2349ccu: goto label_2349cc;
        case 0x2349d0u: goto label_2349d0;
        case 0x2349d4u: goto label_2349d4;
        case 0x2349d8u: goto label_2349d8;
        case 0x2349dcu: goto label_2349dc;
        case 0x2349e0u: goto label_2349e0;
        case 0x2349e4u: goto label_2349e4;
        case 0x2349e8u: goto label_2349e8;
        case 0x2349ecu: goto label_2349ec;
        case 0x2349f0u: goto label_2349f0;
        case 0x2349f4u: goto label_2349f4;
        case 0x2349f8u: goto label_2349f8;
        case 0x2349fcu: goto label_2349fc;
        case 0x234a00u: goto label_234a00;
        case 0x234a04u: goto label_234a04;
        case 0x234a08u: goto label_234a08;
        case 0x234a0cu: goto label_234a0c;
        case 0x234a10u: goto label_234a10;
        case 0x234a14u: goto label_234a14;
        case 0x234a18u: goto label_234a18;
        case 0x234a1cu: goto label_234a1c;
        case 0x234a20u: goto label_234a20;
        case 0x234a24u: goto label_234a24;
        case 0x234a28u: goto label_234a28;
        case 0x234a2cu: goto label_234a2c;
        case 0x234a30u: goto label_234a30;
        case 0x234a34u: goto label_234a34;
        case 0x234a38u: goto label_234a38;
        case 0x234a3cu: goto label_234a3c;
        case 0x234a40u: goto label_234a40;
        case 0x234a44u: goto label_234a44;
        case 0x234a48u: goto label_234a48;
        case 0x234a4cu: goto label_234a4c;
        case 0x234a50u: goto label_234a50;
        case 0x234a54u: goto label_234a54;
        case 0x234a58u: goto label_234a58;
        case 0x234a5cu: goto label_234a5c;
        case 0x234a60u: goto label_234a60;
        case 0x234a64u: goto label_234a64;
        case 0x234a68u: goto label_234a68;
        case 0x234a6cu: goto label_234a6c;
        case 0x234a70u: goto label_234a70;
        case 0x234a74u: goto label_234a74;
        case 0x234a78u: goto label_234a78;
        case 0x234a7cu: goto label_234a7c;
        case 0x234a80u: goto label_234a80;
        case 0x234a84u: goto label_234a84;
        case 0x234a88u: goto label_234a88;
        case 0x234a8cu: goto label_234a8c;
        case 0x234a90u: goto label_234a90;
        case 0x234a94u: goto label_234a94;
        case 0x234a98u: goto label_234a98;
        case 0x234a9cu: goto label_234a9c;
        case 0x234aa0u: goto label_234aa0;
        case 0x234aa4u: goto label_234aa4;
        case 0x234aa8u: goto label_234aa8;
        case 0x234aacu: goto label_234aac;
        case 0x234ab0u: goto label_234ab0;
        case 0x234ab4u: goto label_234ab4;
        case 0x234ab8u: goto label_234ab8;
        case 0x234abcu: goto label_234abc;
        case 0x234ac0u: goto label_234ac0;
        case 0x234ac4u: goto label_234ac4;
        case 0x234ac8u: goto label_234ac8;
        case 0x234accu: goto label_234acc;
        case 0x234ad0u: goto label_234ad0;
        case 0x234ad4u: goto label_234ad4;
        case 0x234ad8u: goto label_234ad8;
        case 0x234adcu: goto label_234adc;
        default: break;
    }

    ctx->pc = 0x2348c0u;

label_2348c0:
    // 0x2348c0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2348c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_2348c4:
    // 0x2348c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2348c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2348c8:
    // 0x2348c8: 0xa3a40090  sb          $a0, 0x90($sp)
    ctx->pc = 0x2348c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 144), (uint8_t)GPR_U32(ctx, 4));
label_2348cc:
    // 0x2348cc: 0x8f83bb98  lw          $v1, -0x4468($gp)
    ctx->pc = 0x2348ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949784)));
label_2348d0:
    // 0x2348d0: 0x1003007e  beq         $zero, $v1, . + 4 + (0x7E << 2)
label_2348d4:
    if (ctx->pc == 0x2348D4u) {
        ctx->pc = 0x2348D8u;
        goto label_2348d8;
    }
    ctx->pc = 0x2348D0u;
    {
        const bool branch_taken_0x2348d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x2348d0) {
            ctx->pc = 0x234ACCu;
            goto label_234acc;
        }
    }
    ctx->pc = 0x2348D8u;
label_2348d8:
    // 0x2348d8: 0x93a20090  lbu         $v0, 0x90($sp)
    ctx->pc = 0x2348d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 144)));
label_2348dc:
    // 0x2348dc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2348dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2348e0:
    // 0x2348e0: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
label_2348e4:
    if (ctx->pc == 0x2348E4u) {
        ctx->pc = 0x2348E8u;
        goto label_2348e8;
    }
    ctx->pc = 0x2348E0u;
    {
        const bool branch_taken_0x2348e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2348e0) {
            ctx->pc = 0x2349C0u;
            goto label_2349c0;
        }
    }
    ctx->pc = 0x2348E8u;
label_2348e8:
    // 0x2348e8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2348e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2348ec:
    // 0x2348ec: 0x27859d18  addiu       $a1, $gp, -0x62E8
    ctx->pc = 0x2348ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941976));
label_2348f0:
    // 0x2348f0: 0xc040304  jal         func_100C10
label_2348f4:
    if (ctx->pc == 0x2348F4u) {
        ctx->pc = 0x2348F8u;
        goto label_2348f8;
    }
    ctx->pc = 0x2348F0u;
    SET_GPR_U32(ctx, 31, 0x2348F8u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x2348F0u, 0x2348F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2348F8u;
label_2348f8:
    // 0x2348f8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2348f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2348fc:
    // 0x2348fc: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x2348fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_234900:
    // 0x234900: 0xc119568  jal         func_4655A0
label_234904:
    if (ctx->pc == 0x234904u) {
        ctx->pc = 0x234908u;
        goto label_234908;
    }
    ctx->pc = 0x234900u;
    SET_GPR_U32(ctx, 31, 0x234908u);
    ctx->pc = 0x4655A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4655A0u, 0x234900u, 0x234908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234908u;
label_234908:
    // 0x234908: 0x8f82bba4  lw          $v0, -0x445C($gp)
    ctx->pc = 0x234908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949796)));
label_23490c:
    // 0x23490c: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x23490cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_234910:
    // 0x234910: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x234910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_234914:
    // 0x234914: 0xc0477e8  jal         func_11DFA0
label_234918:
    if (ctx->pc == 0x234918u) {
        ctx->pc = 0x23491Cu;
        goto label_23491c;
    }
    ctx->pc = 0x234914u;
    SET_GPR_U32(ctx, 31, 0x23491Cu);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x234914u, 0x23491Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23491Cu;
label_23491c:
    // 0x23491c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x23491cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_234920:
    // 0x234920: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x234920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_234924:
    // 0x234924: 0xc0406a0  jal         func_101A80
label_234928:
    if (ctx->pc == 0x234928u) {
        ctx->pc = 0x23492Cu;
        goto label_23492c;
    }
    ctx->pc = 0x234924u;
    SET_GPR_U32(ctx, 31, 0x23492Cu);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x234924u, 0x23492Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23492Cu;
label_23492c:
    // 0x23492c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x23492cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_234930:
    // 0x234930: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x234930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_234934:
    // 0x234934: 0xc0402d4  jal         func_100B50
label_234938:
    if (ctx->pc == 0x234938u) {
        ctx->pc = 0x23493Cu;
        goto label_23493c;
    }
    ctx->pc = 0x234934u;
    SET_GPR_U32(ctx, 31, 0x23493Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x234934u, 0x23493Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23493Cu;
label_23493c:
    // 0x23493c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x23493cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_234940:
    // 0x234940: 0x27859d18  addiu       $a1, $gp, -0x62E8
    ctx->pc = 0x234940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941976));
label_234944:
    // 0x234944: 0xc040304  jal         func_100C10
label_234948:
    if (ctx->pc == 0x234948u) {
        ctx->pc = 0x23494Cu;
        goto label_23494c;
    }
    ctx->pc = 0x234944u;
    SET_GPR_U32(ctx, 31, 0x23494Cu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x234944u, 0x23494Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23494Cu;
label_23494c:
    // 0x23494c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x23494cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_234950:
    // 0x234950: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x234950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_234954:
    // 0x234954: 0xc119568  jal         func_4655A0
label_234958:
    if (ctx->pc == 0x234958u) {
        ctx->pc = 0x23495Cu;
        goto label_23495c;
    }
    ctx->pc = 0x234954u;
    SET_GPR_U32(ctx, 31, 0x23495Cu);
    ctx->pc = 0x4655A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4655A0u, 0x234954u, 0x23495Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23495Cu;
label_23495c:
    // 0x23495c: 0x8f82bba4  lw          $v0, -0x445C($gp)
    ctx->pc = 0x23495cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949796)));
label_234960:
    // 0x234960: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x234960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_234964:
    // 0x234964: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x234964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_234968:
    // 0x234968: 0xc0477e8  jal         func_11DFA0
label_23496c:
    if (ctx->pc == 0x23496Cu) {
        ctx->pc = 0x234970u;
        goto label_234970;
    }
    ctx->pc = 0x234968u;
    SET_GPR_U32(ctx, 31, 0x234970u);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x234968u, 0x234970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234970u;
label_234970:
    // 0x234970: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x234970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_234974:
    // 0x234974: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x234974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_234978:
    // 0x234978: 0xc0406a0  jal         func_101A80
label_23497c:
    if (ctx->pc == 0x23497Cu) {
        ctx->pc = 0x234980u;
        goto label_234980;
    }
    ctx->pc = 0x234978u;
    SET_GPR_U32(ctx, 31, 0x234980u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x234978u, 0x234980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234980u;
label_234980:
    // 0x234980: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x234980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_234984:
    // 0x234984: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x234984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_234988:
    // 0x234988: 0xc0402d4  jal         func_100B50
label_23498c:
    if (ctx->pc == 0x23498Cu) {
        ctx->pc = 0x234990u;
        goto label_234990;
    }
    ctx->pc = 0x234988u;
    SET_GPR_U32(ctx, 31, 0x234990u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x234988u, 0x234990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234990u;
label_234990:
    // 0x234990: 0xc08d32c  jal         func_234CB0
label_234994:
    if (ctx->pc == 0x234994u) {
        ctx->pc = 0x234998u;
        goto label_234998;
    }
    ctx->pc = 0x234990u;
    SET_GPR_U32(ctx, 31, 0x234998u);
    ctx->pc = 0x234CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234CB0u, 0x234990u, 0x234998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234998u;
label_234998:
    // 0x234998: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x234998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_23499c:
    // 0x23499c: 0x1460004b  bnez        $v1, . + 4 + (0x4B << 2)
label_2349a0:
    if (ctx->pc == 0x2349A0u) {
        ctx->pc = 0x2349A4u;
        goto label_2349a4;
    }
    ctx->pc = 0x23499Cu;
    {
        const bool branch_taken_0x23499c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23499c) {
            ctx->pc = 0x234ACCu;
            goto label_234acc;
        }
    }
    ctx->pc = 0x2349A4u;
label_2349a4:
    // 0x2349a4: 0x8f84bb98  lw          $a0, -0x4468($gp)
    ctx->pc = 0x2349a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949784)));
label_2349a8:
    // 0x2349a8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2349a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2349ac:
    // 0x2349ac: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x2349acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_2349b0:
    // 0x2349b0: 0x320f809  jalr        $t9
label_2349b4:
    if (ctx->pc == 0x2349B4u) {
        ctx->pc = 0x2349B8u;
        goto label_2349b8;
    }
    ctx->pc = 0x2349B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2349B8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2349B0u, 0x2349B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2349B8u;
label_2349b8:
    // 0x2349b8: 0x10000044  b           . + 4 + (0x44 << 2)
label_2349bc:
    if (ctx->pc == 0x2349BCu) {
        ctx->pc = 0x2349C0u;
        goto label_2349c0;
    }
    ctx->pc = 0x2349B8u;
    {
        const bool branch_taken_0x2349b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2349b8) {
            ctx->pc = 0x234ACCu;
            goto label_234acc;
        }
    }
    ctx->pc = 0x2349C0u;
label_2349c0:
    // 0x2349c0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2349c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2349c4:
    // 0x2349c4: 0x27859d18  addiu       $a1, $gp, -0x62E8
    ctx->pc = 0x2349c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941976));
label_2349c8:
    // 0x2349c8: 0xc040304  jal         func_100C10
label_2349cc:
    if (ctx->pc == 0x2349CCu) {
        ctx->pc = 0x2349D0u;
        goto label_2349d0;
    }
    ctx->pc = 0x2349C8u;
    SET_GPR_U32(ctx, 31, 0x2349D0u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x2349C8u, 0x2349D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2349D0u;
label_2349d0:
    // 0x2349d0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2349d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2349d4:
    // 0x2349d4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2349d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2349d8:
    // 0x2349d8: 0xc119568  jal         func_4655A0
label_2349dc:
    if (ctx->pc == 0x2349DCu) {
        ctx->pc = 0x2349E0u;
        goto label_2349e0;
    }
    ctx->pc = 0x2349D8u;
    SET_GPR_U32(ctx, 31, 0x2349E0u);
    ctx->pc = 0x4655A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4655A0u, 0x2349D8u, 0x2349E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2349E0u;
label_2349e0:
    // 0x2349e0: 0x8f82bba8  lw          $v0, -0x4458($gp)
    ctx->pc = 0x2349e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949800)));
label_2349e4:
    // 0x2349e4: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2349e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_2349e8:
    // 0x2349e8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2349e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2349ec:
    // 0x2349ec: 0xc0477e8  jal         func_11DFA0
label_2349f0:
    if (ctx->pc == 0x2349F0u) {
        ctx->pc = 0x2349F4u;
        goto label_2349f4;
    }
    ctx->pc = 0x2349ECu;
    SET_GPR_U32(ctx, 31, 0x2349F4u);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x2349ECu, 0x2349F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2349F4u;
label_2349f4:
    // 0x2349f4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2349f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2349f8:
    // 0x2349f8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2349f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2349fc:
    // 0x2349fc: 0xc0406a0  jal         func_101A80
label_234a00:
    if (ctx->pc == 0x234A00u) {
        ctx->pc = 0x234A04u;
        goto label_234a04;
    }
    ctx->pc = 0x2349FCu;
    SET_GPR_U32(ctx, 31, 0x234A04u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x2349FCu, 0x234A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234A04u;
label_234a04:
    // 0x234a04: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x234a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_234a08:
    // 0x234a08: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x234a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_234a0c:
    // 0x234a0c: 0xc0402d4  jal         func_100B50
label_234a10:
    if (ctx->pc == 0x234A10u) {
        ctx->pc = 0x234A14u;
        goto label_234a14;
    }
    ctx->pc = 0x234A0Cu;
    SET_GPR_U32(ctx, 31, 0x234A14u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x234A0Cu, 0x234A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234A14u;
label_234a14:
    // 0x234a14: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x234a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_234a18:
    // 0x234a18: 0x27859d18  addiu       $a1, $gp, -0x62E8
    ctx->pc = 0x234a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941976));
label_234a1c:
    // 0x234a1c: 0xc040304  jal         func_100C10
label_234a20:
    if (ctx->pc == 0x234A20u) {
        ctx->pc = 0x234A24u;
        goto label_234a24;
    }
    ctx->pc = 0x234A1Cu;
    SET_GPR_U32(ctx, 31, 0x234A24u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x234A1Cu, 0x234A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234A24u;
label_234a24:
    // 0x234a24: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x234a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_234a28:
    // 0x234a28: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x234a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_234a2c:
    // 0x234a2c: 0xc119568  jal         func_4655A0
label_234a30:
    if (ctx->pc == 0x234A30u) {
        ctx->pc = 0x234A34u;
        goto label_234a34;
    }
    ctx->pc = 0x234A2Cu;
    SET_GPR_U32(ctx, 31, 0x234A34u);
    ctx->pc = 0x4655A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4655A0u, 0x234A2Cu, 0x234A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234A34u;
label_234a34:
    // 0x234a34: 0x8f82bba8  lw          $v0, -0x4458($gp)
    ctx->pc = 0x234a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949800)));
label_234a38:
    // 0x234a38: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x234a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_234a3c:
    // 0x234a3c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x234a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_234a40:
    // 0x234a40: 0xc0477e8  jal         func_11DFA0
label_234a44:
    if (ctx->pc == 0x234A44u) {
        ctx->pc = 0x234A48u;
        goto label_234a48;
    }
    ctx->pc = 0x234A40u;
    SET_GPR_U32(ctx, 31, 0x234A48u);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x234A40u, 0x234A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234A48u;
label_234a48:
    // 0x234a48: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x234a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_234a4c:
    // 0x234a4c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x234a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_234a50:
    // 0x234a50: 0xc0406a0  jal         func_101A80
label_234a54:
    if (ctx->pc == 0x234A54u) {
        ctx->pc = 0x234A58u;
        goto label_234a58;
    }
    ctx->pc = 0x234A50u;
    SET_GPR_U32(ctx, 31, 0x234A58u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x234A50u, 0x234A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234A58u;
label_234a58:
    // 0x234a58: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x234a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_234a5c:
    // 0x234a5c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x234a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_234a60:
    // 0x234a60: 0xc0402d4  jal         func_100B50
label_234a64:
    if (ctx->pc == 0x234A64u) {
        ctx->pc = 0x234A68u;
        goto label_234a68;
    }
    ctx->pc = 0x234A60u;
    SET_GPR_U32(ctx, 31, 0x234A68u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x234A60u, 0x234A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234A68u;
label_234a68:
    // 0x234a68: 0xc08d308  jal         func_234C20
label_234a6c:
    if (ctx->pc == 0x234A6Cu) {
        ctx->pc = 0x234A70u;
        goto label_234a70;
    }
    ctx->pc = 0x234A68u;
    SET_GPR_U32(ctx, 31, 0x234A70u);
    ctx->pc = 0x234C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234C20u, 0x234A68u, 0x234A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234A70u;
label_234a70:
    // 0x234a70: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x234a70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_234a74:
    // 0x234a74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x234a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_234a78:
    // 0x234a78: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_234a7c:
    if (ctx->pc == 0x234A7Cu) {
        ctx->pc = 0x234A80u;
        goto label_234a80;
    }
    ctx->pc = 0x234A78u;
    {
        const bool branch_taken_0x234a78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x234a78) {
            ctx->pc = 0x234AB8u;
            goto label_234ab8;
        }
    }
    ctx->pc = 0x234A80u;
label_234a80:
    // 0x234a80: 0x8f84bba4  lw          $a0, -0x445C($gp)
    ctx->pc = 0x234a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949796)));
label_234a84:
    // 0x234a84: 0x8f85bba4  lw          $a1, -0x445C($gp)
    ctx->pc = 0x234a84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949796)));
label_234a88:
    // 0x234a88: 0x8f86bba4  lw          $a2, -0x445C($gp)
    ctx->pc = 0x234a88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949796)));
label_234a8c:
    // 0x234a8c: 0x8f83bba4  lw          $v1, -0x445C($gp)
    ctx->pc = 0x234a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949796)));
label_234a90:
    // 0x234a90: 0x8f82bba4  lw          $v0, -0x445C($gp)
    ctx->pc = 0x234a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949796)));
label_234a94:
    // 0x234a94: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x234a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_234a98:
    // 0x234a98: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x234a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_234a9c:
    // 0x234a9c: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x234a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_234aa0:
    // 0x234aa0: 0x8c670024  lw          $a3, 0x24($v1)
    ctx->pc = 0x234aa0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_234aa4:
    // 0x234aa4: 0x8c480020  lw          $t0, 0x20($v0)
    ctx->pc = 0x234aa4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_234aa8:
    // 0x234aa8: 0xc08d218  jal         func_234860
label_234aac:
    if (ctx->pc == 0x234AACu) {
        ctx->pc = 0x234AB0u;
        goto label_234ab0;
    }
    ctx->pc = 0x234AA8u;
    SET_GPR_U32(ctx, 31, 0x234AB0u);
    ctx->pc = 0x234860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234860u, 0x234AA8u, 0x234AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234AB0u;
label_234ab0:
    // 0x234ab0: 0x10000006  b           . + 4 + (0x6 << 2)
label_234ab4:
    if (ctx->pc == 0x234AB4u) {
        ctx->pc = 0x234AB8u;
        goto label_234ab8;
    }
    ctx->pc = 0x234AB0u;
    {
        const bool branch_taken_0x234ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x234ab0) {
            ctx->pc = 0x234ACCu;
            goto label_234acc;
        }
    }
    ctx->pc = 0x234AB8u;
label_234ab8:
    // 0x234ab8: 0x8f84bb98  lw          $a0, -0x4468($gp)
    ctx->pc = 0x234ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949784)));
label_234abc:
    // 0x234abc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x234abcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_234ac0:
    // 0x234ac0: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x234ac0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_234ac4:
    // 0x234ac4: 0x320f809  jalr        $t9
label_234ac8:
    if (ctx->pc == 0x234AC8u) {
        ctx->pc = 0x234ACCu;
        goto label_234acc;
    }
    ctx->pc = 0x234AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x234ACCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234AC4u, 0x234ACCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x234ACCu;
label_234acc:
    // 0x234acc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x234accu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_234ad0:
    // 0x234ad0: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x234ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_234ad4:
    // 0x234ad4: 0x3e00008  jr          $ra
label_234ad8:
    if (ctx->pc == 0x234AD8u) {
        ctx->pc = 0x234ADCu;
        goto label_234adc;
    }
    ctx->pc = 0x234AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234AD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234ADCu;
label_234adc:
    // 0x234adc: 0x0  nop
    ctx->pc = 0x234adcu;
    // NOP
    ctx->pc = 0x234ae0u;
}
