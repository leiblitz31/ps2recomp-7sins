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

// Function: sub_003D65D0
// Address: 0x3d65d0 - 0x3d6a20
void sub_003D65D0_0x3d65d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D65D0_0x3d65d0");
#endif

    switch (ctx->pc) {
        case 0x3d65d0u: goto label_3d65d0;
        case 0x3d65d4u: goto label_3d65d4;
        case 0x3d65d8u: goto label_3d65d8;
        case 0x3d65dcu: goto label_3d65dc;
        case 0x3d65e0u: goto label_3d65e0;
        case 0x3d65e4u: goto label_3d65e4;
        case 0x3d65e8u: goto label_3d65e8;
        case 0x3d65ecu: goto label_3d65ec;
        case 0x3d65f0u: goto label_3d65f0;
        case 0x3d65f4u: goto label_3d65f4;
        case 0x3d65f8u: goto label_3d65f8;
        case 0x3d65fcu: goto label_3d65fc;
        case 0x3d6600u: goto label_3d6600;
        case 0x3d6604u: goto label_3d6604;
        case 0x3d6608u: goto label_3d6608;
        case 0x3d660cu: goto label_3d660c;
        case 0x3d6610u: goto label_3d6610;
        case 0x3d6614u: goto label_3d6614;
        case 0x3d6618u: goto label_3d6618;
        case 0x3d661cu: goto label_3d661c;
        case 0x3d6620u: goto label_3d6620;
        case 0x3d6624u: goto label_3d6624;
        case 0x3d6628u: goto label_3d6628;
        case 0x3d662cu: goto label_3d662c;
        case 0x3d6630u: goto label_3d6630;
        case 0x3d6634u: goto label_3d6634;
        case 0x3d6638u: goto label_3d6638;
        case 0x3d663cu: goto label_3d663c;
        case 0x3d6640u: goto label_3d6640;
        case 0x3d6644u: goto label_3d6644;
        case 0x3d6648u: goto label_3d6648;
        case 0x3d664cu: goto label_3d664c;
        case 0x3d6650u: goto label_3d6650;
        case 0x3d6654u: goto label_3d6654;
        case 0x3d6658u: goto label_3d6658;
        case 0x3d665cu: goto label_3d665c;
        case 0x3d6660u: goto label_3d6660;
        case 0x3d6664u: goto label_3d6664;
        case 0x3d6668u: goto label_3d6668;
        case 0x3d666cu: goto label_3d666c;
        case 0x3d6670u: goto label_3d6670;
        case 0x3d6674u: goto label_3d6674;
        case 0x3d6678u: goto label_3d6678;
        case 0x3d667cu: goto label_3d667c;
        case 0x3d6680u: goto label_3d6680;
        case 0x3d6684u: goto label_3d6684;
        case 0x3d6688u: goto label_3d6688;
        case 0x3d668cu: goto label_3d668c;
        case 0x3d6690u: goto label_3d6690;
        case 0x3d6694u: goto label_3d6694;
        case 0x3d6698u: goto label_3d6698;
        case 0x3d669cu: goto label_3d669c;
        case 0x3d66a0u: goto label_3d66a0;
        case 0x3d66a4u: goto label_3d66a4;
        case 0x3d66a8u: goto label_3d66a8;
        case 0x3d66acu: goto label_3d66ac;
        case 0x3d66b0u: goto label_3d66b0;
        case 0x3d66b4u: goto label_3d66b4;
        case 0x3d66b8u: goto label_3d66b8;
        case 0x3d66bcu: goto label_3d66bc;
        case 0x3d66c0u: goto label_3d66c0;
        case 0x3d66c4u: goto label_3d66c4;
        case 0x3d66c8u: goto label_3d66c8;
        case 0x3d66ccu: goto label_3d66cc;
        case 0x3d66d0u: goto label_3d66d0;
        case 0x3d66d4u: goto label_3d66d4;
        case 0x3d66d8u: goto label_3d66d8;
        case 0x3d66dcu: goto label_3d66dc;
        case 0x3d66e0u: goto label_3d66e0;
        case 0x3d66e4u: goto label_3d66e4;
        case 0x3d66e8u: goto label_3d66e8;
        case 0x3d66ecu: goto label_3d66ec;
        case 0x3d66f0u: goto label_3d66f0;
        case 0x3d66f4u: goto label_3d66f4;
        case 0x3d66f8u: goto label_3d66f8;
        case 0x3d66fcu: goto label_3d66fc;
        case 0x3d6700u: goto label_3d6700;
        case 0x3d6704u: goto label_3d6704;
        case 0x3d6708u: goto label_3d6708;
        case 0x3d670cu: goto label_3d670c;
        case 0x3d6710u: goto label_3d6710;
        case 0x3d6714u: goto label_3d6714;
        case 0x3d6718u: goto label_3d6718;
        case 0x3d671cu: goto label_3d671c;
        case 0x3d6720u: goto label_3d6720;
        case 0x3d6724u: goto label_3d6724;
        case 0x3d6728u: goto label_3d6728;
        case 0x3d672cu: goto label_3d672c;
        case 0x3d6730u: goto label_3d6730;
        case 0x3d6734u: goto label_3d6734;
        case 0x3d6738u: goto label_3d6738;
        case 0x3d673cu: goto label_3d673c;
        case 0x3d6740u: goto label_3d6740;
        case 0x3d6744u: goto label_3d6744;
        case 0x3d6748u: goto label_3d6748;
        case 0x3d674cu: goto label_3d674c;
        case 0x3d6750u: goto label_3d6750;
        case 0x3d6754u: goto label_3d6754;
        case 0x3d6758u: goto label_3d6758;
        case 0x3d675cu: goto label_3d675c;
        case 0x3d6760u: goto label_3d6760;
        case 0x3d6764u: goto label_3d6764;
        case 0x3d6768u: goto label_3d6768;
        case 0x3d676cu: goto label_3d676c;
        case 0x3d6770u: goto label_3d6770;
        case 0x3d6774u: goto label_3d6774;
        case 0x3d6778u: goto label_3d6778;
        case 0x3d677cu: goto label_3d677c;
        case 0x3d6780u: goto label_3d6780;
        case 0x3d6784u: goto label_3d6784;
        case 0x3d6788u: goto label_3d6788;
        case 0x3d678cu: goto label_3d678c;
        case 0x3d6790u: goto label_3d6790;
        case 0x3d6794u: goto label_3d6794;
        case 0x3d6798u: goto label_3d6798;
        case 0x3d679cu: goto label_3d679c;
        case 0x3d67a0u: goto label_3d67a0;
        case 0x3d67a4u: goto label_3d67a4;
        case 0x3d67a8u: goto label_3d67a8;
        case 0x3d67acu: goto label_3d67ac;
        case 0x3d67b0u: goto label_3d67b0;
        case 0x3d67b4u: goto label_3d67b4;
        case 0x3d67b8u: goto label_3d67b8;
        case 0x3d67bcu: goto label_3d67bc;
        case 0x3d67c0u: goto label_3d67c0;
        case 0x3d67c4u: goto label_3d67c4;
        case 0x3d67c8u: goto label_3d67c8;
        case 0x3d67ccu: goto label_3d67cc;
        case 0x3d67d0u: goto label_3d67d0;
        case 0x3d67d4u: goto label_3d67d4;
        case 0x3d67d8u: goto label_3d67d8;
        case 0x3d67dcu: goto label_3d67dc;
        case 0x3d67e0u: goto label_3d67e0;
        case 0x3d67e4u: goto label_3d67e4;
        case 0x3d67e8u: goto label_3d67e8;
        case 0x3d67ecu: goto label_3d67ec;
        case 0x3d67f0u: goto label_3d67f0;
        case 0x3d67f4u: goto label_3d67f4;
        case 0x3d67f8u: goto label_3d67f8;
        case 0x3d67fcu: goto label_3d67fc;
        case 0x3d6800u: goto label_3d6800;
        case 0x3d6804u: goto label_3d6804;
        case 0x3d6808u: goto label_3d6808;
        case 0x3d680cu: goto label_3d680c;
        case 0x3d6810u: goto label_3d6810;
        case 0x3d6814u: goto label_3d6814;
        case 0x3d6818u: goto label_3d6818;
        case 0x3d681cu: goto label_3d681c;
        case 0x3d6820u: goto label_3d6820;
        case 0x3d6824u: goto label_3d6824;
        case 0x3d6828u: goto label_3d6828;
        case 0x3d682cu: goto label_3d682c;
        case 0x3d6830u: goto label_3d6830;
        case 0x3d6834u: goto label_3d6834;
        case 0x3d6838u: goto label_3d6838;
        case 0x3d683cu: goto label_3d683c;
        case 0x3d6840u: goto label_3d6840;
        case 0x3d6844u: goto label_3d6844;
        case 0x3d6848u: goto label_3d6848;
        case 0x3d684cu: goto label_3d684c;
        case 0x3d6850u: goto label_3d6850;
        case 0x3d6854u: goto label_3d6854;
        case 0x3d6858u: goto label_3d6858;
        case 0x3d685cu: goto label_3d685c;
        case 0x3d6860u: goto label_3d6860;
        case 0x3d6864u: goto label_3d6864;
        case 0x3d6868u: goto label_3d6868;
        case 0x3d686cu: goto label_3d686c;
        case 0x3d6870u: goto label_3d6870;
        case 0x3d6874u: goto label_3d6874;
        case 0x3d6878u: goto label_3d6878;
        case 0x3d687cu: goto label_3d687c;
        case 0x3d6880u: goto label_3d6880;
        case 0x3d6884u: goto label_3d6884;
        case 0x3d6888u: goto label_3d6888;
        case 0x3d688cu: goto label_3d688c;
        case 0x3d6890u: goto label_3d6890;
        case 0x3d6894u: goto label_3d6894;
        case 0x3d6898u: goto label_3d6898;
        case 0x3d689cu: goto label_3d689c;
        case 0x3d68a0u: goto label_3d68a0;
        case 0x3d68a4u: goto label_3d68a4;
        case 0x3d68a8u: goto label_3d68a8;
        case 0x3d68acu: goto label_3d68ac;
        case 0x3d68b0u: goto label_3d68b0;
        case 0x3d68b4u: goto label_3d68b4;
        case 0x3d68b8u: goto label_3d68b8;
        case 0x3d68bcu: goto label_3d68bc;
        case 0x3d68c0u: goto label_3d68c0;
        case 0x3d68c4u: goto label_3d68c4;
        case 0x3d68c8u: goto label_3d68c8;
        case 0x3d68ccu: goto label_3d68cc;
        case 0x3d68d0u: goto label_3d68d0;
        case 0x3d68d4u: goto label_3d68d4;
        case 0x3d68d8u: goto label_3d68d8;
        case 0x3d68dcu: goto label_3d68dc;
        case 0x3d68e0u: goto label_3d68e0;
        case 0x3d68e4u: goto label_3d68e4;
        case 0x3d68e8u: goto label_3d68e8;
        case 0x3d68ecu: goto label_3d68ec;
        case 0x3d68f0u: goto label_3d68f0;
        case 0x3d68f4u: goto label_3d68f4;
        case 0x3d68f8u: goto label_3d68f8;
        case 0x3d68fcu: goto label_3d68fc;
        case 0x3d6900u: goto label_3d6900;
        case 0x3d6904u: goto label_3d6904;
        case 0x3d6908u: goto label_3d6908;
        case 0x3d690cu: goto label_3d690c;
        case 0x3d6910u: goto label_3d6910;
        case 0x3d6914u: goto label_3d6914;
        case 0x3d6918u: goto label_3d6918;
        case 0x3d691cu: goto label_3d691c;
        case 0x3d6920u: goto label_3d6920;
        case 0x3d6924u: goto label_3d6924;
        case 0x3d6928u: goto label_3d6928;
        case 0x3d692cu: goto label_3d692c;
        case 0x3d6930u: goto label_3d6930;
        case 0x3d6934u: goto label_3d6934;
        case 0x3d6938u: goto label_3d6938;
        case 0x3d693cu: goto label_3d693c;
        case 0x3d6940u: goto label_3d6940;
        case 0x3d6944u: goto label_3d6944;
        case 0x3d6948u: goto label_3d6948;
        case 0x3d694cu: goto label_3d694c;
        case 0x3d6950u: goto label_3d6950;
        case 0x3d6954u: goto label_3d6954;
        case 0x3d6958u: goto label_3d6958;
        case 0x3d695cu: goto label_3d695c;
        case 0x3d6960u: goto label_3d6960;
        case 0x3d6964u: goto label_3d6964;
        case 0x3d6968u: goto label_3d6968;
        case 0x3d696cu: goto label_3d696c;
        case 0x3d6970u: goto label_3d6970;
        case 0x3d6974u: goto label_3d6974;
        case 0x3d6978u: goto label_3d6978;
        case 0x3d697cu: goto label_3d697c;
        case 0x3d6980u: goto label_3d6980;
        case 0x3d6984u: goto label_3d6984;
        case 0x3d6988u: goto label_3d6988;
        case 0x3d698cu: goto label_3d698c;
        case 0x3d6990u: goto label_3d6990;
        case 0x3d6994u: goto label_3d6994;
        case 0x3d6998u: goto label_3d6998;
        case 0x3d699cu: goto label_3d699c;
        case 0x3d69a0u: goto label_3d69a0;
        case 0x3d69a4u: goto label_3d69a4;
        case 0x3d69a8u: goto label_3d69a8;
        case 0x3d69acu: goto label_3d69ac;
        case 0x3d69b0u: goto label_3d69b0;
        case 0x3d69b4u: goto label_3d69b4;
        case 0x3d69b8u: goto label_3d69b8;
        case 0x3d69bcu: goto label_3d69bc;
        case 0x3d69c0u: goto label_3d69c0;
        case 0x3d69c4u: goto label_3d69c4;
        case 0x3d69c8u: goto label_3d69c8;
        case 0x3d69ccu: goto label_3d69cc;
        case 0x3d69d0u: goto label_3d69d0;
        case 0x3d69d4u: goto label_3d69d4;
        case 0x3d69d8u: goto label_3d69d8;
        case 0x3d69dcu: goto label_3d69dc;
        case 0x3d69e0u: goto label_3d69e0;
        case 0x3d69e4u: goto label_3d69e4;
        case 0x3d69e8u: goto label_3d69e8;
        case 0x3d69ecu: goto label_3d69ec;
        case 0x3d69f0u: goto label_3d69f0;
        case 0x3d69f4u: goto label_3d69f4;
        case 0x3d69f8u: goto label_3d69f8;
        case 0x3d69fcu: goto label_3d69fc;
        case 0x3d6a00u: goto label_3d6a00;
        case 0x3d6a04u: goto label_3d6a04;
        case 0x3d6a08u: goto label_3d6a08;
        case 0x3d6a0cu: goto label_3d6a0c;
        case 0x3d6a10u: goto label_3d6a10;
        case 0x3d6a14u: goto label_3d6a14;
        case 0x3d6a18u: goto label_3d6a18;
        case 0x3d6a1cu: goto label_3d6a1c;
        default: break;
    }

    ctx->pc = 0x3d65d0u;

label_3d65d0:
    // 0x3d65d0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3d65d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_3d65d4:
    // 0x3d65d4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3d65d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3d65d8:
    // 0x3d65d8: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x3d65d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_3d65dc:
    // 0x3d65dc: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x3d65dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_3d65e0:
    // 0x3d65e0: 0x60f02d  daddu       $fp, $v1, $zero
    ctx->pc = 0x3d65e0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3d65e4:
    // 0x3d65e4: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x3d65e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_3d65e8:
    // 0x3d65e8: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x3d65e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_3d65ec:
    // 0x3d65ec: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x3d65ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_3d65f0:
    // 0x3d65f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3d65f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d65f4:
    // 0x3d65f4: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3d65f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_3d65f8:
    // 0x3d65f8: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x3d65f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_3d65fc:
    // 0x3d65fc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3d65fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d6600:
    // 0x3d6600: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x3d6600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_3d6604:
    // 0x3d6604: 0x148080  sll         $s0, $s4, 2
    ctx->pc = 0x3d6604u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_3d6608:
    // 0x3d6608: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3d6608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3d660c:
    // 0x3d660c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3d660cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3d6610:
    // 0x3d6610: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x3d6610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_3d6614:
    // 0x3d6614: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x3d6614u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3d6618:
    // 0x3d6618: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d6618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3d661c:
    // 0x3d661c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d661cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d6620:
    // 0x3d6620: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x3d6620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_3d6624:
    // 0x3d6624: 0x40f809  jalr        $v0
label_3d6628:
    if (ctx->pc == 0x3D6628u) {
        ctx->pc = 0x3D6628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6624u;
        // 0x3d6628: 0x34a501b3  ori         $a1, $a1, 0x1B3 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)435);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D662Cu;
        goto label_3d662c;
    }
    ctx->pc = 0x3D6624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D662Cu);
        ctx->pc = 0x3D6628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6624u;
        // 0x3d6628: 0x34a501b3  ori         $a1, $a1, 0x1B3 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)435);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D6624u, 0x3D662Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D662Cu;
label_3d662c:
    // 0x3d662c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3d662cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d6630:
    // 0x3d6630: 0x5660000d  bnel        $s3, $zero, . + 4 + (0xD << 2)
label_3d6634:
    if (ctx->pc == 0x3D6634u) {
        ctx->pc = 0x3D6634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6630u;
        // 0x3d6634: 0x92220023  lbu         $v0, 0x23($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6638u;
        goto label_3d6638;
    }
    ctx->pc = 0x3D6630u;
    {
        const bool branch_taken_0x3d6630 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d6630) {
            ctx->pc = 0x3D6634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D6630u;
            // 0x3d6634: 0x92220023  lbu         $v0, 0x23($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D6668u;
            goto label_3d6668;
        }
    }
    ctx->pc = 0x3D6638u;
label_3d6638:
    // 0x3d6638: 0x240201b3  addiu       $v0, $zero, 0x1B3
    ctx->pc = 0x3d6638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 435));
label_3d663c:
    // 0x3d663c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3d663cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_3d6640:
    // 0x3d6640: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3d6640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_3d6644:
    // 0x3d6644: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3d6644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d6648:
    // 0x3d6648: 0xc1035f6  jal         func_40D7D8
label_3d664c:
    if (ctx->pc == 0x3D664Cu) {
        ctx->pc = 0x3D664Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6648u;
        // 0x3d664c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6650u;
        goto label_3d6650;
    }
    ctx->pc = 0x3D6648u;
    SET_GPR_U32(ctx, 31, 0x3D6650u);
    ctx->pc = 0x3D664Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6648u;
    // 0x3d664c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x3D6648u, 0x3D6650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6650u;
label_3d6650:
    // 0x3d6650: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3d6650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3d6654:
    // 0x3d6654: 0xc103628  jal         func_40D8A0
label_3d6658:
    if (ctx->pc == 0x3D6658u) {
        ctx->pc = 0x3D6658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6654u;
        // 0x3d6658: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D665Cu;
        goto label_3d665c;
    }
    ctx->pc = 0x3D6654u;
    SET_GPR_U32(ctx, 31, 0x3D665Cu);
    ctx->pc = 0x3D6658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6654u;
    // 0x3d6658: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x3D6654u, 0x3D665Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D665Cu;
label_3d665c:
    // 0x3d665c: 0x100000d8  b           . + 4 + (0xD8 << 2)
label_3d6660:
    if (ctx->pc == 0x3D6660u) {
        ctx->pc = 0x3D6660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D665Cu;
        // 0x3d6660: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6664u;
        goto label_3d6664;
    }
    ctx->pc = 0x3D665Cu;
    {
        const bool branch_taken_0x3d665c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D665Cu;
        // 0x3d6660: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d665c) {
            ctx->pc = 0x3D69C0u;
            goto label_3d69c0;
        }
    }
    ctx->pc = 0x3D6664u;
label_3d6664:
    // 0x3d6664: 0x0  nop
    ctx->pc = 0x3d6664u;
    // NOP
label_3d6668:
    // 0x3d6668: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3d6668u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_3d666c:
    // 0x3d666c: 0x30434000  andi        $v1, $v0, 0x4000
    ctx->pc = 0x3d666cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
label_3d6670:
    // 0x3d6670: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_3d6674:
    if (ctx->pc == 0x3D6674u) {
        ctx->pc = 0x3D6674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6670u;
        // 0x3d6674: 0x24150004  addiu       $s5, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6678u;
        goto label_3d6678;
    }
    ctx->pc = 0x3D6670u;
    {
        const bool branch_taken_0x3d6670 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6670u;
        // 0x3d6674: 0x24150004  addiu       $s5, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6670) {
            ctx->pc = 0x3D6690u;
            goto label_3d6690;
        }
    }
    ctx->pc = 0x3D6678u;
label_3d6678:
    // 0x3d6678: 0x10000009  b           . + 4 + (0x9 << 2)
label_3d667c:
    if (ctx->pc == 0x3D667Cu) {
        ctx->pc = 0x3D6680u;
        goto label_3d6680;
    }
    ctx->pc = 0x3D6678u;
    {
        const bool branch_taken_0x3d6678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d6678) {
            ctx->pc = 0x3D66A0u;
            goto label_3d66a0;
        }
    }
    ctx->pc = 0x3D6680u;
label_3d6680:
    // 0x3d6680: 0x27c3e880  addiu       $v1, $fp, -0x1780
    ctx->pc = 0x3d6680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294961280));
label_3d6684:
    // 0x3d6684: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3d6684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d6688:
    // 0x3d6688: 0x100000c5  b           . + 4 + (0xC5 << 2)
label_3d668c:
    if (ctx->pc == 0x3D668Cu) {
        ctx->pc = 0x3D668Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6688u;
        // 0x3d668c: 0x8c62010c  lw          $v0, 0x10C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6690u;
        goto label_3d6690;
    }
    ctx->pc = 0x3D6688u;
    {
        const bool branch_taken_0x3d6688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D668Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6688u;
        // 0x3d668c: 0x8c62010c  lw          $v0, 0x10C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6688) {
            ctx->pc = 0x3D69A0u;
            goto label_3d69a0;
        }
    }
    ctx->pc = 0x3D6690u;
label_3d6690:
    // 0x3d6690: 0x30432000  andi        $v1, $v0, 0x2000
    ctx->pc = 0x3d6690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_3d6694:
    // 0x3d6694: 0x24150020  addiu       $s5, $zero, 0x20
    ctx->pc = 0x3d6694u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3d6698:
    // 0x3d6698: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3d6698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3d669c:
    // 0x3d669c: 0x43a80b  movn        $s5, $v0, $v1
    ctx->pc = 0x3d669cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 2));
label_3d66a0:
    // 0x3d66a0: 0x1a8000c6  blez        $s4, . + 4 + (0xC6 << 2)
label_3d66a4:
    if (ctx->pc == 0x3D66A4u) {
        ctx->pc = 0x3D66A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D66A0u;
        // 0x3d66a4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D66A8u;
        goto label_3d66a8;
    }
    ctx->pc = 0x3D66A0u;
    {
        const bool branch_taken_0x3d66a0 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x3D66A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D66A0u;
        // 0x3d66a4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d66a0) {
            ctx->pc = 0x3D69BCu;
            goto label_3d69bc;
        }
    }
    ctx->pc = 0x3D66A8u;
label_3d66a8:
    // 0x3d66a8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3d66a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3d66ac:
    // 0x3d66ac: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x3d66acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d66b0:
    // 0x3d66b0: 0x2456e880  addiu       $s6, $v0, -0x1780
    ctx->pc = 0x3d66b0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_3d66b4:
    // 0x3d66b4: 0x0  nop
    ctx->pc = 0x3d66b4u;
    // NOP
label_3d66b8:
    // 0x3d66b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d66b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d66bc:
    // 0x3d66bc: 0x324500ff  andi        $a1, $s2, 0xFF
    ctx->pc = 0x3d66bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_3d66c0:
    // 0x3d66c0: 0xc1075c0  jal         func_41D700
label_3d66c4:
    if (ctx->pc == 0x3D66C4u) {
        ctx->pc = 0x3D66C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D66C0u;
        // 0x3d66c4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D66C8u;
        goto label_3d66c8;
    }
    ctx->pc = 0x3D66C0u;
    SET_GPR_U32(ctx, 31, 0x3D66C8u);
    ctx->pc = 0x3D66C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D66C0u;
    // 0x3d66c4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D700u, 0x3D66C0u, 0x3D66C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D66C8u;
label_3d66c8:
    // 0x3d66c8: 0x1040ffed  beqz        $v0, . + 4 + (-0x13 << 2)
label_3d66cc:
    if (ctx->pc == 0x3D66CCu) {
        ctx->pc = 0x3D66CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D66C8u;
        // 0x3d66cc: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D66D0u;
        goto label_3d66d0;
    }
    ctx->pc = 0x3D66C8u;
    {
        const bool branch_taken_0x3d66c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D66CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D66C8u;
        // 0x3d66cc: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d66c8) {
            ctx->pc = 0x3D6680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d6680;
        }
    }
    ctx->pc = 0x3D66D0u;
label_3d66d0:
    // 0x3d66d0: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x3d66d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_3d66d4:
    // 0x3d66d4: 0xc107034  jal         func_41C0D0
label_3d66d8:
    if (ctx->pc == 0x3D66D8u) {
        ctx->pc = 0x3D66D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D66D4u;
        // 0x3d66d8: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D66DCu;
        goto label_3d66dc;
    }
    ctx->pc = 0x3D66D4u;
    SET_GPR_U32(ctx, 31, 0x3D66DCu);
    ctx->pc = 0x3D66D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D66D4u;
    // 0x3d66d8: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C0D0u, 0x3D66D4u, 0x3D66DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D66DCu;
label_3d66dc:
    // 0x3d66dc: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_3d66e0:
    if (ctx->pc == 0x3D66E0u) {
        ctx->pc = 0x3D66E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D66DCu;
        // 0x3d66e0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D66E4u;
        goto label_3d66e4;
    }
    ctx->pc = 0x3D66DCu;
    {
        const bool branch_taken_0x3d66dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D66E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D66DCu;
        // 0x3d66e0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d66dc) {
            ctx->pc = 0x3D6788u;
            goto label_3d6788;
        }
    }
    ctx->pc = 0x3D66E4u;
label_3d66e4:
    // 0x3d66e4: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x3d66e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_3d66e8:
    // 0x3d66e8: 0x104000ab  beqz        $v0, . + 4 + (0xAB << 2)
label_3d66ec:
    if (ctx->pc == 0x3D66ECu) {
        ctx->pc = 0x3D66ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D66E8u;
        // 0x3d66ec: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D66F0u;
        goto label_3d66f0;
    }
    ctx->pc = 0x3D66E8u;
    {
        const bool branch_taken_0x3d66e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D66ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D66E8u;
        // 0x3d66ec: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d66e8) {
            ctx->pc = 0x3D6998u;
            goto label_3d6998;
        }
    }
    ctx->pc = 0x3D66F0u;
label_3d66f0:
    // 0x3d66f0: 0x121023  negu        $v0, $s2
    ctx->pc = 0x3d66f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
label_3d66f4:
    // 0x3d66f4: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x3d66f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_3d66f8:
    // 0x3d66f8: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
label_3d66fc:
    if (ctx->pc == 0x3D66FCu) {
        ctx->pc = 0x3D66FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D66F8u;
        // 0x3d66fc: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6700u;
        goto label_3d6700;
    }
    ctx->pc = 0x3D66F8u;
    {
        const bool branch_taken_0x3d66f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D66FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D66F8u;
        // 0x3d66fc: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d66f8) {
            ctx->pc = 0x3D6750u;
            goto label_3d6750;
        }
    }
    ctx->pc = 0x3D6700u;
label_3d6700:
    // 0x3d6700: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3d6700u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_3d6704:
    // 0x3d6704: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_3d6708:
    if (ctx->pc == 0x3D6708u) {
        ctx->pc = 0x3D6708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6704u;
        // 0x3d6708: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D670Cu;
        goto label_3d670c;
    }
    ctx->pc = 0x3D6704u;
    {
        const bool branch_taken_0x3d6704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6704u;
        // 0x3d6708: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6704) {
            ctx->pc = 0x3D6734u;
            goto label_3d6734;
        }
    }
    ctx->pc = 0x3D670Cu;
label_3d670c:
    // 0x3d670c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_3d6710:
    if (ctx->pc == 0x3D6710u) {
        ctx->pc = 0x3D6710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D670Cu;
        // 0x3d6710: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6714u;
        goto label_3d6714;
    }
    ctx->pc = 0x3D670Cu;
    {
        const bool branch_taken_0x3d670c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d670c) {
            ctx->pc = 0x3D6710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D670Cu;
            // 0x3d6710: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D6728u;
            goto label_3d6728;
        }
    }
    ctx->pc = 0x3D6714u;
label_3d6714:
    // 0x3d6714: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x3d6714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3d6718:
    // 0x3d6718: 0x2651ffff  addiu       $s1, $s2, -0x1
    ctx->pc = 0x3d6718u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_3d671c:
    // 0x3d671c: 0xc10705c  jal         func_41C170
label_3d6720:
    if (ctx->pc == 0x3D6720u) {
        ctx->pc = 0x3D6720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D671Cu;
        // 0x3d6720: 0x26700004  addiu       $s0, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6724u;
        goto label_3d6724;
    }
    ctx->pc = 0x3D671Cu;
    SET_GPR_U32(ctx, 31, 0x3D6724u);
    ctx->pc = 0x3D6720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D671Cu;
    // 0x3d6720: 0x26700004  addiu       $s0, $s3, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x3D671Cu, 0x3D6724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6724u;
label_3d6724:
    // 0x3d6724: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3d6724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d6728:
    // 0x3d6728: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3d6728u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3d672c:
    // 0x3d672c: 0xc10705c  jal         func_41C170
label_3d6730:
    if (ctx->pc == 0x3D6730u) {
        ctx->pc = 0x3D6730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D672Cu;
        // 0x3d6730: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6734u;
        goto label_3d6734;
    }
    ctx->pc = 0x3D672Cu;
    SET_GPR_U32(ctx, 31, 0x3D6734u);
    ctx->pc = 0x3D6730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D672Cu;
    // 0x3d6730: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x3D672Cu, 0x3D6734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6734u;
label_3d6734:
    // 0x3d6734: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3d6734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d6738:
    // 0x3d6738: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3d6738u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3d673c:
    // 0x3d673c: 0xc10705c  jal         func_41C170
label_3d6740:
    if (ctx->pc == 0x3D6740u) {
        ctx->pc = 0x3D6740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D673Cu;
        // 0x3d6740: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6744u;
        goto label_3d6744;
    }
    ctx->pc = 0x3D673Cu;
    SET_GPR_U32(ctx, 31, 0x3D6744u);
    ctx->pc = 0x3D6740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D673Cu;
    // 0x3d6740: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x3D673Cu, 0x3D6744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6744u;
label_3d6744:
    // 0x3d6744: 0x52200095  beql        $s1, $zero, . + 4 + (0x95 << 2)
label_3d6748:
    if (ctx->pc == 0x3D6748u) {
        ctx->pc = 0x3D6748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6744u;
        // 0x3d6748: 0x8ec2010c  lw          $v0, 0x10C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D674Cu;
        goto label_3d674c;
    }
    ctx->pc = 0x3D6744u;
    {
        const bool branch_taken_0x3d6744 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d6744) {
            ctx->pc = 0x3D6748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D6744u;
            // 0x3d6748: 0x8ec2010c  lw          $v0, 0x10C($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 268)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D699Cu;
            goto label_3d699c;
        }
    }
    ctx->pc = 0x3D674Cu;
label_3d674c:
    // 0x3d674c: 0x0  nop
    ctx->pc = 0x3d674cu;
    // NOP
label_3d6750:
    // 0x3d6750: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3d6750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d6754:
    // 0x3d6754: 0xc10705c  jal         func_41C170
label_3d6758:
    if (ctx->pc == 0x3D6758u) {
        ctx->pc = 0x3D6758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6754u;
        // 0x3d6758: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D675Cu;
        goto label_3d675c;
    }
    ctx->pc = 0x3D6754u;
    SET_GPR_U32(ctx, 31, 0x3D675Cu);
    ctx->pc = 0x3D6758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6754u;
    // 0x3d6758: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x3D6754u, 0x3D675Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D675Cu;
label_3d675c:
    // 0x3d675c: 0xc10705c  jal         func_41C170
label_3d6760:
    if (ctx->pc == 0x3D6760u) {
        ctx->pc = 0x3D6760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D675Cu;
        // 0x3d6760: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6764u;
        goto label_3d6764;
    }
    ctx->pc = 0x3D675Cu;
    SET_GPR_U32(ctx, 31, 0x3D6764u);
    ctx->pc = 0x3D6760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D675Cu;
    // 0x3d6760: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x3D675Cu, 0x3D6764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6764u;
label_3d6764:
    // 0x3d6764: 0xc10705c  jal         func_41C170
label_3d6768:
    if (ctx->pc == 0x3D6768u) {
        ctx->pc = 0x3D6768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6764u;
        // 0x3d6768: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D676Cu;
        goto label_3d676c;
    }
    ctx->pc = 0x3D6764u;
    SET_GPR_U32(ctx, 31, 0x3D676Cu);
    ctx->pc = 0x3D6768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6764u;
    // 0x3d6768: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x3D6764u, 0x3D676Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D676Cu;
label_3d676c:
    // 0x3d676c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x3d676cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3d6770:
    // 0x3d6770: 0xc10705c  jal         func_41C170
label_3d6774:
    if (ctx->pc == 0x3D6774u) {
        ctx->pc = 0x3D6774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6770u;
        // 0x3d6774: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6778u;
        goto label_3d6778;
    }
    ctx->pc = 0x3D6770u;
    SET_GPR_U32(ctx, 31, 0x3D6778u);
    ctx->pc = 0x3D6774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6770u;
    // 0x3d6774: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x3D6770u, 0x3D6778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6778u;
label_3d6778:
    // 0x3d6778: 0x5620fff6  bnel        $s1, $zero, . + 4 + (-0xA << 2)
label_3d677c:
    if (ctx->pc == 0x3D677Cu) {
        ctx->pc = 0x3D677Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6778u;
        // 0x3d677c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6780u;
        goto label_3d6780;
    }
    ctx->pc = 0x3D6778u;
    {
        const bool branch_taken_0x3d6778 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d6778) {
            ctx->pc = 0x3D677Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D6778u;
            // 0x3d677c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D6754u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d6754;
        }
    }
    ctx->pc = 0x3D6780u;
label_3d6780:
    // 0x3d6780: 0x10000086  b           . + 4 + (0x86 << 2)
label_3d6784:
    if (ctx->pc == 0x3D6784u) {
        ctx->pc = 0x3D6784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6780u;
        // 0x3d6784: 0x8ec2010c  lw          $v0, 0x10C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6788u;
        goto label_3d6788;
    }
    ctx->pc = 0x3D6780u;
    {
        const bool branch_taken_0x3d6780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6780u;
        // 0x3d6784: 0x8ec2010c  lw          $v0, 0x10C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6780) {
            ctx->pc = 0x3D699Cu;
            goto label_3d699c;
        }
    }
    ctx->pc = 0x3D6788u;
label_3d6788:
    // 0x3d6788: 0xc107078  jal         func_41C1E0
label_3d678c:
    if (ctx->pc == 0x3D678Cu) {
        ctx->pc = 0x3D678Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6788u;
        // 0x3d678c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6790u;
        goto label_3d6790;
    }
    ctx->pc = 0x3D6788u;
    SET_GPR_U32(ctx, 31, 0x3D6790u);
    ctx->pc = 0x3D678Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6788u;
    // 0x3d678c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C1E0u, 0x3D6788u, 0x3D6790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6790u;
label_3d6790:
    // 0x3d6790: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
label_3d6794:
    if (ctx->pc == 0x3D6794u) {
        ctx->pc = 0x3D6798u;
        goto label_3d6798;
    }
    ctx->pc = 0x3D6790u;
    {
        const bool branch_taken_0x3d6790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d6790) {
            ctx->pc = 0x3D6838u;
            goto label_3d6838;
        }
    }
    ctx->pc = 0x3D6798u;
label_3d6798:
    // 0x3d6798: 0x1a40007f  blez        $s2, . + 4 + (0x7F << 2)
label_3d679c:
    if (ctx->pc == 0x3D679Cu) {
        ctx->pc = 0x3D679Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6798u;
        // 0x3d679c: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D67A0u;
        goto label_3d67a0;
    }
    ctx->pc = 0x3D6798u;
    {
        const bool branch_taken_0x3d6798 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x3D679Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6798u;
        // 0x3d679c: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6798) {
            ctx->pc = 0x3D6998u;
            goto label_3d6998;
        }
    }
    ctx->pc = 0x3D67A0u;
label_3d67a0:
    // 0x3d67a0: 0x121023  negu        $v0, $s2
    ctx->pc = 0x3d67a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
label_3d67a4:
    // 0x3d67a4: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x3d67a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_3d67a8:
    // 0x3d67a8: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
label_3d67ac:
    if (ctx->pc == 0x3D67ACu) {
        ctx->pc = 0x3D67ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D67A8u;
        // 0x3d67ac: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D67B0u;
        goto label_3d67b0;
    }
    ctx->pc = 0x3D67A8u;
    {
        const bool branch_taken_0x3d67a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D67ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D67A8u;
        // 0x3d67ac: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d67a8) {
            ctx->pc = 0x3D6800u;
            goto label_3d6800;
        }
    }
    ctx->pc = 0x3D67B0u;
label_3d67b0:
    // 0x3d67b0: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3d67b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_3d67b4:
    // 0x3d67b4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_3d67b8:
    if (ctx->pc == 0x3D67B8u) {
        ctx->pc = 0x3D67B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D67B4u;
        // 0x3d67b8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D67BCu;
        goto label_3d67bc;
    }
    ctx->pc = 0x3D67B4u;
    {
        const bool branch_taken_0x3d67b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D67B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D67B4u;
        // 0x3d67b8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d67b4) {
            ctx->pc = 0x3D67E4u;
            goto label_3d67e4;
        }
    }
    ctx->pc = 0x3D67BCu;
label_3d67bc:
    // 0x3d67bc: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_3d67c0:
    if (ctx->pc == 0x3D67C0u) {
        ctx->pc = 0x3D67C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D67BCu;
        // 0x3d67c0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D67C4u;
        goto label_3d67c4;
    }
    ctx->pc = 0x3D67BCu;
    {
        const bool branch_taken_0x3d67bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d67bc) {
            ctx->pc = 0x3D67C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D67BCu;
            // 0x3d67c0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D67D8u;
            goto label_3d67d8;
        }
    }
    ctx->pc = 0x3D67C4u;
label_3d67c4:
    // 0x3d67c4: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x3d67c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3d67c8:
    // 0x3d67c8: 0x2651ffff  addiu       $s1, $s2, -0x1
    ctx->pc = 0x3d67c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_3d67cc:
    // 0x3d67cc: 0xc10705c  jal         func_41C170
label_3d67d0:
    if (ctx->pc == 0x3D67D0u) {
        ctx->pc = 0x3D67D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D67CCu;
        // 0x3d67d0: 0x26700004  addiu       $s0, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D67D4u;
        goto label_3d67d4;
    }
    ctx->pc = 0x3D67CCu;
    SET_GPR_U32(ctx, 31, 0x3D67D4u);
    ctx->pc = 0x3D67D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D67CCu;
    // 0x3d67d0: 0x26700004  addiu       $s0, $s3, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x3D67CCu, 0x3D67D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D67D4u;
label_3d67d4:
    // 0x3d67d4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3d67d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d67d8:
    // 0x3d67d8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3d67d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3d67dc:
    // 0x3d67dc: 0xc10705c  jal         func_41C170
label_3d67e0:
    if (ctx->pc == 0x3D67E0u) {
        ctx->pc = 0x3D67E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D67DCu;
        // 0x3d67e0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D67E4u;
        goto label_3d67e4;
    }
    ctx->pc = 0x3D67DCu;
    SET_GPR_U32(ctx, 31, 0x3D67E4u);
    ctx->pc = 0x3D67E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D67DCu;
    // 0x3d67e0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x3D67DCu, 0x3D67E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D67E4u;
label_3d67e4:
    // 0x3d67e4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3d67e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d67e8:
    // 0x3d67e8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3d67e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3d67ec:
    // 0x3d67ec: 0xc10705c  jal         func_41C170
label_3d67f0:
    if (ctx->pc == 0x3D67F0u) {
        ctx->pc = 0x3D67F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D67ECu;
        // 0x3d67f0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D67F4u;
        goto label_3d67f4;
    }
    ctx->pc = 0x3D67ECu;
    SET_GPR_U32(ctx, 31, 0x3D67F4u);
    ctx->pc = 0x3D67F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D67ECu;
    // 0x3d67f0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x3D67ECu, 0x3D67F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D67F4u;
label_3d67f4:
    // 0x3d67f4: 0x52200069  beql        $s1, $zero, . + 4 + (0x69 << 2)
label_3d67f8:
    if (ctx->pc == 0x3D67F8u) {
        ctx->pc = 0x3D67F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D67F4u;
        // 0x3d67f8: 0x8ec2010c  lw          $v0, 0x10C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D67FCu;
        goto label_3d67fc;
    }
    ctx->pc = 0x3D67F4u;
    {
        const bool branch_taken_0x3d67f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d67f4) {
            ctx->pc = 0x3D67F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D67F4u;
            // 0x3d67f8: 0x8ec2010c  lw          $v0, 0x10C($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 268)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D699Cu;
            goto label_3d699c;
        }
    }
    ctx->pc = 0x3D67FCu;
label_3d67fc:
    // 0x3d67fc: 0x0  nop
    ctx->pc = 0x3d67fcu;
    // NOP
label_3d6800:
    // 0x3d6800: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3d6800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d6804:
    // 0x3d6804: 0xc10705c  jal         func_41C170
label_3d6808:
    if (ctx->pc == 0x3D6808u) {
        ctx->pc = 0x3D6808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6804u;
        // 0x3d6808: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D680Cu;
        goto label_3d680c;
    }
    ctx->pc = 0x3D6804u;
    SET_GPR_U32(ctx, 31, 0x3D680Cu);
    ctx->pc = 0x3D6808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6804u;
    // 0x3d6808: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x3D6804u, 0x3D680Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D680Cu;
label_3d680c:
    // 0x3d680c: 0xc10705c  jal         func_41C170
label_3d6810:
    if (ctx->pc == 0x3D6810u) {
        ctx->pc = 0x3D6810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D680Cu;
        // 0x3d6810: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6814u;
        goto label_3d6814;
    }
    ctx->pc = 0x3D680Cu;
    SET_GPR_U32(ctx, 31, 0x3D6814u);
    ctx->pc = 0x3D6810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D680Cu;
    // 0x3d6810: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x3D680Cu, 0x3D6814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6814u;
label_3d6814:
    // 0x3d6814: 0xc10705c  jal         func_41C170
label_3d6818:
    if (ctx->pc == 0x3D6818u) {
        ctx->pc = 0x3D6818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6814u;
        // 0x3d6818: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D681Cu;
        goto label_3d681c;
    }
    ctx->pc = 0x3D6814u;
    SET_GPR_U32(ctx, 31, 0x3D681Cu);
    ctx->pc = 0x3D6818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6814u;
    // 0x3d6818: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x3D6814u, 0x3D681Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D681Cu;
label_3d681c:
    // 0x3d681c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x3d681cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3d6820:
    // 0x3d6820: 0xc10705c  jal         func_41C170
label_3d6824:
    if (ctx->pc == 0x3D6824u) {
        ctx->pc = 0x3D6824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6820u;
        // 0x3d6824: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6828u;
        goto label_3d6828;
    }
    ctx->pc = 0x3D6820u;
    SET_GPR_U32(ctx, 31, 0x3D6828u);
    ctx->pc = 0x3D6824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6820u;
    // 0x3d6824: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x3D6820u, 0x3D6828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6828u;
label_3d6828:
    // 0x3d6828: 0x5620fff6  bnel        $s1, $zero, . + 4 + (-0xA << 2)
label_3d682c:
    if (ctx->pc == 0x3D682Cu) {
        ctx->pc = 0x3D682Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6828u;
        // 0x3d682c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6830u;
        goto label_3d6830;
    }
    ctx->pc = 0x3D6828u;
    {
        const bool branch_taken_0x3d6828 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d6828) {
            ctx->pc = 0x3D682Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D6828u;
            // 0x3d682c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D6804u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d6804;
        }
    }
    ctx->pc = 0x3D6830u;
label_3d6830:
    // 0x3d6830: 0x1000005a  b           . + 4 + (0x5A << 2)
label_3d6834:
    if (ctx->pc == 0x3D6834u) {
        ctx->pc = 0x3D6834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6830u;
        // 0x3d6834: 0x8ec2010c  lw          $v0, 0x10C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6838u;
        goto label_3d6838;
    }
    ctx->pc = 0x3D6830u;
    {
        const bool branch_taken_0x3d6830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6830u;
        // 0x3d6834: 0x8ec2010c  lw          $v0, 0x10C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6830) {
            ctx->pc = 0x3D699Cu;
            goto label_3d699c;
        }
    }
    ctx->pc = 0x3D6838u;
label_3d6838:
    // 0x3d6838: 0x12e0002d  beqz        $s7, . + 4 + (0x2D << 2)
label_3d683c:
    if (ctx->pc == 0x3D683Cu) {
        ctx->pc = 0x3D6840u;
        goto label_3d6840;
    }
    ctx->pc = 0x3D6838u;
    {
        const bool branch_taken_0x3d6838 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d6838) {
            ctx->pc = 0x3D68F0u;
            goto label_3d68f0;
        }
    }
    ctx->pc = 0x3D6840u;
label_3d6840:
    // 0x3d6840: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3d6840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d6844:
    // 0x3d6844: 0xc1073a8  jal         func_41CEA0
label_3d6848:
    if (ctx->pc == 0x3D6848u) {
        ctx->pc = 0x3D6848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6844u;
        // 0x3d6848: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D684Cu;
        goto label_3d684c;
    }
    ctx->pc = 0x3D6844u;
    SET_GPR_U32(ctx, 31, 0x3D684Cu);
    ctx->pc = 0x3D6848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6844u;
    // 0x3d6848: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CEA0u, 0x3D6844u, 0x3D684Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D684Cu;
label_3d684c:
    // 0x3d684c: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
label_3d6850:
    if (ctx->pc == 0x3D6850u) {
        ctx->pc = 0x3D6854u;
        goto label_3d6854;
    }
    ctx->pc = 0x3D684Cu;
    {
        const bool branch_taken_0x3d684c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d684c) {
            ctx->pc = 0x3D68F0u;
            goto label_3d68f0;
        }
    }
    ctx->pc = 0x3D6854u;
label_3d6854:
    // 0x3d6854: 0x1a400050  blez        $s2, . + 4 + (0x50 << 2)
label_3d6858:
    if (ctx->pc == 0x3D6858u) {
        ctx->pc = 0x3D6858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6854u;
        // 0x3d6858: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D685Cu;
        goto label_3d685c;
    }
    ctx->pc = 0x3D6854u;
    {
        const bool branch_taken_0x3d6854 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x3D6858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6854u;
        // 0x3d6858: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6854) {
            ctx->pc = 0x3D6998u;
            goto label_3d6998;
        }
    }
    ctx->pc = 0x3D685Cu;
label_3d685c:
    // 0x3d685c: 0x121023  negu        $v0, $s2
    ctx->pc = 0x3d685cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
label_3d6860:
    // 0x3d6860: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x3d6860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_3d6864:
    // 0x3d6864: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_3d6868:
    if (ctx->pc == 0x3D6868u) {
        ctx->pc = 0x3D6868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6864u;
        // 0x3d6868: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D686Cu;
        goto label_3d686c;
    }
    ctx->pc = 0x3D6864u;
    {
        const bool branch_taken_0x3d6864 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6864u;
        // 0x3d6868: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6864) {
            ctx->pc = 0x3D68B8u;
            goto label_3d68b8;
        }
    }
    ctx->pc = 0x3D686Cu;
label_3d686c:
    // 0x3d686c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3d686cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_3d6870:
    // 0x3d6870: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_3d6874:
    if (ctx->pc == 0x3D6874u) {
        ctx->pc = 0x3D6874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6870u;
        // 0x3d6874: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6878u;
        goto label_3d6878;
    }
    ctx->pc = 0x3D6870u;
    {
        const bool branch_taken_0x3d6870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6870u;
        // 0x3d6874: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6870) {
            ctx->pc = 0x3D68A0u;
            goto label_3d68a0;
        }
    }
    ctx->pc = 0x3D6878u;
label_3d6878:
    // 0x3d6878: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_3d687c:
    if (ctx->pc == 0x3D687Cu) {
        ctx->pc = 0x3D687Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6878u;
        // 0x3d687c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6880u;
        goto label_3d6880;
    }
    ctx->pc = 0x3D6878u;
    {
        const bool branch_taken_0x3d6878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d6878) {
            ctx->pc = 0x3D687Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D6878u;
            // 0x3d687c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D6894u;
            goto label_3d6894;
        }
    }
    ctx->pc = 0x3D6880u;
label_3d6880:
    // 0x3d6880: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x3d6880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3d6884:
    // 0x3d6884: 0x2651ffff  addiu       $s1, $s2, -0x1
    ctx->pc = 0x3d6884u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_3d6888:
    // 0x3d6888: 0xc10705c  jal         func_41C170
label_3d688c:
    if (ctx->pc == 0x3D688Cu) {
        ctx->pc = 0x3D688Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6888u;
        // 0x3d688c: 0x26700004  addiu       $s0, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6890u;
        goto label_3d6890;
    }
    ctx->pc = 0x3D6888u;
    SET_GPR_U32(ctx, 31, 0x3D6890u);
    ctx->pc = 0x3D688Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6888u;
    // 0x3d688c: 0x26700004  addiu       $s0, $s3, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x3D6888u, 0x3D6890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6890u;
label_3d6890:
    // 0x3d6890: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3d6890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d6894:
    // 0x3d6894: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3d6894u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3d6898:
    // 0x3d6898: 0xc10705c  jal         func_41C170
label_3d689c:
    if (ctx->pc == 0x3D689Cu) {
        ctx->pc = 0x3D689Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6898u;
        // 0x3d689c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D68A0u;
        goto label_3d68a0;
    }
    ctx->pc = 0x3D6898u;
    SET_GPR_U32(ctx, 31, 0x3D68A0u);
    ctx->pc = 0x3D689Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6898u;
    // 0x3d689c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x3D6898u, 0x3D68A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D68A0u;
label_3d68a0:
    // 0x3d68a0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3d68a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d68a4:
    // 0x3d68a4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3d68a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3d68a8:
    // 0x3d68a8: 0xc10705c  jal         func_41C170
label_3d68ac:
    if (ctx->pc == 0x3D68ACu) {
        ctx->pc = 0x3D68ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D68A8u;
        // 0x3d68ac: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D68B0u;
        goto label_3d68b0;
    }
    ctx->pc = 0x3D68A8u;
    SET_GPR_U32(ctx, 31, 0x3D68B0u);
    ctx->pc = 0x3D68ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D68A8u;
    // 0x3d68ac: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x3D68A8u, 0x3D68B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D68B0u;
label_3d68b0:
    // 0x3d68b0: 0x5220003a  beql        $s1, $zero, . + 4 + (0x3A << 2)
label_3d68b4:
    if (ctx->pc == 0x3D68B4u) {
        ctx->pc = 0x3D68B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D68B0u;
        // 0x3d68b4: 0x8ec2010c  lw          $v0, 0x10C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D68B8u;
        goto label_3d68b8;
    }
    ctx->pc = 0x3D68B0u;
    {
        const bool branch_taken_0x3d68b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d68b0) {
            ctx->pc = 0x3D68B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D68B0u;
            // 0x3d68b4: 0x8ec2010c  lw          $v0, 0x10C($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 268)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D699Cu;
            goto label_3d699c;
        }
    }
    ctx->pc = 0x3D68B8u;
label_3d68b8:
    // 0x3d68b8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3d68b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d68bc:
    // 0x3d68bc: 0xc10705c  jal         func_41C170
label_3d68c0:
    if (ctx->pc == 0x3D68C0u) {
        ctx->pc = 0x3D68C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D68BCu;
        // 0x3d68c0: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D68C4u;
        goto label_3d68c4;
    }
    ctx->pc = 0x3D68BCu;
    SET_GPR_U32(ctx, 31, 0x3D68C4u);
    ctx->pc = 0x3D68C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D68BCu;
    // 0x3d68c0: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x3D68BCu, 0x3D68C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D68C4u;
label_3d68c4:
    // 0x3d68c4: 0xc10705c  jal         func_41C170
label_3d68c8:
    if (ctx->pc == 0x3D68C8u) {
        ctx->pc = 0x3D68C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D68C4u;
        // 0x3d68c8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D68CCu;
        goto label_3d68cc;
    }
    ctx->pc = 0x3D68C4u;
    SET_GPR_U32(ctx, 31, 0x3D68CCu);
    ctx->pc = 0x3D68C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D68C4u;
    // 0x3d68c8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x3D68C4u, 0x3D68CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D68CCu;
label_3d68cc:
    // 0x3d68cc: 0xc10705c  jal         func_41C170
label_3d68d0:
    if (ctx->pc == 0x3D68D0u) {
        ctx->pc = 0x3D68D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D68CCu;
        // 0x3d68d0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D68D4u;
        goto label_3d68d4;
    }
    ctx->pc = 0x3D68CCu;
    SET_GPR_U32(ctx, 31, 0x3D68D4u);
    ctx->pc = 0x3D68D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D68CCu;
    // 0x3d68d0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x3D68CCu, 0x3D68D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D68D4u;
label_3d68d4:
    // 0x3d68d4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x3d68d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3d68d8:
    // 0x3d68d8: 0xc10705c  jal         func_41C170
label_3d68dc:
    if (ctx->pc == 0x3D68DCu) {
        ctx->pc = 0x3D68DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D68D8u;
        // 0x3d68dc: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D68E0u;
        goto label_3d68e0;
    }
    ctx->pc = 0x3D68D8u;
    SET_GPR_U32(ctx, 31, 0x3D68E0u);
    ctx->pc = 0x3D68DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D68D8u;
    // 0x3d68dc: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x3D68D8u, 0x3D68E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D68E0u;
label_3d68e0:
    // 0x3d68e0: 0x5620fff6  bnel        $s1, $zero, . + 4 + (-0xA << 2)
label_3d68e4:
    if (ctx->pc == 0x3D68E4u) {
        ctx->pc = 0x3D68E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D68E0u;
        // 0x3d68e4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D68E8u;
        goto label_3d68e8;
    }
    ctx->pc = 0x3D68E0u;
    {
        const bool branch_taken_0x3d68e0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d68e0) {
            ctx->pc = 0x3D68E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D68E0u;
            // 0x3d68e4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D68BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d68bc;
        }
    }
    ctx->pc = 0x3D68E8u;
label_3d68e8:
    // 0x3d68e8: 0x1000002c  b           . + 4 + (0x2C << 2)
label_3d68ec:
    if (ctx->pc == 0x3D68ECu) {
        ctx->pc = 0x3D68ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D68E8u;
        // 0x3d68ec: 0x8ec2010c  lw          $v0, 0x10C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D68F0u;
        goto label_3d68f0;
    }
    ctx->pc = 0x3D68E8u;
    {
        const bool branch_taken_0x3d68e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D68ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D68E8u;
        // 0x3d68ec: 0x8ec2010c  lw          $v0, 0x10C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d68e8) {
            ctx->pc = 0x3D699Cu;
            goto label_3d699c;
        }
    }
    ctx->pc = 0x3D68F0u;
label_3d68f0:
    // 0x3d68f0: 0xc1075d0  jal         func_41D740
label_3d68f4:
    if (ctx->pc == 0x3D68F4u) {
        ctx->pc = 0x3D68F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D68F0u;
        // 0x3d68f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D68F8u;
        goto label_3d68f8;
    }
    ctx->pc = 0x3D68F0u;
    SET_GPR_U32(ctx, 31, 0x3D68F8u);
    ctx->pc = 0x3D68F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D68F0u;
    // 0x3d68f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D740u, 0x3D68F0u, 0x3D68F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D68F8u;
label_3d68f8:
    // 0x3d68f8: 0x5440002d  bnel        $v0, $zero, . + 4 + (0x2D << 2)
label_3d68fc:
    if (ctx->pc == 0x3D68FCu) {
        ctx->pc = 0x3D68FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D68F8u;
        // 0x3d68fc: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6900u;
        goto label_3d6900;
    }
    ctx->pc = 0x3D68F8u;
    {
        const bool branch_taken_0x3d68f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d68f8) {
            ctx->pc = 0x3D68FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D68F8u;
            // 0x3d68fc: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D69B0u;
            goto label_3d69b0;
        }
    }
    ctx->pc = 0x3D6900u;
label_3d6900:
    // 0x3d6900: 0x6400025  bltz        $s2, . + 4 + (0x25 << 2)
label_3d6904:
    if (ctx->pc == 0x3D6904u) {
        ctx->pc = 0x3D6904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6900u;
        // 0x3d6904: 0x26510001  addiu       $s1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6908u;
        goto label_3d6908;
    }
    ctx->pc = 0x3D6900u;
    {
        const bool branch_taken_0x3d6900 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x3D6904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6900u;
        // 0x3d6904: 0x26510001  addiu       $s1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6900) {
            ctx->pc = 0x3D6998u;
            goto label_3d6998;
        }
    }
    ctx->pc = 0x3D6908u;
label_3d6908:
    // 0x3d6908: 0x111023  negu        $v0, $s1
    ctx->pc = 0x3d6908u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
label_3d690c:
    // 0x3d690c: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x3d690cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_3d6910:
    // 0x3d6910: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
label_3d6914:
    if (ctx->pc == 0x3D6914u) {
        ctx->pc = 0x3D6914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6910u;
        // 0x3d6914: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6918u;
        goto label_3d6918;
    }
    ctx->pc = 0x3D6910u;
    {
        const bool branch_taken_0x3d6910 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6910u;
        // 0x3d6914: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6910) {
            ctx->pc = 0x3D6968u;
            goto label_3d6968;
        }
    }
    ctx->pc = 0x3D6918u;
label_3d6918:
    // 0x3d6918: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3d6918u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_3d691c:
    // 0x3d691c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_3d6920:
    if (ctx->pc == 0x3D6920u) {
        ctx->pc = 0x3D6920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D691Cu;
        // 0x3d6920: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6924u;
        goto label_3d6924;
    }
    ctx->pc = 0x3D691Cu;
    {
        const bool branch_taken_0x3d691c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D691Cu;
        // 0x3d6920: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d691c) {
            ctx->pc = 0x3D694Cu;
            goto label_3d694c;
        }
    }
    ctx->pc = 0x3D6924u;
label_3d6924:
    // 0x3d6924: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_3d6928:
    if (ctx->pc == 0x3D6928u) {
        ctx->pc = 0x3D6928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6924u;
        // 0x3d6928: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D692Cu;
        goto label_3d692c;
    }
    ctx->pc = 0x3D6924u;
    {
        const bool branch_taken_0x3d6924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d6924) {
            ctx->pc = 0x3D6928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D6924u;
            // 0x3d6928: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D6940u;
            goto label_3d6940;
        }
    }
    ctx->pc = 0x3D692Cu;
label_3d692c:
    // 0x3d692c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x3d692cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3d6930:
    // 0x3d6930: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x3d6930u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d6934:
    // 0x3d6934: 0xc10705c  jal         func_41C170
label_3d6938:
    if (ctx->pc == 0x3D6938u) {
        ctx->pc = 0x3D6938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6934u;
        // 0x3d6938: 0x26700004  addiu       $s0, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D693Cu;
        goto label_3d693c;
    }
    ctx->pc = 0x3D6934u;
    SET_GPR_U32(ctx, 31, 0x3D693Cu);
    ctx->pc = 0x3D6938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6934u;
    // 0x3d6938: 0x26700004  addiu       $s0, $s3, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x3D6934u, 0x3D693Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D693Cu;
label_3d693c:
    // 0x3d693c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3d693cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d6940:
    // 0x3d6940: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3d6940u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3d6944:
    // 0x3d6944: 0xc10705c  jal         func_41C170
label_3d6948:
    if (ctx->pc == 0x3D6948u) {
        ctx->pc = 0x3D6948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6944u;
        // 0x3d6948: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D694Cu;
        goto label_3d694c;
    }
    ctx->pc = 0x3D6944u;
    SET_GPR_U32(ctx, 31, 0x3D694Cu);
    ctx->pc = 0x3D6948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6944u;
    // 0x3d6948: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x3D6944u, 0x3D694Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D694Cu;
label_3d694c:
    // 0x3d694c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3d694cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d6950:
    // 0x3d6950: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3d6950u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3d6954:
    // 0x3d6954: 0xc10705c  jal         func_41C170
label_3d6958:
    if (ctx->pc == 0x3D6958u) {
        ctx->pc = 0x3D6958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6954u;
        // 0x3d6958: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D695Cu;
        goto label_3d695c;
    }
    ctx->pc = 0x3D6954u;
    SET_GPR_U32(ctx, 31, 0x3D695Cu);
    ctx->pc = 0x3D6958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6954u;
    // 0x3d6958: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x3D6954u, 0x3D695Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D695Cu;
label_3d695c:
    // 0x3d695c: 0x5220000f  beql        $s1, $zero, . + 4 + (0xF << 2)
label_3d6960:
    if (ctx->pc == 0x3D6960u) {
        ctx->pc = 0x3D6960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D695Cu;
        // 0x3d6960: 0x8ec2010c  lw          $v0, 0x10C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6964u;
        goto label_3d6964;
    }
    ctx->pc = 0x3D695Cu;
    {
        const bool branch_taken_0x3d695c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d695c) {
            ctx->pc = 0x3D6960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D695Cu;
            // 0x3d6960: 0x8ec2010c  lw          $v0, 0x10C($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 268)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D699Cu;
            goto label_3d699c;
        }
    }
    ctx->pc = 0x3D6964u;
label_3d6964:
    // 0x3d6964: 0x0  nop
    ctx->pc = 0x3d6964u;
    // NOP
label_3d6968:
    // 0x3d6968: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3d6968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d696c:
    // 0x3d696c: 0xc10705c  jal         func_41C170
label_3d6970:
    if (ctx->pc == 0x3D6970u) {
        ctx->pc = 0x3D6970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D696Cu;
        // 0x3d6970: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6974u;
        goto label_3d6974;
    }
    ctx->pc = 0x3D696Cu;
    SET_GPR_U32(ctx, 31, 0x3D6974u);
    ctx->pc = 0x3D6970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D696Cu;
    // 0x3d6970: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x3D696Cu, 0x3D6974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6974u;
label_3d6974:
    // 0x3d6974: 0xc10705c  jal         func_41C170
label_3d6978:
    if (ctx->pc == 0x3D6978u) {
        ctx->pc = 0x3D6978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6974u;
        // 0x3d6978: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D697Cu;
        goto label_3d697c;
    }
    ctx->pc = 0x3D6974u;
    SET_GPR_U32(ctx, 31, 0x3D697Cu);
    ctx->pc = 0x3D6978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6974u;
    // 0x3d6978: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x3D6974u, 0x3D697Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D697Cu;
label_3d697c:
    // 0x3d697c: 0xc10705c  jal         func_41C170
label_3d6980:
    if (ctx->pc == 0x3D6980u) {
        ctx->pc = 0x3D6980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D697Cu;
        // 0x3d6980: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6984u;
        goto label_3d6984;
    }
    ctx->pc = 0x3D697Cu;
    SET_GPR_U32(ctx, 31, 0x3D6984u);
    ctx->pc = 0x3D6980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D697Cu;
    // 0x3d6980: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x3D697Cu, 0x3D6984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6984u;
label_3d6984:
    // 0x3d6984: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x3d6984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3d6988:
    // 0x3d6988: 0xc10705c  jal         func_41C170
label_3d698c:
    if (ctx->pc == 0x3D698Cu) {
        ctx->pc = 0x3D698Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6988u;
        // 0x3d698c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6990u;
        goto label_3d6990;
    }
    ctx->pc = 0x3D6988u;
    SET_GPR_U32(ctx, 31, 0x3D6990u);
    ctx->pc = 0x3D698Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6988u;
    // 0x3d698c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x3D6988u, 0x3D6990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6990u;
label_3d6990:
    // 0x3d6990: 0x5620fff6  bnel        $s1, $zero, . + 4 + (-0xA << 2)
label_3d6994:
    if (ctx->pc == 0x3D6994u) {
        ctx->pc = 0x3D6994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6990u;
        // 0x3d6994: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6998u;
        goto label_3d6998;
    }
    ctx->pc = 0x3D6990u;
    {
        const bool branch_taken_0x3d6990 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d6990) {
            ctx->pc = 0x3D6994u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D6990u;
            // 0x3d6994: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D696Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d696c;
        }
    }
    ctx->pc = 0x3D6998u;
label_3d6998:
    // 0x3d6998: 0x8ec2010c  lw          $v0, 0x10C($s6)
    ctx->pc = 0x3d6998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 268)));
label_3d699c:
    // 0x3d699c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3d699cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d69a0:
    // 0x3d69a0: 0x40f809  jalr        $v0
label_3d69a4:
    if (ctx->pc == 0x3D69A4u) {
        ctx->pc = 0x3D69A8u;
        goto label_3d69a8;
    }
    ctx->pc = 0x3D69A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D69A8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D69A0u, 0x3D69A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D69A8u;
label_3d69a8:
    // 0x3d69a8: 0x10000005  b           . + 4 + (0x5 << 2)
label_3d69ac:
    if (ctx->pc == 0x3D69ACu) {
        ctx->pc = 0x3D69ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D69A8u;
        // 0x3d69ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D69B0u;
        goto label_3d69b0;
    }
    ctx->pc = 0x3D69A8u;
    {
        const bool branch_taken_0x3d69a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D69ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D69A8u;
        // 0x3d69ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d69a8) {
            ctx->pc = 0x3D69C0u;
            goto label_3d69c0;
        }
    }
    ctx->pc = 0x3D69B0u;
label_3d69b0:
    // 0x3d69b0: 0x254102a  slt         $v0, $s2, $s4
    ctx->pc = 0x3d69b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_3d69b4:
    // 0x3d69b4: 0x1440ff40  bnez        $v0, . + 4 + (-0xC0 << 2)
label_3d69b8:
    if (ctx->pc == 0x3D69B8u) {
        ctx->pc = 0x3D69B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D69B4u;
        // 0x3d69b8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D69BCu;
        goto label_3d69bc;
    }
    ctx->pc = 0x3D69B4u;
    {
        const bool branch_taken_0x3d69b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D69B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D69B4u;
        // 0x3d69b8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d69b4) {
            ctx->pc = 0x3D66B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d66b8;
        }
    }
    ctx->pc = 0x3D69BCu;
label_3d69bc:
    // 0x3d69bc: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3d69bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d69c0:
    // 0x3d69c0: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x3d69c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3d69c4:
    // 0x3d69c4: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x3d69c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3d69c8:
    // 0x3d69c8: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x3d69c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3d69cc:
    // 0x3d69cc: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x3d69ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3d69d0:
    // 0x3d69d0: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3d69d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3d69d4:
    // 0x3d69d4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3d69d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3d69d8:
    // 0x3d69d8: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x3d69d8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d69dc:
    // 0x3d69dc: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x3d69dcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3d69e0:
    // 0x3d69e0: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x3d69e0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d69e4:
    // 0x3d69e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d69e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3d69e8:
    // 0x3d69e8: 0x3e00008  jr          $ra
label_3d69ec:
    if (ctx->pc == 0x3D69ECu) {
        ctx->pc = 0x3D69ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D69E8u;
        // 0x3d69ec: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D69F0u;
        goto label_3d69f0;
    }
    ctx->pc = 0x3D69E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D69ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D69E8u;
        // 0x3d69ec: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D69E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D69F0u;
label_3d69f0:
    // 0x3d69f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d69f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3d69f4:
    // 0x3d69f4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3d69f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3d69f8:
    // 0x3d69f8: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x3d69f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
label_3d69fc:
    // 0x3d69fc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d69fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3d6a00:
    // 0x3d6a00: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3d6a00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_3d6a04:
    // 0x3d6a04: 0x24a56c38  addiu       $a1, $a1, 0x6C38
    ctx->pc = 0x3d6a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27704));
label_3d6a08:
    // 0x3d6a08: 0xc1082d8  jal         func_420B60
label_3d6a0c:
    if (ctx->pc == 0x3D6A0Cu) {
        ctx->pc = 0x3D6A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6A08u;
        // 0x3d6a0c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6A10u;
        goto label_3d6a10;
    }
    ctx->pc = 0x3D6A08u;
    SET_GPR_U32(ctx, 31, 0x3D6A10u);
    ctx->pc = 0x3D6A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6A08u;
    // 0x3d6a0c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420B60u, 0x3D6A08u, 0x3D6A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6A10u;
label_3d6a10:
    // 0x3d6a10: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3d6a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3d6a14:
    // 0x3d6a14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d6a14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3d6a18:
    // 0x3d6a18: 0x3e00008  jr          $ra
label_3d6a1c:
    if (ctx->pc == 0x3D6A1Cu) {
        ctx->pc = 0x3D6A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6A18u;
        // 0x3d6a1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6A20u;
        goto label_fallthrough_0x3d6a18;
    }
    ctx->pc = 0x3D6A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D6A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6A18u;
        // 0x3d6a1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D6A18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3d6a18:
    ctx->pc = 0x3D6A20u;
}
