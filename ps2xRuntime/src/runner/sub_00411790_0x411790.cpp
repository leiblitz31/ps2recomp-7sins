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

// Function: sub_00411790
// Address: 0x411790 - 0x411a80
void sub_00411790_0x411790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00411790_0x411790");
#endif

    switch (ctx->pc) {
        case 0x411790u: goto label_411790;
        case 0x411794u: goto label_411794;
        case 0x411798u: goto label_411798;
        case 0x41179cu: goto label_41179c;
        case 0x4117a0u: goto label_4117a0;
        case 0x4117a4u: goto label_4117a4;
        case 0x4117a8u: goto label_4117a8;
        case 0x4117acu: goto label_4117ac;
        case 0x4117b0u: goto label_4117b0;
        case 0x4117b4u: goto label_4117b4;
        case 0x4117b8u: goto label_4117b8;
        case 0x4117bcu: goto label_4117bc;
        case 0x4117c0u: goto label_4117c0;
        case 0x4117c4u: goto label_4117c4;
        case 0x4117c8u: goto label_4117c8;
        case 0x4117ccu: goto label_4117cc;
        case 0x4117d0u: goto label_4117d0;
        case 0x4117d4u: goto label_4117d4;
        case 0x4117d8u: goto label_4117d8;
        case 0x4117dcu: goto label_4117dc;
        case 0x4117e0u: goto label_4117e0;
        case 0x4117e4u: goto label_4117e4;
        case 0x4117e8u: goto label_4117e8;
        case 0x4117ecu: goto label_4117ec;
        case 0x4117f0u: goto label_4117f0;
        case 0x4117f4u: goto label_4117f4;
        case 0x4117f8u: goto label_4117f8;
        case 0x4117fcu: goto label_4117fc;
        case 0x411800u: goto label_411800;
        case 0x411804u: goto label_411804;
        case 0x411808u: goto label_411808;
        case 0x41180cu: goto label_41180c;
        case 0x411810u: goto label_411810;
        case 0x411814u: goto label_411814;
        case 0x411818u: goto label_411818;
        case 0x41181cu: goto label_41181c;
        case 0x411820u: goto label_411820;
        case 0x411824u: goto label_411824;
        case 0x411828u: goto label_411828;
        case 0x41182cu: goto label_41182c;
        case 0x411830u: goto label_411830;
        case 0x411834u: goto label_411834;
        case 0x411838u: goto label_411838;
        case 0x41183cu: goto label_41183c;
        case 0x411840u: goto label_411840;
        case 0x411844u: goto label_411844;
        case 0x411848u: goto label_411848;
        case 0x41184cu: goto label_41184c;
        case 0x411850u: goto label_411850;
        case 0x411854u: goto label_411854;
        case 0x411858u: goto label_411858;
        case 0x41185cu: goto label_41185c;
        case 0x411860u: goto label_411860;
        case 0x411864u: goto label_411864;
        case 0x411868u: goto label_411868;
        case 0x41186cu: goto label_41186c;
        case 0x411870u: goto label_411870;
        case 0x411874u: goto label_411874;
        case 0x411878u: goto label_411878;
        case 0x41187cu: goto label_41187c;
        case 0x411880u: goto label_411880;
        case 0x411884u: goto label_411884;
        case 0x411888u: goto label_411888;
        case 0x41188cu: goto label_41188c;
        case 0x411890u: goto label_411890;
        case 0x411894u: goto label_411894;
        case 0x411898u: goto label_411898;
        case 0x41189cu: goto label_41189c;
        case 0x4118a0u: goto label_4118a0;
        case 0x4118a4u: goto label_4118a4;
        case 0x4118a8u: goto label_4118a8;
        case 0x4118acu: goto label_4118ac;
        case 0x4118b0u: goto label_4118b0;
        case 0x4118b4u: goto label_4118b4;
        case 0x4118b8u: goto label_4118b8;
        case 0x4118bcu: goto label_4118bc;
        case 0x4118c0u: goto label_4118c0;
        case 0x4118c4u: goto label_4118c4;
        case 0x4118c8u: goto label_4118c8;
        case 0x4118ccu: goto label_4118cc;
        case 0x4118d0u: goto label_4118d0;
        case 0x4118d4u: goto label_4118d4;
        case 0x4118d8u: goto label_4118d8;
        case 0x4118dcu: goto label_4118dc;
        case 0x4118e0u: goto label_4118e0;
        case 0x4118e4u: goto label_4118e4;
        case 0x4118e8u: goto label_4118e8;
        case 0x4118ecu: goto label_4118ec;
        case 0x4118f0u: goto label_4118f0;
        case 0x4118f4u: goto label_4118f4;
        case 0x4118f8u: goto label_4118f8;
        case 0x4118fcu: goto label_4118fc;
        case 0x411900u: goto label_411900;
        case 0x411904u: goto label_411904;
        case 0x411908u: goto label_411908;
        case 0x41190cu: goto label_41190c;
        case 0x411910u: goto label_411910;
        case 0x411914u: goto label_411914;
        case 0x411918u: goto label_411918;
        case 0x41191cu: goto label_41191c;
        case 0x411920u: goto label_411920;
        case 0x411924u: goto label_411924;
        case 0x411928u: goto label_411928;
        case 0x41192cu: goto label_41192c;
        case 0x411930u: goto label_411930;
        case 0x411934u: goto label_411934;
        case 0x411938u: goto label_411938;
        case 0x41193cu: goto label_41193c;
        case 0x411940u: goto label_411940;
        case 0x411944u: goto label_411944;
        case 0x411948u: goto label_411948;
        case 0x41194cu: goto label_41194c;
        case 0x411950u: goto label_411950;
        case 0x411954u: goto label_411954;
        case 0x411958u: goto label_411958;
        case 0x41195cu: goto label_41195c;
        case 0x411960u: goto label_411960;
        case 0x411964u: goto label_411964;
        case 0x411968u: goto label_411968;
        case 0x41196cu: goto label_41196c;
        case 0x411970u: goto label_411970;
        case 0x411974u: goto label_411974;
        case 0x411978u: goto label_411978;
        case 0x41197cu: goto label_41197c;
        case 0x411980u: goto label_411980;
        case 0x411984u: goto label_411984;
        case 0x411988u: goto label_411988;
        case 0x41198cu: goto label_41198c;
        case 0x411990u: goto label_411990;
        case 0x411994u: goto label_411994;
        case 0x411998u: goto label_411998;
        case 0x41199cu: goto label_41199c;
        case 0x4119a0u: goto label_4119a0;
        case 0x4119a4u: goto label_4119a4;
        case 0x4119a8u: goto label_4119a8;
        case 0x4119acu: goto label_4119ac;
        case 0x4119b0u: goto label_4119b0;
        case 0x4119b4u: goto label_4119b4;
        case 0x4119b8u: goto label_4119b8;
        case 0x4119bcu: goto label_4119bc;
        case 0x4119c0u: goto label_4119c0;
        case 0x4119c4u: goto label_4119c4;
        case 0x4119c8u: goto label_4119c8;
        case 0x4119ccu: goto label_4119cc;
        case 0x4119d0u: goto label_4119d0;
        case 0x4119d4u: goto label_4119d4;
        case 0x4119d8u: goto label_4119d8;
        case 0x4119dcu: goto label_4119dc;
        case 0x4119e0u: goto label_4119e0;
        case 0x4119e4u: goto label_4119e4;
        case 0x4119e8u: goto label_4119e8;
        case 0x4119ecu: goto label_4119ec;
        case 0x4119f0u: goto label_4119f0;
        case 0x4119f4u: goto label_4119f4;
        case 0x4119f8u: goto label_4119f8;
        case 0x4119fcu: goto label_4119fc;
        case 0x411a00u: goto label_411a00;
        case 0x411a04u: goto label_411a04;
        case 0x411a08u: goto label_411a08;
        case 0x411a0cu: goto label_411a0c;
        case 0x411a10u: goto label_411a10;
        case 0x411a14u: goto label_411a14;
        case 0x411a18u: goto label_411a18;
        case 0x411a1cu: goto label_411a1c;
        case 0x411a20u: goto label_411a20;
        case 0x411a24u: goto label_411a24;
        case 0x411a28u: goto label_411a28;
        case 0x411a2cu: goto label_411a2c;
        case 0x411a30u: goto label_411a30;
        case 0x411a34u: goto label_411a34;
        case 0x411a38u: goto label_411a38;
        case 0x411a3cu: goto label_411a3c;
        case 0x411a40u: goto label_411a40;
        case 0x411a44u: goto label_411a44;
        case 0x411a48u: goto label_411a48;
        case 0x411a4cu: goto label_411a4c;
        case 0x411a50u: goto label_411a50;
        case 0x411a54u: goto label_411a54;
        case 0x411a58u: goto label_411a58;
        case 0x411a5cu: goto label_411a5c;
        case 0x411a60u: goto label_411a60;
        case 0x411a64u: goto label_411a64;
        case 0x411a68u: goto label_411a68;
        case 0x411a6cu: goto label_411a6c;
        case 0x411a70u: goto label_411a70;
        case 0x411a74u: goto label_411a74;
        case 0x411a78u: goto label_411a78;
        case 0x411a7cu: goto label_411a7c;
        default: break;
    }

    ctx->pc = 0x411790u;

label_411790:
    // 0x411790: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x411790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_411794:
    // 0x411794: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x411794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_411798:
    // 0x411798: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x411798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_41179c:
    // 0x41179c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x41179cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_4117a0:
    // 0x4117a0: 0x2451e880  addiu       $s1, $v0, -0x1780
    ctx->pc = 0x4117a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_4117a4:
    // 0x4117a4: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x4117a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_4117a8:
    // 0x4117a8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x4117a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4117ac:
    // 0x4117ac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4117acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4117b0:
    // 0x4117b0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4117b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4117b4:
    // 0x4117b4: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x4117b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_4117b8:
    // 0x4117b8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4117b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4117bc:
    // 0x4117bc: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x4117bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_4117c0:
    // 0x4117c0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4117c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4117c4:
    // 0x4117c4: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x4117c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_4117c8:
    // 0x4117c8: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x4117c8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4117cc:
    // 0x4117cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4117ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4117d0:
    // 0x4117d0: 0x8f82bdd0  lw          $v0, -0x4230($gp)
    ctx->pc = 0x4117d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950352)));
label_4117d4:
    // 0x4117d4: 0x0  nop
    ctx->pc = 0x4117d4u;
    // NOP
label_4117d8:
    // 0x4117d8: 0x26450018  addiu       $a1, $s2, 0x18
    ctx->pc = 0x4117d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
label_4117dc:
    // 0x4117dc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4117dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4117e0:
    // 0x4117e0: 0xc104f36  jal         func_413CD8
label_4117e4:
    if (ctx->pc == 0x4117E4u) {
        ctx->pc = 0x4117E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4117E0u;
        // 0x4117e4: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4117E8u;
        goto label_4117e8;
    }
    ctx->pc = 0x4117E0u;
    SET_GPR_U32(ctx, 31, 0x4117E8u);
    ctx->pc = 0x4117E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4117E0u;
    // 0x4117e4: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413CD8u, 0x4117E0u, 0x4117E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4117E8u;
label_4117e8:
    // 0x4117e8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x4117e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4117ec:
    // 0x4117ec: 0x10e00016  beqz        $a3, . + 4 + (0x16 << 2)
label_4117f0:
    if (ctx->pc == 0x4117F0u) {
        ctx->pc = 0x4117F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4117ECu;
        // 0x4117f0: 0x8f82bdd0  lw          $v0, -0x4230($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4117F4u;
        goto label_4117f4;
    }
    ctx->pc = 0x4117ECu;
    {
        const bool branch_taken_0x4117ec = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x4117F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4117ECu;
        // 0x4117f0: 0x8f82bdd0  lw          $v0, -0x4230($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4117ec) {
            ctx->pc = 0x411848u;
            goto label_411848;
        }
    }
    ctx->pc = 0x4117F4u;
label_4117f4:
    // 0x4117f4: 0xacf20008  sw          $s2, 0x8($a3)
    ctx->pc = 0x4117f4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 18));
label_4117f8:
    // 0x4117f8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4117f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4117fc:
    // 0x4117fc: 0xacf5000c  sw          $s5, 0xC($a3)
    ctx->pc = 0x4117fcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 21));
label_411800:
    // 0x411800: 0x8c450024  lw          $a1, 0x24($v0)
    ctx->pc = 0x411800u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_411804:
    // 0x411804: 0x8f83bdd0  lw          $v1, -0x4230($gp)
    ctx->pc = 0x411804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950352)));
label_411808:
    // 0x411808: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x411808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_41180c:
    // 0x41180c: 0xace50004  sw          $a1, 0x4($a3)
    ctx->pc = 0x41180cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
label_411810:
    // 0x411810: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x411810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_411814:
    // 0x411814: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x411814u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
label_411818:
    // 0x411818: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x411818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_41181c:
    // 0x41181c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x41181cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_411820:
    // 0x411820: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x411820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_411824:
    // 0x411824: 0xacf60014  sw          $s6, 0x14($a3)
    ctx->pc = 0x411824u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 22));
label_411828:
    // 0x411828: 0xac870004  sw          $a3, 0x4($a0)
    ctx->pc = 0x411828u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
label_41182c:
    // 0x41182c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x41182cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_411830:
    // 0x411830: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x411830u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
label_411834:
    // 0x411834: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
label_411838:
    if (ctx->pc == 0x411838u) {
        ctx->pc = 0x411838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411834u;
        // 0x411838: 0xacf30010  sw          $s3, 0x10($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41183Cu;
        goto label_41183c;
    }
    ctx->pc = 0x411834u;
    {
        const bool branch_taken_0x411834 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x411838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411834u;
        // 0x411838: 0xacf30010  sw          $s3, 0x10($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411834) {
            ctx->pc = 0x411840u;
            goto label_411840;
        }
    }
    ctx->pc = 0x41183Cu;
label_41183c:
    // 0x41183c: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x41183cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
label_411840:
    // 0x411840: 0x10000043  b           . + 4 + (0x43 << 2)
label_411844:
    if (ctx->pc == 0x411844u) {
        ctx->pc = 0x411844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411840u;
        // 0x411844: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411848u;
        goto label_411848;
    }
    ctx->pc = 0x411840u;
    {
        const bool branch_taken_0x411840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x411844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411840u;
        // 0x411844: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411840) {
            ctx->pc = 0x411950u;
            goto label_411950;
        }
    }
    ctx->pc = 0x411848u;
label_411848:
    // 0x411848: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x411848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_41184c:
    // 0x41184c: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x41184cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_411850:
    // 0x411850: 0x8c700004  lw          $s0, 0x4($v1)
    ctx->pc = 0x411850u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_411854:
    // 0x411854: 0x5203000e  beql        $s0, $v1, . + 4 + (0xE << 2)
label_411858:
    if (ctx->pc == 0x411858u) {
        ctx->pc = 0x411858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411854u;
        // 0x411858: 0x8c820024  lw          $v0, 0x24($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41185Cu;
        goto label_41185c;
    }
    ctx->pc = 0x411854u;
    {
        const bool branch_taken_0x411854 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x411854) {
            ctx->pc = 0x411858u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x411854u;
            // 0x411858: 0x8c820024  lw          $v0, 0x24($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x411890u;
            goto label_411890;
        }
    }
    ctx->pc = 0x41185Cu;
label_41185c:
    // 0x41185c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x41185cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_411860:
    // 0x411860: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_411864:
    if (ctx->pc == 0x411864u) {
        ctx->pc = 0x411864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411860u;
        // 0x411864: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411868u;
        goto label_411868;
    }
    ctx->pc = 0x411860u;
    {
        const bool branch_taken_0x411860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x411860) {
            ctx->pc = 0x411864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x411860u;
            // 0x411864: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x411874u;
            goto label_411874;
        }
    }
    ctx->pc = 0x411868u;
label_411868:
    // 0x411868: 0x40f809  jalr        $v0
label_41186c:
    if (ctx->pc == 0x41186Cu) {
        ctx->pc = 0x41186Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411868u;
        // 0x41186c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411870u;
        goto label_411870;
    }
    ctx->pc = 0x411868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x411870u);
        ctx->pc = 0x41186Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411868u;
        // 0x41186c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x411868u, 0x411870u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x411870u;
label_411870:
    // 0x411870: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x411870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_411874:
    // 0x411874: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_411878:
    if (ctx->pc == 0x411878u) {
        ctx->pc = 0x411878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411874u;
        // 0x411878: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41187Cu;
        goto label_41187c;
    }
    ctx->pc = 0x411874u;
    {
        const bool branch_taken_0x411874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x411874) {
            ctx->pc = 0x411878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x411874u;
            // 0x411878: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41187Cu;
            goto label_41187c;
        }
    }
    ctx->pc = 0x41187Cu;
label_41187c:
    // 0x41187c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x41187cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_411880:
    // 0x411880: 0x54a00015  bnel        $a1, $zero, . + 4 + (0x15 << 2)
label_411884:
    if (ctx->pc == 0x411884u) {
        ctx->pc = 0x411884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411880u;
        // 0x411884: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411888u;
        goto label_411888;
    }
    ctx->pc = 0x411880u;
    {
        const bool branch_taken_0x411880 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x411880) {
            ctx->pc = 0x411884u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x411880u;
            // 0x411884: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4118D8u;
            goto label_4118d8;
        }
    }
    ctx->pc = 0x411888u;
label_411888:
    // 0x411888: 0x10000021  b           . + 4 + (0x21 << 2)
label_41188c:
    if (ctx->pc == 0x41188Cu) {
        ctx->pc = 0x41188Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411888u;
        // 0x41188c: 0x8e22010c  lw          $v0, 0x10C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411890u;
        goto label_411890;
    }
    ctx->pc = 0x411888u;
    {
        const bool branch_taken_0x411888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41188Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411888u;
        // 0x41188c: 0x8e22010c  lw          $v0, 0x10C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411888) {
            ctx->pc = 0x411910u;
            goto label_411910;
        }
    }
    ctx->pc = 0x411890u;
label_411890:
    // 0x411890: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x411890u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_411894:
    // 0x411894: 0x52020020  beql        $s0, $v0, . + 4 + (0x20 << 2)
label_411898:
    if (ctx->pc == 0x411898u) {
        ctx->pc = 0x411898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411894u;
        // 0x411898: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41189Cu;
        goto label_41189c;
    }
    ctx->pc = 0x411894u;
    {
        const bool branch_taken_0x411894 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x411894) {
            ctx->pc = 0x411898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x411894u;
            // 0x411898: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x411918u;
            goto label_411918;
        }
    }
    ctx->pc = 0x41189Cu;
label_41189c:
    // 0x41189c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x41189cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4118a0:
    // 0x4118a0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x4118a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4118a4:
    // 0x4118a4: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x4118a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_4118a8:
    // 0x4118a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4118a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4118ac:
    // 0x4118ac: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_4118b0:
    if (ctx->pc == 0x4118B0u) {
        ctx->pc = 0x4118B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4118ACu;
        // 0x4118b0: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4118B4u;
        goto label_4118b4;
    }
    ctx->pc = 0x4118ACu;
    {
        const bool branch_taken_0x4118ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4118B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4118ACu;
        // 0x4118b0: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4118ac) {
            ctx->pc = 0x4118BCu;
            goto label_4118bc;
        }
    }
    ctx->pc = 0x4118B4u;
label_4118b4:
    // 0x4118b4: 0xa0f809  jalr        $a1
label_4118b8:
    if (ctx->pc == 0x4118B8u) {
        ctx->pc = 0x4118B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4118B4u;
        // 0x4118b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4118BCu;
        goto label_4118bc;
    }
    ctx->pc = 0x4118B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x4118BCu);
        ctx->pc = 0x4118B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4118B4u;
        // 0x4118b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4118B4u, 0x4118BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4118BCu;
label_4118bc:
    // 0x4118bc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x4118bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4118c0:
    // 0x4118c0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_4118c4:
    if (ctx->pc == 0x4118C4u) {
        ctx->pc = 0x4118C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4118C0u;
        // 0x4118c4: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4118C8u;
        goto label_4118c8;
    }
    ctx->pc = 0x4118C0u;
    {
        const bool branch_taken_0x4118c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4118c0) {
            ctx->pc = 0x4118C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4118C0u;
            // 0x4118c4: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4118C8u;
            goto label_4118c8;
        }
    }
    ctx->pc = 0x4118C8u;
label_4118c8:
    // 0x4118c8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x4118c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4118cc:
    // 0x4118cc: 0x50a00010  beql        $a1, $zero, . + 4 + (0x10 << 2)
label_4118d0:
    if (ctx->pc == 0x4118D0u) {
        ctx->pc = 0x4118D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4118CCu;
        // 0x4118d0: 0x8e22010c  lw          $v0, 0x10C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4118D4u;
        goto label_4118d4;
    }
    ctx->pc = 0x4118CCu;
    {
        const bool branch_taken_0x4118cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4118cc) {
            ctx->pc = 0x4118D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4118CCu;
            // 0x4118d0: 0x8e22010c  lw          $v0, 0x10C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x411910u;
            goto label_411910;
        }
    }
    ctx->pc = 0x4118D4u;
label_4118d4:
    // 0x4118d4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x4118d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4118d8:
    // 0x4118d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4118d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4118dc:
    // 0x4118dc: 0x8f83bdd0  lw          $v1, -0x4230($gp)
    ctx->pc = 0x4118dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950352)));
label_4118e0:
    // 0x4118e0: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x4118e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_4118e4:
    // 0x4118e4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x4118e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_4118e8:
    // 0x4118e8: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x4118e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4118ec:
    // 0x4118ec: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4118ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4118f0:
    // 0x4118f0: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x4118f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4118f4:
    // 0x4118f4: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x4118f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4118f8:
    // 0x4118f8: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x4118f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_4118fc:
    // 0x4118fc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x4118fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_411900:
    // 0x411900: 0xc105088  jal         func_414220
label_411904:
    if (ctx->pc == 0x411904u) {
        ctx->pc = 0x411904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411900u;
        // 0x411904: 0xace50004  sw          $a1, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411908u;
        goto label_411908;
    }
    ctx->pc = 0x411900u;
    SET_GPR_U32(ctx, 31, 0x411908u);
    ctx->pc = 0x411904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x411900u;
    // 0x411904: 0xace50004  sw          $a1, 0x4($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x414220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x414220u, 0x411900u, 0x411908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x411908u;
label_411908:
    // 0x411908: 0x10000003  b           . + 4 + (0x3 << 2)
label_41190c:
    if (ctx->pc == 0x41190Cu) {
        ctx->pc = 0x411910u;
        goto label_411910;
    }
    ctx->pc = 0x411908u;
    {
        const bool branch_taken_0x411908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x411908) {
            ctx->pc = 0x411918u;
            goto label_411918;
        }
    }
    ctx->pc = 0x411910u;
label_411910:
    // 0x411910: 0x40f809  jalr        $v0
label_411914:
    if (ctx->pc == 0x411914u) {
        ctx->pc = 0x411914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411910u;
        // 0x411914: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411918u;
        goto label_411918;
    }
    ctx->pc = 0x411910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x411918u);
        ctx->pc = 0x411914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411910u;
        // 0x411914: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x411910u, 0x411918u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x411918u;
label_411918:
    // 0x411918: 0x1280ffaf  beqz        $s4, . + 4 + (-0x51 << 2)
label_41191c:
    if (ctx->pc == 0x41191Cu) {
        ctx->pc = 0x41191Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411918u;
        // 0x41191c: 0x8f82bdd0  lw          $v0, -0x4230($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411920u;
        goto label_411920;
    }
    ctx->pc = 0x411918u;
    {
        const bool branch_taken_0x411918 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x41191Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411918u;
        // 0x41191c: 0x8f82bdd0  lw          $v0, -0x4230($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411918) {
            ctx->pc = 0x4117D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4117d8;
        }
    }
    ctx->pc = 0x411920u;
label_411920:
    // 0x411920: 0x56600001  bnel        $s3, $zero, . + 4 + (0x1 << 2)
label_411924:
    if (ctx->pc == 0x411924u) {
        ctx->pc = 0x411924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411920u;
        // 0x411924: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411928u;
        goto label_411928;
    }
    ctx->pc = 0x411920u;
    {
        const bool branch_taken_0x411920 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x411920) {
            ctx->pc = 0x411924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x411920u;
            // 0x411924: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x411928u;
            goto label_411928;
        }
    }
    ctx->pc = 0x411928u;
label_411928:
    // 0x411928: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x411928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41192c:
    // 0x41192c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x41192cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_411930:
    // 0x411930: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x411930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_411934:
    // 0x411934: 0xc1035f6  jal         func_40D7D8
label_411938:
    if (ctx->pc == 0x411938u) {
        ctx->pc = 0x411938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411934u;
        // 0x411938: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41193Cu;
        goto label_41193c;
    }
    ctx->pc = 0x411934u;
    SET_GPR_U32(ctx, 31, 0x41193Cu);
    ctx->pc = 0x411938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x411934u;
    // 0x411938: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x411934u, 0x41193Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41193Cu;
label_41193c:
    // 0x41193c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x41193cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_411940:
    // 0x411940: 0xc103628  jal         func_40D8A0
label_411944:
    if (ctx->pc == 0x411944u) {
        ctx->pc = 0x411944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411940u;
        // 0x411944: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411948u;
        goto label_411948;
    }
    ctx->pc = 0x411940u;
    SET_GPR_U32(ctx, 31, 0x411948u);
    ctx->pc = 0x411944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x411940u;
    // 0x411944: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x411940u, 0x411948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x411948u;
label_411948:
    // 0x411948: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x411948u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41194c:
    // 0x41194c: 0x0  nop
    ctx->pc = 0x41194cu;
    // NOP
label_411950:
    // 0x411950: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x411950u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_411954:
    // 0x411954: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x411954u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_411958:
    // 0x411958: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x411958u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_41195c:
    // 0x41195c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x41195cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_411960:
    // 0x411960: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x411960u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_411964:
    // 0x411964: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x411964u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_411968:
    // 0x411968: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x411968u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_41196c:
    // 0x41196c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x41196cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_411970:
    // 0x411970: 0x3e00008  jr          $ra
label_411974:
    if (ctx->pc == 0x411974u) {
        ctx->pc = 0x411974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411970u;
        // 0x411974: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411978u;
        goto label_411978;
    }
    ctx->pc = 0x411970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x411974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411970u;
        // 0x411974: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x411970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x411978u;
label_411978:
    // 0x411978: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x411978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_41197c:
    // 0x41197c: 0x8f82bdd4  lw          $v0, -0x422C($gp)
    ctx->pc = 0x41197cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950356)));
label_411980:
    // 0x411980: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x411980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_411984:
    // 0x411984: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x411984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_411988:
    // 0x411988: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x411988u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41198c:
    // 0x41198c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x41198cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_411990:
    // 0x411990: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_411994:
    if (ctx->pc == 0x411994u) {
        ctx->pc = 0x411994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411990u;
        // 0x411994: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411998u;
        goto label_411998;
    }
    ctx->pc = 0x411990u;
    {
        const bool branch_taken_0x411990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x411994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411990u;
        // 0x411994: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411990) {
            ctx->pc = 0x4119A8u;
            goto label_4119a8;
        }
    }
    ctx->pc = 0x411998u;
label_411998:
    // 0x411998: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x411998u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_41199c:
    // 0x41199c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x41199cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4119a0:
    // 0x4119a0: 0x10000030  b           . + 4 + (0x30 << 2)
label_4119a4:
    if (ctx->pc == 0x4119A4u) {
        ctx->pc = 0x4119A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4119A0u;
        // 0x4119a4: 0xac71e9a8  sw          $s1, -0x1658($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961576), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4119A8u;
        goto label_4119a8;
    }
    ctx->pc = 0x4119A0u;
    {
        const bool branch_taken_0x4119a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4119A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4119A0u;
        // 0x4119a4: 0xac71e9a8  sw          $s1, -0x1658($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961576), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4119a0) {
            ctx->pc = 0x411A64u;
            goto label_411a64;
        }
    }
    ctx->pc = 0x4119A8u;
label_4119a8:
    // 0x4119a8: 0x8f83bdd0  lw          $v1, -0x4230($gp)
    ctx->pc = 0x4119a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950352)));
label_4119ac:
    // 0x4119ac: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x4119acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_4119b0:
    // 0x4119b0: 0x2452e880  addiu       $s2, $v0, -0x1780
    ctx->pc = 0x4119b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_4119b4:
    // 0x4119b4: 0x728021  addu        $s0, $v1, $s2
    ctx->pc = 0x4119b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_4119b8:
    // 0x4119b8: 0xc1046a0  jal         func_411A80
label_4119bc:
    if (ctx->pc == 0x4119BCu) {
        ctx->pc = 0x4119BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4119B8u;
        // 0x4119bc: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4119C0u;
        goto label_4119c0;
    }
    ctx->pc = 0x4119B8u;
    SET_GPR_U32(ctx, 31, 0x4119C0u);
    ctx->pc = 0x4119BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4119B8u;
    // 0x4119bc: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x411A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x411A80u, 0x4119B8u, 0x4119C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4119C0u;
label_4119c0:
    // 0x4119c0: 0xc105072  jal         func_4141C8
label_4119c4:
    if (ctx->pc == 0x4119C4u) {
        ctx->pc = 0x4119C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4119C0u;
        // 0x4119c4: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4119C8u;
        goto label_4119c8;
    }
    ctx->pc = 0x4119C0u;
    SET_GPR_U32(ctx, 31, 0x4119C8u);
    ctx->pc = 0x4119C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4119C0u;
    // 0x4119c4: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4141C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4141C8u, 0x4119C0u, 0x4119C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4119C8u;
label_4119c8:
    // 0x4119c8: 0x8e42010c  lw          $v0, 0x10C($s2)
    ctx->pc = 0x4119c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_4119cc:
    // 0x4119cc: 0x40f809  jalr        $v0
label_4119d0:
    if (ctx->pc == 0x4119D0u) {
        ctx->pc = 0x4119D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4119CCu;
        // 0x4119d0: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4119D4u;
        goto label_4119d4;
    }
    ctx->pc = 0x4119CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4119D4u);
        ctx->pc = 0x4119D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4119CCu;
        // 0x4119d0: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4119CCu, 0x4119D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4119D4u;
label_4119d4:
    // 0x4119d4: 0x8e420108  lw          $v0, 0x108($s2)
    ctx->pc = 0x4119d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
label_4119d8:
    // 0x4119d8: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x4119d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_4119dc:
    // 0x4119dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4119dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4119e0:
    // 0x4119e0: 0x40f809  jalr        $v0
label_4119e4:
    if (ctx->pc == 0x4119E4u) {
        ctx->pc = 0x4119E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4119E0u;
        // 0x4119e4: 0x34a5040b  ori         $a1, $a1, 0x40B (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1035);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4119E8u;
        goto label_4119e8;
    }
    ctx->pc = 0x4119E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4119E8u);
        ctx->pc = 0x4119E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4119E0u;
        // 0x4119e4: 0x34a5040b  ori         $a1, $a1, 0x40B (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1035);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4119E0u, 0x4119E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4119E8u;
label_4119e8:
    // 0x4119e8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_4119ec:
    if (ctx->pc == 0x4119ECu) {
        ctx->pc = 0x4119ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4119E8u;
        // 0x4119ec: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4119F0u;
        goto label_4119f0;
    }
    ctx->pc = 0x4119E8u;
    {
        const bool branch_taken_0x4119e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4119ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4119E8u;
        // 0x4119ec: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4119e8) {
            ctx->pc = 0x411A18u;
            goto label_411a18;
        }
    }
    ctx->pc = 0x4119F0u;
label_4119f0:
    // 0x4119f0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x4119f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_4119f4:
    // 0x4119f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4119f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4119f8:
    // 0x4119f8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4119f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_4119fc:
    // 0x4119fc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4119fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_411a00:
    // 0x411a00: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x411a00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_411a04:
    // 0x411a04: 0xc1035f6  jal         func_40D7D8
label_411a08:
    if (ctx->pc == 0x411A08u) {
        ctx->pc = 0x411A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411A04u;
        // 0x411a08: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x411A0Cu;
        goto label_411a0c;
    }
    ctx->pc = 0x411A04u;
    SET_GPR_U32(ctx, 31, 0x411A0Cu);
    ctx->pc = 0x411A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x411A04u;
    // 0x411a08: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x411A04u, 0x411A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x411A0Cu;
label_411a0c:
    // 0x411a0c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x411a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_411a10:
    // 0x411a10: 0x10000011  b           . + 4 + (0x11 << 2)
label_411a14:
    if (ctx->pc == 0x411A14u) {
        ctx->pc = 0x411A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411A10u;
        // 0x411a14: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411A18u;
        goto label_411a18;
    }
    ctx->pc = 0x411A10u;
    {
        const bool branch_taken_0x411a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x411A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411A10u;
        // 0x411a14: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411a10) {
            ctx->pc = 0x411A58u;
            goto label_411a58;
        }
    }
    ctx->pc = 0x411A18u;
label_411a18:
    // 0x411a18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x411a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_411a1c:
    // 0x411a1c: 0xc10505c  jal         func_414170
label_411a20:
    if (ctx->pc == 0x411A20u) {
        ctx->pc = 0x411A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411A1Cu;
        // 0x411a20: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411A24u;
        goto label_411a24;
    }
    ctx->pc = 0x411A1Cu;
    SET_GPR_U32(ctx, 31, 0x411A24u);
    ctx->pc = 0x411A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x411A1Cu;
    // 0x411a20: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x414170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x414170u, 0x411A1Cu, 0x411A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x411A24u;
label_411a24:
    // 0x411a24: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_411a28:
    if (ctx->pc == 0x411A28u) {
        ctx->pc = 0x411A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411A24u;
        // 0x411a28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411A2Cu;
        goto label_411a2c;
    }
    ctx->pc = 0x411A24u;
    {
        const bool branch_taken_0x411a24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x411A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411A24u;
        // 0x411a28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411a24) {
            ctx->pc = 0x411A64u;
            goto label_411a64;
        }
    }
    ctx->pc = 0x411A2Cu;
label_411a2c:
    // 0x411a2c: 0x8e42010c  lw          $v0, 0x10C($s2)
    ctx->pc = 0x411a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_411a30:
    // 0x411a30: 0x40f809  jalr        $v0
label_411a34:
    if (ctx->pc == 0x411A34u) {
        ctx->pc = 0x411A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411A30u;
        // 0x411a34: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411A38u;
        goto label_411a38;
    }
    ctx->pc = 0x411A30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x411A38u);
        ctx->pc = 0x411A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411A30u;
        // 0x411a34: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x411A30u, 0x411A38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x411A38u;
label_411a38:
    // 0x411a38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x411a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_411a3c:
    // 0x411a3c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x411a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_411a40:
    // 0x411a40: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x411a40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_411a44:
    // 0x411a44: 0xc1035f6  jal         func_40D7D8
label_411a48:
    if (ctx->pc == 0x411A48u) {
        ctx->pc = 0x411A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411A44u;
        // 0x411a48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411A4Cu;
        goto label_411a4c;
    }
    ctx->pc = 0x411A44u;
    SET_GPR_U32(ctx, 31, 0x411A4Cu);
    ctx->pc = 0x411A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x411A44u;
    // 0x411a48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x411A44u, 0x411A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x411A4Cu;
label_411a4c:
    // 0x411a4c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x411a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_411a50:
    // 0x411a50: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x411a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_411a54:
    // 0x411a54: 0x0  nop
    ctx->pc = 0x411a54u;
    // NOP
label_411a58:
    // 0x411a58: 0xc103628  jal         func_40D8A0
label_411a5c:
    if (ctx->pc == 0x411A5Cu) {
        ctx->pc = 0x411A60u;
        goto label_411a60;
    }
    ctx->pc = 0x411A58u;
    SET_GPR_U32(ctx, 31, 0x411A60u);
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x411A58u, 0x411A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x411A60u;
label_411a60:
    // 0x411a60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x411a60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_411a64:
    // 0x411a64: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x411a64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_411a68:
    // 0x411a68: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x411a68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_411a6c:
    // 0x411a6c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x411a6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_411a70:
    // 0x411a70: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x411a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_411a74:
    // 0x411a74: 0x3e00008  jr          $ra
label_411a78:
    if (ctx->pc == 0x411A78u) {
        ctx->pc = 0x411A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411A74u;
        // 0x411a78: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411A7Cu;
        goto label_411a7c;
    }
    ctx->pc = 0x411A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x411A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411A74u;
        // 0x411a78: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x411A74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x411A7Cu;
label_411a7c:
    // 0x411a7c: 0x0  nop
    ctx->pc = 0x411a7cu;
    // NOP
    ctx->pc = 0x411a80u;
}
