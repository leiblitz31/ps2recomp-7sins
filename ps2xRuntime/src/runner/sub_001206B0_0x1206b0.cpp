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

// Function: sub_001206B0
// Address: 0x1206b0 - 0x120bc0
void sub_001206B0_0x1206b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001206B0_0x1206b0");
#endif

    switch (ctx->pc) {
        case 0x1206b0u: goto label_1206b0;
        case 0x1206b4u: goto label_1206b4;
        case 0x1206b8u: goto label_1206b8;
        case 0x1206bcu: goto label_1206bc;
        case 0x1206c0u: goto label_1206c0;
        case 0x1206c4u: goto label_1206c4;
        case 0x1206c8u: goto label_1206c8;
        case 0x1206ccu: goto label_1206cc;
        case 0x1206d0u: goto label_1206d0;
        case 0x1206d4u: goto label_1206d4;
        case 0x1206d8u: goto label_1206d8;
        case 0x1206dcu: goto label_1206dc;
        case 0x1206e0u: goto label_1206e0;
        case 0x1206e4u: goto label_1206e4;
        case 0x1206e8u: goto label_1206e8;
        case 0x1206ecu: goto label_1206ec;
        case 0x1206f0u: goto label_1206f0;
        case 0x1206f4u: goto label_1206f4;
        case 0x1206f8u: goto label_1206f8;
        case 0x1206fcu: goto label_1206fc;
        case 0x120700u: goto label_120700;
        case 0x120704u: goto label_120704;
        case 0x120708u: goto label_120708;
        case 0x12070cu: goto label_12070c;
        case 0x120710u: goto label_120710;
        case 0x120714u: goto label_120714;
        case 0x120718u: goto label_120718;
        case 0x12071cu: goto label_12071c;
        case 0x120720u: goto label_120720;
        case 0x120724u: goto label_120724;
        case 0x120728u: goto label_120728;
        case 0x12072cu: goto label_12072c;
        case 0x120730u: goto label_120730;
        case 0x120734u: goto label_120734;
        case 0x120738u: goto label_120738;
        case 0x12073cu: goto label_12073c;
        case 0x120740u: goto label_120740;
        case 0x120744u: goto label_120744;
        case 0x120748u: goto label_120748;
        case 0x12074cu: goto label_12074c;
        case 0x120750u: goto label_120750;
        case 0x120754u: goto label_120754;
        case 0x120758u: goto label_120758;
        case 0x12075cu: goto label_12075c;
        case 0x120760u: goto label_120760;
        case 0x120764u: goto label_120764;
        case 0x120768u: goto label_120768;
        case 0x12076cu: goto label_12076c;
        case 0x120770u: goto label_120770;
        case 0x120774u: goto label_120774;
        case 0x120778u: goto label_120778;
        case 0x12077cu: goto label_12077c;
        case 0x120780u: goto label_120780;
        case 0x120784u: goto label_120784;
        case 0x120788u: goto label_120788;
        case 0x12078cu: goto label_12078c;
        case 0x120790u: goto label_120790;
        case 0x120794u: goto label_120794;
        case 0x120798u: goto label_120798;
        case 0x12079cu: goto label_12079c;
        case 0x1207a0u: goto label_1207a0;
        case 0x1207a4u: goto label_1207a4;
        case 0x1207a8u: goto label_1207a8;
        case 0x1207acu: goto label_1207ac;
        case 0x1207b0u: goto label_1207b0;
        case 0x1207b4u: goto label_1207b4;
        case 0x1207b8u: goto label_1207b8;
        case 0x1207bcu: goto label_1207bc;
        case 0x1207c0u: goto label_1207c0;
        case 0x1207c4u: goto label_1207c4;
        case 0x1207c8u: goto label_1207c8;
        case 0x1207ccu: goto label_1207cc;
        case 0x1207d0u: goto label_1207d0;
        case 0x1207d4u: goto label_1207d4;
        case 0x1207d8u: goto label_1207d8;
        case 0x1207dcu: goto label_1207dc;
        case 0x1207e0u: goto label_1207e0;
        case 0x1207e4u: goto label_1207e4;
        case 0x1207e8u: goto label_1207e8;
        case 0x1207ecu: goto label_1207ec;
        case 0x1207f0u: goto label_1207f0;
        case 0x1207f4u: goto label_1207f4;
        case 0x1207f8u: goto label_1207f8;
        case 0x1207fcu: goto label_1207fc;
        case 0x120800u: goto label_120800;
        case 0x120804u: goto label_120804;
        case 0x120808u: goto label_120808;
        case 0x12080cu: goto label_12080c;
        case 0x120810u: goto label_120810;
        case 0x120814u: goto label_120814;
        case 0x120818u: goto label_120818;
        case 0x12081cu: goto label_12081c;
        case 0x120820u: goto label_120820;
        case 0x120824u: goto label_120824;
        case 0x120828u: goto label_120828;
        case 0x12082cu: goto label_12082c;
        case 0x120830u: goto label_120830;
        case 0x120834u: goto label_120834;
        case 0x120838u: goto label_120838;
        case 0x12083cu: goto label_12083c;
        case 0x120840u: goto label_120840;
        case 0x120844u: goto label_120844;
        case 0x120848u: goto label_120848;
        case 0x12084cu: goto label_12084c;
        case 0x120850u: goto label_120850;
        case 0x120854u: goto label_120854;
        case 0x120858u: goto label_120858;
        case 0x12085cu: goto label_12085c;
        case 0x120860u: goto label_120860;
        case 0x120864u: goto label_120864;
        case 0x120868u: goto label_120868;
        case 0x12086cu: goto label_12086c;
        case 0x120870u: goto label_120870;
        case 0x120874u: goto label_120874;
        case 0x120878u: goto label_120878;
        case 0x12087cu: goto label_12087c;
        case 0x120880u: goto label_120880;
        case 0x120884u: goto label_120884;
        case 0x120888u: goto label_120888;
        case 0x12088cu: goto label_12088c;
        case 0x120890u: goto label_120890;
        case 0x120894u: goto label_120894;
        case 0x120898u: goto label_120898;
        case 0x12089cu: goto label_12089c;
        case 0x1208a0u: goto label_1208a0;
        case 0x1208a4u: goto label_1208a4;
        case 0x1208a8u: goto label_1208a8;
        case 0x1208acu: goto label_1208ac;
        case 0x1208b0u: goto label_1208b0;
        case 0x1208b4u: goto label_1208b4;
        case 0x1208b8u: goto label_1208b8;
        case 0x1208bcu: goto label_1208bc;
        case 0x1208c0u: goto label_1208c0;
        case 0x1208c4u: goto label_1208c4;
        case 0x1208c8u: goto label_1208c8;
        case 0x1208ccu: goto label_1208cc;
        case 0x1208d0u: goto label_1208d0;
        case 0x1208d4u: goto label_1208d4;
        case 0x1208d8u: goto label_1208d8;
        case 0x1208dcu: goto label_1208dc;
        case 0x1208e0u: goto label_1208e0;
        case 0x1208e4u: goto label_1208e4;
        case 0x1208e8u: goto label_1208e8;
        case 0x1208ecu: goto label_1208ec;
        case 0x1208f0u: goto label_1208f0;
        case 0x1208f4u: goto label_1208f4;
        case 0x1208f8u: goto label_1208f8;
        case 0x1208fcu: goto label_1208fc;
        case 0x120900u: goto label_120900;
        case 0x120904u: goto label_120904;
        case 0x120908u: goto label_120908;
        case 0x12090cu: goto label_12090c;
        case 0x120910u: goto label_120910;
        case 0x120914u: goto label_120914;
        case 0x120918u: goto label_120918;
        case 0x12091cu: goto label_12091c;
        case 0x120920u: goto label_120920;
        case 0x120924u: goto label_120924;
        case 0x120928u: goto label_120928;
        case 0x12092cu: goto label_12092c;
        case 0x120930u: goto label_120930;
        case 0x120934u: goto label_120934;
        case 0x120938u: goto label_120938;
        case 0x12093cu: goto label_12093c;
        case 0x120940u: goto label_120940;
        case 0x120944u: goto label_120944;
        case 0x120948u: goto label_120948;
        case 0x12094cu: goto label_12094c;
        case 0x120950u: goto label_120950;
        case 0x120954u: goto label_120954;
        case 0x120958u: goto label_120958;
        case 0x12095cu: goto label_12095c;
        case 0x120960u: goto label_120960;
        case 0x120964u: goto label_120964;
        case 0x120968u: goto label_120968;
        case 0x12096cu: goto label_12096c;
        case 0x120970u: goto label_120970;
        case 0x120974u: goto label_120974;
        case 0x120978u: goto label_120978;
        case 0x12097cu: goto label_12097c;
        case 0x120980u: goto label_120980;
        case 0x120984u: goto label_120984;
        case 0x120988u: goto label_120988;
        case 0x12098cu: goto label_12098c;
        case 0x120990u: goto label_120990;
        case 0x120994u: goto label_120994;
        case 0x120998u: goto label_120998;
        case 0x12099cu: goto label_12099c;
        case 0x1209a0u: goto label_1209a0;
        case 0x1209a4u: goto label_1209a4;
        case 0x1209a8u: goto label_1209a8;
        case 0x1209acu: goto label_1209ac;
        case 0x1209b0u: goto label_1209b0;
        case 0x1209b4u: goto label_1209b4;
        case 0x1209b8u: goto label_1209b8;
        case 0x1209bcu: goto label_1209bc;
        case 0x1209c0u: goto label_1209c0;
        case 0x1209c4u: goto label_1209c4;
        case 0x1209c8u: goto label_1209c8;
        case 0x1209ccu: goto label_1209cc;
        case 0x1209d0u: goto label_1209d0;
        case 0x1209d4u: goto label_1209d4;
        case 0x1209d8u: goto label_1209d8;
        case 0x1209dcu: goto label_1209dc;
        case 0x1209e0u: goto label_1209e0;
        case 0x1209e4u: goto label_1209e4;
        case 0x1209e8u: goto label_1209e8;
        case 0x1209ecu: goto label_1209ec;
        case 0x1209f0u: goto label_1209f0;
        case 0x1209f4u: goto label_1209f4;
        case 0x1209f8u: goto label_1209f8;
        case 0x1209fcu: goto label_1209fc;
        case 0x120a00u: goto label_120a00;
        case 0x120a04u: goto label_120a04;
        case 0x120a08u: goto label_120a08;
        case 0x120a0cu: goto label_120a0c;
        case 0x120a10u: goto label_120a10;
        case 0x120a14u: goto label_120a14;
        case 0x120a18u: goto label_120a18;
        case 0x120a1cu: goto label_120a1c;
        case 0x120a20u: goto label_120a20;
        case 0x120a24u: goto label_120a24;
        case 0x120a28u: goto label_120a28;
        case 0x120a2cu: goto label_120a2c;
        case 0x120a30u: goto label_120a30;
        case 0x120a34u: goto label_120a34;
        case 0x120a38u: goto label_120a38;
        case 0x120a3cu: goto label_120a3c;
        case 0x120a40u: goto label_120a40;
        case 0x120a44u: goto label_120a44;
        case 0x120a48u: goto label_120a48;
        case 0x120a4cu: goto label_120a4c;
        case 0x120a50u: goto label_120a50;
        case 0x120a54u: goto label_120a54;
        case 0x120a58u: goto label_120a58;
        case 0x120a5cu: goto label_120a5c;
        case 0x120a60u: goto label_120a60;
        case 0x120a64u: goto label_120a64;
        case 0x120a68u: goto label_120a68;
        case 0x120a6cu: goto label_120a6c;
        case 0x120a70u: goto label_120a70;
        case 0x120a74u: goto label_120a74;
        case 0x120a78u: goto label_120a78;
        case 0x120a7cu: goto label_120a7c;
        case 0x120a80u: goto label_120a80;
        case 0x120a84u: goto label_120a84;
        case 0x120a88u: goto label_120a88;
        case 0x120a8cu: goto label_120a8c;
        case 0x120a90u: goto label_120a90;
        case 0x120a94u: goto label_120a94;
        case 0x120a98u: goto label_120a98;
        case 0x120a9cu: goto label_120a9c;
        case 0x120aa0u: goto label_120aa0;
        case 0x120aa4u: goto label_120aa4;
        case 0x120aa8u: goto label_120aa8;
        case 0x120aacu: goto label_120aac;
        case 0x120ab0u: goto label_120ab0;
        case 0x120ab4u: goto label_120ab4;
        case 0x120ab8u: goto label_120ab8;
        case 0x120abcu: goto label_120abc;
        case 0x120ac0u: goto label_120ac0;
        case 0x120ac4u: goto label_120ac4;
        case 0x120ac8u: goto label_120ac8;
        case 0x120accu: goto label_120acc;
        case 0x120ad0u: goto label_120ad0;
        case 0x120ad4u: goto label_120ad4;
        case 0x120ad8u: goto label_120ad8;
        case 0x120adcu: goto label_120adc;
        case 0x120ae0u: goto label_120ae0;
        case 0x120ae4u: goto label_120ae4;
        case 0x120ae8u: goto label_120ae8;
        case 0x120aecu: goto label_120aec;
        case 0x120af0u: goto label_120af0;
        case 0x120af4u: goto label_120af4;
        case 0x120af8u: goto label_120af8;
        case 0x120afcu: goto label_120afc;
        case 0x120b00u: goto label_120b00;
        case 0x120b04u: goto label_120b04;
        case 0x120b08u: goto label_120b08;
        case 0x120b0cu: goto label_120b0c;
        case 0x120b10u: goto label_120b10;
        case 0x120b14u: goto label_120b14;
        case 0x120b18u: goto label_120b18;
        case 0x120b1cu: goto label_120b1c;
        case 0x120b20u: goto label_120b20;
        case 0x120b24u: goto label_120b24;
        case 0x120b28u: goto label_120b28;
        case 0x120b2cu: goto label_120b2c;
        case 0x120b30u: goto label_120b30;
        case 0x120b34u: goto label_120b34;
        case 0x120b38u: goto label_120b38;
        case 0x120b3cu: goto label_120b3c;
        case 0x120b40u: goto label_120b40;
        case 0x120b44u: goto label_120b44;
        case 0x120b48u: goto label_120b48;
        case 0x120b4cu: goto label_120b4c;
        case 0x120b50u: goto label_120b50;
        case 0x120b54u: goto label_120b54;
        case 0x120b58u: goto label_120b58;
        case 0x120b5cu: goto label_120b5c;
        case 0x120b60u: goto label_120b60;
        case 0x120b64u: goto label_120b64;
        case 0x120b68u: goto label_120b68;
        case 0x120b6cu: goto label_120b6c;
        case 0x120b70u: goto label_120b70;
        case 0x120b74u: goto label_120b74;
        case 0x120b78u: goto label_120b78;
        case 0x120b7cu: goto label_120b7c;
        case 0x120b80u: goto label_120b80;
        case 0x120b84u: goto label_120b84;
        case 0x120b88u: goto label_120b88;
        case 0x120b8cu: goto label_120b8c;
        case 0x120b90u: goto label_120b90;
        case 0x120b94u: goto label_120b94;
        case 0x120b98u: goto label_120b98;
        case 0x120b9cu: goto label_120b9c;
        case 0x120ba0u: goto label_120ba0;
        case 0x120ba4u: goto label_120ba4;
        case 0x120ba8u: goto label_120ba8;
        case 0x120bacu: goto label_120bac;
        case 0x120bb0u: goto label_120bb0;
        case 0x120bb4u: goto label_120bb4;
        case 0x120bb8u: goto label_120bb8;
        case 0x120bbcu: goto label_120bbc;
        default: break;
    }

    ctx->pc = 0x1206b0u;

label_1206b0:
    // 0x1206b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1206b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1206b4:
    // 0x1206b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1206b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1206b8:
    // 0x1206b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1206b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1206bc:
    // 0x1206bc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1206bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1206c0:
    // 0x1206c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1206c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1206c4:
    // 0x1206c4: 0xc047ae8  jal         func_11EBA0
label_1206c8:
    if (ctx->pc == 0x1206C8u) {
        ctx->pc = 0x1206CCu;
        goto label_1206cc;
    }
    ctx->pc = 0x1206C4u;
    SET_GPR_U32(ctx, 31, 0x1206CCu);
    ctx->pc = 0x11EBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBA0u, 0x1206C4u, 0x1206CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1206CCu;
label_1206cc:
    // 0x1206cc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1206ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1206d0:
    // 0x1206d0: 0x24633590  addiu       $v1, $v1, 0x3590
    ctx->pc = 0x1206d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13712));
label_1206d4:
    // 0x1206d4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1206d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1206d8:
    // 0x1206d8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1206d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1206dc:
    // 0x1206dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1206dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1206e0:
    // 0x1206e0: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x1206e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
label_1206e4:
    // 0x1206e4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1206e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1206e8:
    // 0x1206e8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1206e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1206ec:
    // 0x1206ec: 0x24a51f98  addiu       $a1, $a1, 0x1F98
    ctx->pc = 0x1206ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8088));
label_1206f0:
    // 0x1206f0: 0xc04322c  jal         func_10C8B0
label_1206f4:
    if (ctx->pc == 0x1206F4u) {
        ctx->pc = 0x1206F8u;
        goto label_1206f8;
    }
    ctx->pc = 0x1206F0u;
    SET_GPR_U32(ctx, 31, 0x1206F8u);
    ctx->pc = 0x10C8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C8B0u, 0x1206F0u, 0x1206F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1206F8u;
label_1206f8:
    // 0x1206f8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1206f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1206fc:
    // 0x1206fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1206fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_120700:
    // 0x120700: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x120700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_120704:
    // 0x120704: 0x3e00008  jr          $ra
label_120708:
    if (ctx->pc == 0x120708u) {
        ctx->pc = 0x12070Cu;
        goto label_12070c;
    }
    ctx->pc = 0x120704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12070Cu;
label_12070c:
    // 0x12070c: 0x0  nop
    ctx->pc = 0x12070cu;
    // NOP
label_120710:
    // 0x120710: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x120710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_120714:
    // 0x120714: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x120714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_120718:
    // 0x120718: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x120718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_12071c:
    // 0x12071c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x12071cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
label_120720:
    // 0x120720: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x120720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_120724:
    // 0x120724: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_120728:
    if (ctx->pc == 0x120728u) {
        ctx->pc = 0x12072Cu;
        goto label_12072c;
    }
    ctx->pc = 0x120724u;
    {
        const bool branch_taken_0x120724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x120724) {
            ctx->pc = 0x12076Cu;
            goto label_12076c;
        }
    }
    ctx->pc = 0x12072Cu;
label_12072c:
    // 0x12072c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x12072cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_120730:
    // 0x120730: 0x24633590  addiu       $v1, $v1, 0x3590
    ctx->pc = 0x120730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13712));
label_120734:
    // 0x120734: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x120734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_120738:
    // 0x120738: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x120738u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_12073c:
    // 0x12073c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x12073cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_120740:
    // 0x120740: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x120740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_120744:
    // 0x120744: 0xc047b00  jal         func_11EC00
label_120748:
    if (ctx->pc == 0x120748u) {
        ctx->pc = 0x12074Cu;
        goto label_12074c;
    }
    ctx->pc = 0x120744u;
    SET_GPR_U32(ctx, 31, 0x12074Cu);
    ctx->pc = 0x11EC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EC00u, 0x120744u, 0x12074Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12074Cu;
label_12074c:
    // 0x12074c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x12074cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_120750:
    // 0x120750: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x120750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_120754:
    // 0x120754: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x120754u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_120758:
    // 0x120758: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_12075c:
    if (ctx->pc == 0x12075Cu) {
        ctx->pc = 0x120760u;
        goto label_120760;
    }
    ctx->pc = 0x120758u;
    {
        const bool branch_taken_0x120758 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x120758) {
            ctx->pc = 0x12076Cu;
            goto label_12076c;
        }
    }
    ctx->pc = 0x120760u;
label_120760:
    // 0x120760: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x120760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_120764:
    // 0x120764: 0xc0ba070  jal         func_2E81C0
label_120768:
    if (ctx->pc == 0x120768u) {
        ctx->pc = 0x12076Cu;
        goto label_12076c;
    }
    ctx->pc = 0x120764u;
    SET_GPR_U32(ctx, 31, 0x12076Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x120764u, 0x12076Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12076Cu;
label_12076c:
    // 0x12076c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x12076cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_120770:
    // 0x120770: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x120770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_120774:
    // 0x120774: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x120774u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_120778:
    // 0x120778: 0x3e00008  jr          $ra
label_12077c:
    if (ctx->pc == 0x12077Cu) {
        ctx->pc = 0x120780u;
        goto label_120780;
    }
    ctx->pc = 0x120778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x120780u;
label_120780:
    // 0x120780: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x120780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_120784:
    // 0x120784: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x120784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_120788:
    // 0x120788: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x120788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_12078c:
    // 0x12078c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x12078cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_120790:
    // 0x120790: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x120790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_120794:
    // 0x120794: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x120794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_120798:
    // 0x120798: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x120798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_12079c:
    // 0x12079c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x12079cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1207a0:
    // 0x1207a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1207a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1207a4:
    // 0x1207a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1207a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1207a8:
    // 0x1207a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1207a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1207ac:
    // 0x1207ac: 0xafa400c0  sw          $a0, 0xC0($sp)
    ctx->pc = 0x1207acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 4));
label_1207b0:
    // 0x1207b0: 0xa3a500d0  sb          $a1, 0xD0($sp)
    ctx->pc = 0x1207b0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 208), (uint8_t)GPR_U32(ctx, 5));
label_1207b4:
    // 0x1207b4: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x1207b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1207b8:
    // 0x1207b8: 0x93a500d0  lbu         $a1, 0xD0($sp)
    ctx->pc = 0x1207b8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 208)));
label_1207bc:
    // 0x1207bc: 0xc047b1c  jal         func_11EC70
label_1207c0:
    if (ctx->pc == 0x1207C0u) {
        ctx->pc = 0x1207C4u;
        goto label_1207c4;
    }
    ctx->pc = 0x1207BCu;
    SET_GPR_U32(ctx, 31, 0x1207C4u);
    ctx->pc = 0x11EC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EC70u, 0x1207BCu, 0x1207C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1207C4u;
label_1207c4:
    // 0x1207c4: 0x8f84b9dc  lw          $a0, -0x4624($gp)
    ctx->pc = 0x1207c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949340)));
label_1207c8:
    // 0x1207c8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1207c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1207cc:
    // 0x1207cc: 0xc0553d4  jal         func_154F50
label_1207d0:
    if (ctx->pc == 0x1207D0u) {
        ctx->pc = 0x1207D4u;
        goto label_1207d4;
    }
    ctx->pc = 0x1207CCu;
    SET_GPR_U32(ctx, 31, 0x1207D4u);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x1207CCu, 0x1207D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1207D4u;
label_1207d4:
    // 0x1207d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1207d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1207d8:
    // 0x1207d8: 0x93a500d0  lbu         $a1, 0xD0($sp)
    ctx->pc = 0x1207d8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 208)));
label_1207dc:
    // 0x1207dc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1207dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1207e0:
    // 0x1207e0: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1207e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1207e4:
    // 0x1207e4: 0x320f809  jalr        $t9
label_1207e8:
    if (ctx->pc == 0x1207E8u) {
        ctx->pc = 0x1207ECu;
        goto label_1207ec;
    }
    ctx->pc = 0x1207E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1207ECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1207E4u, 0x1207ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1207ECu;
label_1207ec:
    // 0x1207ec: 0x8f84b9dc  lw          $a0, -0x4624($gp)
    ctx->pc = 0x1207ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949340)));
label_1207f0:
    // 0x1207f0: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x1207f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_1207f4:
    // 0x1207f4: 0xc0553d4  jal         func_154F50
label_1207f8:
    if (ctx->pc == 0x1207F8u) {
        ctx->pc = 0x1207FCu;
        goto label_1207fc;
    }
    ctx->pc = 0x1207F4u;
    SET_GPR_U32(ctx, 31, 0x1207FCu);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x1207F4u, 0x1207FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1207FCu;
label_1207fc:
    // 0x1207fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1207fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_120800:
    // 0x120800: 0x93a500d0  lbu         $a1, 0xD0($sp)
    ctx->pc = 0x120800u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 208)));
label_120804:
    // 0x120804: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x120804u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_120808:
    // 0x120808: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x120808u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_12080c:
    // 0x12080c: 0x320f809  jalr        $t9
label_120810:
    if (ctx->pc == 0x120810u) {
        ctx->pc = 0x120814u;
        goto label_120814;
    }
    ctx->pc = 0x12080Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x120814u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12080Cu, 0x120814u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x120814u;
label_120814:
    // 0x120814: 0x8f84b9dc  lw          $a0, -0x4624($gp)
    ctx->pc = 0x120814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949340)));
label_120818:
    // 0x120818: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x120818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_12081c:
    // 0x12081c: 0xc0553d4  jal         func_154F50
label_120820:
    if (ctx->pc == 0x120820u) {
        ctx->pc = 0x120824u;
        goto label_120824;
    }
    ctx->pc = 0x12081Cu;
    SET_GPR_U32(ctx, 31, 0x120824u);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x12081Cu, 0x120824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120824u;
label_120824:
    // 0x120824: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x120824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_120828:
    // 0x120828: 0x93a500d0  lbu         $a1, 0xD0($sp)
    ctx->pc = 0x120828u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 208)));
label_12082c:
    // 0x12082c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x12082cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_120830:
    // 0x120830: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x120830u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_120834:
    // 0x120834: 0x320f809  jalr        $t9
label_120838:
    if (ctx->pc == 0x120838u) {
        ctx->pc = 0x12083Cu;
        goto label_12083c;
    }
    ctx->pc = 0x120834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x12083Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120834u, 0x12083Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12083Cu;
label_12083c:
    // 0x12083c: 0x8f84b9dc  lw          $a0, -0x4624($gp)
    ctx->pc = 0x12083cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949340)));
label_120840:
    // 0x120840: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x120840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_120844:
    // 0x120844: 0xc0553d4  jal         func_154F50
label_120848:
    if (ctx->pc == 0x120848u) {
        ctx->pc = 0x12084Cu;
        goto label_12084c;
    }
    ctx->pc = 0x120844u;
    SET_GPR_U32(ctx, 31, 0x12084Cu);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x120844u, 0x12084Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12084Cu;
label_12084c:
    // 0x12084c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12084cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_120850:
    // 0x120850: 0x93a500d0  lbu         $a1, 0xD0($sp)
    ctx->pc = 0x120850u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 208)));
label_120854:
    // 0x120854: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x120854u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_120858:
    // 0x120858: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x120858u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_12085c:
    // 0x12085c: 0x320f809  jalr        $t9
label_120860:
    if (ctx->pc == 0x120860u) {
        ctx->pc = 0x120864u;
        goto label_120864;
    }
    ctx->pc = 0x12085Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x120864u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12085Cu, 0x120864u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x120864u;
label_120864:
    // 0x120864: 0x8f84b9dc  lw          $a0, -0x4624($gp)
    ctx->pc = 0x120864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949340)));
label_120868:
    // 0x120868: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x120868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_12086c:
    // 0x12086c: 0xc0553d4  jal         func_154F50
label_120870:
    if (ctx->pc == 0x120870u) {
        ctx->pc = 0x120874u;
        goto label_120874;
    }
    ctx->pc = 0x12086Cu;
    SET_GPR_U32(ctx, 31, 0x120874u);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x12086Cu, 0x120874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120874u;
label_120874:
    // 0x120874: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x120874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_120878:
    // 0x120878: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x120878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12087c:
    // 0x12087c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x12087cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_120880:
    // 0x120880: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x120880u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_120884:
    // 0x120884: 0x320f809  jalr        $t9
label_120888:
    if (ctx->pc == 0x120888u) {
        ctx->pc = 0x12088Cu;
        goto label_12088c;
    }
    ctx->pc = 0x120884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x12088Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120884u, 0x12088Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12088Cu;
label_12088c:
    // 0x12088c: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x12088cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_120890:
    // 0x120890: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x120890u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_120894:
    // 0x120894: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x120894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_120898:
    // 0x120898: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x120898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_12089c:
    // 0x12089c: 0xc085538  jal         func_2154E0
label_1208a0:
    if (ctx->pc == 0x1208A0u) {
        ctx->pc = 0x1208A4u;
        goto label_1208a4;
    }
    ctx->pc = 0x12089Cu;
    SET_GPR_U32(ctx, 31, 0x1208A4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x12089Cu, 0x1208A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1208A4u;
label_1208a4:
    // 0x1208a4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1208a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1208a8:
    // 0x1208a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1208a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1208ac:
    // 0x1208ac: 0xc096880  jal         func_25A200
label_1208b0:
    if (ctx->pc == 0x1208B0u) {
        ctx->pc = 0x1208B4u;
        goto label_1208b4;
    }
    ctx->pc = 0x1208ACu;
    SET_GPR_U32(ctx, 31, 0x1208B4u);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x1208ACu, 0x1208B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1208B4u;
label_1208b4:
    // 0x1208b4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1208b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1208b8:
    // 0x1208b8: 0x10130003  beq         $zero, $s3, . + 4 + (0x3 << 2)
label_1208bc:
    if (ctx->pc == 0x1208BCu) {
        ctx->pc = 0x1208C0u;
        goto label_1208c0;
    }
    ctx->pc = 0x1208B8u;
    {
        const bool branch_taken_0x1208b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 19));
        if (branch_taken_0x1208b8) {
            ctx->pc = 0x1208C8u;
            goto label_1208c8;
        }
    }
    ctx->pc = 0x1208C0u;
label_1208c0:
    // 0x1208c0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1208c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1208c4:
    // 0x1208c4: 0xac53003c  sw          $s3, 0x3C($v0)
    ctx->pc = 0x1208c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 19));
label_1208c8:
    // 0x1208c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1208c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1208cc:
    // 0x1208cc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1208ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1208d0:
    // 0x1208d0: 0xc085538  jal         func_2154E0
label_1208d4:
    if (ctx->pc == 0x1208D4u) {
        ctx->pc = 0x1208D8u;
        goto label_1208d8;
    }
    ctx->pc = 0x1208D0u;
    SET_GPR_U32(ctx, 31, 0x1208D8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1208D0u, 0x1208D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1208D8u;
label_1208d8:
    // 0x1208d8: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x1208d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
label_1208dc:
    // 0x1208dc: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1208dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1208e0:
    // 0x1208e0: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x1208e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1208e4:
    // 0x1208e4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1208e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1208e8:
    // 0x1208e8: 0xc085538  jal         func_2154E0
label_1208ec:
    if (ctx->pc == 0x1208ECu) {
        ctx->pc = 0x1208F0u;
        goto label_1208f0;
    }
    ctx->pc = 0x1208E8u;
    SET_GPR_U32(ctx, 31, 0x1208F0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1208E8u, 0x1208F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1208F0u;
label_1208f0:
    // 0x1208f0: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x1208f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
label_1208f4:
    // 0x1208f4: 0x93a200d0  lbu         $v0, 0xD0($sp)
    ctx->pc = 0x1208f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 208)));
label_1208f8:
    // 0x1208f8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1208f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1208fc:
    // 0x1208fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1208fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_120900:
    // 0x120900: 0x1462004a  bne         $v1, $v0, . + 4 + (0x4A << 2)
label_120904:
    if (ctx->pc == 0x120904u) {
        ctx->pc = 0x120908u;
        goto label_120908;
    }
    ctx->pc = 0x120900u;
    {
        const bool branch_taken_0x120900 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x120900) {
            ctx->pc = 0x120A2Cu;
            goto label_120a2c;
        }
    }
    ctx->pc = 0x120908u;
label_120908:
    // 0x120908: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x120908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_12090c:
    // 0x12090c: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x12090cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_120910:
    // 0x120910: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x120910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_120914:
    // 0x120914: 0xc085538  jal         func_2154E0
label_120918:
    if (ctx->pc == 0x120918u) {
        ctx->pc = 0x12091Cu;
        goto label_12091c;
    }
    ctx->pc = 0x120914u;
    SET_GPR_U32(ctx, 31, 0x12091Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x120914u, 0x12091Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12091Cu;
label_12091c:
    // 0x12091c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12091cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_120920:
    // 0x120920: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x120920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_120924:
    // 0x120924: 0xc0480fc  jal         func_1203F0
label_120928:
    if (ctx->pc == 0x120928u) {
        ctx->pc = 0x12092Cu;
        goto label_12092c;
    }
    ctx->pc = 0x120924u;
    SET_GPR_U32(ctx, 31, 0x12092Cu);
    ctx->pc = 0x1203F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203F0u, 0x120924u, 0x12092Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12092Cu;
label_12092c:
    // 0x12092c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x12092cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_120930:
    // 0x120930: 0x1443003e  bne         $v0, $v1, . + 4 + (0x3E << 2)
label_120934:
    if (ctx->pc == 0x120934u) {
        ctx->pc = 0x120938u;
        goto label_120938;
    }
    ctx->pc = 0x120930u;
    {
        const bool branch_taken_0x120930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x120930) {
            ctx->pc = 0x120A2Cu;
            goto label_120a2c;
        }
    }
    ctx->pc = 0x120938u;
label_120938:
    // 0x120938: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x120938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_12093c:
    // 0x12093c: 0xc0480fc  jal         func_1203F0
label_120940:
    if (ctx->pc == 0x120940u) {
        ctx->pc = 0x120944u;
        goto label_120944;
    }
    ctx->pc = 0x12093Cu;
    SET_GPR_U32(ctx, 31, 0x120944u);
    ctx->pc = 0x1203F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203F0u, 0x12093Cu, 0x120944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120944u;
label_120944:
    // 0x120944: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x120944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_120948:
    // 0x120948: 0x14430038  bne         $v0, $v1, . + 4 + (0x38 << 2)
label_12094c:
    if (ctx->pc == 0x12094Cu) {
        ctx->pc = 0x120950u;
        goto label_120950;
    }
    ctx->pc = 0x120948u;
    {
        const bool branch_taken_0x120948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x120948) {
            ctx->pc = 0x120A2Cu;
            goto label_120a2c;
        }
    }
    ctx->pc = 0x120950u;
label_120950:
    // 0x120950: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x120950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_120954:
    // 0x120954: 0xc0968a8  jal         func_25A2A0
label_120958:
    if (ctx->pc == 0x120958u) {
        ctx->pc = 0x12095Cu;
        goto label_12095c;
    }
    ctx->pc = 0x120954u;
    SET_GPR_U32(ctx, 31, 0x12095Cu);
    ctx->pc = 0x25A2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A2A0u, 0x120954u, 0x12095Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12095Cu;
label_12095c:
    // 0x12095c: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x12095cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
label_120960:
    // 0x120960: 0x8fa400b4  lw          $a0, 0xB4($sp)
    ctx->pc = 0x120960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_120964:
    // 0x120964: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x120964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_120968:
    // 0x120968: 0xc085538  jal         func_2154E0
label_12096c:
    if (ctx->pc == 0x12096Cu) {
        ctx->pc = 0x120970u;
        goto label_120970;
    }
    ctx->pc = 0x120968u;
    SET_GPR_U32(ctx, 31, 0x120970u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x120968u, 0x120970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120970u;
label_120970:
    // 0x120970: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x120970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_120974:
    // 0x120974: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x120974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_120978:
    // 0x120978: 0xc0482f0  jal         func_120BC0
label_12097c:
    if (ctx->pc == 0x12097Cu) {
        ctx->pc = 0x120980u;
        goto label_120980;
    }
    ctx->pc = 0x120978u;
    SET_GPR_U32(ctx, 31, 0x120980u);
    ctx->pc = 0x120BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120BC0u, 0x120978u, 0x120980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120980u;
label_120980:
    // 0x120980: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_120984:
    if (ctx->pc == 0x120984u) {
        ctx->pc = 0x120988u;
        goto label_120988;
    }
    ctx->pc = 0x120980u;
    {
        const bool branch_taken_0x120980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x120980) {
            ctx->pc = 0x120A2Cu;
            goto label_120a2c;
        }
    }
    ctx->pc = 0x120988u;
label_120988:
    // 0x120988: 0xc08ef64  jal         func_23BD90
label_12098c:
    if (ctx->pc == 0x12098Cu) {
        ctx->pc = 0x120990u;
        goto label_120990;
    }
    ctx->pc = 0x120988u;
    SET_GPR_U32(ctx, 31, 0x120990u);
    ctx->pc = 0x23BD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BD90u, 0x120988u, 0x120990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120990u;
label_120990:
    // 0x120990: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x120990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_120994:
    // 0x120994: 0xc0406f0  jal         func_101BC0
label_120998:
    if (ctx->pc == 0x120998u) {
        ctx->pc = 0x12099Cu;
        goto label_12099c;
    }
    ctx->pc = 0x120994u;
    SET_GPR_U32(ctx, 31, 0x12099Cu);
    ctx->pc = 0x101BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101BC0u, 0x120994u, 0x12099Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12099Cu;
label_12099c:
    // 0x12099c: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
label_1209a0:
    if (ctx->pc == 0x1209A0u) {
        ctx->pc = 0x1209A4u;
        goto label_1209a4;
    }
    ctx->pc = 0x12099Cu;
    {
        const bool branch_taken_0x12099c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12099c) {
            ctx->pc = 0x120A2Cu;
            goto label_120a2c;
        }
    }
    ctx->pc = 0x1209A4u;
label_1209a4:
    // 0x1209a4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1209a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1209a8:
    // 0x1209a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1209a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1209ac:
    // 0x1209ac: 0x8c45003c  lw          $a1, 0x3C($v0)
    ctx->pc = 0x1209acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1209b0:
    // 0x1209b0: 0xc0a6e84  jal         func_29BA10
label_1209b4:
    if (ctx->pc == 0x1209B4u) {
        ctx->pc = 0x1209B8u;
        goto label_1209b8;
    }
    ctx->pc = 0x1209B0u;
    SET_GPR_U32(ctx, 31, 0x1209B8u);
    ctx->pc = 0x29BA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29BA10u, 0x1209B0u, 0x1209B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1209B8u;
label_1209b8:
    // 0x1209b8: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x1209b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_1209bc:
    // 0x1209bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1209bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1209c0:
    // 0x1209c0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1209c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1209c4:
    // 0x1209c4: 0xc085538  jal         func_2154E0
label_1209c8:
    if (ctx->pc == 0x1209C8u) {
        ctx->pc = 0x1209CCu;
        goto label_1209cc;
    }
    ctx->pc = 0x1209C4u;
    SET_GPR_U32(ctx, 31, 0x1209CCu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1209C4u, 0x1209CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1209CCu;
label_1209cc:
    // 0x1209cc: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x1209ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
label_1209d0:
    // 0x1209d0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1209d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1209d4:
    // 0x1209d4: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x1209d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1209d8:
    // 0x1209d8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1209d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1209dc:
    // 0x1209dc: 0xc085538  jal         func_2154E0
label_1209e0:
    if (ctx->pc == 0x1209E0u) {
        ctx->pc = 0x1209E4u;
        goto label_1209e4;
    }
    ctx->pc = 0x1209DCu;
    SET_GPR_U32(ctx, 31, 0x1209E4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1209DCu, 0x1209E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1209E4u;
label_1209e4:
    // 0x1209e4: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1209e4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1209e8:
    // 0x1209e8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1209e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_1209ec:
    // 0x1209ec: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1209ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1209f0:
    // 0x1209f0: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x1209f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_1209f4:
    // 0x1209f4: 0xc7ac00ac  lwc1        $f12, 0xAC($sp)
    ctx->pc = 0x1209f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1209f8:
    // 0x1209f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1209f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1209fc:
    // 0x1209fc: 0xc090fe0  jal         func_243F80
label_120a00:
    if (ctx->pc == 0x120A00u) {
        ctx->pc = 0x120A04u;
        goto label_120a04;
    }
    ctx->pc = 0x1209FCu;
    SET_GPR_U32(ctx, 31, 0x120A04u);
    ctx->pc = 0x243F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243F80u, 0x1209FCu, 0x120A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120A04u;
label_120a04:
    // 0x120a04: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x120a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_120a08:
    // 0x120a08: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x120a08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_120a0c:
    // 0x120a0c: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x120a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_120a10:
    // 0x120a10: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x120a10u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_120a14:
    // 0x120a14: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x120a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_120a18:
    // 0x120a18: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x120a18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_120a1c:
    // 0x120a1c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x120a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_120a20:
    // 0x120a20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x120a20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_120a24:
    // 0x120a24: 0xc090fe0  jal         func_243F80
label_120a28:
    if (ctx->pc == 0x120A28u) {
        ctx->pc = 0x120A2Cu;
        goto label_120a2c;
    }
    ctx->pc = 0x120A24u;
    SET_GPR_U32(ctx, 31, 0x120A2Cu);
    ctx->pc = 0x243F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243F80u, 0x120A24u, 0x120A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120A2Cu;
label_120a2c:
    // 0x120a2c: 0x8f84b9dc  lw          $a0, -0x4624($gp)
    ctx->pc = 0x120a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949340)));
label_120a30:
    // 0x120a30: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x120a30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_120a34:
    // 0x120a34: 0xc0553d4  jal         func_154F50
label_120a38:
    if (ctx->pc == 0x120A38u) {
        ctx->pc = 0x120A3Cu;
        goto label_120a3c;
    }
    ctx->pc = 0x120A34u;
    SET_GPR_U32(ctx, 31, 0x120A3Cu);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x120A34u, 0x120A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120A3Cu;
label_120a3c:
    // 0x120a3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x120a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_120a40:
    // 0x120a40: 0x93a500d0  lbu         $a1, 0xD0($sp)
    ctx->pc = 0x120a40u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 208)));
label_120a44:
    // 0x120a44: 0xc05f7ec  jal         func_17DFB0
label_120a48:
    if (ctx->pc == 0x120A48u) {
        ctx->pc = 0x120A4Cu;
        goto label_120a4c;
    }
    ctx->pc = 0x120A44u;
    SET_GPR_U32(ctx, 31, 0x120A4Cu);
    ctx->pc = 0x17DFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17DFB0u, 0x120A44u, 0x120A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120A4Cu;
label_120a4c:
    // 0x120a4c: 0x8f84b9dc  lw          $a0, -0x4624($gp)
    ctx->pc = 0x120a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949340)));
label_120a50:
    // 0x120a50: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x120a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_120a54:
    // 0x120a54: 0xc0553d4  jal         func_154F50
label_120a58:
    if (ctx->pc == 0x120A58u) {
        ctx->pc = 0x120A5Cu;
        goto label_120a5c;
    }
    ctx->pc = 0x120A54u;
    SET_GPR_U32(ctx, 31, 0x120A5Cu);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x120A54u, 0x120A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120A5Cu;
label_120a5c:
    // 0x120a5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x120a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_120a60:
    // 0x120a60: 0x93a500d0  lbu         $a1, 0xD0($sp)
    ctx->pc = 0x120a60u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 208)));
label_120a64:
    // 0x120a64: 0xc05d68c  jal         func_175A30
label_120a68:
    if (ctx->pc == 0x120A68u) {
        ctx->pc = 0x120A6Cu;
        goto label_120a6c;
    }
    ctx->pc = 0x120A64u;
    SET_GPR_U32(ctx, 31, 0x120A6Cu);
    ctx->pc = 0x175A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175A30u, 0x120A64u, 0x120A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120A6Cu;
label_120a6c:
    // 0x120a6c: 0x8f84b9dc  lw          $a0, -0x4624($gp)
    ctx->pc = 0x120a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949340)));
label_120a70:
    // 0x120a70: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x120a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_120a74:
    // 0x120a74: 0xc0553d4  jal         func_154F50
label_120a78:
    if (ctx->pc == 0x120A78u) {
        ctx->pc = 0x120A7Cu;
        goto label_120a7c;
    }
    ctx->pc = 0x120A74u;
    SET_GPR_U32(ctx, 31, 0x120A7Cu);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x120A74u, 0x120A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120A7Cu;
label_120a7c:
    // 0x120a7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x120a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_120a80:
    // 0x120a80: 0x93a500d0  lbu         $a1, 0xD0($sp)
    ctx->pc = 0x120a80u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 208)));
label_120a84:
    // 0x120a84: 0xc056aa0  jal         func_15AA80
label_120a88:
    if (ctx->pc == 0x120A88u) {
        ctx->pc = 0x120A8Cu;
        goto label_120a8c;
    }
    ctx->pc = 0x120A84u;
    SET_GPR_U32(ctx, 31, 0x120A8Cu);
    ctx->pc = 0x15AA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15AA80u, 0x120A84u, 0x120A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120A8Cu;
label_120a8c:
    // 0x120a8c: 0x93a200d0  lbu         $v0, 0xD0($sp)
    ctx->pc = 0x120a8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 208)));
label_120a90:
    // 0x120a90: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x120a90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_120a94:
    // 0x120a94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x120a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_120a98:
    // 0x120a98: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_120a9c:
    if (ctx->pc == 0x120A9Cu) {
        ctx->pc = 0x120AA0u;
        goto label_120aa0;
    }
    ctx->pc = 0x120A98u;
    {
        const bool branch_taken_0x120a98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x120a98) {
            ctx->pc = 0x120AD8u;
            goto label_120ad8;
        }
    }
    ctx->pc = 0x120AA0u;
label_120aa0:
    // 0x120aa0: 0x8f82b9e0  lw          $v0, -0x4620($gp)
    ctx->pc = 0x120aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949344)));
label_120aa4:
    // 0x120aa4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_120aa8:
    if (ctx->pc == 0x120AA8u) {
        ctx->pc = 0x120AACu;
        goto label_120aac;
    }
    ctx->pc = 0x120AA4u;
    {
        const bool branch_taken_0x120aa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x120aa4) {
            ctx->pc = 0x120AD8u;
            goto label_120ad8;
        }
    }
    ctx->pc = 0x120AACu;
label_120aac:
    // 0x120aac: 0x8f84ba7c  lw          $a0, -0x4584($gp)
    ctx->pc = 0x120aacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949500)));
label_120ab0:
    // 0x120ab0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x120ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_120ab4:
    // 0x120ab4: 0xc04fbd0  jal         func_13EF40
label_120ab8:
    if (ctx->pc == 0x120AB8u) {
        ctx->pc = 0x120ABCu;
        goto label_120abc;
    }
    ctx->pc = 0x120AB4u;
    SET_GPR_U32(ctx, 31, 0x120ABCu);
    ctx->pc = 0x13EF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EF40u, 0x120AB4u, 0x120ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120ABCu;
label_120abc:
    // 0x120abc: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x120abcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_120ac0:
    // 0x120ac0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x120ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_120ac4:
    // 0x120ac4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x120ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_120ac8:
    // 0x120ac8: 0xc04cf14  jal         func_133C50
label_120acc:
    if (ctx->pc == 0x120ACCu) {
        ctx->pc = 0x120AD0u;
        goto label_120ad0;
    }
    ctx->pc = 0x120AC8u;
    SET_GPR_U32(ctx, 31, 0x120AD0u);
    ctx->pc = 0x133C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133C50u, 0x120AC8u, 0x120AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120AD0u;
label_120ad0:
    // 0x120ad0: 0x10000009  b           . + 4 + (0x9 << 2)
label_120ad4:
    if (ctx->pc == 0x120AD4u) {
        ctx->pc = 0x120AD8u;
        goto label_120ad8;
    }
    ctx->pc = 0x120AD0u;
    {
        const bool branch_taken_0x120ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x120ad0) {
            ctx->pc = 0x120AF8u;
            goto label_120af8;
        }
    }
    ctx->pc = 0x120AD8u;
label_120ad8:
    // 0x120ad8: 0x8f84ba7c  lw          $a0, -0x4584($gp)
    ctx->pc = 0x120ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949500)));
label_120adc:
    // 0x120adc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x120adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_120ae0:
    // 0x120ae0: 0xc04fbd0  jal         func_13EF40
label_120ae4:
    if (ctx->pc == 0x120AE4u) {
        ctx->pc = 0x120AE8u;
        goto label_120ae8;
    }
    ctx->pc = 0x120AE0u;
    SET_GPR_U32(ctx, 31, 0x120AE8u);
    ctx->pc = 0x13EF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EF40u, 0x120AE0u, 0x120AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120AE8u;
label_120ae8:
    // 0x120ae8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x120ae8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_120aec:
    // 0x120aec: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x120aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_120af0:
    // 0x120af0: 0xc04d050  jal         func_134140
label_120af4:
    if (ctx->pc == 0x120AF4u) {
        ctx->pc = 0x120AF8u;
        goto label_120af8;
    }
    ctx->pc = 0x120AF0u;
    SET_GPR_U32(ctx, 31, 0x120AF8u);
    ctx->pc = 0x134140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134140u, 0x120AF0u, 0x120AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120AF8u;
label_120af8:
    // 0x120af8: 0x93a300d0  lbu         $v1, 0xD0($sp)
    ctx->pc = 0x120af8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 208)));
label_120afc:
    // 0x120afc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x120afcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_120b00:
    // 0x120b00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x120b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_120b04:
    // 0x120b04: 0x14830021  bne         $a0, $v1, . + 4 + (0x21 << 2)
label_120b08:
    if (ctx->pc == 0x120B08u) {
        ctx->pc = 0x120B0Cu;
        goto label_120b0c;
    }
    ctx->pc = 0x120B04u;
    {
        const bool branch_taken_0x120b04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x120b04) {
            ctx->pc = 0x120B8Cu;
            goto label_120b8c;
        }
    }
    ctx->pc = 0x120B0Cu;
label_120b0c:
    // 0x120b0c: 0x8f84b9d8  lw          $a0, -0x4628($gp)
    ctx->pc = 0x120b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949336)));
label_120b10:
    // 0x120b10: 0xc050c64  jal         func_143190
label_120b14:
    if (ctx->pc == 0x120B14u) {
        ctx->pc = 0x120B18u;
        goto label_120b18;
    }
    ctx->pc = 0x120B10u;
    SET_GPR_U32(ctx, 31, 0x120B18u);
    ctx->pc = 0x143190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143190u, 0x120B10u, 0x120B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120B18u;
label_120b18:
    // 0x120b18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x120b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_120b1c:
    // 0x120b1c: 0xc04738c  jal         func_11CE30
label_120b20:
    if (ctx->pc == 0x120B20u) {
        ctx->pc = 0x120B24u;
        goto label_120b24;
    }
    ctx->pc = 0x120B1Cu;
    SET_GPR_U32(ctx, 31, 0x120B24u);
    ctx->pc = 0x11CE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CE30u, 0x120B1Cu, 0x120B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120B24u;
label_120b24:
    // 0x120b24: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x120b24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_120b28:
    // 0x120b28: 0x8f84b9d8  lw          $a0, -0x4628($gp)
    ctx->pc = 0x120b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949336)));
label_120b2c:
    // 0x120b2c: 0xc050c5c  jal         func_143170
label_120b30:
    if (ctx->pc == 0x120B30u) {
        ctx->pc = 0x120B34u;
        goto label_120b34;
    }
    ctx->pc = 0x120B2Cu;
    SET_GPR_U32(ctx, 31, 0x120B34u);
    ctx->pc = 0x143170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143170u, 0x120B2Cu, 0x120B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120B34u;
label_120b34:
    // 0x120b34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x120b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_120b38:
    // 0x120b38: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x120b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_120b3c:
    // 0x120b3c: 0xc04fbd0  jal         func_13EF40
label_120b40:
    if (ctx->pc == 0x120B40u) {
        ctx->pc = 0x120B44u;
        goto label_120b44;
    }
    ctx->pc = 0x120B3Cu;
    SET_GPR_U32(ctx, 31, 0x120B44u);
    ctx->pc = 0x13EF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EF40u, 0x120B3Cu, 0x120B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120B44u;
label_120b44:
    // 0x120b44: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x120b44u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_120b48:
    // 0x120b48: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x120b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_120b4c:
    // 0x120b4c: 0xc04e308  jal         func_138C20
label_120b50:
    if (ctx->pc == 0x120B50u) {
        ctx->pc = 0x120B54u;
        goto label_120b54;
    }
    ctx->pc = 0x120B4Cu;
    SET_GPR_U32(ctx, 31, 0x120B54u);
    ctx->pc = 0x138C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138C20u, 0x120B4Cu, 0x120B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120B54u;
label_120b54:
    // 0x120b54: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x120b54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_120b58:
    // 0x120b58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x120b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_120b5c:
    // 0x120b5c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_120b60:
    if (ctx->pc == 0x120B60u) {
        ctx->pc = 0x120B64u;
        goto label_120b64;
    }
    ctx->pc = 0x120B5Cu;
    {
        const bool branch_taken_0x120b5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x120b5c) {
            ctx->pc = 0x120B7Cu;
            goto label_120b7c;
        }
    }
    ctx->pc = 0x120B64u;
label_120b64:
    // 0x120b64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x120b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_120b68:
    // 0x120b68: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x120b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_120b6c:
    // 0x120b6c: 0xc04c608  jal         func_131820
label_120b70:
    if (ctx->pc == 0x120B70u) {
        ctx->pc = 0x120B74u;
        goto label_120b74;
    }
    ctx->pc = 0x120B6Cu;
    SET_GPR_U32(ctx, 31, 0x120B74u);
    ctx->pc = 0x131820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131820u, 0x120B6Cu, 0x120B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120B74u;
label_120b74:
    // 0x120b74: 0x10000005  b           . + 4 + (0x5 << 2)
label_120b78:
    if (ctx->pc == 0x120B78u) {
        ctx->pc = 0x120B7Cu;
        goto label_120b7c;
    }
    ctx->pc = 0x120B74u;
    {
        const bool branch_taken_0x120b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x120b74) {
            ctx->pc = 0x120B8Cu;
            goto label_120b8c;
        }
    }
    ctx->pc = 0x120B7Cu;
label_120b7c:
    // 0x120b7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x120b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_120b80:
    // 0x120b80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x120b80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_120b84:
    // 0x120b84: 0xc04c608  jal         func_131820
label_120b88:
    if (ctx->pc == 0x120B88u) {
        ctx->pc = 0x120B8Cu;
        goto label_120b8c;
    }
    ctx->pc = 0x120B84u;
    SET_GPR_U32(ctx, 31, 0x120B8Cu);
    ctx->pc = 0x131820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131820u, 0x120B84u, 0x120B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120B8Cu;
label_120b8c:
    // 0x120b8c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x120b8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_120b90:
    // 0x120b90: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x120b90u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_120b94:
    // 0x120b94: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x120b94u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_120b98:
    // 0x120b98: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x120b98u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_120b9c:
    // 0x120b9c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x120b9cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_120ba0:
    // 0x120ba0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x120ba0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_120ba4:
    // 0x120ba4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x120ba4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_120ba8:
    // 0x120ba8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x120ba8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_120bac:
    // 0x120bac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x120bacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_120bb0:
    // 0x120bb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x120bb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_120bb4:
    // 0x120bb4: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x120bb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_120bb8:
    // 0x120bb8: 0x3e00008  jr          $ra
label_120bbc:
    if (ctx->pc == 0x120BBCu) {
        ctx->pc = 0x120BC0u;
        goto label_fallthrough_0x120bb8;
    }
    ctx->pc = 0x120BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120BB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x120bb8:
    ctx->pc = 0x120BC0u;
}
