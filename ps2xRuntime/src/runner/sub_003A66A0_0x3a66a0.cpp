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

// Function: sub_003A66A0
// Address: 0x3a66a0 - 0x3a6ae0
void sub_003A66A0_0x3a66a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A66A0_0x3a66a0");
#endif

    switch (ctx->pc) {
        case 0x3a66a0u: goto label_3a66a0;
        case 0x3a66a4u: goto label_3a66a4;
        case 0x3a66a8u: goto label_3a66a8;
        case 0x3a66acu: goto label_3a66ac;
        case 0x3a66b0u: goto label_3a66b0;
        case 0x3a66b4u: goto label_3a66b4;
        case 0x3a66b8u: goto label_3a66b8;
        case 0x3a66bcu: goto label_3a66bc;
        case 0x3a66c0u: goto label_3a66c0;
        case 0x3a66c4u: goto label_3a66c4;
        case 0x3a66c8u: goto label_3a66c8;
        case 0x3a66ccu: goto label_3a66cc;
        case 0x3a66d0u: goto label_3a66d0;
        case 0x3a66d4u: goto label_3a66d4;
        case 0x3a66d8u: goto label_3a66d8;
        case 0x3a66dcu: goto label_3a66dc;
        case 0x3a66e0u: goto label_3a66e0;
        case 0x3a66e4u: goto label_3a66e4;
        case 0x3a66e8u: goto label_3a66e8;
        case 0x3a66ecu: goto label_3a66ec;
        case 0x3a66f0u: goto label_3a66f0;
        case 0x3a66f4u: goto label_3a66f4;
        case 0x3a66f8u: goto label_3a66f8;
        case 0x3a66fcu: goto label_3a66fc;
        case 0x3a6700u: goto label_3a6700;
        case 0x3a6704u: goto label_3a6704;
        case 0x3a6708u: goto label_3a6708;
        case 0x3a670cu: goto label_3a670c;
        case 0x3a6710u: goto label_3a6710;
        case 0x3a6714u: goto label_3a6714;
        case 0x3a6718u: goto label_3a6718;
        case 0x3a671cu: goto label_3a671c;
        case 0x3a6720u: goto label_3a6720;
        case 0x3a6724u: goto label_3a6724;
        case 0x3a6728u: goto label_3a6728;
        case 0x3a672cu: goto label_3a672c;
        case 0x3a6730u: goto label_3a6730;
        case 0x3a6734u: goto label_3a6734;
        case 0x3a6738u: goto label_3a6738;
        case 0x3a673cu: goto label_3a673c;
        case 0x3a6740u: goto label_3a6740;
        case 0x3a6744u: goto label_3a6744;
        case 0x3a6748u: goto label_3a6748;
        case 0x3a674cu: goto label_3a674c;
        case 0x3a6750u: goto label_3a6750;
        case 0x3a6754u: goto label_3a6754;
        case 0x3a6758u: goto label_3a6758;
        case 0x3a675cu: goto label_3a675c;
        case 0x3a6760u: goto label_3a6760;
        case 0x3a6764u: goto label_3a6764;
        case 0x3a6768u: goto label_3a6768;
        case 0x3a676cu: goto label_3a676c;
        case 0x3a6770u: goto label_3a6770;
        case 0x3a6774u: goto label_3a6774;
        case 0x3a6778u: goto label_3a6778;
        case 0x3a677cu: goto label_3a677c;
        case 0x3a6780u: goto label_3a6780;
        case 0x3a6784u: goto label_3a6784;
        case 0x3a6788u: goto label_3a6788;
        case 0x3a678cu: goto label_3a678c;
        case 0x3a6790u: goto label_3a6790;
        case 0x3a6794u: goto label_3a6794;
        case 0x3a6798u: goto label_3a6798;
        case 0x3a679cu: goto label_3a679c;
        case 0x3a67a0u: goto label_3a67a0;
        case 0x3a67a4u: goto label_3a67a4;
        case 0x3a67a8u: goto label_3a67a8;
        case 0x3a67acu: goto label_3a67ac;
        case 0x3a67b0u: goto label_3a67b0;
        case 0x3a67b4u: goto label_3a67b4;
        case 0x3a67b8u: goto label_3a67b8;
        case 0x3a67bcu: goto label_3a67bc;
        case 0x3a67c0u: goto label_3a67c0;
        case 0x3a67c4u: goto label_3a67c4;
        case 0x3a67c8u: goto label_3a67c8;
        case 0x3a67ccu: goto label_3a67cc;
        case 0x3a67d0u: goto label_3a67d0;
        case 0x3a67d4u: goto label_3a67d4;
        case 0x3a67d8u: goto label_3a67d8;
        case 0x3a67dcu: goto label_3a67dc;
        case 0x3a67e0u: goto label_3a67e0;
        case 0x3a67e4u: goto label_3a67e4;
        case 0x3a67e8u: goto label_3a67e8;
        case 0x3a67ecu: goto label_3a67ec;
        case 0x3a67f0u: goto label_3a67f0;
        case 0x3a67f4u: goto label_3a67f4;
        case 0x3a67f8u: goto label_3a67f8;
        case 0x3a67fcu: goto label_3a67fc;
        case 0x3a6800u: goto label_3a6800;
        case 0x3a6804u: goto label_3a6804;
        case 0x3a6808u: goto label_3a6808;
        case 0x3a680cu: goto label_3a680c;
        case 0x3a6810u: goto label_3a6810;
        case 0x3a6814u: goto label_3a6814;
        case 0x3a6818u: goto label_3a6818;
        case 0x3a681cu: goto label_3a681c;
        case 0x3a6820u: goto label_3a6820;
        case 0x3a6824u: goto label_3a6824;
        case 0x3a6828u: goto label_3a6828;
        case 0x3a682cu: goto label_3a682c;
        case 0x3a6830u: goto label_3a6830;
        case 0x3a6834u: goto label_3a6834;
        case 0x3a6838u: goto label_3a6838;
        case 0x3a683cu: goto label_3a683c;
        case 0x3a6840u: goto label_3a6840;
        case 0x3a6844u: goto label_3a6844;
        case 0x3a6848u: goto label_3a6848;
        case 0x3a684cu: goto label_3a684c;
        case 0x3a6850u: goto label_3a6850;
        case 0x3a6854u: goto label_3a6854;
        case 0x3a6858u: goto label_3a6858;
        case 0x3a685cu: goto label_3a685c;
        case 0x3a6860u: goto label_3a6860;
        case 0x3a6864u: goto label_3a6864;
        case 0x3a6868u: goto label_3a6868;
        case 0x3a686cu: goto label_3a686c;
        case 0x3a6870u: goto label_3a6870;
        case 0x3a6874u: goto label_3a6874;
        case 0x3a6878u: goto label_3a6878;
        case 0x3a687cu: goto label_3a687c;
        case 0x3a6880u: goto label_3a6880;
        case 0x3a6884u: goto label_3a6884;
        case 0x3a6888u: goto label_3a6888;
        case 0x3a688cu: goto label_3a688c;
        case 0x3a6890u: goto label_3a6890;
        case 0x3a6894u: goto label_3a6894;
        case 0x3a6898u: goto label_3a6898;
        case 0x3a689cu: goto label_3a689c;
        case 0x3a68a0u: goto label_3a68a0;
        case 0x3a68a4u: goto label_3a68a4;
        case 0x3a68a8u: goto label_3a68a8;
        case 0x3a68acu: goto label_3a68ac;
        case 0x3a68b0u: goto label_3a68b0;
        case 0x3a68b4u: goto label_3a68b4;
        case 0x3a68b8u: goto label_3a68b8;
        case 0x3a68bcu: goto label_3a68bc;
        case 0x3a68c0u: goto label_3a68c0;
        case 0x3a68c4u: goto label_3a68c4;
        case 0x3a68c8u: goto label_3a68c8;
        case 0x3a68ccu: goto label_3a68cc;
        case 0x3a68d0u: goto label_3a68d0;
        case 0x3a68d4u: goto label_3a68d4;
        case 0x3a68d8u: goto label_3a68d8;
        case 0x3a68dcu: goto label_3a68dc;
        case 0x3a68e0u: goto label_3a68e0;
        case 0x3a68e4u: goto label_3a68e4;
        case 0x3a68e8u: goto label_3a68e8;
        case 0x3a68ecu: goto label_3a68ec;
        case 0x3a68f0u: goto label_3a68f0;
        case 0x3a68f4u: goto label_3a68f4;
        case 0x3a68f8u: goto label_3a68f8;
        case 0x3a68fcu: goto label_3a68fc;
        case 0x3a6900u: goto label_3a6900;
        case 0x3a6904u: goto label_3a6904;
        case 0x3a6908u: goto label_3a6908;
        case 0x3a690cu: goto label_3a690c;
        case 0x3a6910u: goto label_3a6910;
        case 0x3a6914u: goto label_3a6914;
        case 0x3a6918u: goto label_3a6918;
        case 0x3a691cu: goto label_3a691c;
        case 0x3a6920u: goto label_3a6920;
        case 0x3a6924u: goto label_3a6924;
        case 0x3a6928u: goto label_3a6928;
        case 0x3a692cu: goto label_3a692c;
        case 0x3a6930u: goto label_3a6930;
        case 0x3a6934u: goto label_3a6934;
        case 0x3a6938u: goto label_3a6938;
        case 0x3a693cu: goto label_3a693c;
        case 0x3a6940u: goto label_3a6940;
        case 0x3a6944u: goto label_3a6944;
        case 0x3a6948u: goto label_3a6948;
        case 0x3a694cu: goto label_3a694c;
        case 0x3a6950u: goto label_3a6950;
        case 0x3a6954u: goto label_3a6954;
        case 0x3a6958u: goto label_3a6958;
        case 0x3a695cu: goto label_3a695c;
        case 0x3a6960u: goto label_3a6960;
        case 0x3a6964u: goto label_3a6964;
        case 0x3a6968u: goto label_3a6968;
        case 0x3a696cu: goto label_3a696c;
        case 0x3a6970u: goto label_3a6970;
        case 0x3a6974u: goto label_3a6974;
        case 0x3a6978u: goto label_3a6978;
        case 0x3a697cu: goto label_3a697c;
        case 0x3a6980u: goto label_3a6980;
        case 0x3a6984u: goto label_3a6984;
        case 0x3a6988u: goto label_3a6988;
        case 0x3a698cu: goto label_3a698c;
        case 0x3a6990u: goto label_3a6990;
        case 0x3a6994u: goto label_3a6994;
        case 0x3a6998u: goto label_3a6998;
        case 0x3a699cu: goto label_3a699c;
        case 0x3a69a0u: goto label_3a69a0;
        case 0x3a69a4u: goto label_3a69a4;
        case 0x3a69a8u: goto label_3a69a8;
        case 0x3a69acu: goto label_3a69ac;
        case 0x3a69b0u: goto label_3a69b0;
        case 0x3a69b4u: goto label_3a69b4;
        case 0x3a69b8u: goto label_3a69b8;
        case 0x3a69bcu: goto label_3a69bc;
        case 0x3a69c0u: goto label_3a69c0;
        case 0x3a69c4u: goto label_3a69c4;
        case 0x3a69c8u: goto label_3a69c8;
        case 0x3a69ccu: goto label_3a69cc;
        case 0x3a69d0u: goto label_3a69d0;
        case 0x3a69d4u: goto label_3a69d4;
        case 0x3a69d8u: goto label_3a69d8;
        case 0x3a69dcu: goto label_3a69dc;
        case 0x3a69e0u: goto label_3a69e0;
        case 0x3a69e4u: goto label_3a69e4;
        case 0x3a69e8u: goto label_3a69e8;
        case 0x3a69ecu: goto label_3a69ec;
        case 0x3a69f0u: goto label_3a69f0;
        case 0x3a69f4u: goto label_3a69f4;
        case 0x3a69f8u: goto label_3a69f8;
        case 0x3a69fcu: goto label_3a69fc;
        case 0x3a6a00u: goto label_3a6a00;
        case 0x3a6a04u: goto label_3a6a04;
        case 0x3a6a08u: goto label_3a6a08;
        case 0x3a6a0cu: goto label_3a6a0c;
        case 0x3a6a10u: goto label_3a6a10;
        case 0x3a6a14u: goto label_3a6a14;
        case 0x3a6a18u: goto label_3a6a18;
        case 0x3a6a1cu: goto label_3a6a1c;
        case 0x3a6a20u: goto label_3a6a20;
        case 0x3a6a24u: goto label_3a6a24;
        case 0x3a6a28u: goto label_3a6a28;
        case 0x3a6a2cu: goto label_3a6a2c;
        case 0x3a6a30u: goto label_3a6a30;
        case 0x3a6a34u: goto label_3a6a34;
        case 0x3a6a38u: goto label_3a6a38;
        case 0x3a6a3cu: goto label_3a6a3c;
        case 0x3a6a40u: goto label_3a6a40;
        case 0x3a6a44u: goto label_3a6a44;
        case 0x3a6a48u: goto label_3a6a48;
        case 0x3a6a4cu: goto label_3a6a4c;
        case 0x3a6a50u: goto label_3a6a50;
        case 0x3a6a54u: goto label_3a6a54;
        case 0x3a6a58u: goto label_3a6a58;
        case 0x3a6a5cu: goto label_3a6a5c;
        case 0x3a6a60u: goto label_3a6a60;
        case 0x3a6a64u: goto label_3a6a64;
        case 0x3a6a68u: goto label_3a6a68;
        case 0x3a6a6cu: goto label_3a6a6c;
        case 0x3a6a70u: goto label_3a6a70;
        case 0x3a6a74u: goto label_3a6a74;
        case 0x3a6a78u: goto label_3a6a78;
        case 0x3a6a7cu: goto label_3a6a7c;
        case 0x3a6a80u: goto label_3a6a80;
        case 0x3a6a84u: goto label_3a6a84;
        case 0x3a6a88u: goto label_3a6a88;
        case 0x3a6a8cu: goto label_3a6a8c;
        case 0x3a6a90u: goto label_3a6a90;
        case 0x3a6a94u: goto label_3a6a94;
        case 0x3a6a98u: goto label_3a6a98;
        case 0x3a6a9cu: goto label_3a6a9c;
        case 0x3a6aa0u: goto label_3a6aa0;
        case 0x3a6aa4u: goto label_3a6aa4;
        case 0x3a6aa8u: goto label_3a6aa8;
        case 0x3a6aacu: goto label_3a6aac;
        case 0x3a6ab0u: goto label_3a6ab0;
        case 0x3a6ab4u: goto label_3a6ab4;
        case 0x3a6ab8u: goto label_3a6ab8;
        case 0x3a6abcu: goto label_3a6abc;
        case 0x3a6ac0u: goto label_3a6ac0;
        case 0x3a6ac4u: goto label_3a6ac4;
        case 0x3a6ac8u: goto label_3a6ac8;
        case 0x3a6accu: goto label_3a6acc;
        case 0x3a6ad0u: goto label_3a6ad0;
        case 0x3a6ad4u: goto label_3a6ad4;
        case 0x3a6ad8u: goto label_3a6ad8;
        case 0x3a6adcu: goto label_3a6adc;
        default: break;
    }

    ctx->pc = 0x3a66a0u;

label_3a66a0:
    // 0x3a66a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a66a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3a66a4:
    // 0x3a66a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3a66a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3a66a8:
    // 0x3a66a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a66a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3a66ac:
    // 0x3a66ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a66acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a66b0:
    // 0x3a66b0: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x3a66b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_3a66b4:
    // 0x3a66b4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3a66b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_3a66b8:
    // 0x3a66b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3a66bc:
    if (ctx->pc == 0x3A66BCu) {
        ctx->pc = 0x3A66BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A66B8u;
        // 0x3a66bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A66C0u;
        goto label_3a66c0;
    }
    ctx->pc = 0x3A66B8u;
    {
        const bool branch_taken_0x3a66b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A66BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A66B8u;
        // 0x3a66bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a66b8) {
            ctx->pc = 0x3A66D0u;
            goto label_3a66d0;
        }
    }
    ctx->pc = 0x3A66C0u;
label_3a66c0:
    // 0x3a66c0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3a66c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3a66c4:
    // 0x3a66c4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3a66c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3a66c8:
    // 0x3a66c8: 0xc0e85d0  jal         func_3A1740
label_3a66cc:
    if (ctx->pc == 0x3A66CCu) {
        ctx->pc = 0x3A66CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A66C8u;
        // 0x3a66cc: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A66D0u;
        goto label_3a66d0;
    }
    ctx->pc = 0x3A66C8u;
    SET_GPR_U32(ctx, 31, 0x3A66D0u);
    ctx->pc = 0x3A66CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A66C8u;
    // 0x3a66cc: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1740u, 0x3A66C8u, 0x3A66D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A66D0u;
label_3a66d0:
    // 0x3a66d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3a66d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a66d4:
    // 0x3a66d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a66d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a66d8:
    // 0x3a66d8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3a66d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a66dc:
    // 0x3a66dc: 0x3e00008  jr          $ra
label_3a66e0:
    if (ctx->pc == 0x3A66E0u) {
        ctx->pc = 0x3A66E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A66DCu;
        // 0x3a66e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A66E4u;
        goto label_3a66e4;
    }
    ctx->pc = 0x3A66DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A66E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A66DCu;
        // 0x3a66e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A66DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A66E4u;
label_3a66e4:
    // 0x3a66e4: 0x0  nop
    ctx->pc = 0x3a66e4u;
    // NOP
label_3a66e8:
    // 0x3a66e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a66e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3a66ec:
    // 0x3a66ec: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3a66ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a66f0:
    // 0x3a66f0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3a66f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3a66f4:
    // 0x3a66f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a66f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3a66f8:
    // 0x3a66f8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3a66f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3a66fc:
    // 0x3a66fc: 0x8cc30078  lw          $v1, 0x78($a2)
    ctx->pc = 0x3a66fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 120)));
label_3a6700:
    // 0x3a6700: 0x8f82bd80  lw          $v0, -0x4280($gp)
    ctx->pc = 0x3a6700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950272)));
label_3a6704:
    // 0x3a6704: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x3a6704u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_3a6708:
    // 0x3a6708: 0xc22021  addu        $a0, $a2, $v0
    ctx->pc = 0x3a6708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_3a670c:
    // 0x3a670c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3a670cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a6710:
    // 0x3a6710: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_3a6714:
    if (ctx->pc == 0x3A6714u) {
        ctx->pc = 0x3A6714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6710u;
        // 0x3a6714: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6718u;
        goto label_3a6718;
    }
    ctx->pc = 0x3A6710u;
    {
        const bool branch_taken_0x3a6710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a6710) {
            ctx->pc = 0x3A6714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A6710u;
            // 0x3a6714: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A6730u;
            goto label_3a6730;
        }
    }
    ctx->pc = 0x3A6718u;
label_3a6718:
    // 0x3a6718: 0x94630004  lhu         $v1, 0x4($v1)
    ctx->pc = 0x3a6718u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_3a671c:
    // 0x3a671c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3a671cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3a6720:
    // 0x3a6720: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
label_3a6724:
    if (ctx->pc == 0x3A6724u) {
        ctx->pc = 0x3A6724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6720u;
        // 0x3a6724: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6728u;
        goto label_3a6728;
    }
    ctx->pc = 0x3A6720u;
    {
        const bool branch_taken_0x3a6720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3a6720) {
            ctx->pc = 0x3A6724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A6720u;
            // 0x3a6724: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A6730u;
            goto label_3a6730;
        }
    }
    ctx->pc = 0x3A6728u;
label_3a6728:
    // 0x3a6728: 0x10000005  b           . + 4 + (0x5 << 2)
label_3a672c:
    if (ctx->pc == 0x3A672Cu) {
        ctx->pc = 0x3A672Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6728u;
        // 0x3a672c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6730u;
        goto label_3a6730;
    }
    ctx->pc = 0x3A6728u;
    {
        const bool branch_taken_0x3a6728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A672Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6728u;
        // 0x3a672c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6728) {
            ctx->pc = 0x3A6740u;
            goto label_3a6740;
        }
    }
    ctx->pc = 0x3A6730u;
label_3a6730:
    // 0x3a6730: 0x8f84bd80  lw          $a0, -0x4280($gp)
    ctx->pc = 0x3a6730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950272)));
label_3a6734:
    // 0x3a6734: 0x94450004  lhu         $a1, 0x4($v0)
    ctx->pc = 0x3a6734u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_3a6738:
    // 0x3a6738: 0xc0e7eec  jal         func_39FBB0
label_3a673c:
    if (ctx->pc == 0x3A673Cu) {
        ctx->pc = 0x3A673Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6738u;
        // 0x3a673c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6740u;
        goto label_3a6740;
    }
    ctx->pc = 0x3A6738u;
    SET_GPR_U32(ctx, 31, 0x3A6740u);
    ctx->pc = 0x3A673Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6738u;
    // 0x3a673c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39FBB0u, 0x3A6738u, 0x3A6740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6740u;
label_3a6740:
    // 0x3a6740: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3a6740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3a6744:
    // 0x3a6744: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a6744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a6748:
    // 0x3a6748: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x3a6748u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_3a674c:
    // 0x3a674c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3a674cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a6750:
    // 0x3a6750: 0x3e00008  jr          $ra
label_3a6754:
    if (ctx->pc == 0x3A6754u) {
        ctx->pc = 0x3A6754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6750u;
        // 0x3a6754: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6758u;
        goto label_3a6758;
    }
    ctx->pc = 0x3A6750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A6754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6750u;
        // 0x3a6754: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A6750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A6758u;
label_3a6758:
    // 0x3a6758: 0x3e00008  jr          $ra
label_3a675c:
    if (ctx->pc == 0x3A675Cu) {
        ctx->pc = 0x3A6760u;
        goto label_3a6760;
    }
    ctx->pc = 0x3A6758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A6758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A6760u;
label_3a6760:
    // 0x3a6760: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x3a6760u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a6764:
    // 0x3a6764: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3a6764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3a6768:
    // 0x3a6768: 0x8c44e884  lw          $a0, -0x177C($v0)
    ctx->pc = 0x3a6768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961284)));
label_3a676c:
    // 0x3a676c: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x3a676cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_3a6770:
    // 0x3a6770: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3a6770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3a6774:
    // 0x3a6774: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3a6774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3a6778:
    // 0x3a6778: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_3a677c:
    if (ctx->pc == 0x3A677Cu) {
        ctx->pc = 0x3A6780u;
        goto label_3a6780;
    }
    ctx->pc = 0x3A6778u;
    {
        const bool branch_taken_0x3a6778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a6778) {
            ctx->pc = 0x3A67ECu;
            goto label_3a67ec;
        }
    }
    ctx->pc = 0x3A6780u;
label_3a6780:
    // 0x3a6780: 0x90820008  lbu         $v0, 0x8($a0)
    ctx->pc = 0x3a6780u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
label_3a6784:
    // 0x3a6784: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3a6784u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_3a6788:
    // 0x3a6788: 0x8ce5000c  lw          $a1, 0xC($a3)
    ctx->pc = 0x3a6788u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_3a678c:
    // 0x3a678c: 0x3463fffe  ori         $v1, $v1, 0xFFFE
    ctx->pc = 0x3a678cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
label_3a6790:
    // 0x3a6790: 0x8ce40014  lw          $a0, 0x14($a3)
    ctx->pc = 0x3a6790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
label_3a6794:
    // 0x3a6794: 0x3042009d  andi        $v0, $v0, 0x9D
    ctx->pc = 0x3a6794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)157);
label_3a6798:
    // 0x3a6798: 0x94a60006  lhu         $a2, 0x6($a1)
    ctx->pc = 0x3a6798u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
label_3a679c:
    // 0x3a679c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x3a679cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_3a67a0:
    // 0x3a67a0: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x3a67a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_3a67a4:
    // 0x3a67a4: 0x8ce50010  lw          $a1, 0x10($a3)
    ctx->pc = 0x3a67a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_3a67a8:
    // 0x3a67a8: 0xc21825  or          $v1, $a2, $v0
    ctx->pc = 0x3a67a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_3a67ac:
    // 0x3a67ac: 0xace40014  sw          $a0, 0x14($a3)
    ctx->pc = 0x3a67acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 4));
label_3a67b0:
    // 0x3a67b0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3a67b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_3a67b4:
    // 0x3a67b4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_3a67b8:
    if (ctx->pc == 0x3A67B8u) {
        ctx->pc = 0x3A67B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A67B4u;
        // 0x3a67b8: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A67BCu;
        goto label_3a67bc;
    }
    ctx->pc = 0x3A67B4u;
    {
        const bool branch_taken_0x3a67b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A67B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A67B4u;
        // 0x3a67b8: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a67b4) {
            ctx->pc = 0x3A67ECu;
            goto label_3a67ec;
        }
    }
    ctx->pc = 0x3A67BCu;
label_3a67bc:
    // 0x3a67bc: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x3a67bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_3a67c0:
    // 0x3a67c0: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_3a67c4:
    if (ctx->pc == 0x3A67C4u) {
        ctx->pc = 0x3A67C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A67C0u;
        // 0x3a67c4: 0x21402  srl         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A67C8u;
        goto label_3a67c8;
    }
    ctx->pc = 0x3A67C0u;
    {
        const bool branch_taken_0x3a67c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A67C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A67C0u;
        // 0x3a67c4: 0x21402  srl         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a67c0) {
            ctx->pc = 0x3A67ECu;
            goto label_3a67ec;
        }
    }
    ctx->pc = 0x3A67C8u;
label_3a67c8:
    // 0x3a67c8: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x3a67c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
label_3a67cc:
    // 0x3a67cc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3a67ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3a67d0:
    // 0x3a67d0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_3a67d4:
    if (ctx->pc == 0x3A67D4u) {
        ctx->pc = 0x3A67D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A67D0u;
        // 0x3a67d4: 0x34820004  ori         $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A67D8u;
        goto label_3a67d8;
    }
    ctx->pc = 0x3A67D0u;
    {
        const bool branch_taken_0x3a67d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A67D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A67D0u;
        // 0x3a67d4: 0x34820004  ori         $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a67d0) {
            ctx->pc = 0x3A67E8u;
            goto label_3a67e8;
        }
    }
    ctx->pc = 0x3A67D8u;
label_3a67d8:
    // 0x3a67d8: 0x34820008  ori         $v0, $a0, 0x8
    ctx->pc = 0x3a67d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
label_3a67dc:
    // 0x3a67dc: 0x3e00008  jr          $ra
label_3a67e0:
    if (ctx->pc == 0x3A67E0u) {
        ctx->pc = 0x3A67E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A67DCu;
        // 0x3a67e0: 0xace20014  sw          $v0, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A67E4u;
        goto label_3a67e4;
    }
    ctx->pc = 0x3A67DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A67E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A67DCu;
        // 0x3a67e0: 0xace20014  sw          $v0, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A67DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A67E4u;
label_3a67e4:
    // 0x3a67e4: 0x0  nop
    ctx->pc = 0x3a67e4u;
    // NOP
label_3a67e8:
    // 0x3a67e8: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x3a67e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_3a67ec:
    // 0x3a67ec: 0x3e00008  jr          $ra
label_3a67f0:
    if (ctx->pc == 0x3A67F0u) {
        ctx->pc = 0x3A67F4u;
        goto label_3a67f4;
    }
    ctx->pc = 0x3A67ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A67ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A67F4u;
label_3a67f4:
    // 0x3a67f4: 0x0  nop
    ctx->pc = 0x3a67f4u;
    // NOP
label_3a67f8:
    // 0x3a67f8: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3a67f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3a67fc:
    // 0x3a67fc: 0x8c62e880  lw          $v0, -0x1780($v1)
    ctx->pc = 0x3a67fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961280)));
label_3a6800:
    // 0x3a6800: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x3a6800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_3a6804:
    // 0x3a6804: 0x3e00008  jr          $ra
label_3a6808:
    if (ctx->pc == 0x3A6808u) {
        ctx->pc = 0x3A6808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6804u;
        // 0x3a6808: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A680Cu;
        goto label_3a680c;
    }
    ctx->pc = 0x3A6804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A6808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6804u;
        // 0x3a6808: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A6804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A680Cu;
label_3a680c:
    // 0x3a680c: 0x0  nop
    ctx->pc = 0x3a680cu;
    // NOP
label_3a6810:
    // 0x3a6810: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x3a6810u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3a6814:
    // 0x3a6814: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a6814u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3a6818:
    // 0x3a6818: 0x80c02d  daddu       $t8, $a0, $zero
    ctx->pc = 0x3a6818u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a681c:
    // 0x3a681c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3a681cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3a6820:
    // 0x3a6820: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3a6820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3a6824:
    // 0x3a6824: 0x8f84bebc  lw          $a0, -0x4144($gp)
    ctx->pc = 0x3a6824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950588)));
label_3a6828:
    // 0x3a6828: 0x8c62e880  lw          $v0, -0x1780($v1)
    ctx->pc = 0x3a6828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961280)));
label_3a682c:
    // 0x3a682c: 0x3c0cffff  lui         $t4, 0xFFFF
    ctx->pc = 0x3a682cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)65535 << 16));
label_3a6830:
    // 0x3a6830: 0xada50000  sw          $a1, 0x0($t5)
    ctx->pc = 0x3a6830u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 5));
label_3a6834:
    // 0x3a6834: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3a6834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a6838:
    // 0x3a6838: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3a6838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3a683c:
    // 0x3a683c: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x3a683cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_3a6840:
    // 0x3a6840: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x3a6840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_3a6844:
    // 0x3a6844: 0x240b000c  addiu       $t3, $zero, 0xC
    ctx->pc = 0x3a6844u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3a6848:
    // 0x3a6848: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3a6848u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a684c:
    // 0x3a684c: 0x358cffff  ori         $t4, $t4, 0xFFFF
    ctx->pc = 0x3a684cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)65535);
label_3a6850:
    // 0x3a6850: 0x240e0005  addiu       $t6, $zero, 0x5
    ctx->pc = 0x3a6850u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3a6854:
    // 0x3a6854: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x3a6854u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3a6858:
    // 0x3a6858: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x3a6858u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3a685c:
    // 0x3a685c: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x3a685cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3a6860:
    // 0x3a6860: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x3a6860u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3a6864:
    // 0x3a6864: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x3a6864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3a6868:
    // 0x3a6868: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3a6868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3a686c:
    // 0x3a686c: 0x0  nop
    ctx->pc = 0x3a686cu;
    // NOP
label_3a6870:
    // 0x3a6870: 0x90820010  lbu         $v0, 0x10($a0)
    ctx->pc = 0x3a6870u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3a6874:
    // 0x3a6874: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x3a6874u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_3a6878:
    // 0x3a6878: 0x4b7818  mult        $t7, $v0, $t3
    ctx->pc = 0x3a6878u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
label_3a687c:
    // 0x3a687c: 0x1f81021  addu        $v0, $t7, $t8
    ctx->pc = 0x3a687cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 24)));
label_3a6880:
    // 0x3a6880: 0xc4400060  lwc1        $f0, 0x60($v0)
    ctx->pc = 0x3a6880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a6884:
    // 0x3a6884: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x3a6884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3a6888:
    // 0x3a6888: 0x90a20011  lbu         $v0, 0x11($a1)
    ctx->pc = 0x3a6888u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 17)));
label_3a688c:
    // 0x3a688c: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x3a688cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_3a6890:
    // 0x3a6890: 0x4b7818  mult        $t7, $v0, $t3
    ctx->pc = 0x3a6890u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
label_3a6894:
    // 0x3a6894: 0x1f81021  addu        $v0, $t7, $t8
    ctx->pc = 0x3a6894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 24)));
label_3a6898:
    // 0x3a6898: 0xc4450064  lwc1        $f5, 0x64($v0)
    ctx->pc = 0x3a6898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3a689c:
    // 0x3a689c: 0xe7a50004  swc1        $f5, 0x4($sp)
    ctx->pc = 0x3a689cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3a68a0:
    // 0x3a68a0: 0x90e20012  lbu         $v0, 0x12($a3)
    ctx->pc = 0x3a68a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 18)));
label_3a68a4:
    // 0x3a68a4: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x3a68a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_3a68a8:
    // 0x3a68a8: 0x4b7818  mult        $t7, $v0, $t3
    ctx->pc = 0x3a68a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
label_3a68ac:
    // 0x3a68ac: 0x1f81021  addu        $v0, $t7, $t8
    ctx->pc = 0x3a68acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 24)));
label_3a68b0:
    // 0x3a68b0: 0xc4420068  lwc1        $f2, 0x68($v0)
    ctx->pc = 0x3a68b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3a68b4:
    // 0x3a68b4: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x3a68b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_3a68b8:
    // 0x3a68b8: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x3a68b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a68bc:
    // 0x3a68bc: 0xc5230004  lwc1        $f3, 0x4($t1)
    ctx->pc = 0x3a68bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3a68c0:
    // 0x3a68c0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3a68c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3a68c4:
    // 0x3a68c4: 0xc5440008  lwc1        $f4, 0x8($t2)
    ctx->pc = 0x3a68c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3a68c8:
    // 0x3a68c8: 0x46032942  mul.s       $f5, $f5, $f3
    ctx->pc = 0x3a68c8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
label_3a68cc:
    // 0x3a68cc: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x3a68ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a68d0:
    // 0x3a68d0: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x3a68d0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_3a68d4:
    // 0x3a68d4: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x3a68d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
label_3a68d8:
    // 0x3a68d8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3a68d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_3a68dc:
    // 0x3a68dc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3a68dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_3a68e0:
    // 0x3a68e0: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x3a68e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3a68e4:
    // 0x3a68e4: 0x0  nop
    ctx->pc = 0x3a68e4u;
    // NOP
label_3a68e8:
    // 0x3a68e8: 0x4503002b  bc1tl       . + 4 + (0x2B << 2)
label_3a68ec:
    if (ctx->pc == 0x3A68ECu) {
        ctx->pc = 0x3A68ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A68E8u;
        // 0x3a68ec: 0xada60000  sw          $a2, 0x0($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A68F0u;
        goto label_3a68f0;
    }
    ctx->pc = 0x3A68E8u;
    {
        const bool branch_taken_0x3a68e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3a68e8) {
            ctx->pc = 0x3A68ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A68E8u;
            // 0x3a68ec: 0xada60000  sw          $a2, 0x0($t5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A6998u;
            goto label_3a6998;
        }
    }
    ctx->pc = 0x3A68F0u;
label_3a68f0:
    // 0x3a68f0: 0x90820024  lbu         $v0, 0x24($a0)
    ctx->pc = 0x3a68f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 36)));
label_3a68f4:
    // 0x3a68f4: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x3a68f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_3a68f8:
    // 0x3a68f8: 0x4b7818  mult        $t7, $v0, $t3
    ctx->pc = 0x3a68f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
label_3a68fc:
    // 0x3a68fc: 0x1f81021  addu        $v0, $t7, $t8
    ctx->pc = 0x3a68fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 24)));
label_3a6900:
    // 0x3a6900: 0xc4400060  lwc1        $f0, 0x60($v0)
    ctx->pc = 0x3a6900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a6904:
    // 0x3a6904: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x3a6904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3a6908:
    // 0x3a6908: 0x90a20025  lbu         $v0, 0x25($a1)
    ctx->pc = 0x3a6908u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 37)));
label_3a690c:
    // 0x3a690c: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x3a690cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_3a6910:
    // 0x3a6910: 0x4b7818  mult        $t7, $v0, $t3
    ctx->pc = 0x3a6910u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
label_3a6914:
    // 0x3a6914: 0x1f81021  addu        $v0, $t7, $t8
    ctx->pc = 0x3a6914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 24)));
label_3a6918:
    // 0x3a6918: 0xc4450064  lwc1        $f5, 0x64($v0)
    ctx->pc = 0x3a6918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3a691c:
    // 0x3a691c: 0xe7a50004  swc1        $f5, 0x4($sp)
    ctx->pc = 0x3a691cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3a6920:
    // 0x3a6920: 0x90e20026  lbu         $v0, 0x26($a3)
    ctx->pc = 0x3a6920u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 38)));
label_3a6924:
    // 0x3a6924: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x3a6924u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_3a6928:
    // 0x3a6928: 0x4b7818  mult        $t7, $v0, $t3
    ctx->pc = 0x3a6928u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
label_3a692c:
    // 0x3a692c: 0x1f81021  addu        $v0, $t7, $t8
    ctx->pc = 0x3a692cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 24)));
label_3a6930:
    // 0x3a6930: 0xc4420068  lwc1        $f2, 0x68($v0)
    ctx->pc = 0x3a6930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3a6934:
    // 0x3a6934: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x3a6934u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_3a6938:
    // 0x3a6938: 0xc5010014  lwc1        $f1, 0x14($t0)
    ctx->pc = 0x3a6938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a693c:
    // 0x3a693c: 0xc5230018  lwc1        $f3, 0x18($t1)
    ctx->pc = 0x3a693cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3a6940:
    // 0x3a6940: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3a6940u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3a6944:
    // 0x3a6944: 0xc544001c  lwc1        $f4, 0x1C($t2)
    ctx->pc = 0x3a6944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3a6948:
    // 0x3a6948: 0x46032942  mul.s       $f5, $f5, $f3
    ctx->pc = 0x3a6948u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
label_3a694c:
    // 0x3a694c: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x3a694cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a6950:
    // 0x3a6950: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x3a6950u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_3a6954:
    // 0x3a6954: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x3a6954u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
label_3a6958:
    // 0x3a6958: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3a6958u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_3a695c:
    // 0x3a695c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3a695cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_3a6960:
    // 0x3a6960: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x3a6960u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3a6964:
    // 0x3a6964: 0x0  nop
    ctx->pc = 0x3a6964u;
    // NOP
label_3a6968:
    // 0x3a6968: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_3a696c:
    if (ctx->pc == 0x3A696Cu) {
        ctx->pc = 0x3A696Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6968u;
        // 0x3a696c: 0x24630028  addiu       $v1, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6970u;
        goto label_3a6970;
    }
    ctx->pc = 0x3A6968u;
    {
        const bool branch_taken_0x3a6968 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3a6968) {
            ctx->pc = 0x3A696Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A6968u;
            // 0x3a696c: 0x24630028  addiu       $v1, $v1, 0x28 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A6978u;
            goto label_3a6978;
        }
    }
    ctx->pc = 0x3A6970u;
label_3a6970:
    // 0x3a6970: 0x10000009  b           . + 4 + (0x9 << 2)
label_3a6974:
    if (ctx->pc == 0x3A6974u) {
        ctx->pc = 0x3A6974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6970u;
        // 0x3a6974: 0xada60000  sw          $a2, 0x0($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6978u;
        goto label_3a6978;
    }
    ctx->pc = 0x3A6970u;
    {
        const bool branch_taken_0x3a6970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6970u;
        // 0x3a6974: 0xada60000  sw          $a2, 0x0($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6970) {
            ctx->pc = 0x3A6998u;
            goto label_3a6998;
        }
    }
    ctx->pc = 0x3A6978u;
label_3a6978:
    // 0x3a6978: 0x254a0028  addiu       $t2, $t2, 0x28
    ctx->pc = 0x3a6978u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 40));
label_3a697c:
    // 0x3a697c: 0x25290028  addiu       $t1, $t1, 0x28
    ctx->pc = 0x3a697cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 40));
label_3a6980:
    // 0x3a6980: 0x25080028  addiu       $t0, $t0, 0x28
    ctx->pc = 0x3a6980u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 40));
label_3a6984:
    // 0x3a6984: 0x24e70028  addiu       $a3, $a3, 0x28
    ctx->pc = 0x3a6984u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 40));
label_3a6988:
    // 0x3a6988: 0x24a50028  addiu       $a1, $a1, 0x28
    ctx->pc = 0x3a6988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
label_3a698c:
    // 0x3a698c: 0x25cefffe  addiu       $t6, $t6, -0x2
    ctx->pc = 0x3a698cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967294));
label_3a6990:
    // 0x3a6990: 0x15ccffb7  bne         $t6, $t4, . + 4 + (-0x49 << 2)
label_3a6994:
    if (ctx->pc == 0x3A6994u) {
        ctx->pc = 0x3A6994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6990u;
        // 0x3a6994: 0x24840028  addiu       $a0, $a0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6998u;
        goto label_3a6998;
    }
    ctx->pc = 0x3A6990u;
    {
        const bool branch_taken_0x3a6990 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 12));
        ctx->pc = 0x3A6994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6990u;
        // 0x3a6994: 0x24840028  addiu       $a0, $a0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6990) {
            ctx->pc = 0x3A6870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a6870;
        }
    }
    ctx->pc = 0x3A6998u;
label_3a6998:
    // 0x3a6998: 0x3e00008  jr          $ra
label_3a699c:
    if (ctx->pc == 0x3A699Cu) {
        ctx->pc = 0x3A699Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6998u;
        // 0x3a699c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A69A0u;
        goto label_3a69a0;
    }
    ctx->pc = 0x3A6998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A699Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6998u;
        // 0x3a699c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A6998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A69A0u;
label_3a69a0:
    // 0x3a69a0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3a69a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3a69a4:
    // 0x3a69a4: 0x8c45e884  lw          $a1, -0x177C($v0)
    ctx->pc = 0x3a69a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961284)));
label_3a69a8:
    // 0x3a69a8: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x3a69a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_3a69ac:
    // 0x3a69ac: 0x31983  sra         $v1, $v1, 6
    ctx->pc = 0x3a69acu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
label_3a69b0:
    // 0x3a69b0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3a69b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_3a69b4:
    // 0x3a69b4: 0x3e00008  jr          $ra
label_3a69b8:
    if (ctx->pc == 0x3A69B8u) {
        ctx->pc = 0x3A69B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A69B4u;
        // 0x3a69b8: 0xa083002a  sb          $v1, 0x2A($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 42), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A69BCu;
        goto label_3a69bc;
    }
    ctx->pc = 0x3A69B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A69B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A69B4u;
        // 0x3a69b8: 0xa083002a  sb          $v1, 0x2A($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 42), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A69B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A69BCu;
label_3a69bc:
    // 0x3a69bc: 0x0  nop
    ctx->pc = 0x3a69bcu;
    // NOP
label_3a69c0:
    // 0x3a69c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a69c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3a69c4:
    // 0x3a69c4: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x3a69c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
label_3a69c8:
    // 0x3a69c8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3a69c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3a69cc:
    // 0x3a69cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3a69ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3a69d0:
    // 0x3a69d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a69d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3a69d4:
    // 0x3a69d4: 0x8ca3e884  lw          $v1, -0x177C($a1)
    ctx->pc = 0x3a69d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294961284)));
label_3a69d8:
    // 0x3a69d8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3a69d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3a69dc:
    // 0x3a69dc: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3a69dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_3a69e0:
    // 0x3a69e0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_3a69e4:
    if (ctx->pc == 0x3A69E4u) {
        ctx->pc = 0x3A69E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A69E0u;
        // 0x3a69e4: 0x8c910008  lw          $s1, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A69E8u;
        goto label_3a69e8;
    }
    ctx->pc = 0x3A69E0u;
    {
        const bool branch_taken_0x3a69e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A69E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A69E0u;
        // 0x3a69e4: 0x8c910008  lw          $s1, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a69e0) {
            ctx->pc = 0x3A6A10u;
            goto label_3a6a10;
        }
    }
    ctx->pc = 0x3A69E8u;
label_3a69e8:
    // 0x3a69e8: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x3a69e8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
label_3a69ec:
    // 0x3a69ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a69ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a69f0:
    // 0x3a69f0: 0x261066a0  addiu       $s0, $s0, 0x66A0
    ctx->pc = 0x3a69f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 26272));
label_3a69f4:
    // 0x3a69f4: 0xc0e67d6  jal         func_399F58
label_3a69f8:
    if (ctx->pc == 0x3A69F8u) {
        ctx->pc = 0x3A69F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A69F4u;
        // 0x3a69f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A69FCu;
        goto label_3a69fc;
    }
    ctx->pc = 0x3A69F4u;
    SET_GPR_U32(ctx, 31, 0x3A69FCu);
    ctx->pc = 0x3A69F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A69F4u;
    // 0x3a69f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399F58u, 0x3A69F4u, 0x3A69FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A69FCu;
label_3a69fc:
    // 0x3a69fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a69fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a6a00:
    // 0x3a6a00: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3a6a00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a6a04:
    // 0x3a6a04: 0xc0e67f6  jal         func_399FD8
label_3a6a08:
    if (ctx->pc == 0x3A6A08u) {
        ctx->pc = 0x3A6A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6A04u;
        // 0x3a6a08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6A0Cu;
        goto label_3a6a0c;
    }
    ctx->pc = 0x3A6A04u;
    SET_GPR_U32(ctx, 31, 0x3A6A0Cu);
    ctx->pc = 0x3A6A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6A04u;
    // 0x3a6a08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399FD8u, 0x3A6A04u, 0x3A6A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6A0Cu;
label_3a6a0c:
    // 0x3a6a0c: 0x0  nop
    ctx->pc = 0x3a6a0cu;
    // NOP
label_3a6a10:
    // 0x3a6a10: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3a6a10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a6a14:
    // 0x3a6a14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3a6a14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a6a18:
    // 0x3a6a18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a6a18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a6a1c:
    // 0x3a6a1c: 0x3e00008  jr          $ra
label_3a6a20:
    if (ctx->pc == 0x3A6A20u) {
        ctx->pc = 0x3A6A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6A1Cu;
        // 0x3a6a20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6A24u;
        goto label_3a6a24;
    }
    ctx->pc = 0x3A6A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A6A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6A1Cu;
        // 0x3a6a20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A6A1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A6A24u;
label_3a6a24:
    // 0x3a6a24: 0x0  nop
    ctx->pc = 0x3a6a24u;
    // NOP
label_3a6a28:
    // 0x3a6a28: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3a6a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3a6a2c:
    // 0x3a6a2c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x3a6a2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a6a30:
    // 0x3a6a30: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3a6a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3a6a34:
    // 0x3a6a34: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3a6a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3a6a38:
    // 0x3a6a38: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3a6a38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3a6a3c:
    // 0x3a6a3c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3a6a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_3a6a40:
    // 0x3a6a40: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3a6a40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3a6a44:
    // 0x3a6a44: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3a6a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3a6a48:
    // 0x3a6a48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a6a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3a6a4c:
    // 0x3a6a4c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3a6a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3a6a50:
    // 0x3a6a50: 0x2445e880  addiu       $a1, $v0, -0x1780
    ctx->pc = 0x3a6a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_3a6a54:
    // 0x3a6a54: 0x3c040200  lui         $a0, 0x200
    ctx->pc = 0x3a6a54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)512 << 16));
label_3a6a58:
    // 0x3a6a58: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x3a6a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_3a6a5c:
    // 0x3a6a5c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3a6a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3a6a60:
    // 0x3a6a60: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x3a6a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_3a6a64:
    // 0x3a6a64: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_3a6a68:
    if (ctx->pc == 0x3A6A68u) {
        ctx->pc = 0x3A6A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6A64u;
        // 0x3a6a68: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6A6Cu;
        goto label_3a6a6c;
    }
    ctx->pc = 0x3A6A64u;
    {
        const bool branch_taken_0x3a6a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6A64u;
        // 0x3a6a68: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6a64) {
            ctx->pc = 0x3A6AA8u;
            goto label_3a6aa8;
        }
    }
    ctx->pc = 0x3A6A6Cu;
label_3a6a6c:
    // 0x3a6a6c: 0x8ca20108  lw          $v0, 0x108($a1)
    ctx->pc = 0x3a6a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 264)));
label_3a6a70:
    // 0x3a6a70: 0x26440018  addiu       $a0, $s2, 0x18
    ctx->pc = 0x3a6a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
label_3a6a74:
    // 0x3a6a74: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3a6a74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3a6a78:
    // 0x3a6a78: 0x8d100008  lw          $s0, 0x8($t0)
    ctx->pc = 0x3a6a78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_3a6a7c:
    // 0x3a6a7c: 0x40f809  jalr        $v0
label_3a6a80:
    if (ctx->pc == 0x3A6A80u) {
        ctx->pc = 0x3A6A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6A7Cu;
        // 0x3a6a80: 0x34a5050d  ori         $a1, $a1, 0x50D (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1293);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6A84u;
        goto label_3a6a84;
    }
    ctx->pc = 0x3A6A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A6A84u);
        ctx->pc = 0x3A6A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6A7Cu;
        // 0x3a6a80: 0x34a5050d  ori         $a1, $a1, 0x50D (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1293);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A6A7Cu, 0x3A6A84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A6A84u;
label_3a6a84:
    // 0x3a6a84: 0xac530014  sw          $s3, 0x14($v0)
    ctx->pc = 0x3a6a84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 19));
label_3a6a88:
    // 0x3a6a88: 0xac50000c  sw          $s0, 0xC($v0)
    ctx->pc = 0x3a6a88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 16));
label_3a6a8c:
    // 0x3a6a8c: 0xac520008  sw          $s2, 0x8($v0)
    ctx->pc = 0x3a6a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 18));
label_3a6a90:
    // 0x3a6a90: 0xac510010  sw          $s1, 0x10($v0)
    ctx->pc = 0x3a6a90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 17));
label_3a6a94:
    // 0x3a6a94: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3a6a94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3a6a98:
    // 0x3a6a98: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3a6a98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_3a6a9c:
    // 0x3a6a9c: 0x10000008  b           . + 4 + (0x8 << 2)
label_3a6aa0:
    if (ctx->pc == 0x3A6AA0u) {
        ctx->pc = 0x3A6AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6A9Cu;
        // 0x3a6aa0: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6AA4u;
        goto label_3a6aa4;
    }
    ctx->pc = 0x3A6A9Cu;
    {
        const bool branch_taken_0x3a6a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6A9Cu;
        // 0x3a6aa0: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6a9c) {
            ctx->pc = 0x3A6AC0u;
            goto label_3a6ac0;
        }
    }
    ctx->pc = 0x3A6AA4u;
label_3a6aa4:
    // 0x3a6aa4: 0x0  nop
    ctx->pc = 0x3a6aa4u;
    // NOP
label_3a6aa8:
    // 0x3a6aa8: 0x8d040008  lw          $a0, 0x8($t0)
    ctx->pc = 0x3a6aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_3a6aac:
    // 0x3a6aac: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3a6aacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3a6ab0:
    // 0x3a6ab0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3a6ab0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3a6ab4:
    // 0x3a6ab4: 0xc1045e4  jal         func_411790
label_3a6ab8:
    if (ctx->pc == 0x3A6AB8u) {
        ctx->pc = 0x3A6AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6AB4u;
        // 0x3a6ab8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6ABCu;
        goto label_3a6abc;
    }
    ctx->pc = 0x3A6AB4u;
    SET_GPR_U32(ctx, 31, 0x3A6ABCu);
    ctx->pc = 0x3A6AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6AB4u;
    // 0x3a6ab8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x411790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x411790u, 0x3A6AB4u, 0x3A6ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6ABCu;
label_3a6abc:
    // 0x3a6abc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3a6abcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3a6ac0:
    // 0x3a6ac0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3a6ac0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3a6ac4:
    // 0x3a6ac4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3a6ac4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3a6ac8:
    // 0x3a6ac8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3a6ac8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a6acc:
    // 0x3a6acc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3a6accu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a6ad0:
    // 0x3a6ad0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a6ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a6ad4:
    // 0x3a6ad4: 0x3e00008  jr          $ra
label_3a6ad8:
    if (ctx->pc == 0x3A6AD8u) {
        ctx->pc = 0x3A6AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6AD4u;
        // 0x3a6ad8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6ADCu;
        goto label_3a6adc;
    }
    ctx->pc = 0x3A6AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A6AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6AD4u;
        // 0x3a6ad8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A6AD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A6ADCu;
label_3a6adc:
    // 0x3a6adc: 0x0  nop
    ctx->pc = 0x3a6adcu;
    // NOP
    ctx->pc = 0x3a6ae0u;
}
