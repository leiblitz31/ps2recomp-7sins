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

// Function: sub_00123690
// Address: 0x123690 - 0x123be0
void sub_00123690_0x123690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123690_0x123690");
#endif

    switch (ctx->pc) {
        case 0x123690u: goto label_123690;
        case 0x123694u: goto label_123694;
        case 0x123698u: goto label_123698;
        case 0x12369cu: goto label_12369c;
        case 0x1236a0u: goto label_1236a0;
        case 0x1236a4u: goto label_1236a4;
        case 0x1236a8u: goto label_1236a8;
        case 0x1236acu: goto label_1236ac;
        case 0x1236b0u: goto label_1236b0;
        case 0x1236b4u: goto label_1236b4;
        case 0x1236b8u: goto label_1236b8;
        case 0x1236bcu: goto label_1236bc;
        case 0x1236c0u: goto label_1236c0;
        case 0x1236c4u: goto label_1236c4;
        case 0x1236c8u: goto label_1236c8;
        case 0x1236ccu: goto label_1236cc;
        case 0x1236d0u: goto label_1236d0;
        case 0x1236d4u: goto label_1236d4;
        case 0x1236d8u: goto label_1236d8;
        case 0x1236dcu: goto label_1236dc;
        case 0x1236e0u: goto label_1236e0;
        case 0x1236e4u: goto label_1236e4;
        case 0x1236e8u: goto label_1236e8;
        case 0x1236ecu: goto label_1236ec;
        case 0x1236f0u: goto label_1236f0;
        case 0x1236f4u: goto label_1236f4;
        case 0x1236f8u: goto label_1236f8;
        case 0x1236fcu: goto label_1236fc;
        case 0x123700u: goto label_123700;
        case 0x123704u: goto label_123704;
        case 0x123708u: goto label_123708;
        case 0x12370cu: goto label_12370c;
        case 0x123710u: goto label_123710;
        case 0x123714u: goto label_123714;
        case 0x123718u: goto label_123718;
        case 0x12371cu: goto label_12371c;
        case 0x123720u: goto label_123720;
        case 0x123724u: goto label_123724;
        case 0x123728u: goto label_123728;
        case 0x12372cu: goto label_12372c;
        case 0x123730u: goto label_123730;
        case 0x123734u: goto label_123734;
        case 0x123738u: goto label_123738;
        case 0x12373cu: goto label_12373c;
        case 0x123740u: goto label_123740;
        case 0x123744u: goto label_123744;
        case 0x123748u: goto label_123748;
        case 0x12374cu: goto label_12374c;
        case 0x123750u: goto label_123750;
        case 0x123754u: goto label_123754;
        case 0x123758u: goto label_123758;
        case 0x12375cu: goto label_12375c;
        case 0x123760u: goto label_123760;
        case 0x123764u: goto label_123764;
        case 0x123768u: goto label_123768;
        case 0x12376cu: goto label_12376c;
        case 0x123770u: goto label_123770;
        case 0x123774u: goto label_123774;
        case 0x123778u: goto label_123778;
        case 0x12377cu: goto label_12377c;
        case 0x123780u: goto label_123780;
        case 0x123784u: goto label_123784;
        case 0x123788u: goto label_123788;
        case 0x12378cu: goto label_12378c;
        case 0x123790u: goto label_123790;
        case 0x123794u: goto label_123794;
        case 0x123798u: goto label_123798;
        case 0x12379cu: goto label_12379c;
        case 0x1237a0u: goto label_1237a0;
        case 0x1237a4u: goto label_1237a4;
        case 0x1237a8u: goto label_1237a8;
        case 0x1237acu: goto label_1237ac;
        case 0x1237b0u: goto label_1237b0;
        case 0x1237b4u: goto label_1237b4;
        case 0x1237b8u: goto label_1237b8;
        case 0x1237bcu: goto label_1237bc;
        case 0x1237c0u: goto label_1237c0;
        case 0x1237c4u: goto label_1237c4;
        case 0x1237c8u: goto label_1237c8;
        case 0x1237ccu: goto label_1237cc;
        case 0x1237d0u: goto label_1237d0;
        case 0x1237d4u: goto label_1237d4;
        case 0x1237d8u: goto label_1237d8;
        case 0x1237dcu: goto label_1237dc;
        case 0x1237e0u: goto label_1237e0;
        case 0x1237e4u: goto label_1237e4;
        case 0x1237e8u: goto label_1237e8;
        case 0x1237ecu: goto label_1237ec;
        case 0x1237f0u: goto label_1237f0;
        case 0x1237f4u: goto label_1237f4;
        case 0x1237f8u: goto label_1237f8;
        case 0x1237fcu: goto label_1237fc;
        case 0x123800u: goto label_123800;
        case 0x123804u: goto label_123804;
        case 0x123808u: goto label_123808;
        case 0x12380cu: goto label_12380c;
        case 0x123810u: goto label_123810;
        case 0x123814u: goto label_123814;
        case 0x123818u: goto label_123818;
        case 0x12381cu: goto label_12381c;
        case 0x123820u: goto label_123820;
        case 0x123824u: goto label_123824;
        case 0x123828u: goto label_123828;
        case 0x12382cu: goto label_12382c;
        case 0x123830u: goto label_123830;
        case 0x123834u: goto label_123834;
        case 0x123838u: goto label_123838;
        case 0x12383cu: goto label_12383c;
        case 0x123840u: goto label_123840;
        case 0x123844u: goto label_123844;
        case 0x123848u: goto label_123848;
        case 0x12384cu: goto label_12384c;
        case 0x123850u: goto label_123850;
        case 0x123854u: goto label_123854;
        case 0x123858u: goto label_123858;
        case 0x12385cu: goto label_12385c;
        case 0x123860u: goto label_123860;
        case 0x123864u: goto label_123864;
        case 0x123868u: goto label_123868;
        case 0x12386cu: goto label_12386c;
        case 0x123870u: goto label_123870;
        case 0x123874u: goto label_123874;
        case 0x123878u: goto label_123878;
        case 0x12387cu: goto label_12387c;
        case 0x123880u: goto label_123880;
        case 0x123884u: goto label_123884;
        case 0x123888u: goto label_123888;
        case 0x12388cu: goto label_12388c;
        case 0x123890u: goto label_123890;
        case 0x123894u: goto label_123894;
        case 0x123898u: goto label_123898;
        case 0x12389cu: goto label_12389c;
        case 0x1238a0u: goto label_1238a0;
        case 0x1238a4u: goto label_1238a4;
        case 0x1238a8u: goto label_1238a8;
        case 0x1238acu: goto label_1238ac;
        case 0x1238b0u: goto label_1238b0;
        case 0x1238b4u: goto label_1238b4;
        case 0x1238b8u: goto label_1238b8;
        case 0x1238bcu: goto label_1238bc;
        case 0x1238c0u: goto label_1238c0;
        case 0x1238c4u: goto label_1238c4;
        case 0x1238c8u: goto label_1238c8;
        case 0x1238ccu: goto label_1238cc;
        case 0x1238d0u: goto label_1238d0;
        case 0x1238d4u: goto label_1238d4;
        case 0x1238d8u: goto label_1238d8;
        case 0x1238dcu: goto label_1238dc;
        case 0x1238e0u: goto label_1238e0;
        case 0x1238e4u: goto label_1238e4;
        case 0x1238e8u: goto label_1238e8;
        case 0x1238ecu: goto label_1238ec;
        case 0x1238f0u: goto label_1238f0;
        case 0x1238f4u: goto label_1238f4;
        case 0x1238f8u: goto label_1238f8;
        case 0x1238fcu: goto label_1238fc;
        case 0x123900u: goto label_123900;
        case 0x123904u: goto label_123904;
        case 0x123908u: goto label_123908;
        case 0x12390cu: goto label_12390c;
        case 0x123910u: goto label_123910;
        case 0x123914u: goto label_123914;
        case 0x123918u: goto label_123918;
        case 0x12391cu: goto label_12391c;
        case 0x123920u: goto label_123920;
        case 0x123924u: goto label_123924;
        case 0x123928u: goto label_123928;
        case 0x12392cu: goto label_12392c;
        case 0x123930u: goto label_123930;
        case 0x123934u: goto label_123934;
        case 0x123938u: goto label_123938;
        case 0x12393cu: goto label_12393c;
        case 0x123940u: goto label_123940;
        case 0x123944u: goto label_123944;
        case 0x123948u: goto label_123948;
        case 0x12394cu: goto label_12394c;
        case 0x123950u: goto label_123950;
        case 0x123954u: goto label_123954;
        case 0x123958u: goto label_123958;
        case 0x12395cu: goto label_12395c;
        case 0x123960u: goto label_123960;
        case 0x123964u: goto label_123964;
        case 0x123968u: goto label_123968;
        case 0x12396cu: goto label_12396c;
        case 0x123970u: goto label_123970;
        case 0x123974u: goto label_123974;
        case 0x123978u: goto label_123978;
        case 0x12397cu: goto label_12397c;
        case 0x123980u: goto label_123980;
        case 0x123984u: goto label_123984;
        case 0x123988u: goto label_123988;
        case 0x12398cu: goto label_12398c;
        case 0x123990u: goto label_123990;
        case 0x123994u: goto label_123994;
        case 0x123998u: goto label_123998;
        case 0x12399cu: goto label_12399c;
        case 0x1239a0u: goto label_1239a0;
        case 0x1239a4u: goto label_1239a4;
        case 0x1239a8u: goto label_1239a8;
        case 0x1239acu: goto label_1239ac;
        case 0x1239b0u: goto label_1239b0;
        case 0x1239b4u: goto label_1239b4;
        case 0x1239b8u: goto label_1239b8;
        case 0x1239bcu: goto label_1239bc;
        case 0x1239c0u: goto label_1239c0;
        case 0x1239c4u: goto label_1239c4;
        case 0x1239c8u: goto label_1239c8;
        case 0x1239ccu: goto label_1239cc;
        case 0x1239d0u: goto label_1239d0;
        case 0x1239d4u: goto label_1239d4;
        case 0x1239d8u: goto label_1239d8;
        case 0x1239dcu: goto label_1239dc;
        case 0x1239e0u: goto label_1239e0;
        case 0x1239e4u: goto label_1239e4;
        case 0x1239e8u: goto label_1239e8;
        case 0x1239ecu: goto label_1239ec;
        case 0x1239f0u: goto label_1239f0;
        case 0x1239f4u: goto label_1239f4;
        case 0x1239f8u: goto label_1239f8;
        case 0x1239fcu: goto label_1239fc;
        case 0x123a00u: goto label_123a00;
        case 0x123a04u: goto label_123a04;
        case 0x123a08u: goto label_123a08;
        case 0x123a0cu: goto label_123a0c;
        case 0x123a10u: goto label_123a10;
        case 0x123a14u: goto label_123a14;
        case 0x123a18u: goto label_123a18;
        case 0x123a1cu: goto label_123a1c;
        case 0x123a20u: goto label_123a20;
        case 0x123a24u: goto label_123a24;
        case 0x123a28u: goto label_123a28;
        case 0x123a2cu: goto label_123a2c;
        case 0x123a30u: goto label_123a30;
        case 0x123a34u: goto label_123a34;
        case 0x123a38u: goto label_123a38;
        case 0x123a3cu: goto label_123a3c;
        case 0x123a40u: goto label_123a40;
        case 0x123a44u: goto label_123a44;
        case 0x123a48u: goto label_123a48;
        case 0x123a4cu: goto label_123a4c;
        case 0x123a50u: goto label_123a50;
        case 0x123a54u: goto label_123a54;
        case 0x123a58u: goto label_123a58;
        case 0x123a5cu: goto label_123a5c;
        case 0x123a60u: goto label_123a60;
        case 0x123a64u: goto label_123a64;
        case 0x123a68u: goto label_123a68;
        case 0x123a6cu: goto label_123a6c;
        case 0x123a70u: goto label_123a70;
        case 0x123a74u: goto label_123a74;
        case 0x123a78u: goto label_123a78;
        case 0x123a7cu: goto label_123a7c;
        case 0x123a80u: goto label_123a80;
        case 0x123a84u: goto label_123a84;
        case 0x123a88u: goto label_123a88;
        case 0x123a8cu: goto label_123a8c;
        case 0x123a90u: goto label_123a90;
        case 0x123a94u: goto label_123a94;
        case 0x123a98u: goto label_123a98;
        case 0x123a9cu: goto label_123a9c;
        case 0x123aa0u: goto label_123aa0;
        case 0x123aa4u: goto label_123aa4;
        case 0x123aa8u: goto label_123aa8;
        case 0x123aacu: goto label_123aac;
        case 0x123ab0u: goto label_123ab0;
        case 0x123ab4u: goto label_123ab4;
        case 0x123ab8u: goto label_123ab8;
        case 0x123abcu: goto label_123abc;
        case 0x123ac0u: goto label_123ac0;
        case 0x123ac4u: goto label_123ac4;
        case 0x123ac8u: goto label_123ac8;
        case 0x123accu: goto label_123acc;
        case 0x123ad0u: goto label_123ad0;
        case 0x123ad4u: goto label_123ad4;
        case 0x123ad8u: goto label_123ad8;
        case 0x123adcu: goto label_123adc;
        case 0x123ae0u: goto label_123ae0;
        case 0x123ae4u: goto label_123ae4;
        case 0x123ae8u: goto label_123ae8;
        case 0x123aecu: goto label_123aec;
        case 0x123af0u: goto label_123af0;
        case 0x123af4u: goto label_123af4;
        case 0x123af8u: goto label_123af8;
        case 0x123afcu: goto label_123afc;
        case 0x123b00u: goto label_123b00;
        case 0x123b04u: goto label_123b04;
        case 0x123b08u: goto label_123b08;
        case 0x123b0cu: goto label_123b0c;
        case 0x123b10u: goto label_123b10;
        case 0x123b14u: goto label_123b14;
        case 0x123b18u: goto label_123b18;
        case 0x123b1cu: goto label_123b1c;
        case 0x123b20u: goto label_123b20;
        case 0x123b24u: goto label_123b24;
        case 0x123b28u: goto label_123b28;
        case 0x123b2cu: goto label_123b2c;
        case 0x123b30u: goto label_123b30;
        case 0x123b34u: goto label_123b34;
        case 0x123b38u: goto label_123b38;
        case 0x123b3cu: goto label_123b3c;
        case 0x123b40u: goto label_123b40;
        case 0x123b44u: goto label_123b44;
        case 0x123b48u: goto label_123b48;
        case 0x123b4cu: goto label_123b4c;
        case 0x123b50u: goto label_123b50;
        case 0x123b54u: goto label_123b54;
        case 0x123b58u: goto label_123b58;
        case 0x123b5cu: goto label_123b5c;
        case 0x123b60u: goto label_123b60;
        case 0x123b64u: goto label_123b64;
        case 0x123b68u: goto label_123b68;
        case 0x123b6cu: goto label_123b6c;
        case 0x123b70u: goto label_123b70;
        case 0x123b74u: goto label_123b74;
        case 0x123b78u: goto label_123b78;
        case 0x123b7cu: goto label_123b7c;
        case 0x123b80u: goto label_123b80;
        case 0x123b84u: goto label_123b84;
        case 0x123b88u: goto label_123b88;
        case 0x123b8cu: goto label_123b8c;
        case 0x123b90u: goto label_123b90;
        case 0x123b94u: goto label_123b94;
        case 0x123b98u: goto label_123b98;
        case 0x123b9cu: goto label_123b9c;
        case 0x123ba0u: goto label_123ba0;
        case 0x123ba4u: goto label_123ba4;
        case 0x123ba8u: goto label_123ba8;
        case 0x123bacu: goto label_123bac;
        case 0x123bb0u: goto label_123bb0;
        case 0x123bb4u: goto label_123bb4;
        case 0x123bb8u: goto label_123bb8;
        case 0x123bbcu: goto label_123bbc;
        case 0x123bc0u: goto label_123bc0;
        case 0x123bc4u: goto label_123bc4;
        case 0x123bc8u: goto label_123bc8;
        case 0x123bccu: goto label_123bcc;
        case 0x123bd0u: goto label_123bd0;
        case 0x123bd4u: goto label_123bd4;
        case 0x123bd8u: goto label_123bd8;
        case 0x123bdcu: goto label_123bdc;
        default: break;
    }

    ctx->pc = 0x123690u;

label_123690:
    // 0x123690: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x123690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_123694:
    // 0x123694: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x123694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_123698:
    // 0x123698: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x123698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12369c:
    // 0x12369c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x12369cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1236a0:
    // 0x1236a0: 0x3e00008  jr          $ra
label_1236a4:
    if (ctx->pc == 0x1236A4u) {
        ctx->pc = 0x1236A8u;
        goto label_1236a8;
    }
    ctx->pc = 0x1236A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1236A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1236A8u;
label_1236a8:
    // 0x1236a8: 0x0  nop
    ctx->pc = 0x1236a8u;
    // NOP
label_1236ac:
    // 0x1236ac: 0x0  nop
    ctx->pc = 0x1236acu;
    // NOP
label_1236b0:
    // 0x1236b0: 0x27bdfc10  addiu       $sp, $sp, -0x3F0
    ctx->pc = 0x1236b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966288));
label_1236b4:
    // 0x1236b4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1236b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1236b8:
    // 0x1236b8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1236b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1236bc:
    // 0x1236bc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1236bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1236c0:
    // 0x1236c0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1236c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1236c4:
    // 0x1236c4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1236c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1236c8:
    // 0x1236c8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1236c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1236cc:
    // 0x1236cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1236ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1236d0:
    // 0x1236d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1236d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1236d4:
    // 0x1236d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1236d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1236d8:
    // 0x1236d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1236d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1236dc:
    // 0x1236dc: 0xafa403d0  sw          $a0, 0x3D0($sp)
    ctx->pc = 0x1236dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 976), GPR_U32(ctx, 4));
label_1236e0:
    // 0x1236e0: 0xa3a503e0  sb          $a1, 0x3E0($sp)
    ctx->pc = 0x1236e0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 992), (uint8_t)GPR_U32(ctx, 5));
label_1236e4:
    // 0x1236e4: 0x8fa203d0  lw          $v0, 0x3D0($sp)
    ctx->pc = 0x1236e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
label_1236e8:
    // 0x1236e8: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x1236e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_1236ec:
    // 0x1236ec: 0x2405054c  addiu       $a1, $zero, 0x54C
    ctx->pc = 0x1236ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1356));
label_1236f0:
    // 0x1236f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1236f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1236f4:
    // 0x1236f4: 0xc040ab0  jal         func_102AC0
label_1236f8:
    if (ctx->pc == 0x1236F8u) {
        ctx->pc = 0x1236FCu;
        goto label_1236fc;
    }
    ctx->pc = 0x1236F4u;
    SET_GPR_U32(ctx, 31, 0x1236FCu);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x1236F4u, 0x1236FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1236FCu;
label_1236fc:
    // 0x1236fc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1236fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_123700:
    // 0x123700: 0x8fa203d0  lw          $v0, 0x3D0($sp)
    ctx->pc = 0x123700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
label_123704:
    // 0x123704: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x123704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_123708:
    // 0x123708: 0x24050567  addiu       $a1, $zero, 0x567
    ctx->pc = 0x123708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1383));
label_12370c:
    // 0x12370c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12370cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_123710:
    // 0x123710: 0xc040ab0  jal         func_102AC0
label_123714:
    if (ctx->pc == 0x123714u) {
        ctx->pc = 0x123718u;
        goto label_123718;
    }
    ctx->pc = 0x123710u;
    SET_GPR_U32(ctx, 31, 0x123718u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x123710u, 0x123718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123718u;
label_123718:
    // 0x123718: 0xafa203cc  sw          $v0, 0x3CC($sp)
    ctx->pc = 0x123718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 972), GPR_U32(ctx, 2));
label_12371c:
    // 0x12371c: 0x8f84b9dc  lw          $a0, -0x4624($gp)
    ctx->pc = 0x12371cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949340)));
label_123720:
    // 0x123720: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x123720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_123724:
    // 0x123724: 0xc0553d4  jal         func_154F50
label_123728:
    if (ctx->pc == 0x123728u) {
        ctx->pc = 0x12372Cu;
        goto label_12372c;
    }
    ctx->pc = 0x123724u;
    SET_GPR_U32(ctx, 31, 0x12372Cu);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x123724u, 0x12372Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12372Cu;
label_12372c:
    // 0x12372c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12372cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_123730:
    // 0x123730: 0xc05548c  jal         func_155230
label_123734:
    if (ctx->pc == 0x123734u) {
        ctx->pc = 0x123738u;
        goto label_123738;
    }
    ctx->pc = 0x123730u;
    SET_GPR_U32(ctx, 31, 0x123738u);
    ctx->pc = 0x155230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155230u, 0x123730u, 0x123738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123738u;
label_123738:
    // 0x123738: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x123738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12373c:
    // 0x12373c: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x12373cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_123740:
    // 0x123740: 0xc0553d4  jal         func_154F50
label_123744:
    if (ctx->pc == 0x123744u) {
        ctx->pc = 0x123748u;
        goto label_123748;
    }
    ctx->pc = 0x123740u;
    SET_GPR_U32(ctx, 31, 0x123748u);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x123740u, 0x123748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123748u;
label_123748:
    // 0x123748: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x123748u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12374c:
    // 0x12374c: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x12374cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_123750:
    // 0x123750: 0xc042330  jal         func_108CC0
label_123754:
    if (ctx->pc == 0x123754u) {
        ctx->pc = 0x123758u;
        goto label_123758;
    }
    ctx->pc = 0x123750u;
    SET_GPR_U32(ctx, 31, 0x123758u);
    ctx->pc = 0x108CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108CC0u, 0x123750u, 0x123758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123758u;
label_123758:
    // 0x123758: 0xafa203c8  sw          $v0, 0x3C8($sp)
    ctx->pc = 0x123758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 968), GPR_U32(ctx, 2));
label_12375c:
    // 0x12375c: 0x93a203e0  lbu         $v0, 0x3E0($sp)
    ctx->pc = 0x12375cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 992)));
label_123760:
    // 0x123760: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x123760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_123764:
    // 0x123764: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x123764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_123768:
    // 0x123768: 0x1462001e  bne         $v1, $v0, . + 4 + (0x1E << 2)
label_12376c:
    if (ctx->pc == 0x12376Cu) {
        ctx->pc = 0x123770u;
        goto label_123770;
    }
    ctx->pc = 0x123768u;
    {
        const bool branch_taken_0x123768 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x123768) {
            ctx->pc = 0x1237E4u;
            goto label_1237e4;
        }
    }
    ctx->pc = 0x123770u;
label_123770:
    // 0x123770: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x123770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_123774:
    // 0x123774: 0xc08e054  jal         func_238150
label_123778:
    if (ctx->pc == 0x123778u) {
        ctx->pc = 0x12377Cu;
        goto label_12377c;
    }
    ctx->pc = 0x123774u;
    SET_GPR_U32(ctx, 31, 0x12377Cu);
    ctx->pc = 0x238150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238150u, 0x123774u, 0x12377Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12377Cu;
label_12377c:
    // 0x12377c: 0x8f84b9d8  lw          $a0, -0x4628($gp)
    ctx->pc = 0x12377cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949336)));
label_123780:
    // 0x123780: 0xc050c64  jal         func_143190
label_123784:
    if (ctx->pc == 0x123784u) {
        ctx->pc = 0x123788u;
        goto label_123788;
    }
    ctx->pc = 0x123780u;
    SET_GPR_U32(ctx, 31, 0x123788u);
    ctx->pc = 0x143190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143190u, 0x123780u, 0x123788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123788u;
label_123788:
    // 0x123788: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x123788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12378c:
    // 0x12378c: 0xc04738c  jal         func_11CE30
label_123790:
    if (ctx->pc == 0x123790u) {
        ctx->pc = 0x123794u;
        goto label_123794;
    }
    ctx->pc = 0x12378Cu;
    SET_GPR_U32(ctx, 31, 0x123794u);
    ctx->pc = 0x11CE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CE30u, 0x12378Cu, 0x123794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123794u;
label_123794:
    // 0x123794: 0xafa203c4  sw          $v0, 0x3C4($sp)
    ctx->pc = 0x123794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 964), GPR_U32(ctx, 2));
label_123798:
    // 0x123798: 0x8fa403c4  lw          $a0, 0x3C4($sp)
    ctx->pc = 0x123798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 964)));
label_12379c:
    // 0x12379c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x12379cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1237a0:
    // 0x1237a0: 0xc04c608  jal         func_131820
label_1237a4:
    if (ctx->pc == 0x1237A4u) {
        ctx->pc = 0x1237A8u;
        goto label_1237a8;
    }
    ctx->pc = 0x1237A0u;
    SET_GPR_U32(ctx, 31, 0x1237A8u);
    ctx->pc = 0x131820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131820u, 0x1237A0u, 0x1237A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1237A8u;
label_1237a8:
    // 0x1237a8: 0x8f848b38  lw          $a0, -0x74C8($gp)
    ctx->pc = 0x1237a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937400)));
label_1237ac:
    // 0x1237ac: 0xc0bc60c  jal         func_2F1830
label_1237b0:
    if (ctx->pc == 0x1237B0u) {
        ctx->pc = 0x1237B4u;
        goto label_1237b4;
    }
    ctx->pc = 0x1237ACu;
    SET_GPR_U32(ctx, 31, 0x1237B4u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x1237ACu, 0x1237B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1237B4u;
label_1237b4:
    // 0x1237b4: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x1237b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
label_1237b8:
    // 0x1237b8: 0xac622220  sw          $v0, 0x2220($v1)
    ctx->pc = 0x1237b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8736), GPR_U32(ctx, 2));
label_1237bc:
    // 0x1237bc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1237bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1237c0:
    // 0x1237c0: 0xaf828b30  sw          $v0, -0x74D0($gp)
    ctx->pc = 0x1237c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 2));
label_1237c4:
    // 0x1237c4: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1237c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1237c8:
    // 0x1237c8: 0x12820002  beq         $s4, $v0, . + 4 + (0x2 << 2)
label_1237cc:
    if (ctx->pc == 0x1237CCu) {
        ctx->pc = 0x1237D0u;
        goto label_1237d0;
    }
    ctx->pc = 0x1237C8u;
    {
        const bool branch_taken_0x1237c8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x1237c8) {
            ctx->pc = 0x1237D4u;
            goto label_1237d4;
        }
    }
    ctx->pc = 0x1237D0u;
label_1237d0:
    // 0x1237d0: 0xaf80ba14  sw          $zero, -0x45EC($gp)
    ctx->pc = 0x1237d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949396), GPR_U32(ctx, 0));
label_1237d4:
    // 0x1237d4: 0x8fa403d0  lw          $a0, 0x3D0($sp)
    ctx->pc = 0x1237d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
label_1237d8:
    // 0x1237d8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1237d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1237dc:
    // 0x1237dc: 0xc049fb4  jal         func_127ED0
label_1237e0:
    if (ctx->pc == 0x1237E0u) {
        ctx->pc = 0x1237E4u;
        goto label_1237e4;
    }
    ctx->pc = 0x1237DCu;
    SET_GPR_U32(ctx, 31, 0x1237E4u);
    ctx->pc = 0x127ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127ED0u, 0x1237DCu, 0x1237E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1237E4u;
label_1237e4:
    // 0x1237e4: 0x2682fffc  addiu       $v0, $s4, -0x4
    ctx->pc = 0x1237e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967292));
label_1237e8:
    // 0x1237e8: 0x2c41000a  sltiu       $at, $v0, 0xA
    ctx->pc = 0x1237e8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_1237ec:
    // 0x1237ec: 0x102000da  beqz        $at, . + 4 + (0xDA << 2)
label_1237f0:
    if (ctx->pc == 0x1237F0u) {
        ctx->pc = 0x1237F4u;
        goto label_1237f4;
    }
    ctx->pc = 0x1237ECu;
    {
        const bool branch_taken_0x1237ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1237ec) {
            ctx->pc = 0x123B58u;
            goto label_123b58;
        }
    }
    ctx->pc = 0x1237F4u;
label_1237f4:
    // 0x1237f4: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x1237f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
label_1237f8:
    // 0x1237f8: 0x24637f10  addiu       $v1, $v1, 0x7F10
    ctx->pc = 0x1237f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32528));
label_1237fc:
    // 0x1237fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1237fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_123800:
    // 0x123800: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x123800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_123804:
    // 0x123804: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x123804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_123808:
    // 0x123808: 0x400008  jr          $v0
label_12380c:
    if (ctx->pc == 0x12380Cu) {
        ctx->pc = 0x123810u;
        goto label_123810;
    }
    ctx->pc = 0x123808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x123810u: goto label_123810;
            case 0x123818u: goto label_123818;
            case 0x123878u: goto label_123878;
            case 0x12399Cu: goto label_12399c;
            case 0x123B0Cu: goto label_123b0c;
            case 0x123B58u: goto label_123b58;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123808u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x123810u;
label_123810:
    // 0x123810: 0x100000d1  b           . + 4 + (0xD1 << 2)
label_123814:
    if (ctx->pc == 0x123814u) {
        ctx->pc = 0x123818u;
        goto label_123818;
    }
    ctx->pc = 0x123810u;
    {
        const bool branch_taken_0x123810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123810) {
            ctx->pc = 0x123B58u;
            goto label_123b58;
        }
    }
    ctx->pc = 0x123818u;
label_123818:
    // 0x123818: 0x93a203e0  lbu         $v0, 0x3E0($sp)
    ctx->pc = 0x123818u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 992)));
label_12381c:
    // 0x12381c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x12381cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_123820:
    // 0x123820: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x123820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_123824:
    // 0x123824: 0x146200cc  bne         $v1, $v0, . + 4 + (0xCC << 2)
label_123828:
    if (ctx->pc == 0x123828u) {
        ctx->pc = 0x12382Cu;
        goto label_12382c;
    }
    ctx->pc = 0x123824u;
    {
        const bool branch_taken_0x123824 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x123824) {
            ctx->pc = 0x123B58u;
            goto label_123b58;
        }
    }
    ctx->pc = 0x12382Cu;
label_12382c:
    // 0x12382c: 0xaf80b9f0  sw          $zero, -0x4610($gp)
    ctx->pc = 0x12382cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949360), GPR_U32(ctx, 0));
label_123830:
    // 0x123830: 0x8fa403d0  lw          $a0, 0x3D0($sp)
    ctx->pc = 0x123830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
label_123834:
    // 0x123834: 0xc049e90  jal         func_127A40
label_123838:
    if (ctx->pc == 0x123838u) {
        ctx->pc = 0x12383Cu;
        goto label_12383c;
    }
    ctx->pc = 0x123834u;
    SET_GPR_U32(ctx, 31, 0x12383Cu);
    ctx->pc = 0x127A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127A40u, 0x123834u, 0x12383Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12383Cu;
label_12383c:
    // 0x12383c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x12383cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_123840:
    // 0x123840: 0xaf82ba10  sw          $v0, -0x45F0($gp)
    ctx->pc = 0x123840u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949392), GPR_U32(ctx, 2));
label_123844:
    // 0x123844: 0xaf80bb90  sw          $zero, -0x4470($gp)
    ctx->pc = 0x123844u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949776), GPR_U32(ctx, 0));
label_123848:
    // 0x123848: 0xa380ba4c  sb          $zero, -0x45B4($gp)
    ctx->pc = 0x123848u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294949452), (uint8_t)GPR_U32(ctx, 0));
label_12384c:
    // 0x12384c: 0x8fa403d0  lw          $a0, 0x3D0($sp)
    ctx->pc = 0x12384cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
label_123850:
    // 0x123850: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x123850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_123854:
    // 0x123854: 0xc049fb4  jal         func_127ED0
label_123858:
    if (ctx->pc == 0x123858u) {
        ctx->pc = 0x12385Cu;
        goto label_12385c;
    }
    ctx->pc = 0x123854u;
    SET_GPR_U32(ctx, 31, 0x12385Cu);
    ctx->pc = 0x127ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127ED0u, 0x123854u, 0x12385Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12385Cu;
label_12385c:
    // 0x12385c: 0x8f84ba7c  lw          $a0, -0x4584($gp)
    ctx->pc = 0x12385cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949500)));
label_123860:
    // 0x123860: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x123860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_123864:
    // 0x123864: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x123864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_123868:
    // 0x123868: 0xc04fbf8  jal         func_13EFE0
label_12386c:
    if (ctx->pc == 0x12386Cu) {
        ctx->pc = 0x123870u;
        goto label_123870;
    }
    ctx->pc = 0x123868u;
    SET_GPR_U32(ctx, 31, 0x123870u);
    ctx->pc = 0x13EFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EFE0u, 0x123868u, 0x123870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123870u;
label_123870:
    // 0x123870: 0x100000b9  b           . + 4 + (0xB9 << 2)
label_123874:
    if (ctx->pc == 0x123874u) {
        ctx->pc = 0x123878u;
        goto label_123878;
    }
    ctx->pc = 0x123870u;
    {
        const bool branch_taken_0x123870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123870) {
            ctx->pc = 0x123B58u;
            goto label_123b58;
        }
    }
    ctx->pc = 0x123878u;
label_123878:
    // 0x123878: 0x93a403e0  lbu         $a0, 0x3E0($sp)
    ctx->pc = 0x123878u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 992)));
label_12387c:
    // 0x12387c: 0xc049cf8  jal         func_1273E0
label_123880:
    if (ctx->pc == 0x123880u) {
        ctx->pc = 0x123884u;
        goto label_123884;
    }
    ctx->pc = 0x12387Cu;
    SET_GPR_U32(ctx, 31, 0x123884u);
    ctx->pc = 0x1273E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1273E0u, 0x12387Cu, 0x123884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123884u;
label_123884:
    // 0x123884: 0x93a203e0  lbu         $v0, 0x3E0($sp)
    ctx->pc = 0x123884u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 992)));
label_123888:
    // 0x123888: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x123888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_12388c:
    // 0x12388c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12388cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_123890:
    // 0x123890: 0x14620024  bne         $v1, $v0, . + 4 + (0x24 << 2)
label_123894:
    if (ctx->pc == 0x123894u) {
        ctx->pc = 0x123898u;
        goto label_123898;
    }
    ctx->pc = 0x123890u;
    {
        const bool branch_taken_0x123890 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x123890) {
            ctx->pc = 0x123924u;
            goto label_123924;
        }
    }
    ctx->pc = 0x123898u;
label_123898:
    // 0x123898: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x123898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_12389c:
    // 0x12389c: 0xaf828b20  sw          $v0, -0x74E0($gp)
    ctx->pc = 0x12389cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937376), GPR_U32(ctx, 2));
label_1238a0:
    // 0x1238a0: 0x8f84b9d8  lw          $a0, -0x4628($gp)
    ctx->pc = 0x1238a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949336)));
label_1238a4:
    // 0x1238a4: 0xc050c64  jal         func_143190
label_1238a8:
    if (ctx->pc == 0x1238A8u) {
        ctx->pc = 0x1238ACu;
        goto label_1238ac;
    }
    ctx->pc = 0x1238A4u;
    SET_GPR_U32(ctx, 31, 0x1238ACu);
    ctx->pc = 0x143190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143190u, 0x1238A4u, 0x1238ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1238ACu;
label_1238ac:
    // 0x1238ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1238acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1238b0:
    // 0x1238b0: 0xc04738c  jal         func_11CE30
label_1238b4:
    if (ctx->pc == 0x1238B4u) {
        ctx->pc = 0x1238B8u;
        goto label_1238b8;
    }
    ctx->pc = 0x1238B0u;
    SET_GPR_U32(ctx, 31, 0x1238B8u);
    ctx->pc = 0x11CE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CE30u, 0x1238B0u, 0x1238B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1238B8u;
label_1238b8:
    // 0x1238b8: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1238b8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1238bc:
    // 0x1238bc: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1238bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1238c0:
    // 0x1238c0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1238c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1238c4:
    // 0x1238c4: 0xc04c608  jal         func_131820
label_1238c8:
    if (ctx->pc == 0x1238C8u) {
        ctx->pc = 0x1238CCu;
        goto label_1238cc;
    }
    ctx->pc = 0x1238C4u;
    SET_GPR_U32(ctx, 31, 0x1238CCu);
    ctx->pc = 0x131820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131820u, 0x1238C4u, 0x1238CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1238CCu;
label_1238cc:
    // 0x1238cc: 0x8fa203cc  lw          $v0, 0x3CC($sp)
    ctx->pc = 0x1238ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 972)));
label_1238d0:
    // 0x1238d0: 0xaf82b9f8  sw          $v0, -0x4608($gp)
    ctx->pc = 0x1238d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949368), GPR_U32(ctx, 2));
label_1238d4:
    // 0x1238d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1238d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1238d8:
    // 0x1238d8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1238d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1238dc:
    // 0x1238dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1238dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1238e0:
    // 0x1238e0: 0xc048f40  jal         func_123D00
label_1238e4:
    if (ctx->pc == 0x1238E4u) {
        ctx->pc = 0x1238E8u;
        goto label_1238e8;
    }
    ctx->pc = 0x1238E0u;
    SET_GPR_U32(ctx, 31, 0x1238E8u);
    ctx->pc = 0x123D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123D00u, 0x1238E0u, 0x1238E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1238E8u;
label_1238e8:
    // 0x1238e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1238e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1238ec:
    // 0x1238ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1238ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1238f0:
    // 0x1238f0: 0xc0562ac  jal         func_158AB0
label_1238f4:
    if (ctx->pc == 0x1238F4u) {
        ctx->pc = 0x1238F8u;
        goto label_1238f8;
    }
    ctx->pc = 0x1238F0u;
    SET_GPR_U32(ctx, 31, 0x1238F8u);
    ctx->pc = 0x158AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158AB0u, 0x1238F0u, 0x1238F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1238F8u;
label_1238f8:
    // 0x1238f8: 0x8f84b9dc  lw          $a0, -0x4624($gp)
    ctx->pc = 0x1238f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949340)));
label_1238fc:
    // 0x1238fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1238fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_123900:
    // 0x123900: 0xc0553d4  jal         func_154F50
label_123904:
    if (ctx->pc == 0x123904u) {
        ctx->pc = 0x123908u;
        goto label_123908;
    }
    ctx->pc = 0x123900u;
    SET_GPR_U32(ctx, 31, 0x123908u);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x123900u, 0x123908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123908u;
label_123908:
    // 0x123908: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x123908u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12390c:
    // 0x12390c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x12390cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_123910:
    // 0x123910: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x123910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_123914:
    // 0x123914: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x123914u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_123918:
    // 0x123918: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x123918u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_12391c:
    // 0x12391c: 0x320f809  jalr        $t9
label_123920:
    if (ctx->pc == 0x123920u) {
        ctx->pc = 0x123924u;
        goto label_123924;
    }
    ctx->pc = 0x12391Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x123924u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12391Cu, 0x123924u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x123924u;
label_123924:
    // 0x123924: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x123924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_123928:
    // 0x123928: 0x93a503e0  lbu         $a1, 0x3E0($sp)
    ctx->pc = 0x123928u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 992)));
label_12392c:
    // 0x12392c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x12392cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_123930:
    // 0x123930: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x123930u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_123934:
    // 0x123934: 0x320f809  jalr        $t9
label_123938:
    if (ctx->pc == 0x123938u) {
        ctx->pc = 0x12393Cu;
        goto label_12393c;
    }
    ctx->pc = 0x123934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x12393Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123934u, 0x12393Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12393Cu;
label_12393c:
    // 0x12393c: 0x93a203e0  lbu         $v0, 0x3E0($sp)
    ctx->pc = 0x12393cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 992)));
label_123940:
    // 0x123940: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x123940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_123944:
    // 0x123944: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x123944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_123948:
    // 0x123948: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
label_12394c:
    if (ctx->pc == 0x12394Cu) {
        ctx->pc = 0x123950u;
        goto label_123950;
    }
    ctx->pc = 0x123948u;
    {
        const bool branch_taken_0x123948 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x123948) {
            ctx->pc = 0x123984u;
            goto label_123984;
        }
    }
    ctx->pc = 0x123950u;
label_123950:
    // 0x123950: 0x8fa403d0  lw          $a0, 0x3D0($sp)
    ctx->pc = 0x123950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
label_123954:
    // 0x123954: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x123954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_123958:
    // 0x123958: 0xc049fb4  jal         func_127ED0
label_12395c:
    if (ctx->pc == 0x12395Cu) {
        ctx->pc = 0x123960u;
        goto label_123960;
    }
    ctx->pc = 0x123958u;
    SET_GPR_U32(ctx, 31, 0x123960u);
    ctx->pc = 0x127ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127ED0u, 0x123958u, 0x123960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123960u;
label_123960:
    // 0x123960: 0x8fa403d0  lw          $a0, 0x3D0($sp)
    ctx->pc = 0x123960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
label_123964:
    // 0x123964: 0xc049e90  jal         func_127A40
label_123968:
    if (ctx->pc == 0x123968u) {
        ctx->pc = 0x12396Cu;
        goto label_12396c;
    }
    ctx->pc = 0x123964u;
    SET_GPR_U32(ctx, 31, 0x12396Cu);
    ctx->pc = 0x127A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127A40u, 0x123964u, 0x12396Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12396Cu;
label_12396c:
    // 0x12396c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x12396cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_123970:
    // 0x123970: 0xaf82ba10  sw          $v0, -0x45F0($gp)
    ctx->pc = 0x123970u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949392), GPR_U32(ctx, 2));
label_123974:
    // 0x123974: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x123974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_123978:
    // 0x123978: 0xaf828b28  sw          $v0, -0x74D8($gp)
    ctx->pc = 0x123978u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937384), GPR_U32(ctx, 2));
label_12397c:
    // 0x12397c: 0x10000076  b           . + 4 + (0x76 << 2)
label_123980:
    if (ctx->pc == 0x123980u) {
        ctx->pc = 0x123984u;
        goto label_123984;
    }
    ctx->pc = 0x12397Cu;
    {
        const bool branch_taken_0x12397c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12397c) {
            ctx->pc = 0x123B58u;
            goto label_123b58;
        }
    }
    ctx->pc = 0x123984u;
label_123984:
    // 0x123984: 0x8fa403d0  lw          $a0, 0x3D0($sp)
    ctx->pc = 0x123984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
label_123988:
    // 0x123988: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x123988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12398c:
    // 0x12398c: 0xc049f4c  jal         func_127D30
label_123990:
    if (ctx->pc == 0x123990u) {
        ctx->pc = 0x123994u;
        goto label_123994;
    }
    ctx->pc = 0x12398Cu;
    SET_GPR_U32(ctx, 31, 0x123994u);
    ctx->pc = 0x127D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127D30u, 0x12398Cu, 0x123994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123994u;
label_123994:
    // 0x123994: 0x10000070  b           . + 4 + (0x70 << 2)
label_123998:
    if (ctx->pc == 0x123998u) {
        ctx->pc = 0x12399Cu;
        goto label_12399c;
    }
    ctx->pc = 0x123994u;
    {
        const bool branch_taken_0x123994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123994) {
            ctx->pc = 0x123B58u;
            goto label_123b58;
        }
    }
    ctx->pc = 0x12399Cu;
label_12399c:
    // 0x12399c: 0xaf80ba1c  sw          $zero, -0x45E4($gp)
    ctx->pc = 0x12399cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949404), GPR_U32(ctx, 0));
label_1239a0:
    // 0x1239a0: 0xaf80ba20  sw          $zero, -0x45E0($gp)
    ctx->pc = 0x1239a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949408), GPR_U32(ctx, 0));
label_1239a4:
    // 0x1239a4: 0x8fa203d0  lw          $v0, 0x3D0($sp)
    ctx->pc = 0x1239a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
label_1239a8:
    // 0x1239a8: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x1239a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_1239ac:
    // 0x1239ac: 0x24050563  addiu       $a1, $zero, 0x563
    ctx->pc = 0x1239acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1379));
label_1239b0:
    // 0x1239b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1239b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1239b4:
    // 0x1239b4: 0xc040ab0  jal         func_102AC0
label_1239b8:
    if (ctx->pc == 0x1239B8u) {
        ctx->pc = 0x1239BCu;
        goto label_1239bc;
    }
    ctx->pc = 0x1239B4u;
    SET_GPR_U32(ctx, 31, 0x1239BCu);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x1239B4u, 0x1239BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1239BCu;
label_1239bc:
    // 0x1239bc: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1239bcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1239c0:
    // 0x1239c0: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x1239c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_1239c4:
    // 0x1239c4: 0xc042330  jal         func_108CC0
label_1239c8:
    if (ctx->pc == 0x1239C8u) {
        ctx->pc = 0x1239CCu;
        goto label_1239cc;
    }
    ctx->pc = 0x1239C4u;
    SET_GPR_U32(ctx, 31, 0x1239CCu);
    ctx->pc = 0x108CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108CC0u, 0x1239C4u, 0x1239CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1239CCu;
label_1239cc:
    // 0x1239cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1239ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1239d0:
    // 0x1239d0: 0xc048f38  jal         func_123CE0
label_1239d4:
    if (ctx->pc == 0x1239D4u) {
        ctx->pc = 0x1239D8u;
        goto label_1239d8;
    }
    ctx->pc = 0x1239D0u;
    SET_GPR_U32(ctx, 31, 0x1239D8u);
    ctx->pc = 0x123CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123CE0u, 0x1239D0u, 0x1239D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1239D8u;
label_1239d8:
    // 0x1239d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1239d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1239dc:
    // 0x1239dc: 0x93a403e0  lbu         $a0, 0x3E0($sp)
    ctx->pc = 0x1239dcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 992)));
label_1239e0:
    // 0x1239e0: 0xc049cf8  jal         func_1273E0
label_1239e4:
    if (ctx->pc == 0x1239E4u) {
        ctx->pc = 0x1239E8u;
        goto label_1239e8;
    }
    ctx->pc = 0x1239E0u;
    SET_GPR_U32(ctx, 31, 0x1239E8u);
    ctx->pc = 0x1273E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1273E0u, 0x1239E0u, 0x1239E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1239E8u;
label_1239e8:
    // 0x1239e8: 0x8f84b9dc  lw          $a0, -0x4624($gp)
    ctx->pc = 0x1239e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949340)));
label_1239ec:
    // 0x1239ec: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x1239ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1239f0:
    // 0x1239f0: 0xc0553d4  jal         func_154F50
label_1239f4:
    if (ctx->pc == 0x1239F4u) {
        ctx->pc = 0x1239F8u;
        goto label_1239f8;
    }
    ctx->pc = 0x1239F0u;
    SET_GPR_U32(ctx, 31, 0x1239F8u);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x1239F0u, 0x1239F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1239F8u;
label_1239f8:
    // 0x1239f8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1239f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1239fc:
    // 0x1239fc: 0x93a203e0  lbu         $v0, 0x3E0($sp)
    ctx->pc = 0x1239fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 992)));
label_123a00:
    // 0x123a00: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x123a00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_123a04:
    // 0x123a04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x123a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_123a08:
    // 0x123a08: 0x1462002d  bne         $v1, $v0, . + 4 + (0x2D << 2)
label_123a0c:
    if (ctx->pc == 0x123A0Cu) {
        ctx->pc = 0x123A10u;
        goto label_123a10;
    }
    ctx->pc = 0x123A08u;
    {
        const bool branch_taken_0x123a08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x123a08) {
            ctx->pc = 0x123AC0u;
            goto label_123ac0;
        }
    }
    ctx->pc = 0x123A10u;
label_123a10:
    // 0x123a10: 0xaf80b9ec  sw          $zero, -0x4614($gp)
    ctx->pc = 0x123a10u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949356), GPR_U32(ctx, 0));
label_123a14:
    // 0x123a14: 0x8f84b9d8  lw          $a0, -0x4628($gp)
    ctx->pc = 0x123a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949336)));
label_123a18:
    // 0x123a18: 0xc050c64  jal         func_143190
label_123a1c:
    if (ctx->pc == 0x123A1Cu) {
        ctx->pc = 0x123A20u;
        goto label_123a20;
    }
    ctx->pc = 0x123A18u;
    SET_GPR_U32(ctx, 31, 0x123A20u);
    ctx->pc = 0x143190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143190u, 0x123A18u, 0x123A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123A20u;
label_123a20:
    // 0x123a20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x123a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_123a24:
    // 0x123a24: 0xc04738c  jal         func_11CE30
label_123a28:
    if (ctx->pc == 0x123A28u) {
        ctx->pc = 0x123A2Cu;
        goto label_123a2c;
    }
    ctx->pc = 0x123A24u;
    SET_GPR_U32(ctx, 31, 0x123A2Cu);
    ctx->pc = 0x11CE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CE30u, 0x123A24u, 0x123A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123A2Cu;
label_123a2c:
    // 0x123a2c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x123a2cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_123a30:
    // 0x123a30: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x123a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_123a34:
    // 0x123a34: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x123a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_123a38:
    // 0x123a38: 0xc04c608  jal         func_131820
label_123a3c:
    if (ctx->pc == 0x123A3Cu) {
        ctx->pc = 0x123A40u;
        goto label_123a40;
    }
    ctx->pc = 0x123A38u;
    SET_GPR_U32(ctx, 31, 0x123A40u);
    ctx->pc = 0x131820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131820u, 0x123A38u, 0x123A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123A40u;
label_123a40:
    // 0x123a40: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x123a40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_123a44:
    // 0x123a44: 0x2c23025  or          $a2, $s6, $v0
    ctx->pc = 0x123a44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 22) | GPR_U64(ctx, 2));
label_123a48:
    // 0x123a48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x123a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_123a4c:
    // 0x123a4c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x123a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_123a50:
    // 0x123a50: 0xc048f40  jal         func_123D00
label_123a54:
    if (ctx->pc == 0x123A54u) {
        ctx->pc = 0x123A58u;
        goto label_123a58;
    }
    ctx->pc = 0x123A50u;
    SET_GPR_U32(ctx, 31, 0x123A58u);
    ctx->pc = 0x123D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123D00u, 0x123A50u, 0x123A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123A58u;
label_123a58:
    // 0x123a58: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x123a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_123a5c:
    // 0x123a5c: 0xaf828b3c  sw          $v0, -0x74C4($gp)
    ctx->pc = 0x123a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937404), GPR_U32(ctx, 2));
label_123a60:
    // 0x123a60: 0x2002826  xor         $a1, $s0, $zero
    ctx->pc = 0x123a60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 0));
label_123a64:
    // 0x123a64: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x123a64u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_123a68:
    // 0x123a68: 0x3a020001  xori        $v0, $s0, 0x1
    ctx->pc = 0x123a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
label_123a6c:
    // 0x123a6c: 0x2c460001  sltiu       $a2, $v0, 0x1
    ctx->pc = 0x123a6cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_123a70:
    // 0x123a70: 0x8fa403d0  lw          $a0, 0x3D0($sp)
    ctx->pc = 0x123a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
label_123a74:
    // 0x123a74: 0xc049e6c  jal         func_1279B0
label_123a78:
    if (ctx->pc == 0x123A78u) {
        ctx->pc = 0x123A7Cu;
        goto label_123a7c;
    }
    ctx->pc = 0x123A74u;
    SET_GPR_U32(ctx, 31, 0x123A7Cu);
    ctx->pc = 0x1279B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1279B0u, 0x123A74u, 0x123A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123A7Cu;
label_123a7c:
    // 0x123a7c: 0xc049d38  jal         func_1274E0
label_123a80:
    if (ctx->pc == 0x123A80u) {
        ctx->pc = 0x123A84u;
        goto label_123a84;
    }
    ctx->pc = 0x123A7Cu;
    SET_GPR_U32(ctx, 31, 0x123A84u);
    ctx->pc = 0x1274E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1274E0u, 0x123A7Cu, 0x123A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123A84u;
label_123a84:
    // 0x123a84: 0xc048f34  jal         func_123CD0
label_123a88:
    if (ctx->pc == 0x123A88u) {
        ctx->pc = 0x123A8Cu;
        goto label_123a8c;
    }
    ctx->pc = 0x123A84u;
    SET_GPR_U32(ctx, 31, 0x123A8Cu);
    ctx->pc = 0x123CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123CD0u, 0x123A84u, 0x123A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123A8Cu;
label_123a8c:
    // 0x123a8c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x123a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_123a90:
    // 0x123a90: 0xc08dde0  jal         func_237780
label_123a94:
    if (ctx->pc == 0x123A94u) {
        ctx->pc = 0x123A98u;
        goto label_123a98;
    }
    ctx->pc = 0x123A90u;
    SET_GPR_U32(ctx, 31, 0x123A98u);
    ctx->pc = 0x237780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237780u, 0x123A90u, 0x123A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123A98u;
label_123a98:
    // 0x123a98: 0x26070001  addiu       $a3, $s0, 0x1
    ctx->pc = 0x123a98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_123a9c:
    // 0x123a9c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x123a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_123aa0:
    // 0x123aa0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x123aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_123aa4:
    // 0x123aa4: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x123aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
label_123aa8:
    // 0x123aa8: 0x24c62230  addiu       $a2, $a2, 0x2230
    ctx->pc = 0x123aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8752));
label_123aac:
    // 0x123aac: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x123aacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_123ab0:
    // 0x123ab0: 0xc125454  jal         func_495150
label_123ab4:
    if (ctx->pc == 0x123AB4u) {
        ctx->pc = 0x123AB8u;
        goto label_123ab8;
    }
    ctx->pc = 0x123AB0u;
    SET_GPR_U32(ctx, 31, 0x123AB8u);
    ctx->pc = 0x495150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x495150u, 0x123AB0u, 0x123AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123AB8u;
label_123ab8:
    // 0x123ab8: 0x1000000c  b           . + 4 + (0xC << 2)
label_123abc:
    if (ctx->pc == 0x123ABCu) {
        ctx->pc = 0x123AC0u;
        goto label_123ac0;
    }
    ctx->pc = 0x123AB8u;
    {
        const bool branch_taken_0x123ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123ab8) {
            ctx->pc = 0x123AECu;
            goto label_123aec;
        }
    }
    ctx->pc = 0x123AC0u;
label_123ac0:
    // 0x123ac0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x123ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_123ac4:
    // 0x123ac4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x123ac4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_123ac8:
    // 0x123ac8: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x123ac8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_123acc:
    // 0x123acc: 0x320f809  jalr        $t9
label_123ad0:
    if (ctx->pc == 0x123AD0u) {
        ctx->pc = 0x123AD4u;
        goto label_123ad4;
    }
    ctx->pc = 0x123ACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x123AD4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123ACCu, 0x123AD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x123AD4u;
label_123ad4:
    // 0x123ad4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x123ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_123ad8:
    // 0x123ad8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_123adc:
    if (ctx->pc == 0x123ADCu) {
        ctx->pc = 0x123AE0u;
        goto label_123ae0;
    }
    ctx->pc = 0x123AD8u;
    {
        const bool branch_taken_0x123ad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x123ad8) {
            ctx->pc = 0x123AECu;
            goto label_123aec;
        }
    }
    ctx->pc = 0x123AE0u;
label_123ae0:
    // 0x123ae0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x123ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_123ae4:
    // 0x123ae4: 0xc08d230  jal         func_2348C0
label_123ae8:
    if (ctx->pc == 0x123AE8u) {
        ctx->pc = 0x123AECu;
        goto label_123aec;
    }
    ctx->pc = 0x123AE4u;
    SET_GPR_U32(ctx, 31, 0x123AECu);
    ctx->pc = 0x2348C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2348C0u, 0x123AE4u, 0x123AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123AECu;
label_123aec:
    // 0x123aec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x123aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_123af0:
    // 0x123af0: 0x93a503e0  lbu         $a1, 0x3E0($sp)
    ctx->pc = 0x123af0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 992)));
label_123af4:
    // 0x123af4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x123af4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_123af8:
    // 0x123af8: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x123af8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_123afc:
    // 0x123afc: 0x320f809  jalr        $t9
label_123b00:
    if (ctx->pc == 0x123B00u) {
        ctx->pc = 0x123B04u;
        goto label_123b04;
    }
    ctx->pc = 0x123AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x123B04u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123AFCu, 0x123B04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x123B04u;
label_123b04:
    // 0x123b04: 0x10000014  b           . + 4 + (0x14 << 2)
label_123b08:
    if (ctx->pc == 0x123B08u) {
        ctx->pc = 0x123B0Cu;
        goto label_123b0c;
    }
    ctx->pc = 0x123B04u;
    {
        const bool branch_taken_0x123b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123b04) {
            ctx->pc = 0x123B58u;
            goto label_123b58;
        }
    }
    ctx->pc = 0x123B0Cu;
label_123b0c:
    // 0x123b0c: 0x93a403e0  lbu         $a0, 0x3E0($sp)
    ctx->pc = 0x123b0cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 992)));
label_123b10:
    // 0x123b10: 0xc049cf8  jal         func_1273E0
label_123b14:
    if (ctx->pc == 0x123B14u) {
        ctx->pc = 0x123B18u;
        goto label_123b18;
    }
    ctx->pc = 0x123B10u;
    SET_GPR_U32(ctx, 31, 0x123B18u);
    ctx->pc = 0x1273E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1273E0u, 0x123B10u, 0x123B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123B18u;
label_123b18:
    // 0x123b18: 0x93a203e0  lbu         $v0, 0x3E0($sp)
    ctx->pc = 0x123b18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 992)));
label_123b1c:
    // 0x123b1c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x123b1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_123b20:
    // 0x123b20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x123b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_123b24:
    // 0x123b24: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
label_123b28:
    if (ctx->pc == 0x123B28u) {
        ctx->pc = 0x123B2Cu;
        goto label_123b2c;
    }
    ctx->pc = 0x123B24u;
    {
        const bool branch_taken_0x123b24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x123b24) {
            ctx->pc = 0x123B58u;
            goto label_123b58;
        }
    }
    ctx->pc = 0x123B2Cu;
label_123b2c:
    // 0x123b2c: 0xaf80b9f0  sw          $zero, -0x4610($gp)
    ctx->pc = 0x123b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949360), GPR_U32(ctx, 0));
label_123b30:
    // 0x123b30: 0xaf80ba1c  sw          $zero, -0x45E4($gp)
    ctx->pc = 0x123b30u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949404), GPR_U32(ctx, 0));
label_123b34:
    // 0x123b34: 0xaf80ba20  sw          $zero, -0x45E0($gp)
    ctx->pc = 0x123b34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949408), GPR_U32(ctx, 0));
label_123b38:
    // 0x123b38: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x123b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_123b3c:
    // 0x123b3c: 0xc048f2c  jal         func_123CB0
label_123b40:
    if (ctx->pc == 0x123B40u) {
        ctx->pc = 0x123B44u;
        goto label_123b44;
    }
    ctx->pc = 0x123B3Cu;
    SET_GPR_U32(ctx, 31, 0x123B44u);
    ctx->pc = 0x123CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123CB0u, 0x123B3Cu, 0x123B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123B44u;
label_123b44:
    // 0x123b44: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x123b44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_123b48:
    // 0x123b48: 0x2484b4b0  addiu       $a0, $a0, -0x4B50
    ctx->pc = 0x123b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948016));
label_123b4c:
    // 0x123b4c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x123b4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_123b50:
    // 0x123b50: 0xc048ef8  jal         func_123BE0
label_123b54:
    if (ctx->pc == 0x123B54u) {
        ctx->pc = 0x123B58u;
        goto label_123b58;
    }
    ctx->pc = 0x123B50u;
    SET_GPR_U32(ctx, 31, 0x123B58u);
    ctx->pc = 0x123BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123BE0u, 0x123B50u, 0x123B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123B58u;
label_123b58:
    // 0x123b58: 0x93a203e0  lbu         $v0, 0x3E0($sp)
    ctx->pc = 0x123b58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 992)));
label_123b5c:
    // 0x123b5c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x123b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_123b60:
    // 0x123b60: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_123b64:
    if (ctx->pc == 0x123B64u) {
        ctx->pc = 0x123B68u;
        goto label_123b68;
    }
    ctx->pc = 0x123B60u;
    {
        const bool branch_taken_0x123b60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x123b60) {
            ctx->pc = 0x123B90u;
            goto label_123b90;
        }
    }
    ctx->pc = 0x123B68u;
label_123b68:
    // 0x123b68: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x123b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_123b6c:
    // 0x123b6c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x123b6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_123b70:
    // 0x123b70: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x123b70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_123b74:
    // 0x123b74: 0x320f809  jalr        $t9
label_123b78:
    if (ctx->pc == 0x123B78u) {
        ctx->pc = 0x123B7Cu;
        goto label_123b7c;
    }
    ctx->pc = 0x123B74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x123B7Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123B74u, 0x123B7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x123B7Cu;
label_123b7c:
    // 0x123b7c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_123b80:
    if (ctx->pc == 0x123B80u) {
        ctx->pc = 0x123B84u;
        goto label_123b84;
    }
    ctx->pc = 0x123B7Cu;
    {
        const bool branch_taken_0x123b7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x123b7c) {
            ctx->pc = 0x123B90u;
            goto label_123b90;
        }
    }
    ctx->pc = 0x123B84u;
label_123b84:
    // 0x123b84: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x123b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_123b88:
    // 0x123b88: 0xc08d230  jal         func_2348C0
label_123b8c:
    if (ctx->pc == 0x123B8Cu) {
        ctx->pc = 0x123B90u;
        goto label_123b90;
    }
    ctx->pc = 0x123B88u;
    SET_GPR_U32(ctx, 31, 0x123B90u);
    ctx->pc = 0x2348C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2348C0u, 0x123B88u, 0x123B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123B90u;
label_123b90:
    // 0x123b90: 0x8fa403d0  lw          $a0, 0x3D0($sp)
    ctx->pc = 0x123b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
label_123b94:
    // 0x123b94: 0x93a503e0  lbu         $a1, 0x3E0($sp)
    ctx->pc = 0x123b94u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 992)));
label_123b98:
    // 0x123b98: 0xc08edb0  jal         func_23B6C0
label_123b9c:
    if (ctx->pc == 0x123B9Cu) {
        ctx->pc = 0x123BA0u;
        goto label_123ba0;
    }
    ctx->pc = 0x123B98u;
    SET_GPR_U32(ctx, 31, 0x123BA0u);
    ctx->pc = 0x23B6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B6C0u, 0x123B98u, 0x123BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123BA0u;
label_123ba0:
    // 0x123ba0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x123ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_123ba4:
    // 0x123ba4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x123ba4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_123ba8:
    // 0x123ba8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x123ba8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_123bac:
    // 0x123bac: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x123bacu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_123bb0:
    // 0x123bb0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x123bb0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_123bb4:
    // 0x123bb4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x123bb4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_123bb8:
    // 0x123bb8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x123bb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_123bbc:
    // 0x123bbc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x123bbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_123bc0:
    // 0x123bc0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x123bc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_123bc4:
    // 0x123bc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x123bc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_123bc8:
    // 0x123bc8: 0x27bd03f0  addiu       $sp, $sp, 0x3F0
    ctx->pc = 0x123bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1008));
label_123bcc:
    // 0x123bcc: 0x3e00008  jr          $ra
label_123bd0:
    if (ctx->pc == 0x123BD0u) {
        ctx->pc = 0x123BD4u;
        goto label_123bd4;
    }
    ctx->pc = 0x123BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123BCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123BD4u;
label_123bd4:
    // 0x123bd4: 0x0  nop
    ctx->pc = 0x123bd4u;
    // NOP
label_123bd8:
    // 0x123bd8: 0x0  nop
    ctx->pc = 0x123bd8u;
    // NOP
label_123bdc:
    // 0x123bdc: 0x0  nop
    ctx->pc = 0x123bdcu;
    // NOP
    ctx->pc = 0x123be0u;
}
