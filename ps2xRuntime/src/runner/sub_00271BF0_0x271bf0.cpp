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

// Function: sub_00271BF0
// Address: 0x271bf0 - 0x273930
void sub_00271BF0_0x271bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00271BF0_0x271bf0");
#endif

    switch (ctx->pc) {
        case 0x271c70u: goto label_271c70;
        case 0x271c84u: goto label_271c84;
        case 0x271ca4u: goto label_271ca4;
        case 0x271cb0u: goto label_271cb0;
        case 0x271cccu: goto label_271ccc;
        case 0x271ce0u: goto label_271ce0;
        case 0x271d08u: goto label_271d08;
        case 0x271d1cu: goto label_271d1c;
        case 0x271d34u: goto label_271d34;
        case 0x271d58u: goto label_271d58;
        case 0x271d88u: goto label_271d88;
        case 0x271da4u: goto label_271da4;
        case 0x271db8u: goto label_271db8;
        case 0x271df8u: goto label_271df8;
        case 0x271e60u: goto label_271e60;
        case 0x271e84u: goto label_271e84;
        case 0x272004u: goto label_272004;
        case 0x27201cu: goto label_27201c;
        case 0x272048u: goto label_272048;
        case 0x272078u: goto label_272078;
        case 0x272088u: goto label_272088;
        case 0x27209cu: goto label_27209c;
        case 0x2720d8u: goto label_2720d8;
        case 0x2720f0u: goto label_2720f0;
        case 0x272108u: goto label_272108;
        case 0x27211cu: goto label_27211c;
        case 0x272138u: goto label_272138;
        case 0x272178u: goto label_272178;
        case 0x272188u: goto label_272188;
        case 0x2721a4u: goto label_2721a4;
        case 0x2721bcu: goto label_2721bc;
        case 0x2721d0u: goto label_2721d0;
        case 0x2721dcu: goto label_2721dc;
        case 0x272208u: goto label_272208;
        case 0x272214u: goto label_272214;
        case 0x272238u: goto label_272238;
        case 0x272248u: goto label_272248;
        case 0x272264u: goto label_272264;
        case 0x272280u: goto label_272280;
        case 0x272294u: goto label_272294;
        case 0x2722b8u: goto label_2722b8;
        case 0x272304u: goto label_272304;
        case 0x272324u: goto label_272324;
        case 0x272348u: goto label_272348;
        case 0x272368u: goto label_272368;
        case 0x272388u: goto label_272388;
        case 0x2723acu: goto label_2723ac;
        case 0x2723d0u: goto label_2723d0;
        case 0x2723fcu: goto label_2723fc;
        case 0x272414u: goto label_272414;
        case 0x272470u: goto label_272470;
        case 0x272488u: goto label_272488;
        case 0x272504u: goto label_272504;
        case 0x272518u: goto label_272518;
        case 0x27252cu: goto label_27252c;
        case 0x272550u: goto label_272550;
        case 0x272568u: goto label_272568;
        case 0x272590u: goto label_272590;
        case 0x2725a0u: goto label_2725a0;
        case 0x2725b4u: goto label_2725b4;
        case 0x2725ccu: goto label_2725cc;
        case 0x27260cu: goto label_27260c;
        case 0x272620u: goto label_272620;
        case 0x2726c4u: goto label_2726c4;
        case 0x2726f0u: goto label_2726f0;
        case 0x272730u: goto label_272730;
        case 0x27277cu: goto label_27277c;
        case 0x272790u: goto label_272790;
        case 0x2727a0u: goto label_2727a0;
        case 0x2727bcu: goto label_2727bc;
        case 0x2727f0u: goto label_2727f0;
        case 0x27282cu: goto label_27282c;
        case 0x272868u: goto label_272868;
        case 0x272898u: goto label_272898;
        case 0x2728c0u: goto label_2728c0;
        case 0x2728d8u: goto label_2728d8;
        case 0x2728fcu: goto label_2728fc;
        case 0x272918u: goto label_272918;
        case 0x27292cu: goto label_27292c;
        case 0x27293cu: goto label_27293c;
        case 0x272958u: goto label_272958;
        case 0x272978u: goto label_272978;
        case 0x27299cu: goto label_27299c;
        case 0x2729acu: goto label_2729ac;
        case 0x2729c8u: goto label_2729c8;
        case 0x272a00u: goto label_272a00;
        case 0x272a40u: goto label_272a40;
        case 0x272a4cu: goto label_272a4c;
        case 0x272a6cu: goto label_272a6c;
        case 0x272a7cu: goto label_272a7c;
        case 0x272abcu: goto label_272abc;
        case 0x272ae0u: goto label_272ae0;
        case 0x272af4u: goto label_272af4;
        case 0x272b08u: goto label_272b08;
        case 0x272b28u: goto label_272b28;
        case 0x272b34u: goto label_272b34;
        case 0x272b44u: goto label_272b44;
        case 0x272b68u: goto label_272b68;
        case 0x272b88u: goto label_272b88;
        case 0x272bc4u: goto label_272bc4;
        case 0x272bdcu: goto label_272bdc;
        case 0x272bf4u: goto label_272bf4;
        case 0x272c14u: goto label_272c14;
        case 0x272c20u: goto label_272c20;
        case 0x272c38u: goto label_272c38;
        case 0x272c70u: goto label_272c70;
        case 0x272cb8u: goto label_272cb8;
        case 0x272cdcu: goto label_272cdc;
        case 0x272d04u: goto label_272d04;
        case 0x272d1cu: goto label_272d1c;
        case 0x272d2cu: goto label_272d2c;
        case 0x272d98u: goto label_272d98;
        case 0x272dd8u: goto label_272dd8;
        case 0x272dfcu: goto label_272dfc;
        case 0x272e14u: goto label_272e14;
        case 0x272e2cu: goto label_272e2c;
        case 0x272e4cu: goto label_272e4c;
        case 0x272e70u: goto label_272e70;
        case 0x272e8cu: goto label_272e8c;
        case 0x272ed0u: goto label_272ed0;
        case 0x272eecu: goto label_272eec;
        case 0x272f10u: goto label_272f10;
        case 0x272f48u: goto label_272f48;
        case 0x272f68u: goto label_272f68;
        case 0x272f7cu: goto label_272f7c;
        case 0x272f90u: goto label_272f90;
        case 0x272fa0u: goto label_272fa0;
        case 0x272fc4u: goto label_272fc4;
        case 0x272fdcu: goto label_272fdc;
        case 0x272ff0u: goto label_272ff0;
        case 0x272ffcu: goto label_272ffc;
        case 0x273010u: goto label_273010;
        case 0x273040u: goto label_273040;
        case 0x273070u: goto label_273070;
        case 0x273090u: goto label_273090;
        case 0x2730bcu: goto label_2730bc;
        case 0x2730e0u: goto label_2730e0;
        case 0x273100u: goto label_273100;
        case 0x27312cu: goto label_27312c;
        case 0x273168u: goto label_273168;
        case 0x273184u: goto label_273184;
        case 0x27319cu: goto label_27319c;
        case 0x2731c0u: goto label_2731c0;
        case 0x2731e0u: goto label_2731e0;
        case 0x273208u: goto label_273208;
        case 0x273234u: goto label_273234;
        case 0x27324cu: goto label_27324c;
        case 0x273268u: goto label_273268;
        case 0x27329cu: goto label_27329c;
        case 0x2732c0u: goto label_2732c0;
        case 0x2732f0u: goto label_2732f0;
        case 0x273300u: goto label_273300;
        case 0x273318u: goto label_273318;
        case 0x273328u: goto label_273328;
        case 0x273338u: goto label_273338;
        case 0x27334cu: goto label_27334c;
        case 0x273364u: goto label_273364;
        case 0x27338cu: goto label_27338c;
        case 0x2733a0u: goto label_2733a0;
        case 0x2733b8u: goto label_2733b8;
        case 0x2733fcu: goto label_2733fc;
        case 0x273414u: goto label_273414;
        case 0x273448u: goto label_273448;
        case 0x273458u: goto label_273458;
        case 0x27346cu: goto label_27346c;
        case 0x273480u: goto label_273480;
        case 0x2734acu: goto label_2734ac;
        case 0x2734ecu: goto label_2734ec;
        case 0x273510u: goto label_273510;
        case 0x273524u: goto label_273524;
        case 0x27353cu: goto label_27353c;
        case 0x273554u: goto label_273554;
        case 0x273574u: goto label_273574;
        case 0x273584u: goto label_273584;
        case 0x273594u: goto label_273594;
        case 0x2735a8u: goto label_2735a8;
        case 0x2735b8u: goto label_2735b8;
        case 0x2735e0u: goto label_2735e0;
        case 0x273614u: goto label_273614;
        case 0x273630u: goto label_273630;
        case 0x27365cu: goto label_27365c;
        case 0x273670u: goto label_273670;
        case 0x273690u: goto label_273690;
        case 0x2736b4u: goto label_2736b4;
        case 0x2736c0u: goto label_2736c0;
        case 0x2736e0u: goto label_2736e0;
        case 0x273724u: goto label_273724;
        case 0x27373cu: goto label_27373c;
        case 0x273750u: goto label_273750;
        case 0x273760u: goto label_273760;
        case 0x273770u: goto label_273770;
        case 0x273784u: goto label_273784;
        case 0x27379cu: goto label_27379c;
        case 0x273800u: goto label_273800;
        case 0x273840u: goto label_273840;
        case 0x273850u: goto label_273850;
        case 0x27385cu: goto label_27385c;
        case 0x273874u: goto label_273874;
        case 0x273880u: goto label_273880;
        case 0x27388cu: goto label_27388c;
        case 0x27389cu: goto label_27389c;
        default: break;
    }

    ctx->pc = 0x271bf0u;

    // 0x271bf0: 0x27bdfc90  addiu       $sp, $sp, -0x370
    ctx->pc = 0x271bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966416));
    // 0x271bf4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x271bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x271bf8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x271bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x271bfc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x271bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x271c00: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x271c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x271c04: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x271c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x271c08: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x271c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x271c0c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x271c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x271c10: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x271c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x271c14: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x271c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x271c18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x271c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x271c1c: 0xafa40330  sw          $a0, 0x330($sp)
    ctx->pc = 0x271c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 816), GPR_U32(ctx, 4));
    // 0x271c20: 0xafa50340  sw          $a1, 0x340($sp)
    ctx->pc = 0x271c20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 832), GPR_U32(ctx, 5));
    // 0x271c24: 0xafa60350  sw          $a2, 0x350($sp)
    ctx->pc = 0x271c24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 848), GPR_U32(ctx, 6));
    // 0x271c28: 0xafa70360  sw          $a3, 0x360($sp)
    ctx->pc = 0x271c28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 864), GPR_U32(ctx, 7));
    // 0x271c2c: 0x8fa40330  lw          $a0, 0x330($sp)
    ctx->pc = 0x271c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x271c30: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x271c30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x271c34: 0x2ca10018  sltiu       $at, $a1, 0x18
    ctx->pc = 0x271c34u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x271c38: 0x1020072f  beqz        $at, . + 4 + (0x72F << 2)
    ctx->pc = 0x271C38u;
    {
        const bool branch_taken_0x271c38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x271c38) {
            ctx->pc = 0x2738F8u;
            goto label_2738f8;
        }
    }
    ctx->pc = 0x271C40u;
    // 0x271c40: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x271c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x271c44: 0x24428b20  addiu       $v0, $v0, -0x74E0
    ctx->pc = 0x271c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937376));
    // 0x271c48: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x271c48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x271c4c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x271c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x271c50: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x271c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x271c54: 0x800008  jr          $a0
    ctx->pc = 0x271C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x271C5Cu: goto label_271c5c;
            case 0x271CF0u: goto label_271cf0;
            case 0x271D48u: goto label_271d48;
            case 0x271FD8u: goto label_271fd8;
            case 0x27205Cu: goto label_27205c;
            case 0x2724ECu: goto label_2724ec;
            case 0x272714u: goto label_272714;
            case 0x27285Cu: goto label_27285c;
            case 0x2728B4u: goto label_2728b4;
            case 0x2728F0u: goto label_2728f0;
            case 0x2729E4u: goto label_2729e4;
            case 0x272A30u: goto label_272a30;
            case 0x272A94u: goto label_272a94;
            case 0x272C58u: goto label_272c58;
            case 0x272CF8u: goto label_272cf8;
            case 0x272DB4u: goto label_272db4;
            case 0x272F2Cu: goto label_272f2c;
            case 0x273060u: goto label_273060;
            case 0x27314Cu: goto label_27314c;
            case 0x2733E8u: goto label_2733e8;
            case 0x2734E0u: goto label_2734e0;
            case 0x273644u: goto label_273644;
            case 0x273828u: goto label_273828;
            case 0x2738ECu: goto label_2738ec;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271C54u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x271C5Cu;
label_271c5c:
    // 0x271c5c: 0x8fa50340  lw          $a1, 0x340($sp)
    ctx->pc = 0x271c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x271c60: 0x8ca4002c  lw          $a0, 0x2C($a1)
    ctx->pc = 0x271c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x271c64: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x271c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x271c68: 0xc085538  jal         func_2154E0
    ctx->pc = 0x271C68u;
    SET_GPR_U32(ctx, 31, 0x271C70u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x271C68u, 0x271C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271C70u;
label_271c70:
    // 0x271c70: 0xafa20320  sw          $v0, 0x320($sp)
    ctx->pc = 0x271c70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 800), GPR_U32(ctx, 2));
    // 0x271c74: 0x8fa60320  lw          $a2, 0x320($sp)
    ctx->pc = 0x271c74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x271c78: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x271c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271c7c: 0xc063dd0  jal         func_18F740
    ctx->pc = 0x271C7Cu;
    SET_GPR_U32(ctx, 31, 0x271C84u);
    ctx->pc = 0x18F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F740u, 0x271C7Cu, 0x271C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271C84u;
label_271c84:
    // 0x271c84: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x271C84u;
    {
        const bool branch_taken_0x271c84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x271c84) {
            ctx->pc = 0x271C98u;
            goto label_271c98;
        }
    }
    ctx->pc = 0x271C8Cu;
    // 0x271c8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x271c8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271c90: 0x1000071a  b           . + 4 + (0x71A << 2)
    ctx->pc = 0x271C90u;
    {
        const bool branch_taken_0x271c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x271c90) {
            ctx->pc = 0x2738FCu;
            goto label_2738fc;
        }
    }
    ctx->pc = 0x271C98u;
label_271c98:
    // 0x271c98: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x271c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x271c9c: 0xc063dd0  jal         func_18F740
    ctx->pc = 0x271C9Cu;
    SET_GPR_U32(ctx, 31, 0x271CA4u);
    ctx->pc = 0x18F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F740u, 0x271C9Cu, 0x271CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271CA4u;
label_271ca4:
    // 0x271ca4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x271ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271ca8: 0xc0ae4b4  jal         func_2B92D0
    ctx->pc = 0x271CA8u;
    SET_GPR_U32(ctx, 31, 0x271CB0u);
    ctx->pc = 0x2B92D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B92D0u, 0x271CA8u, 0x271CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271CB0u;
label_271cb0:
    // 0x271cb0: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x271cb0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271cb4: 0x8fa50330  lw          $a1, 0x330($sp)
    ctx->pc = 0x271cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x271cb8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x271cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271cbc: 0x240504d7  addiu       $a1, $zero, 0x4D7
    ctx->pc = 0x271cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1239));
    // 0x271cc0: 0x2786a168  addiu       $a2, $gp, -0x5E98
    ctx->pc = 0x271cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943080));
    // 0x271cc4: 0xc041a50  jal         func_106940
    ctx->pc = 0x271CC4u;
    SET_GPR_U32(ctx, 31, 0x271CCCu);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x271CC4u, 0x271CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271CCCu;
label_271ccc:
    // 0x271ccc: 0x27c60004  addiu       $a2, $fp, 0x4
    ctx->pc = 0x271cccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x271cd0: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x271cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271cd4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x271cd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271cd8: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x271CD8u;
    SET_GPR_U32(ctx, 31, 0x271CE0u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x271CD8u, 0x271CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271CE0u;
label_271ce0:
    // 0x271ce0: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x271ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x271ce4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x271ce4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x271ce8: 0x10000704  b           . + 4 + (0x704 << 2)
    ctx->pc = 0x271CE8u;
    {
        const bool branch_taken_0x271ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x271ce8) {
            ctx->pc = 0x2738FCu;
            goto label_2738fc;
        }
    }
    ctx->pc = 0x271CF0u;
label_271cf0:
    // 0x271cf0: 0x8fa50330  lw          $a1, 0x330($sp)
    ctx->pc = 0x271cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x271cf4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x271cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271cf8: 0x240504e9  addiu       $a1, $zero, 0x4E9
    ctx->pc = 0x271cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1257));
    // 0x271cfc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x271cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271d00: 0xc04146c  jal         func_1051B0
    ctx->pc = 0x271D00u;
    SET_GPR_U32(ctx, 31, 0x271D08u);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x271D00u, 0x271D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271D08u;
label_271d08:
    // 0x271d08: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x271D08u;
    {
        const bool branch_taken_0x271d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x271d08) {
            ctx->pc = 0x271D28u;
            goto label_271d28;
        }
    }
    ctx->pc = 0x271D10u;
    // 0x271d10: 0x8fa40340  lw          $a0, 0x340($sp)
    ctx->pc = 0x271d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x271d14: 0xc096880  jal         func_25A200
    ctx->pc = 0x271D14u;
    SET_GPR_U32(ctx, 31, 0x271D1Cu);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x271D14u, 0x271D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271D1Cu;
label_271d1c:
    // 0x271d1c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x271d1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x271d20: 0x100006f6  b           . + 4 + (0x6F6 << 2)
    ctx->pc = 0x271D20u;
    {
        const bool branch_taken_0x271d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x271d20) {
            ctx->pc = 0x2738FCu;
            goto label_2738fc;
        }
    }
    ctx->pc = 0x271D28u;
label_271d28:
    // 0x271d28: 0x8fa40340  lw          $a0, 0x340($sp)
    ctx->pc = 0x271d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x271d2c: 0xc096880  jal         func_25A200
    ctx->pc = 0x271D2Cu;
    SET_GPR_U32(ctx, 31, 0x271D34u);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x271D2Cu, 0x271D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271D34u;
label_271d34:
    // 0x271d34: 0x402026  xor         $a0, $v0, $zero
    ctx->pc = 0x271d34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x271d38: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x271d38u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x271d3c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x271d3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271d40: 0x100006ee  b           . + 4 + (0x6EE << 2)
    ctx->pc = 0x271D40u;
    {
        const bool branch_taken_0x271d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x271d40) {
            ctx->pc = 0x2738FCu;
            goto label_2738fc;
        }
    }
    ctx->pc = 0x271D48u;
label_271d48:
    // 0x271d48: 0x8fa20340  lw          $v0, 0x340($sp)
    ctx->pc = 0x271d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x271d4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x271d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271d50: 0xc096880  jal         func_25A200
    ctx->pc = 0x271D50u;
    SET_GPR_U32(ctx, 31, 0x271D58u);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x271D50u, 0x271D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271D58u;
label_271d58:
    // 0x271d58: 0xafa2031c  sw          $v0, 0x31C($sp)
    ctx->pc = 0x271d58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 796), GPR_U32(ctx, 2));
    // 0x271d5c: 0x8fa2031c  lw          $v0, 0x31C($sp)
    ctx->pc = 0x271d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 796)));
    // 0x271d60: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x271D60u;
    {
        const bool branch_taken_0x271d60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x271d60) {
            ctx->pc = 0x271D74u;
            goto label_271d74;
        }
    }
    ctx->pc = 0x271D68u;
    // 0x271d68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x271d68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271d6c: 0x100006e3  b           . + 4 + (0x6E3 << 2)
    ctx->pc = 0x271D6Cu;
    {
        const bool branch_taken_0x271d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x271d6c) {
            ctx->pc = 0x2738FCu;
            goto label_2738fc;
        }
    }
    ctx->pc = 0x271D74u;
label_271d74:
    // 0x271d74: 0x8fa40340  lw          $a0, 0x340($sp)
    ctx->pc = 0x271d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x271d78: 0x8c84002c  lw          $a0, 0x2C($a0)
    ctx->pc = 0x271d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x271d7c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x271d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x271d80: 0xc085538  jal         func_2154E0
    ctx->pc = 0x271D80u;
    SET_GPR_U32(ctx, 31, 0x271D88u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x271D80u, 0x271D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271D88u;
label_271d88:
    // 0x271d88: 0xafa20318  sw          $v0, 0x318($sp)
    ctx->pc = 0x271d88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 792), GPR_U32(ctx, 2));
    // 0x271d8c: 0x8fa2031c  lw          $v0, 0x31C($sp)
    ctx->pc = 0x271d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 796)));
    // 0x271d90: 0x7fa20150  sq          $v0, 0x150($sp)
    ctx->pc = 0x271d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 2));
    // 0x271d94: 0x7ba40150  lq          $a0, 0x150($sp)
    ctx->pc = 0x271d94u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x271d98: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x271d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x271d9c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x271D9Cu;
    SET_GPR_U32(ctx, 31, 0x271DA4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x271D9Cu, 0x271DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271DA4u;
label_271da4:
    // 0x271da4: 0xafa20314  sw          $v0, 0x314($sp)
    ctx->pc = 0x271da4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 788), GPR_U32(ctx, 2));
    // 0x271da8: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x271da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x271dac: 0x8fa50318  lw          $a1, 0x318($sp)
    ctx->pc = 0x271dacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 792)));
    // 0x271db0: 0xc090f80  jal         func_243E00
    ctx->pc = 0x271DB0u;
    SET_GPR_U32(ctx, 31, 0x271DB8u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x271DB0u, 0x271DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271DB8u;
label_271db8:
    // 0x271db8: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x271db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x271dbc: 0x27a20250  addiu       $v0, $sp, 0x250
    ctx->pc = 0x271dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x271dc0: 0x7fa20140  sq          $v0, 0x140($sp)
    ctx->pc = 0x271dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 2));
    // 0x271dc4: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x271dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x271dc8: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x271dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x271dcc: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x271dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271dd0: 0x7ba20140  lq          $v0, 0x140($sp)
    ctx->pc = 0x271dd0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x271dd4: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x271dd4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x271dd8: 0x7ba20140  lq          $v0, 0x140($sp)
    ctx->pc = 0x271dd8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x271ddc: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x271ddcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x271de0: 0x7ba20140  lq          $v0, 0x140($sp)
    ctx->pc = 0x271de0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x271de4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x271de4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x271de8: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x271de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x271dec: 0x8fa50314  lw          $a1, 0x314($sp)
    ctx->pc = 0x271decu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 788)));
    // 0x271df0: 0xc090f80  jal         func_243E00
    ctx->pc = 0x271DF0u;
    SET_GPR_U32(ctx, 31, 0x271DF8u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x271DF0u, 0x271DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271DF8u;
label_271df8:
    // 0x271df8: 0x27a20200  addiu       $v0, $sp, 0x200
    ctx->pc = 0x271df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x271dfc: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x271dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x271e00: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x271e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x271e04: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x271e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x271e08: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x271e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271e0c: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x271e0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x271e10: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x271e10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x271e14: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x271e14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x271e18: 0xc7a10250  lwc1        $f1, 0x250($sp)
    ctx->pc = 0x271e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x271e1c: 0xc7a00240  lwc1        $f0, 0x240($sp)
    ctx->pc = 0x271e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271e20: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x271e20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x271e24: 0xe7a00250  swc1        $f0, 0x250($sp)
    ctx->pc = 0x271e24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 592), bits); }
    // 0x271e28: 0xc7a10254  lwc1        $f1, 0x254($sp)
    ctx->pc = 0x271e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x271e2c: 0xc7a00244  lwc1        $f0, 0x244($sp)
    ctx->pc = 0x271e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271e30: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x271e30u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x271e34: 0xe7a00254  swc1        $f0, 0x254($sp)
    ctx->pc = 0x271e34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 596), bits); }
    // 0x271e38: 0xc7a10258  lwc1        $f1, 0x258($sp)
    ctx->pc = 0x271e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x271e3c: 0xc7a00248  lwc1        $f0, 0x248($sp)
    ctx->pc = 0x271e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271e40: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x271e40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x271e44: 0xe7a00258  swc1        $f0, 0x258($sp)
    ctx->pc = 0x271e44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 600), bits); }
    // 0x271e48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x271e48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x271e4c: 0x0  nop
    ctx->pc = 0x271e4cu;
    // NOP
    // 0x271e50: 0xe7a00254  swc1        $f0, 0x254($sp)
    ctx->pc = 0x271e50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 596), bits); }
    // 0x271e54: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x271e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x271e58: 0xc104d24  jal         func_413490
    ctx->pc = 0x271E58u;
    SET_GPR_U32(ctx, 31, 0x271E60u);
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x271E58u, 0x271E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271E60u;
label_271e60:
    // 0x271e60: 0xe7a00310  swc1        $f0, 0x310($sp)
    ctx->pc = 0x271e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 784), bits); }
    // 0x271e64: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x271e64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x271e68: 0x0  nop
    ctx->pc = 0x271e68u;
    // NOP
    // 0x271e6c: 0xe7a0030c  swc1        $f0, 0x30C($sp)
    ctx->pc = 0x271e6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 780), bits); }
    // 0x271e70: 0x8fa40330  lw          $a0, 0x330($sp)
    ctx->pc = 0x271e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x271e74: 0x240504d8  addiu       $a1, $zero, 0x4D8
    ctx->pc = 0x271e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1240));
    // 0x271e78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x271e78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271e7c: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x271E7Cu;
    SET_GPR_U32(ctx, 31, 0x271E84u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x271E7Cu, 0x271E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271E84u;
label_271e84:
    // 0x271e84: 0xafa20308  sw          $v0, 0x308($sp)
    ctx->pc = 0x271e84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 776), GPR_U32(ctx, 2));
    // 0x271e88: 0x8fa40308  lw          $a0, 0x308($sp)
    ctx->pc = 0x271e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 776)));
    // 0x271e8c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x271e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x271e90: 0x10850016  beq         $a0, $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x271E90u;
    {
        const bool branch_taken_0x271e90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x271e90) {
            ctx->pc = 0x271EECu;
            goto label_271eec;
        }
    }
    ctx->pc = 0x271E98u;
    // 0x271e98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x271e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271e9c: 0x1082000b  beq         $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x271E9Cu;
    {
        const bool branch_taken_0x271e9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x271e9c) {
            ctx->pc = 0x271ECCu;
            goto label_271ecc;
        }
    }
    ctx->pc = 0x271EA4u;
    // 0x271ea4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x271EA4u;
    {
        const bool branch_taken_0x271ea4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x271ea4) {
            ctx->pc = 0x271EB4u;
            goto label_271eb4;
        }
    }
    ctx->pc = 0x271EACu;
    // 0x271eac: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x271EACu;
    {
        const bool branch_taken_0x271eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x271eac) {
            ctx->pc = 0x271EFCu;
            goto label_271efc;
        }
    }
    ctx->pc = 0x271EB4u;
label_271eb4:
    // 0x271eb4: 0x3c044214  lui         $a0, 0x4214
    ctx->pc = 0x271eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16916 << 16));
    // 0x271eb8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x271eb8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x271ebc: 0x0  nop
    ctx->pc = 0x271ebcu;
    // NOP
    // 0x271ec0: 0xe7a0030c  swc1        $f0, 0x30C($sp)
    ctx->pc = 0x271ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 780), bits); }
    // 0x271ec4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x271EC4u;
    {
        const bool branch_taken_0x271ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x271ec4) {
            ctx->pc = 0x271EFCu;
            goto label_271efc;
        }
    }
    ctx->pc = 0x271ECCu;
label_271ecc:
    // 0x271ecc: 0x3c024250  lui         $v0, 0x4250
    ctx->pc = 0x271eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16976 << 16));
    // 0x271ed0: 0x7fa20130  sq          $v0, 0x130($sp)
    ctx->pc = 0x271ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
    // 0x271ed4: 0x7ba20130  lq          $v0, 0x130($sp)
    ctx->pc = 0x271ed4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x271ed8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x271ed8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x271edc: 0x0  nop
    ctx->pc = 0x271edcu;
    // NOP
    // 0x271ee0: 0xe7a0030c  swc1        $f0, 0x30C($sp)
    ctx->pc = 0x271ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 780), bits); }
    // 0x271ee4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x271EE4u;
    {
        const bool branch_taken_0x271ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x271ee4) {
            ctx->pc = 0x271EFCu;
            goto label_271efc;
        }
    }
    ctx->pc = 0x271EECu;
label_271eec:
    // 0x271eec: 0x3c044286  lui         $a0, 0x4286
    ctx->pc = 0x271eecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17030 << 16));
    // 0x271ef0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x271ef0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x271ef4: 0x0  nop
    ctx->pc = 0x271ef4u;
    // NOP
    // 0x271ef8: 0xe7a0030c  swc1        $f0, 0x30C($sp)
    ctx->pc = 0x271ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 780), bits); }
label_271efc:
    // 0x271efc: 0x3c054214  lui         $a1, 0x4214
    ctx->pc = 0x271efcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16916 << 16));
    // 0x271f00: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x271f00u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x271f04: 0xc7a0030c  lwc1        $f0, 0x30C($sp)
    ctx->pc = 0x271f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271f08: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x271f08u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x271f0c: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x271F0Cu;
    {
        const bool branch_taken_0x271f0c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x271f0c) {
            ctx->pc = 0x271F44u;
            goto label_271f44;
        }
    }
    ctx->pc = 0x271F14u;
    // 0x271f14: 0xc7a20310  lwc1        $f2, 0x310($sp)
    ctx->pc = 0x271f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x271f18: 0x3c0240f0  lui         $v0, 0x40F0
    ctx->pc = 0x271f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16624 << 16));
    // 0x271f1c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x271f1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x271f20: 0xc7a0030c  lwc1        $f0, 0x30C($sp)
    ctx->pc = 0x271f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271f24: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x271f24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x271f28: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x271f28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x271f2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x271f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271f30: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x271F30u;
    {
        const bool branch_taken_0x271f30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x271f30) {
            ctx->pc = 0x271F3Cu;
            goto label_271f3c;
        }
    }
    ctx->pc = 0x271F38u;
    // 0x271f38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x271f38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_271f3c:
    // 0x271f3c: 0x1000066f  b           . + 4 + (0x66F << 2)
    ctx->pc = 0x271F3Cu;
    {
        const bool branch_taken_0x271f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x271f3c) {
            ctx->pc = 0x2738FCu;
            goto label_2738fc;
        }
    }
    ctx->pc = 0x271F44u;
label_271f44:
    // 0x271f44: 0x3c044286  lui         $a0, 0x4286
    ctx->pc = 0x271f44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17030 << 16));
    // 0x271f48: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x271f48u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x271f4c: 0xc7a0030c  lwc1        $f0, 0x30C($sp)
    ctx->pc = 0x271f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271f50: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x271f50u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x271f54: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x271F54u;
    {
        const bool branch_taken_0x271f54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x271f54) {
            ctx->pc = 0x271F88u;
            goto label_271f88;
        }
    }
    ctx->pc = 0x271F5Cu;
    // 0x271f5c: 0xc7a10310  lwc1        $f1, 0x310($sp)
    ctx->pc = 0x271f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x271f60: 0x3c04426e  lui         $a0, 0x426E
    ctx->pc = 0x271f60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17006 << 16));
    // 0x271f64: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x271f64u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x271f68: 0x0  nop
    ctx->pc = 0x271f68u;
    // NOP
    // 0x271f6c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x271f6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x271f70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x271f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271f74: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x271F74u;
    {
        const bool branch_taken_0x271f74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x271f74) {
            ctx->pc = 0x271F80u;
            goto label_271f80;
        }
    }
    ctx->pc = 0x271F7Cu;
    // 0x271f7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x271f7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_271f80:
    // 0x271f80: 0x1000065e  b           . + 4 + (0x65E << 2)
    ctx->pc = 0x271F80u;
    {
        const bool branch_taken_0x271f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x271f80) {
            ctx->pc = 0x2738FCu;
            goto label_2738fc;
        }
    }
    ctx->pc = 0x271F88u;
label_271f88:
    // 0x271f88: 0xa3a00324  sb          $zero, 0x324($sp)
    ctx->pc = 0x271f88u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 804), (uint8_t)GPR_U32(ctx, 0));
    // 0x271f8c: 0x3c06426e  lui         $a2, 0x426E
    ctx->pc = 0x271f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17006 << 16));
    // 0x271f90: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x271f90u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x271f94: 0xc7a00310  lwc1        $f0, 0x310($sp)
    ctx->pc = 0x271f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271f98: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x271f98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x271f9c: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x271F9Cu;
    {
        const bool branch_taken_0x271f9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x271f9c) {
            ctx->pc = 0x271FC4u;
            goto label_271fc4;
        }
    }
    ctx->pc = 0x271FA4u;
    // 0x271fa4: 0x3c024232  lui         $v0, 0x4232
    ctx->pc = 0x271fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16946 << 16));
    // 0x271fa8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x271fa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x271fac: 0xc7a00310  lwc1        $f0, 0x310($sp)
    ctx->pc = 0x271facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271fb0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x271fb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x271fb4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x271FB4u;
    {
        const bool branch_taken_0x271fb4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x271fb4) {
            ctx->pc = 0x271FC4u;
            goto label_271fc4;
        }
    }
    ctx->pc = 0x271FBCu;
    // 0x271fbc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x271fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271fc0: 0xa3a40324  sb          $a0, 0x324($sp)
    ctx->pc = 0x271fc0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 804), (uint8_t)GPR_U32(ctx, 4));
label_271fc4:
    // 0x271fc4: 0x93a20324  lbu         $v0, 0x324($sp)
    ctx->pc = 0x271fc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 804)));
    // 0x271fc8: 0x7fa20120  sq          $v0, 0x120($sp)
    ctx->pc = 0x271fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
    // 0x271fcc: 0x7ba20120  lq          $v0, 0x120($sp)
    ctx->pc = 0x271fccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x271fd0: 0x1000064a  b           . + 4 + (0x64A << 2)
    ctx->pc = 0x271FD0u;
    {
        const bool branch_taken_0x271fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x271fd0) {
            ctx->pc = 0x2738FCu;
            goto label_2738fc;
        }
    }
    ctx->pc = 0x271FD8u;
label_271fd8:
    // 0x271fd8: 0x8fa40360  lw          $a0, 0x360($sp)
    ctx->pc = 0x271fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 864)));
    // 0x271fdc: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x271FDCu;
    {
        const bool branch_taken_0x271fdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x271fdc) {
            ctx->pc = 0x27200Cu;
            goto label_27200c;
        }
    }
    ctx->pc = 0x271FE4u;
    // 0x271fe4: 0x8fa20340  lw          $v0, 0x340($sp)
    ctx->pc = 0x271fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x271fe8: 0x8fa60330  lw          $a2, 0x330($sp)
    ctx->pc = 0x271fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x271fec: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x271fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271ff0: 0x8fa50360  lw          $a1, 0x360($sp)
    ctx->pc = 0x271ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 864)));
    // 0x271ff4: 0x8c46002c  lw          $a2, 0x2C($v0)
    ctx->pc = 0x271ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x271ff8: 0x8fa70350  lw          $a3, 0x350($sp)
    ctx->pc = 0x271ff8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 848)));
    // 0x271ffc: 0xc09ce7c  jal         func_2739F0
    ctx->pc = 0x271FFCu;
    SET_GPR_U32(ctx, 31, 0x272004u);
    ctx->pc = 0x2739F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2739F0u, 0x271FFCu, 0x272004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272004u;
label_272004:
    // 0x272004: 0x1000063d  b           . + 4 + (0x63D << 2)
    ctx->pc = 0x272004u;
    {
        const bool branch_taken_0x272004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x272004) {
            ctx->pc = 0x2738FCu;
            goto label_2738fc;
        }
    }
    ctx->pc = 0x27200Cu;
label_27200c:
    // 0x27200c: 0x8fa60340  lw          $a2, 0x340($sp)
    ctx->pc = 0x27200cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x272010: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x272010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272014: 0xc0968bc  jal         func_25A2F0
    ctx->pc = 0x272014u;
    SET_GPR_U32(ctx, 31, 0x27201Cu);
    ctx->pc = 0x25A2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A2F0u, 0x272014u, 0x27201Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27201Cu;
label_27201c:
    // 0x27201c: 0xafa20304  sw          $v0, 0x304($sp)
    ctx->pc = 0x27201cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 772), GPR_U32(ctx, 2));
    // 0x272020: 0x8fa20304  lw          $v0, 0x304($sp)
    ctx->pc = 0x272020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 772)));
    // 0x272024: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x272024u;
    {
        const bool branch_taken_0x272024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x272024) {
            ctx->pc = 0x272050u;
            goto label_272050;
        }
    }
    ctx->pc = 0x27202Cu;
    // 0x27202c: 0x8fa30340  lw          $v1, 0x340($sp)
    ctx->pc = 0x27202cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x272030: 0x8fa40330  lw          $a0, 0x330($sp)
    ctx->pc = 0x272030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x272034: 0x8fa50304  lw          $a1, 0x304($sp)
    ctx->pc = 0x272034u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 772)));
    // 0x272038: 0x8c66002c  lw          $a2, 0x2C($v1)
    ctx->pc = 0x272038u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x27203c: 0x8fa70350  lw          $a3, 0x350($sp)
    ctx->pc = 0x27203cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 848)));
    // 0x272040: 0xc09ce7c  jal         func_2739F0
    ctx->pc = 0x272040u;
    SET_GPR_U32(ctx, 31, 0x272048u);
    ctx->pc = 0x2739F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2739F0u, 0x272040u, 0x272048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272048u;
label_272048:
    // 0x272048: 0x1000062c  b           . + 4 + (0x62C << 2)
    ctx->pc = 0x272048u;
    {
        const bool branch_taken_0x272048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x272048) {
            ctx->pc = 0x2738FCu;
            goto label_2738fc;
        }
    }
    ctx->pc = 0x272050u;
label_272050:
    // 0x272050: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x272050u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272054: 0x10000629  b           . + 4 + (0x629 << 2)
    ctx->pc = 0x272054u;
    {
        const bool branch_taken_0x272054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x272054) {
            ctx->pc = 0x2738FCu;
            goto label_2738fc;
        }
    }
    ctx->pc = 0x27205Cu;
label_27205c:
    // 0x27205c: 0x27a201f0  addiu       $v0, $sp, 0x1F0
    ctx->pc = 0x27205cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x272060: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x272060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    // 0x272064: 0x7ba40110  lq          $a0, 0x110($sp)
    ctx->pc = 0x272064u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x272068: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x272068u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x27206c: 0x24a5cff0  addiu       $a1, $a1, -0x3010
    ctx->pc = 0x27206cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954992));
    // 0x272070: 0xc040304  jal         func_100C10
    ctx->pc = 0x272070u;
    SET_GPR_U32(ctx, 31, 0x272078u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x272070u, 0x272078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272078u;
label_272078:
    // 0x272078: 0x27a601f0  addiu       $a2, $sp, 0x1F0
    ctx->pc = 0x272078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x27207c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x27207cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272080: 0xc1163b8  jal         func_458EE0
    ctx->pc = 0x272080u;
    SET_GPR_U32(ctx, 31, 0x272088u);
    ctx->pc = 0x458EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x458EE0u, 0x272080u, 0x272088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272088u;
label_272088:
    // 0x272088: 0xafa2025c  sw          $v0, 0x25C($sp)
    ctx->pc = 0x272088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 604), GPR_U32(ctx, 2));
    // 0x27208c: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x27208cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x272090: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x272090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x272094: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x272094u;
    SET_GPR_U32(ctx, 31, 0x27209Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x272094u, 0x27209Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27209Cu;
label_27209c:
    // 0x27209c: 0x8fa2025c  lw          $v0, 0x25C($sp)
    ctx->pc = 0x27209cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
    // 0x2720a0: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x2720a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x2720a4: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x2720a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2720a8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2720A8u;
    {
        const bool branch_taken_0x2720a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2720a8) {
            ctx->pc = 0x2720BCu;
            goto label_2720bc;
        }
    }
    ctx->pc = 0x2720B0u;
    // 0x2720b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2720b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2720b4: 0x10000611  b           . + 4 + (0x611 << 2)
    ctx->pc = 0x2720B4u;
    {
        const bool branch_taken_0x2720b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2720b4) {
            ctx->pc = 0x2738FCu;
            goto label_2738fc;
        }
    }
    ctx->pc = 0x2720BCu;
label_2720bc:
    // 0x2720bc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2720bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2720c0: 0x8fa60330  lw          $a2, 0x330($sp)
    ctx->pc = 0x2720c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x2720c4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2720c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2720c8: 0x240504e1  addiu       $a1, $zero, 0x4E1
    ctx->pc = 0x2720c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1249));
    // 0x2720cc: 0x2786a170  addiu       $a2, $gp, -0x5E90
    ctx->pc = 0x2720ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943088));
    // 0x2720d0: 0xc041a50  jal         func_106940
    ctx->pc = 0x2720D0u;
    SET_GPR_U32(ctx, 31, 0x2720D8u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x2720D0u, 0x2720D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2720D8u;
label_2720d8:
    // 0x2720d8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2720d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2720dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2720dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2720e0: 0x2786a178  addiu       $a2, $gp, -0x5E88
    ctx->pc = 0x2720e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943096));
    // 0x2720e4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2720e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2720e8: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x2720E8u;
    SET_GPR_U32(ctx, 31, 0x2720F0u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x2720E8u, 0x2720F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2720F0u;
label_2720f0:
    // 0x2720f0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2720F0u;
    {
        const bool branch_taken_0x2720f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2720f0) {
            ctx->pc = 0x272110u;
            goto label_272110;
        }
    }
    ctx->pc = 0x2720F8u;
    // 0x2720f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2720f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2720fc: 0x2785a180  addiu       $a1, $gp, -0x5E80
    ctx->pc = 0x2720fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943104));
    // 0x272100: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x272100u;
    SET_GPR_U32(ctx, 31, 0x272108u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x272100u, 0x272108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272108u;
label_272108:
    // 0x272108: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x272108u;
    {
        const bool branch_taken_0x272108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x272108) {
            ctx->pc = 0x272194u;
            goto label_272194;
        }
    }
    ctx->pc = 0x272110u;
label_272110:
    // 0x272110: 0x8fa40340  lw          $a0, 0x340($sp)
    ctx->pc = 0x272110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x272114: 0xc096880  jal         func_25A200
    ctx->pc = 0x272114u;
    SET_GPR_U32(ctx, 31, 0x27211Cu);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x272114u, 0x27211Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27211Cu;
label_27211c:
    // 0x27211c: 0xafa20300  sw          $v0, 0x300($sp)
    ctx->pc = 0x27211cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 768), GPR_U32(ctx, 2));
    // 0x272120: 0x8fa40300  lw          $a0, 0x300($sp)
    ctx->pc = 0x272120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x272124: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x272124u;
    {
        const bool branch_taken_0x272124 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x272124) {
            ctx->pc = 0x27214Cu;
            goto label_27214c;
        }
    }
    ctx->pc = 0x27212Cu;
    // 0x27212c: 0x8fa40360  lw          $a0, 0x360($sp)
    ctx->pc = 0x27212cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 864)));
    // 0x272130: 0xc085530  jal         func_2154C0
    ctx->pc = 0x272130u;
    SET_GPR_U32(ctx, 31, 0x272138u);
    ctx->pc = 0x2154C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154C0u, 0x272130u, 0x272138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272138u;
label_272138:
    // 0x272138: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x272138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x27213c: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27213Cu;
    {
        const bool branch_taken_0x27213c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x27213c) {
            ctx->pc = 0x27214Cu;
            goto label_27214c;
        }
    }
    ctx->pc = 0x272144u;
    // 0x272144: 0x8fa20360  lw          $v0, 0x360($sp)
    ctx->pc = 0x272144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 864)));
    // 0x272148: 0xafa20300  sw          $v0, 0x300($sp)
    ctx->pc = 0x272148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 768), GPR_U32(ctx, 2));
label_27214c:
    // 0x27214c: 0x8fa50300  lw          $a1, 0x300($sp)
    ctx->pc = 0x27214cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x272150: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x272150u;
    {
        const bool branch_taken_0x272150 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x272150) {
            ctx->pc = 0x272164u;
            goto label_272164;
        }
    }
    ctx->pc = 0x272158u;
    // 0x272158: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x272158u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27215c: 0x100005e7  b           . + 4 + (0x5E7 << 2)
    ctx->pc = 0x27215Cu;
    {
        const bool branch_taken_0x27215c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27215c) {
            ctx->pc = 0x2738FCu;
            goto label_2738fc;
        }
    }
    ctx->pc = 0x272164u;
label_272164:
    // 0x272164: 0x8fa20300  lw          $v0, 0x300($sp)
    ctx->pc = 0x272164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x272168: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x272168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27216c: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x27216cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x272170: 0xc085538  jal         func_2154E0
    ctx->pc = 0x272170u;
    SET_GPR_U32(ctx, 31, 0x272178u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x272170u, 0x272178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272178u;
label_272178:
    // 0x272178: 0xafa202fc  sw          $v0, 0x2FC($sp)
    ctx->pc = 0x272178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 764), GPR_U32(ctx, 2));
    // 0x27217c: 0x8fa402fc  lw          $a0, 0x2FC($sp)
    ctx->pc = 0x27217cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 764)));
    // 0x272180: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x272180u;
    SET_GPR_U32(ctx, 31, 0x272188u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x272180u, 0x272188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272188u;
label_272188:
    // 0x272188: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x272188u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27218c: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x27218Cu;
    {
        const bool branch_taken_0x27218c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27218c) {
            ctx->pc = 0x2722ACu;
            goto label_2722ac;
        }
    }
    ctx->pc = 0x272194u;
label_272194:
    // 0x272194: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x272194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272198: 0x2785a170  addiu       $a1, $gp, -0x5E90
    ctx->pc = 0x272198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943088));
    // 0x27219c: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x27219Cu;
    SET_GPR_U32(ctx, 31, 0x2721A4u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x27219Cu, 0x2721A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2721A4u;
label_2721a4:
    // 0x2721a4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2721A4u;
    {
        const bool branch_taken_0x2721a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2721a4) {
            ctx->pc = 0x2721C4u;
            goto label_2721c4;
        }
    }
    ctx->pc = 0x2721ACu;
    // 0x2721ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2721acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2721b0: 0x2785a184  addiu       $a1, $gp, -0x5E7C
    ctx->pc = 0x2721b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943108));
    // 0x2721b4: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x2721B4u;
    SET_GPR_U32(ctx, 31, 0x2721BCu);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x2721B4u, 0x2721BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2721BCu;
label_2721bc:
    // 0x2721bc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2721BCu;
    {
        const bool branch_taken_0x2721bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2721bc) {
            ctx->pc = 0x2721E8u;
            goto label_2721e8;
        }
    }
    ctx->pc = 0x2721C4u;
label_2721c4:
    // 0x2721c4: 0x8fa40340  lw          $a0, 0x340($sp)
    ctx->pc = 0x2721c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x2721c8: 0xc05ce40  jal         func_173900
    ctx->pc = 0x2721C8u;
    SET_GPR_U32(ctx, 31, 0x2721D0u);
    ctx->pc = 0x173900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173900u, 0x2721C8u, 0x2721D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2721D0u;
label_2721d0:
    // 0x2721d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2721d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2721d4: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x2721D4u;
    SET_GPR_U32(ctx, 31, 0x2721DCu);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x2721D4u, 0x2721DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2721DCu;
label_2721dc:
    // 0x2721dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2721dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2721e0: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2721E0u;
    {
        const bool branch_taken_0x2721e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2721e0) {
            ctx->pc = 0x2722ACu;
            goto label_2722ac;
        }
    }
    ctx->pc = 0x2721E8u;
label_2721e8:
    // 0x2721e8: 0x82660000  lb          $a2, 0x0($s3)
    ctx->pc = 0x2721e8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2721ec: 0x6163c  dsll32      $v0, $a2, 24
    ctx->pc = 0x2721ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 24));
    // 0x2721f0: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2721f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x2721f4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2721F4u;
    {
        const bool branch_taken_0x2721f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2721f4) {
            ctx->pc = 0x272220u;
            goto label_272220;
        }
    }
    ctx->pc = 0x2721FCu;
    // 0x2721fc: 0x8fa40340  lw          $a0, 0x340($sp)
    ctx->pc = 0x2721fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x272200: 0xc05ce40  jal         func_173900
    ctx->pc = 0x272200u;
    SET_GPR_U32(ctx, 31, 0x272208u);
    ctx->pc = 0x173900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173900u, 0x272200u, 0x272208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272208u;
label_272208:
    // 0x272208: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x272208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27220c: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x27220Cu;
    SET_GPR_U32(ctx, 31, 0x272214u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x27220Cu, 0x272214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272214u;
label_272214:
    // 0x272214: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x272214u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272218: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x272218u;
    {
        const bool branch_taken_0x272218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x272218) {
            ctx->pc = 0x2722ACu;
            goto label_2722ac;
        }
    }
    ctx->pc = 0x272220u;
label_272220:
    // 0x272220: 0x27a201e0  addiu       $v0, $sp, 0x1E0
    ctx->pc = 0x272220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x272224: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x272224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    // 0x272228: 0x7ba400f0  lq          $a0, 0xF0($sp)
    ctx->pc = 0x272228u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x27222c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x27222cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272230: 0xc040304  jal         func_100C10
    ctx->pc = 0x272230u;
    SET_GPR_U32(ctx, 31, 0x272238u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x272230u, 0x272238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272238u;
label_272238:
    // 0x272238: 0x27a201e0  addiu       $v0, $sp, 0x1E0
    ctx->pc = 0x272238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x27223c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27223cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272240: 0xc045768  jal         func_115DA0
    ctx->pc = 0x272240u;
    SET_GPR_U32(ctx, 31, 0x272248u);
    ctx->pc = 0x115DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115DA0u, 0x272240u, 0x272248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272248u;
label_272248:
    // 0x272248: 0xafa202f8  sw          $v0, 0x2F8($sp)
    ctx->pc = 0x272248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 760), GPR_U32(ctx, 2));
    // 0x27224c: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x27224cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x272250: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x272250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272254: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x272254u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x272258: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x272258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27225c: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x27225Cu;
    SET_GPR_U32(ctx, 31, 0x272264u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x27225Cu, 0x272264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272264u;
label_272264:
    // 0x272264: 0x8fa202f8  lw          $v0, 0x2F8($sp)
    ctx->pc = 0x272264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 760)));
    // 0x272268: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x272268u;
    {
        const bool branch_taken_0x272268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x272268) {
            ctx->pc = 0x2722A0u;
            goto label_2722a0;
        }
    }
    ctx->pc = 0x272270u;
    // 0x272270: 0x8fa402f8  lw          $a0, 0x2F8($sp)
    ctx->pc = 0x272270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 760)));
    // 0x272274: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x272274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x272278: 0xc085538  jal         func_2154E0
    ctx->pc = 0x272278u;
    SET_GPR_U32(ctx, 31, 0x272280u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x272278u, 0x272280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272280u;
label_272280:
    // 0x272280: 0xafa202f4  sw          $v0, 0x2F4($sp)
    ctx->pc = 0x272280u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 756), GPR_U32(ctx, 2));
    // 0x272284: 0x8fa602f4  lw          $a2, 0x2F4($sp)
    ctx->pc = 0x272284u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 756)));
    // 0x272288: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x272288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27228c: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x27228Cu;
    SET_GPR_U32(ctx, 31, 0x272294u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x27228Cu, 0x272294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272294u;
label_272294:
    // 0x272294: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x272294u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272298: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x272298u;
    {
        const bool branch_taken_0x272298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x272298) {
            ctx->pc = 0x2722ACu;
            goto label_2722ac;
        }
    }
    ctx->pc = 0x2722A0u;
label_2722a0:
    // 0x2722a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2722a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2722a4: 0x10000595  b           . + 4 + (0x595 << 2)
    ctx->pc = 0x2722A4u;
    {
        const bool branch_taken_0x2722a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2722a4) {
            ctx->pc = 0x2738FCu;
            goto label_2738fc;
        }
    }
    ctx->pc = 0x2722ACu;
label_2722ac:
    // 0x2722ac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2722acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2722b0: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x2722B0u;
    {
        const bool branch_taken_0x2722b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2722b0) {
            ctx->pc = 0x2724D4u;
            goto label_2724d4;
        }
    }
    ctx->pc = 0x2722B8u;
label_2722b8:
    // 0x2722b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2722b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2722bc: 0x0  nop
    ctx->pc = 0x2722bcu;
    // NOP
    // 0x2722c0: 0xe7a002f0  swc1        $f0, 0x2F0($sp)
    ctx->pc = 0x2722c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 752), bits); }
    // 0x2722c4: 0x2e210007  sltiu       $at, $s1, 0x7
    ctx->pc = 0x2722c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x2722c8: 0x10200042  beqz        $at, . + 4 + (0x42 << 2)
    ctx->pc = 0x2722C8u;
    {
        const bool branch_taken_0x2722c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2722c8) {
            ctx->pc = 0x2723D4u;
            goto label_2723d4;
        }
    }
    ctx->pc = 0x2722D0u;
    // 0x2722d0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2722d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2722d4: 0x24428b00  addiu       $v0, $v0, -0x7500
    ctx->pc = 0x2722d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937344));
    // 0x2722d8: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x2722d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2722dc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2722dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2722e0: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x2722e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2722e4: 0xc00008  jr          $a2
    ctx->pc = 0x2722E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2722ECu: goto label_2722ec;
            case 0x272310u: goto label_272310;
            case 0x272330u: goto label_272330;
            case 0x272354u: goto label_272354;
            case 0x272374u: goto label_272374;
            case 0x272394u: goto label_272394;
            case 0x2723B8u: goto label_2723b8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2722E4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2722ECu;
label_2722ec:
    // 0x2722ec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2722ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2722f0: 0x8fa70330  lw          $a3, 0x330($sp)
    ctx->pc = 0x2722f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x2722f4: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2722f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2722f8: 0x240504e2  addiu       $a1, $zero, 0x4E2
    ctx->pc = 0x2722f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1250));
    // 0x2722fc: 0xc042090  jal         func_108240
    ctx->pc = 0x2722FCu;
    SET_GPR_U32(ctx, 31, 0x272304u);
    ctx->pc = 0x108240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108240u, 0x2722FCu, 0x272304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272304u;
label_272304:
    // 0x272304: 0xe7a002f0  swc1        $f0, 0x2F0($sp)
    ctx->pc = 0x272304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 752), bits); }
    // 0x272308: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x272308u;
    {
        const bool branch_taken_0x272308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x272308) {
            ctx->pc = 0x2723D4u;
            goto label_2723d4;
        }
    }
    ctx->pc = 0x272310u;
label_272310:
    // 0x272310: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x272310u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x272314: 0x8fa40330  lw          $a0, 0x330($sp)
    ctx->pc = 0x272314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x272318: 0x240504e3  addiu       $a1, $zero, 0x4E3
    ctx->pc = 0x272318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1251));
    // 0x27231c: 0xc042090  jal         func_108240
    ctx->pc = 0x27231Cu;
    SET_GPR_U32(ctx, 31, 0x272324u);
    ctx->pc = 0x108240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108240u, 0x27231Cu, 0x272324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272324u;
label_272324:
    // 0x272324: 0xe7a002f0  swc1        $f0, 0x2F0($sp)
    ctx->pc = 0x272324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 752), bits); }
    // 0x272328: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x272328u;
    {
        const bool branch_taken_0x272328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x272328) {
            ctx->pc = 0x2723D4u;
            goto label_2723d4;
        }
    }
    ctx->pc = 0x272330u;
label_272330:
    // 0x272330: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x272330u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x272334: 0x8fa50330  lw          $a1, 0x330($sp)
    ctx->pc = 0x272334u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x272338: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x272338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27233c: 0x240504e4  addiu       $a1, $zero, 0x4E4
    ctx->pc = 0x27233cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1252));
    // 0x272340: 0xc042090  jal         func_108240
    ctx->pc = 0x272340u;
    SET_GPR_U32(ctx, 31, 0x272348u);
    ctx->pc = 0x108240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108240u, 0x272340u, 0x272348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272348u;
label_272348:
    // 0x272348: 0xe7a002f0  swc1        $f0, 0x2F0($sp)
    ctx->pc = 0x272348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 752), bits); }
    // 0x27234c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x27234Cu;
    {
        const bool branch_taken_0x27234c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27234c) {
            ctx->pc = 0x2723D4u;
            goto label_2723d4;
        }
    }
    ctx->pc = 0x272354u;
label_272354:
    // 0x272354: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x272354u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x272358: 0x8fa40330  lw          $a0, 0x330($sp)
    ctx->pc = 0x272358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x27235c: 0x240504e5  addiu       $a1, $zero, 0x4E5
    ctx->pc = 0x27235cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1253));
    // 0x272360: 0xc042090  jal         func_108240
    ctx->pc = 0x272360u;
    SET_GPR_U32(ctx, 31, 0x272368u);
    ctx->pc = 0x108240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108240u, 0x272360u, 0x272368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272368u;
label_272368:
    // 0x272368: 0xe7a002f0  swc1        $f0, 0x2F0($sp)
    ctx->pc = 0x272368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 752), bits); }
    // 0x27236c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x27236Cu;
    {
        const bool branch_taken_0x27236c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27236c) {
            ctx->pc = 0x2723D4u;
            goto label_2723d4;
        }
    }
    ctx->pc = 0x272374u;
label_272374:
    // 0x272374: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x272374u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x272378: 0x8fa40330  lw          $a0, 0x330($sp)
    ctx->pc = 0x272378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x27237c: 0x240504e6  addiu       $a1, $zero, 0x4E6
    ctx->pc = 0x27237cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1254));
    // 0x272380: 0xc042090  jal         func_108240
    ctx->pc = 0x272380u;
    SET_GPR_U32(ctx, 31, 0x272388u);
    ctx->pc = 0x108240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108240u, 0x272380u, 0x272388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272388u;
label_272388:
    // 0x272388: 0xe7a002f0  swc1        $f0, 0x2F0($sp)
    ctx->pc = 0x272388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 752), bits); }
    // 0x27238c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x27238Cu;
    {
        const bool branch_taken_0x27238c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27238c) {
            ctx->pc = 0x2723D4u;
            goto label_2723d4;
        }
    }
    ctx->pc = 0x272394u;
label_272394:
    // 0x272394: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x272394u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x272398: 0x8fa60330  lw          $a2, 0x330($sp)
    ctx->pc = 0x272398u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x27239c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x27239cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2723a0: 0x240504e7  addiu       $a1, $zero, 0x4E7
    ctx->pc = 0x2723a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1255));
    // 0x2723a4: 0xc042090  jal         func_108240
    ctx->pc = 0x2723A4u;
    SET_GPR_U32(ctx, 31, 0x2723ACu);
    ctx->pc = 0x108240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108240u, 0x2723A4u, 0x2723ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2723ACu;
label_2723ac:
    // 0x2723ac: 0xe7a002f0  swc1        $f0, 0x2F0($sp)
    ctx->pc = 0x2723acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 752), bits); }
    // 0x2723b0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2723B0u;
    {
        const bool branch_taken_0x2723b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2723b0) {
            ctx->pc = 0x2723D4u;
            goto label_2723d4;
        }
    }
    ctx->pc = 0x2723B8u;
label_2723b8:
    // 0x2723b8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2723b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2723bc: 0x8fa40330  lw          $a0, 0x330($sp)
    ctx->pc = 0x2723bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x2723c0: 0x240204e8  addiu       $v0, $zero, 0x4E8
    ctx->pc = 0x2723c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1256));
    // 0x2723c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2723c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2723c8: 0xc042090  jal         func_108240
    ctx->pc = 0x2723C8u;
    SET_GPR_U32(ctx, 31, 0x2723D0u);
    ctx->pc = 0x108240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108240u, 0x2723C8u, 0x2723D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2723D0u;
label_2723d0:
    // 0x2723d0: 0xe7a002f0  swc1        $f0, 0x2F0($sp)
    ctx->pc = 0x2723d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 752), bits); }
label_2723d4:
    // 0x2723d4: 0xc7a102f0  lwc1        $f1, 0x2F0($sp)
    ctx->pc = 0x2723d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2723d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2723d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2723dc: 0x0  nop
    ctx->pc = 0x2723dcu;
    // NOP
    // 0x2723e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2723e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2723e4: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
    ctx->pc = 0x2723E4u;
    {
        const bool branch_taken_0x2723e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2723e4) {
            ctx->pc = 0x272460u;
            goto label_272460;
        }
    }
    ctx->pc = 0x2723ECu;
    // 0x2723ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2723ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2723f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2723f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2723f4: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2723F4u;
    SET_GPR_U32(ctx, 31, 0x2723FCu);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2723F4u, 0x2723FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2723FCu;
label_2723fc:
    // 0x2723fc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2723fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x272400: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x272400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x272404: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x272404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272408: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x272408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27240c: 0xc040a90  jal         func_102A40
    ctx->pc = 0x27240Cu;
    SET_GPR_U32(ctx, 31, 0x272414u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x27240Cu, 0x272414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272414u;
label_272414:
    // 0x272414: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x272414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x272418: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x272418u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x27241c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x27241cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x272420: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x272420u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x272424: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x272424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x272428: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x272428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27242c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x27242cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x272430: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x272430u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x272434: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x272434u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x272438: 0xc7a002f0  lwc1        $f0, 0x2F0($sp)
    ctx->pc = 0x272438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27243c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27243cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x272440: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x272440u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x272444: 0x0  nop
    ctx->pc = 0x272444u;
    // NOP
    // 0x272448: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x272448u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x27244c: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
    ctx->pc = 0x27244Cu;
    {
        const bool branch_taken_0x27244c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x27244c) {
            ctx->pc = 0x2724D0u;
            goto label_2724d0;
        }
    }
    ctx->pc = 0x272454u;
    // 0x272454: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x272454u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272458: 0x10000528  b           . + 4 + (0x528 << 2)
    ctx->pc = 0x272458u;
    {
        const bool branch_taken_0x272458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x272458) {
            ctx->pc = 0x2738FCu;
            goto label_2738fc;
        }
    }
    ctx->pc = 0x272460u;
label_272460:
    // 0x272460: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x272460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272464: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x272464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272468: 0xc040a90  jal         func_102A40
    ctx->pc = 0x272468u;
    SET_GPR_U32(ctx, 31, 0x272470u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x272468u, 0x272470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272470u;
label_272470:
    // 0x272470: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x272470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x272474: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x272474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x272478: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x272478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27247c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27247cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272480: 0xc040a90  jal         func_102A40
    ctx->pc = 0x272480u;
    SET_GPR_U32(ctx, 31, 0x272488u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x272480u, 0x272488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272488u;
label_272488:
    // 0x272488: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x272488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27248c: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x27248cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x272490: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x272490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x272494: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x272494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x272498: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x272498u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27249c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27249cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2724a0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2724a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2724a4: 0xc7a002f0  lwc1        $f0, 0x2F0($sp)
    ctx->pc = 0x2724a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2724a8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2724a8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2724ac: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2724acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2724b0: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x2724b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2724b4: 0x0  nop
    ctx->pc = 0x2724b4u;
    // NOP
    // 0x2724b8: 0xa2082a  slt         $at, $a1, $v0
    ctx->pc = 0x2724b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2724bc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2724BCu;
    {
        const bool branch_taken_0x2724bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2724bc) {
            ctx->pc = 0x2724D0u;
            goto label_2724d0;
        }
    }
    ctx->pc = 0x2724C4u;
    // 0x2724c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2724c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2724c8: 0x1000050c  b           . + 4 + (0x50C << 2)
    ctx->pc = 0x2724C8u;
    {
        const bool branch_taken_0x2724c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2724c8) {
            ctx->pc = 0x2738FCu;
            goto label_2738fc;
        }
    }
    ctx->pc = 0x2724D0u;
label_2724d0:
    // 0x2724d0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2724d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2724d4:
    // 0x2724d4: 0x2e240007  sltiu       $a0, $s1, 0x7
    ctx->pc = 0x2724d4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x2724d8: 0x1480ff77  bnez        $a0, . + 4 + (-0x89 << 2)
    ctx->pc = 0x2724D8u;
    {
        const bool branch_taken_0x2724d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2724d8) {
            ctx->pc = 0x2722B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2722b8;
        }
    }
    ctx->pc = 0x2724E0u;
    // 0x2724e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2724e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2724e4: 0x10000505  b           . + 4 + (0x505 << 2)
    ctx->pc = 0x2724E4u;
    {
        const bool branch_taken_0x2724e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2724e4) {
            ctx->pc = 0x2738FCu;
            goto label_2738fc;
        }
    }
    ctx->pc = 0x2724ECu;
label_2724ec:
    // 0x2724ec: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2724ecu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2724f0: 0x8fa40330  lw          $a0, 0x330($sp)
    ctx->pc = 0x2724f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x2724f4: 0x240504db  addiu       $a1, $zero, 0x4DB
    ctx->pc = 0x2724f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1243));
    // 0x2724f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2724f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2724fc: 0xc04146c  jal         func_1051B0
    ctx->pc = 0x2724FCu;
    SET_GPR_U32(ctx, 31, 0x272504u);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x2724FCu, 0x272504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272504u;
label_272504:
    // 0x272504: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x272504u;
    {
        const bool branch_taken_0x272504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x272504) {
            ctx->pc = 0x272538u;
            goto label_272538;
        }
    }
    ctx->pc = 0x27250Cu;
    // 0x27250c: 0x8fa40340  lw          $a0, 0x340($sp)
    ctx->pc = 0x27250cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x272510: 0xc0480fc  jal         func_1203F0
    ctx->pc = 0x272510u;
    SET_GPR_U32(ctx, 31, 0x272518u);
    ctx->pc = 0x1203F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203F0u, 0x272510u, 0x272518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272518u;
label_272518:
    // 0x272518: 0xafa202ec  sw          $v0, 0x2EC($sp)
    ctx->pc = 0x272518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 748), GPR_U32(ctx, 2));
    // 0x27251c: 0x8fa50340  lw          $a1, 0x340($sp)
    ctx->pc = 0x27251cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x272520: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x272520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272524: 0xc0968a8  jal         func_25A2A0
    ctx->pc = 0x272524u;
    SET_GPR_U32(ctx, 31, 0x27252Cu);
    ctx->pc = 0x25A2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A2A0u, 0x272524u, 0x27252Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27252Cu;
label_27252c:
    // 0x27252c: 0xafa202e8  sw          $v0, 0x2E8($sp)
    ctx->pc = 0x27252cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 744), GPR_U32(ctx, 2));
    // 0x272530: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x272530u;
    {
        const bool branch_taken_0x272530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x272530) {
            ctx->pc = 0x2725B8u;
            goto label_2725b8;
        }
    }
    ctx->pc = 0x272538u;
label_272538:
    // 0x272538: 0x8fb60360  lw          $s6, 0x360($sp)
    ctx->pc = 0x272538u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 864)));
    // 0x27253c: 0x12c00007  beqz        $s6, . + 4 + (0x7 << 2)
    ctx->pc = 0x27253Cu;
    {
        const bool branch_taken_0x27253c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x27253c) {
            ctx->pc = 0x27255Cu;
            goto label_27255c;
        }
    }
    ctx->pc = 0x272544u;
    // 0x272544: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x272544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272548: 0xc085530  jal         func_2154C0
    ctx->pc = 0x272548u;
    SET_GPR_U32(ctx, 31, 0x272550u);
    ctx->pc = 0x2154C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154C0u, 0x272548u, 0x272550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272550u;
label_272550:
    // 0x272550: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x272550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x272554: 0x10440005  beq         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x272554u;
    {
        const bool branch_taken_0x272554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x272554) {
            ctx->pc = 0x27256Cu;
            goto label_27256c;
        }
    }
    ctx->pc = 0x27255Cu;
label_27255c:
    // 0x27255c: 0x8fa40340  lw          $a0, 0x340($sp)
    ctx->pc = 0x27255cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x272560: 0xc096880  jal         func_25A200
    ctx->pc = 0x272560u;
    SET_GPR_U32(ctx, 31, 0x272568u);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x272560u, 0x272568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272568u;
label_272568:
    // 0x272568: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x272568u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27256c:
    // 0x27256c: 0x16c00004  bnez        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x27256Cu;
    {
        const bool branch_taken_0x27256c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x27256c) {
            ctx->pc = 0x272580u;
            goto label_272580;
        }
    }
    ctx->pc = 0x272574u;
    // 0x272574: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x272574u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272578: 0x100004e0  b           . + 4 + (0x4E0 << 2)
    ctx->pc = 0x272578u;
    {
        const bool branch_taken_0x272578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x272578) {
            ctx->pc = 0x2738FCu;
            goto label_2738fc;
        }
    }
    ctx->pc = 0x272580u;
label_272580:
    // 0x272580: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x272580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272584: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x272584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x272588: 0xc085538  jal         func_2154E0
    ctx->pc = 0x272588u;
    SET_GPR_U32(ctx, 31, 0x272590u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x272588u, 0x272590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272590u;
label_272590:
    // 0x272590: 0xafa202e4  sw          $v0, 0x2E4($sp)
    ctx->pc = 0x272590u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 740), GPR_U32(ctx, 2));
    // 0x272594: 0x8fa402e4  lw          $a0, 0x2E4($sp)
    ctx->pc = 0x272594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 740)));
    // 0x272598: 0xc0480fc  jal         func_1203F0
    ctx->pc = 0x272598u;
    SET_GPR_U32(ctx, 31, 0x2725A0u);
    ctx->pc = 0x1203F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203F0u, 0x272598u, 0x2725A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2725A0u;
label_2725a0:
    // 0x2725a0: 0xafa202ec  sw          $v0, 0x2EC($sp)
    ctx->pc = 0x2725a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 748), GPR_U32(ctx, 2));
    // 0x2725a4: 0x8fa502e4  lw          $a1, 0x2E4($sp)
    ctx->pc = 0x2725a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 740)));
    // 0x2725a8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2725a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2725ac: 0xc0968a8  jal         func_25A2A0
    ctx->pc = 0x2725ACu;
    SET_GPR_U32(ctx, 31, 0x2725B4u);
    ctx->pc = 0x25A2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A2A0u, 0x2725ACu, 0x2725B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2725B4u;
label_2725b4:
    // 0x2725b4: 0xafa202e8  sw          $v0, 0x2E8($sp)
    ctx->pc = 0x2725b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 744), GPR_U32(ctx, 2));
label_2725b8:
    // 0x2725b8: 0x8fa40330  lw          $a0, 0x330($sp)
    ctx->pc = 0x2725b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x2725bc: 0x240504dd  addiu       $a1, $zero, 0x4DD
    ctx->pc = 0x2725bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1245));
    // 0x2725c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2725c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2725c4: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x2725C4u;
    SET_GPR_U32(ctx, 31, 0x2725CCu);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x2725C4u, 0x2725CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2725CCu;
label_2725cc:
    // 0x2725cc: 0xafa202e0  sw          $v0, 0x2E0($sp)
    ctx->pc = 0x2725ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 736), GPR_U32(ctx, 2));
    // 0x2725d0: 0x8fa202ec  lw          $v0, 0x2EC($sp)
    ctx->pc = 0x2725d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 748)));
    // 0x2725d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2725d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2725d8: 0x1443002f  bne         $v0, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x2725D8u;
    {
        const bool branch_taken_0x2725d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2725d8) {
            ctx->pc = 0x272698u;
            goto label_272698;
        }
    }
    ctx->pc = 0x2725E0u;
    // 0x2725e0: 0x8fa202e0  lw          $v0, 0x2E0($sp)
    ctx->pc = 0x2725e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x2725e4: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2725E4u;
    {
        const bool branch_taken_0x2725e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2725e4) {
            ctx->pc = 0x272698u;
            goto label_272698;
        }
    }
    ctx->pc = 0x2725ECu;
    // 0x2725ec: 0x8fa402e8  lw          $a0, 0x2E8($sp)
    ctx->pc = 0x2725ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x2725f0: 0x1080002b  beqz        $a0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2725F0u;
    {
        const bool branch_taken_0x2725f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2725f0) {
            ctx->pc = 0x2726A0u;
            goto label_2726a0;
        }
    }
    ctx->pc = 0x2725F8u;
    // 0x2725f8: 0x8fa202e8  lw          $v0, 0x2E8($sp)
    ctx->pc = 0x2725f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x2725fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2725fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272600: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x272600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x272604: 0xc085538  jal         func_2154E0
    ctx->pc = 0x272604u;
    SET_GPR_U32(ctx, 31, 0x27260Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x272604u, 0x27260Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27260Cu;
label_27260c:
    // 0x27260c: 0xafa202d8  sw          $v0, 0x2D8($sp)
    ctx->pc = 0x27260cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 728), GPR_U32(ctx, 2));
    // 0x272610: 0x8fa602d8  lw          $a2, 0x2D8($sp)
    ctx->pc = 0x272610u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 728)));
    // 0x272614: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x272614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272618: 0xc09b03c  jal         func_26C0F0
    ctx->pc = 0x272618u;
    SET_GPR_U32(ctx, 31, 0x272620u);
    ctx->pc = 0x26C0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C0F0u, 0x272618u, 0x272620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272620u;
label_272620:
    // 0x272620: 0xafa202d4  sw          $v0, 0x2D4($sp)
    ctx->pc = 0x272620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 724), GPR_U32(ctx, 2));
    // 0x272624: 0x8fa502d4  lw          $a1, 0x2D4($sp)
    ctx->pc = 0x272624u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 724)));
    // 0x272628: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x272628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x27262c: 0x10a2000c  beq         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x27262Cu;
    {
        const bool branch_taken_0x27262c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x27262c) {
            ctx->pc = 0x272660u;
            goto label_272660;
        }
    }
    ctx->pc = 0x272634u;
    // 0x272634: 0x8fa402d4  lw          $a0, 0x2D4($sp)
    ctx->pc = 0x272634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 724)));
    // 0x272638: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x272638u;
    {
        const bool branch_taken_0x272638 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x272638) {
            ctx->pc = 0x272660u;
            goto label_272660;
        }
    }
    ctx->pc = 0x272640u;
    // 0x272640: 0x8fa202d4  lw          $v0, 0x2D4($sp)
    ctx->pc = 0x272640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 724)));
    // 0x272644: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x272644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x272648: 0x10450005  beq         $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x272648u;
    {
        const bool branch_taken_0x272648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x272648) {
            ctx->pc = 0x272660u;
            goto label_272660;
        }
    }
    ctx->pc = 0x272650u;
    // 0x272650: 0x8fa502d4  lw          $a1, 0x2D4($sp)
    ctx->pc = 0x272650u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 724)));
    // 0x272654: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x272654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x272658: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x272658u;
    {
        const bool branch_taken_0x272658 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x272658) {
            ctx->pc = 0x272670u;
            goto label_272670;
        }
    }
    ctx->pc = 0x272660u;
label_272660:
    // 0x272660: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x272660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x272664: 0xafa402dc  sw          $a0, 0x2DC($sp)
    ctx->pc = 0x272664u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 732), GPR_U32(ctx, 4));
    // 0x272668: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x272668u;
    {
        const bool branch_taken_0x272668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x272668) {
            ctx->pc = 0x272678u;
            goto label_272678;
        }
    }
    ctx->pc = 0x272670u;
label_272670:
    // 0x272670: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x272670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x272674: 0xafa502dc  sw          $a1, 0x2DC($sp)
    ctx->pc = 0x272674u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 732), GPR_U32(ctx, 5));
label_272678:
    // 0x272678: 0x8fa202dc  lw          $v0, 0x2DC($sp)
    ctx->pc = 0x272678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 732)));
    // 0x27267c: 0x8fa402e0  lw          $a0, 0x2E0($sp)
    ctx->pc = 0x27267cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x272680: 0x14440007  bne         $v0, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x272680u;
    {
        const bool branch_taken_0x272680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x272680) {
            ctx->pc = 0x2726A0u;
            goto label_2726a0;
        }
    }
    ctx->pc = 0x272688u;
    // 0x272688: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x272688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27268c: 0x30b700ff  andi        $s7, $a1, 0xFF
    ctx->pc = 0x27268cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x272690: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x272690u;
    {
        const bool branch_taken_0x272690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x272690) {
            ctx->pc = 0x2726A0u;
            goto label_2726a0;
        }
    }
    ctx->pc = 0x272698u;
label_272698:
    // 0x272698: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x272698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27269c: 0x309700ff  andi        $s7, $a0, 0xFF
    ctx->pc = 0x27269cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_2726a0:
    // 0x2726a0: 0x12e0000e  beqz        $s7, . + 4 + (0xE << 2)
    ctx->pc = 0x2726A0u;
    {
        const bool branch_taken_0x2726a0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x2726a0) {
            ctx->pc = 0x2726DCu;
            goto label_2726dc;
        }
    }
    ctx->pc = 0x2726A8u;
    // 0x2726a8: 0x8fa202ec  lw          $v0, 0x2EC($sp)
    ctx->pc = 0x2726a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 748)));
    // 0x2726ac: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x2726acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x2726b0: 0x8fa40330  lw          $a0, 0x330($sp)
    ctx->pc = 0x2726b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x2726b4: 0x240504da  addiu       $a1, $zero, 0x4DA
    ctx->pc = 0x2726b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1242));
    // 0x2726b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2726b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2726bc: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x2726BCu;
    SET_GPR_U32(ctx, 31, 0x2726C4u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x2726BCu, 0x2726C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2726C4u;
label_2726c4:
    // 0x2726c4: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x2726c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x2726c8: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x2726c8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2726cc: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x2726ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2726d0: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2726D0u;
    {
        const bool branch_taken_0x2726d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2726d0) {
            ctx->pc = 0x2726DCu;
            goto label_2726dc;
        }
    }
    ctx->pc = 0x2726D8u;
    // 0x2726d8: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2726d8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2726dc:
    // 0x2726dc: 0x8fa40330  lw          $a0, 0x330($sp)
    ctx->pc = 0x2726dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x2726e0: 0x240504dc  addiu       $a1, $zero, 0x4DC
    ctx->pc = 0x2726e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1244));
    // 0x2726e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2726e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2726e8: 0xc04146c  jal         func_1051B0
    ctx->pc = 0x2726E8u;
    SET_GPR_U32(ctx, 31, 0x2726F0u);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x2726E8u, 0x2726F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2726F0u;
label_2726f0:
    // 0x2726f0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2726f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2726f4: 0x17102b  sltu        $v0, $zero, $s7
    ctx->pc = 0x2726f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x2726f8: 0x38440001  xori        $a0, $v0, 0x1
    ctx->pc = 0x2726f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2726fc: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x2726fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x272700: 0xa32026  xor         $a0, $a1, $v1
    ctx->pc = 0x272700u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
    // 0x272704: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x272704u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x272708: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x272708u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27270c: 0x1000047b  b           . + 4 + (0x47B << 2)
    ctx->pc = 0x27270Cu;
    {
        const bool branch_taken_0x27270c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27270c) {
            ctx->pc = 0x2738FCu;
            goto label_2738fc;
        }
    }
    ctx->pc = 0x272714u;
label_272714:
    // 0x272714: 0x8fa50330  lw          $a1, 0x330($sp)
    ctx->pc = 0x272714u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x272718: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x272718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27271c: 0x240204de  addiu       $v0, $zero, 0x4DE
    ctx->pc = 0x27271cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1246));
    // 0x272720: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x272720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272724: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x272724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x272728: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x272728u;
    SET_GPR_U32(ctx, 31, 0x272730u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x272728u, 0x272730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272730u;
label_272730:
    // 0x272730: 0xafa202d0  sw          $v0, 0x2D0($sp)
    ctx->pc = 0x272730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 720), GPR_U32(ctx, 2));
    // 0x272734: 0x8fa402d0  lw          $a0, 0x2D0($sp)
    ctx->pc = 0x272734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x272738: 0x28820007  slti        $v0, $a0, 0x7
    ctx->pc = 0x272738u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x27273c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27273Cu;
    {
        const bool branch_taken_0x27273c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27273c) {
            ctx->pc = 0x272754u;
            goto label_272754;
        }
    }
    ctx->pc = 0x272744u;
    // 0x272744: 0x8fbe02d0  lw          $fp, 0x2D0($sp)
    ctx->pc = 0x272744u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x272748: 0x2bc50012  slti        $a1, $fp, 0x12
    ctx->pc = 0x272748u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x27274c: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x27274Cu;
    {
        const bool branch_taken_0x27274c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x27274c) {
            ctx->pc = 0x272760u;
            goto label_272760;
        }
    }
    ctx->pc = 0x272754u;
label_272754:
    // 0x272754: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x272754u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272758: 0x10000468  b           . + 4 + (0x468 << 2)
    ctx->pc = 0x272758u;
    {
        const bool branch_taken_0x272758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x272758) {
            ctx->pc = 0x2738FCu;
            goto label_2738fc;
        }
    }
    ctx->pc = 0x272760u;
label_272760:
    // 0x272760: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x272760u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x272764: 0x8fa50330  lw          $a1, 0x330($sp)
    ctx->pc = 0x272764u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x272768: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x272768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27276c: 0x240604df  addiu       $a2, $zero, 0x4DF
    ctx->pc = 0x27276cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1247));
    // 0x272770: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x272770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272774: 0xc042090  jal         func_108240
    ctx->pc = 0x272774u;
    SET_GPR_U32(ctx, 31, 0x27277Cu);
    ctx->pc = 0x108240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108240u, 0x272774u, 0x27277Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27277Cu;
label_27277c:
    // 0x27277c: 0xe7a002cc  swc1        $f0, 0x2CC($sp)
    ctx->pc = 0x27277cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 716), bits); }
    // 0x272780: 0x8fa20340  lw          $v0, 0x340($sp)
    ctx->pc = 0x272780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x272784: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x272784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272788: 0xc05ce40  jal         func_173900
    ctx->pc = 0x272788u;
    SET_GPR_U32(ctx, 31, 0x272790u);
    ctx->pc = 0x173900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173900u, 0x272788u, 0x272790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272790u;
label_272790:
    // 0x272790: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x272790u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272794: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x272794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272798: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x272798u;
    SET_GPR_U32(ctx, 31, 0x2727A0u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x272798u, 0x2727A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2727A0u;
label_2727a0:
    // 0x2727a0: 0xafa202c8  sw          $v0, 0x2C8($sp)
    ctx->pc = 0x2727a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 712), GPR_U32(ctx, 2));
    // 0x2727a4: 0x8fa20330  lw          $v0, 0x330($sp)
    ctx->pc = 0x2727a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x2727a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2727a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2727ac: 0x240504e0  addiu       $a1, $zero, 0x4E0
    ctx->pc = 0x2727acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1248));
    // 0x2727b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2727b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2727b4: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x2727B4u;
    SET_GPR_U32(ctx, 31, 0x2727BCu);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x2727B4u, 0x2727BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2727BCu;
label_2727bc:
    // 0x2727bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2727bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2727c0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2727c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2727c4: 0x10a60014  beq         $a1, $a2, . + 4 + (0x14 << 2)
    ctx->pc = 0x2727C4u;
    {
        const bool branch_taken_0x2727c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x2727c4) {
            ctx->pc = 0x272818u;
            goto label_272818;
        }
    }
    ctx->pc = 0x2727CCu;
    // 0x2727cc: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2727CCu;
    {
        const bool branch_taken_0x2727cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2727cc) {
            ctx->pc = 0x2727DCu;
            goto label_2727dc;
        }
    }
    ctx->pc = 0x2727D4u;
    // 0x2727d4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2727D4u;
    {
        const bool branch_taken_0x2727d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2727d4) {
            ctx->pc = 0x272850u;
            goto label_272850;
        }
    }
    ctx->pc = 0x2727DCu;
label_2727dc:
    // 0x2727dc: 0x8fa202d0  lw          $v0, 0x2D0($sp)
    ctx->pc = 0x2727dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x2727e0: 0x8fa402c8  lw          $a0, 0x2C8($sp)
    ctx->pc = 0x2727e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 712)));
    // 0x2727e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2727e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2727e8: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2727E8u;
    SET_GPR_U32(ctx, 31, 0x2727F0u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2727E8u, 0x2727F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2727F0u;
label_2727f0:
    // 0x2727f0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2727f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2727f4: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2727f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2727f8: 0xc7a002cc  lwc1        $f0, 0x2CC($sp)
    ctx->pc = 0x2727f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2727fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2727fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x272800: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x272800u;
    {
        const bool branch_taken_0x272800 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x272800) {
            ctx->pc = 0x272850u;
            goto label_272850;
        }
    }
    ctx->pc = 0x272808u;
    // 0x272808: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x272808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27280c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x27280cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272810: 0x1000043a  b           . + 4 + (0x43A << 2)
    ctx->pc = 0x272810u;
    {
        const bool branch_taken_0x272810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x272810) {
            ctx->pc = 0x2738FCu;
            goto label_2738fc;
        }
    }
    ctx->pc = 0x272818u;
label_272818:
    // 0x272818: 0x8fa202d0  lw          $v0, 0x2D0($sp)
    ctx->pc = 0x272818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x27281c: 0x8fa402c8  lw          $a0, 0x2C8($sp)
    ctx->pc = 0x27281cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 712)));
    // 0x272820: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x272820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272824: 0xc040a90  jal         func_102A40
    ctx->pc = 0x272824u;
    SET_GPR_U32(ctx, 31, 0x27282Cu);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x272824u, 0x27282Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27282Cu;
label_27282c:
    // 0x27282c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x27282cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x272830: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x272830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x272834: 0xc7a002cc  lwc1        $f0, 0x2CC($sp)
    ctx->pc = 0x272834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x272838: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x272838u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27283c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x27283Cu;
    {
        const bool branch_taken_0x27283c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27283c) {
            ctx->pc = 0x272850u;
            goto label_272850;
        }
    }
    ctx->pc = 0x272844u;
    // 0x272844: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x272844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x272848: 0x1000042c  b           . + 4 + (0x42C << 2)
    ctx->pc = 0x272848u;
    {
        const bool branch_taken_0x272848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x272848) {
            ctx->pc = 0x2738FCu;
            goto label_2738fc;
        }
    }
    ctx->pc = 0x272850u;
label_272850:
    // 0x272850: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x272850u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272854: 0x10000429  b           . + 4 + (0x429 << 2)
    ctx->pc = 0x272854u;
    {
        const bool branch_taken_0x272854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x272854) {
            ctx->pc = 0x2738FCu;
            goto label_2738fc;
        }
    }
    ctx->pc = 0x27285Cu;
label_27285c:
    // 0x27285c: 0x8fa40340  lw          $a0, 0x340($sp)
    ctx->pc = 0x27285cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x272860: 0xc096874  jal         func_25A1D0
    ctx->pc = 0x272860u;
    SET_GPR_U32(ctx, 31, 0x272868u);
    ctx->pc = 0x25A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A1D0u, 0x272860u, 0x272868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272868u;
label_272868:
    // 0x272868: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x272868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27286c: 0x4282b  sltu        $a1, $zero, $a0
    ctx->pc = 0x27286cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x272870: 0x38a20001  xori        $v0, $a1, 0x1
    ctx->pc = 0x272870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x272874: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x272874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x272878: 0x7fa20150  sq          $v0, 0x150($sp)
    ctx->pc = 0x272878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 2));
    // 0x27287c: 0x8fa50330  lw          $a1, 0x330($sp)
    ctx->pc = 0x27287cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x272880: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x272880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272884: 0x240204ed  addiu       $v0, $zero, 0x4ED
    ctx->pc = 0x272884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1261));
    // 0x272888: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x272888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27288c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27288cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272890: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x272890u;
    SET_GPR_U32(ctx, 31, 0x272898u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x272890u, 0x272898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272898u;
label_272898:
    // 0x272898: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x272898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27289c: 0x7ba20150  lq          $v0, 0x150($sp)
    ctx->pc = 0x27289cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2728a0: 0x442826  xor         $a1, $v0, $a0
    ctx->pc = 0x2728a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x2728a4: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x2728a4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2728a8: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2728a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2728ac: 0x10000413  b           . + 4 + (0x413 << 2)
    ctx->pc = 0x2728ACu;
    {
        const bool branch_taken_0x2728ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2728ac) {
            ctx->pc = 0x2738FCu;
            goto label_2738fc;
        }
    }
    ctx->pc = 0x2728B4u;
label_2728b4:
    // 0x2728b4: 0x8fa40340  lw          $a0, 0x340($sp)
    ctx->pc = 0x2728b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x2728b8: 0xc096950  jal         func_25A540
    ctx->pc = 0x2728B8u;
    SET_GPR_U32(ctx, 31, 0x2728C0u);
    ctx->pc = 0x25A540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A540u, 0x2728B8u, 0x2728C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2728C0u;
label_2728c0:
    // 0x2728c0: 0x7fa20140  sq          $v0, 0x140($sp)
    ctx->pc = 0x2728c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 2));
    // 0x2728c4: 0x8fa40330  lw          $a0, 0x330($sp)
    ctx->pc = 0x2728c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x2728c8: 0x240504eb  addiu       $a1, $zero, 0x4EB
    ctx->pc = 0x2728c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1259));
    // 0x2728cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2728ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2728d0: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x2728D0u;
    SET_GPR_U32(ctx, 31, 0x2728D8u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x2728D0u, 0x2728D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2728D8u;
label_2728d8:
    // 0x2728d8: 0x7ba30140  lq          $v1, 0x140($sp)
    ctx->pc = 0x2728d8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2728dc: 0x622026  xor         $a0, $v1, $v0
    ctx->pc = 0x2728dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x2728e0: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x2728e0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2728e4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2728e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2728e8: 0x10000404  b           . + 4 + (0x404 << 2)
    ctx->pc = 0x2728E8u;
    {
        const bool branch_taken_0x2728e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2728e8) {
            ctx->pc = 0x2738FCu;
            goto label_2738fc;
        }
    }
    ctx->pc = 0x2728F0u;
label_2728f0:
    // 0x2728f0: 0x8fa40340  lw          $a0, 0x340($sp)
    ctx->pc = 0x2728f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x2728f4: 0xc096880  jal         func_25A200
    ctx->pc = 0x2728F4u;
    SET_GPR_U32(ctx, 31, 0x2728FCu);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x2728F4u, 0x2728FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2728FCu;
label_2728fc:
    // 0x2728fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2728fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272900: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x272900u;
    {
        const bool branch_taken_0x272900 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x272900) {
            ctx->pc = 0x27296Cu;
            goto label_27296c;
        }
    }
    ctx->pc = 0x272908u;
    // 0x272908: 0x8fa50340  lw          $a1, 0x340($sp)
    ctx->pc = 0x272908u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x27290c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x27290cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272910: 0xc096880  jal         func_25A200
    ctx->pc = 0x272910u;
    SET_GPR_U32(ctx, 31, 0x272918u);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x272910u, 0x272918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272918u;
label_272918:
    // 0x272918: 0xafa202c4  sw          $v0, 0x2C4($sp)
    ctx->pc = 0x272918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 708), GPR_U32(ctx, 2));
    // 0x27291c: 0x8fa402c4  lw          $a0, 0x2C4($sp)
    ctx->pc = 0x27291cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 708)));
    // 0x272920: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x272920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x272924: 0xc085538  jal         func_2154E0
    ctx->pc = 0x272924u;
    SET_GPR_U32(ctx, 31, 0x27292Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x272924u, 0x27292Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27292Cu;
label_27292c:
    // 0x27292c: 0xafa202c0  sw          $v0, 0x2C0($sp)
    ctx->pc = 0x27292cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 704), GPR_U32(ctx, 2));
    // 0x272930: 0x8fa402c0  lw          $a0, 0x2C0($sp)
    ctx->pc = 0x272930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x272934: 0xc096950  jal         func_25A540
    ctx->pc = 0x272934u;
    SET_GPR_U32(ctx, 31, 0x27293Cu);
    ctx->pc = 0x25A540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A540u, 0x272934u, 0x27293Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27293Cu;
label_27293c:
    // 0x27293c: 0x7fa20130  sq          $v0, 0x130($sp)
    ctx->pc = 0x27293cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
    // 0x272940: 0x8fa40330  lw          $a0, 0x330($sp)
    ctx->pc = 0x272940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x272944: 0x240504ec  addiu       $a1, $zero, 0x4EC
    ctx->pc = 0x272944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1260));
    // 0x272948: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x272948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27294c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x27294cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272950: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x272950u;
    SET_GPR_U32(ctx, 31, 0x272958u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x272950u, 0x272958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272958u;
label_272958:
    // 0x272958: 0x7ba30130  lq          $v1, 0x130($sp)
    ctx->pc = 0x272958u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x27295c: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x27295cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x272960: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x272960u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x272964: 0x100003e5  b           . + 4 + (0x3E5 << 2)
    ctx->pc = 0x272964u;
    {
        const bool branch_taken_0x272964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x272964) {
            ctx->pc = 0x2738FCu;
            goto label_2738fc;
        }
    }
    ctx->pc = 0x27296Cu;
label_27296c:
    // 0x27296c: 0x8fa40360  lw          $a0, 0x360($sp)
    ctx->pc = 0x27296cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 864)));
    // 0x272970: 0xc085530  jal         func_2154C0
    ctx->pc = 0x272970u;
    SET_GPR_U32(ctx, 31, 0x272978u);
    ctx->pc = 0x2154C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154C0u, 0x272970u, 0x272978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272978u;
label_272978:
    // 0x272978: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x272978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x27297c: 0x144403de  bne         $v0, $a0, . + 4 + (0x3DE << 2)
    ctx->pc = 0x27297Cu;
    {
        const bool branch_taken_0x27297c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x27297c) {
            ctx->pc = 0x2738F8u;
            goto label_2738f8;
        }
    }
    ctx->pc = 0x272984u;
    // 0x272984: 0x8fa20360  lw          $v0, 0x360($sp)
    ctx->pc = 0x272984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 864)));
    // 0x272988: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x272988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27298c: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x27298cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x272990: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x272990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272994: 0xc085538  jal         func_2154E0
    ctx->pc = 0x272994u;
    SET_GPR_U32(ctx, 31, 0x27299Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x272994u, 0x27299Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27299Cu;
label_27299c:
    // 0x27299c: 0xafa202bc  sw          $v0, 0x2BC($sp)
    ctx->pc = 0x27299cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 700), GPR_U32(ctx, 2));
    // 0x2729a0: 0x8fa402bc  lw          $a0, 0x2BC($sp)
    ctx->pc = 0x2729a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 700)));
    // 0x2729a4: 0xc096950  jal         func_25A540
    ctx->pc = 0x2729A4u;
    SET_GPR_U32(ctx, 31, 0x2729ACu);
    ctx->pc = 0x25A540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A540u, 0x2729A4u, 0x2729ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2729ACu;
label_2729ac:
    // 0x2729ac: 0x7fa20120  sq          $v0, 0x120($sp)
    ctx->pc = 0x2729acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
    // 0x2729b0: 0x8fa40330  lw          $a0, 0x330($sp)
    ctx->pc = 0x2729b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x2729b4: 0x240204ec  addiu       $v0, $zero, 0x4EC
    ctx->pc = 0x2729b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1260));
    // 0x2729b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2729b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2729bc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2729bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2729c0: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x2729C0u;
    SET_GPR_U32(ctx, 31, 0x2729C8u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x2729C0u, 0x2729C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2729C8u;
label_2729c8:
    // 0x2729c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2729c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2729cc: 0x7ba20120  lq          $v0, 0x120($sp)
    ctx->pc = 0x2729ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2729d0: 0x453026  xor         $a2, $v0, $a1
    ctx->pc = 0x2729d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x2729d4: 0x2cc60001  sltiu       $a2, $a2, 0x1
    ctx->pc = 0x2729d4u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2729d8: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2729d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2729dc: 0x100003c7  b           . + 4 + (0x3C7 << 2)
    ctx->pc = 0x2729DCu;
    {
        const bool branch_taken_0x2729dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2729dc) {
            ctx->pc = 0x2738FCu;
            goto label_2738fc;
        }
    }
    ctx->pc = 0x2729E4u;
label_2729e4:
    // 0x2729e4: 0x8fa70330  lw          $a3, 0x330($sp)
    ctx->pc = 0x2729e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x2729e8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2729e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2729ec: 0x240204ea  addiu       $v0, $zero, 0x4EA
    ctx->pc = 0x2729ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1258));
    // 0x2729f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2729f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2729f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2729f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2729f8: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x2729F8u;
    SET_GPR_U32(ctx, 31, 0x272A00u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x2729F8u, 0x272A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272A00u;
label_272a00:
    // 0x272a00: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x272a00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272a04: 0x8fa20340  lw          $v0, 0x340($sp)
    ctx->pc = 0x272a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x272a08: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x272a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x272a0c: 0x8fa30360  lw          $v1, 0x360($sp)
    ctx->pc = 0x272a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 864)));
    // 0x272a10: 0x432026  xor         $a0, $v0, $v1
    ctx->pc = 0x272a10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x272a14: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x272a14u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x272a18: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x272a18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x272a1c: 0xa63026  xor         $a2, $a1, $a2
    ctx->pc = 0x272a1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 6));
    // 0x272a20: 0x2cc60001  sltiu       $a2, $a2, 0x1
    ctx->pc = 0x272a20u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x272a24: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x272a24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272a28: 0x100003b4  b           . + 4 + (0x3B4 << 2)
    ctx->pc = 0x272A28u;
    {
        const bool branch_taken_0x272a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x272a28) {
            ctx->pc = 0x2738FCu;
            goto label_2738fc;
        }
    }
    ctx->pc = 0x272A30u;
label_272a30:
    // 0x272a30: 0x8f87bbb4  lw          $a3, -0x444C($gp)
    ctx->pc = 0x272a30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x272a34: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x272a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272a38: 0xc047eb8  jal         func_11FAE0
    ctx->pc = 0x272A38u;
    SET_GPR_U32(ctx, 31, 0x272A40u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x272A38u, 0x272A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272A40u;
label_272a40:
    // 0x272a40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x272a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272a44: 0xc047eb0  jal         func_11FAC0
    ctx->pc = 0x272A44u;
    SET_GPR_U32(ctx, 31, 0x272A4Cu);
    ctx->pc = 0x11FAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAC0u, 0x272A44u, 0x272A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272A4Cu;
label_272a4c:
    // 0x272a4c: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x272a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    // 0x272a50: 0x8fa50330  lw          $a1, 0x330($sp)
    ctx->pc = 0x272a50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x272a54: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x272a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272a58: 0x2402051a  addiu       $v0, $zero, 0x51A
    ctx->pc = 0x272a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1306));
    // 0x272a5c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x272a5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272a60: 0x2786a168  addiu       $a2, $gp, -0x5E98
    ctx->pc = 0x272a60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943080));
    // 0x272a64: 0xc041a50  jal         func_106940
    ctx->pc = 0x272A64u;
    SET_GPR_U32(ctx, 31, 0x272A6Cu);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x272A64u, 0x272A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272A6Cu;
label_272a6c:
    // 0x272a6c: 0x7ba40110  lq          $a0, 0x110($sp)
    ctx->pc = 0x272a6cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x272a70: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x272a70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272a74: 0xc08d654  jal         func_235950
    ctx->pc = 0x272A74u;
    SET_GPR_U32(ctx, 31, 0x272A7Cu);
    ctx->pc = 0x235950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235950u, 0x272A74u, 0x272A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272A7Cu;
label_272a7c:
    // 0x272a7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x272a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272a80: 0x80282a  slt         $a1, $a0, $zero
    ctx->pc = 0x272a80u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x272a84: 0x38a50001  xori        $a1, $a1, 0x1
    ctx->pc = 0x272a84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x272a88: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x272a88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272a8c: 0x1000039b  b           . + 4 + (0x39B << 2)
    ctx->pc = 0x272A8Cu;
    {
        const bool branch_taken_0x272a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x272a8c) {
            ctx->pc = 0x2738FCu;
            goto label_2738fc;
        }
    }
    ctx->pc = 0x272A94u;
label_272a94:
    // 0x272a94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x272a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x272a98: 0xa3a2032f  sb          $v0, 0x32F($sp)
    ctx->pc = 0x272a98u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 815), (uint8_t)GPR_U32(ctx, 2));
    // 0x272a9c: 0x8fa20330  lw          $v0, 0x330($sp)
    ctx->pc = 0x272a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x272aa0: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x272aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x272aa4: 0x7ba40100  lq          $a0, 0x100($sp)
    ctx->pc = 0x272aa4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x272aa8: 0x240204ee  addiu       $v0, $zero, 0x4EE
    ctx->pc = 0x272aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1262));
    // 0x272aac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x272aacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272ab0: 0x2786a168  addiu       $a2, $gp, -0x5E98
    ctx->pc = 0x272ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943080));
    // 0x272ab4: 0xc041a50  jal         func_106940
    ctx->pc = 0x272AB4u;
    SET_GPR_U32(ctx, 31, 0x272ABCu);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x272AB4u, 0x272ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272ABCu;
label_272abc:
    // 0x272abc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x272abcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272ac0: 0xafa502b8  sw          $a1, 0x2B8($sp)
    ctx->pc = 0x272ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 696), GPR_U32(ctx, 5));
    // 0x272ac4: 0x8fa60330  lw          $a2, 0x330($sp)
    ctx->pc = 0x272ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x272ac8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x272ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272acc: 0x240204ef  addiu       $v0, $zero, 0x4EF
    ctx->pc = 0x272accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1263));
    // 0x272ad0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x272ad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272ad4: 0x2786a168  addiu       $a2, $gp, -0x5E98
    ctx->pc = 0x272ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943080));
    // 0x272ad8: 0xc041a50  jal         func_106940
    ctx->pc = 0x272AD8u;
    SET_GPR_U32(ctx, 31, 0x272AE0u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x272AD8u, 0x272AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272AE0u;
label_272ae0:
    // 0x272ae0: 0xafa202b4  sw          $v0, 0x2B4($sp)
    ctx->pc = 0x272ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 692), GPR_U32(ctx, 2));
    // 0x272ae4: 0x8fa502b8  lw          $a1, 0x2B8($sp)
    ctx->pc = 0x272ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 696)));
    // 0x272ae8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x272ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272aec: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x272AECu;
    SET_GPR_U32(ctx, 31, 0x272AF4u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x272AECu, 0x272AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272AF4u;
label_272af4:
    // 0x272af4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x272AF4u;
    {
        const bool branch_taken_0x272af4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x272af4) {
            ctx->pc = 0x272B58u;
            goto label_272b58;
        }
    }
    ctx->pc = 0x272AFCu;
    // 0x272afc: 0x8fa40340  lw          $a0, 0x340($sp)
    ctx->pc = 0x272afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x272b00: 0xc0969a8  jal         func_25A6A0
    ctx->pc = 0x272B00u;
    SET_GPR_U32(ctx, 31, 0x272B08u);
    ctx->pc = 0x25A6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A6A0u, 0x272B00u, 0x272B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272B08u;
label_272b08:
    // 0x272b08: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x272B08u;
    {
        const bool branch_taken_0x272b08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x272b08) {
            ctx->pc = 0x272B1Cu;
            goto label_272b1c;
        }
    }
    ctx->pc = 0x272B10u;
    // 0x272b10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x272b10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272b14: 0x10000379  b           . + 4 + (0x379 << 2)
    ctx->pc = 0x272B14u;
    {
        const bool branch_taken_0x272b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x272b14) {
            ctx->pc = 0x2738FCu;
            goto label_2738fc;
        }
    }
    ctx->pc = 0x272B1Cu;
label_272b1c:
    // 0x272b1c: 0x8fa40340  lw          $a0, 0x340($sp)
    ctx->pc = 0x272b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x272b20: 0xc0969a8  jal         func_25A6A0
    ctx->pc = 0x272B20u;
    SET_GPR_U32(ctx, 31, 0x272B28u);
    ctx->pc = 0x25A6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A6A0u, 0x272B20u, 0x272B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272B28u;
label_272b28:
    // 0x272b28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x272b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272b2c: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x272B2Cu;
    SET_GPR_U32(ctx, 31, 0x272B34u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x272B2Cu, 0x272B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272B34u;
label_272b34:
    // 0x272b34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x272b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272b38: 0x8fa502b8  lw          $a1, 0x2B8($sp)
    ctx->pc = 0x272b38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 696)));
    // 0x272b3c: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x272B3Cu;
    SET_GPR_U32(ctx, 31, 0x272B44u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x272B3Cu, 0x272B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272B44u;
label_272b44:
    // 0x272b44: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x272B44u;
    {
        const bool branch_taken_0x272b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x272b44) {
            ctx->pc = 0x272B58u;
            goto label_272b58;
        }
    }
    ctx->pc = 0x272B4Cu;
    // 0x272b4c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x272b4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272b50: 0x1000036a  b           . + 4 + (0x36A << 2)
    ctx->pc = 0x272B50u;
    {
        const bool branch_taken_0x272b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x272b50) {
            ctx->pc = 0x2738FCu;
            goto label_2738fc;
        }
    }
    ctx->pc = 0x272B58u;
label_272b58:
    // 0x272b58: 0x8fa50340  lw          $a1, 0x340($sp)
    ctx->pc = 0x272b58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x272b5c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x272b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272b60: 0xc096880  jal         func_25A200
    ctx->pc = 0x272B60u;
    SET_GPR_U32(ctx, 31, 0x272B68u);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x272B60u, 0x272B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272B68u;
label_272b68:
    // 0x272b68: 0xafa202b0  sw          $v0, 0x2B0($sp)
    ctx->pc = 0x272b68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 688), GPR_U32(ctx, 2));
    // 0x272b6c: 0x8fa502b0  lw          $a1, 0x2B0($sp)
    ctx->pc = 0x272b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x272b70: 0x14a0000b  bnez        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x272B70u;
    {
        const bool branch_taken_0x272b70 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x272b70) {
            ctx->pc = 0x272BA0u;
            goto label_272ba0;
        }
    }
    ctx->pc = 0x272B78u;
    // 0x272b78: 0x8fa20360  lw          $v0, 0x360($sp)
    ctx->pc = 0x272b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 864)));
    // 0x272b7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x272b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272b80: 0xc085530  jal         func_2154C0
    ctx->pc = 0x272B80u;
    SET_GPR_U32(ctx, 31, 0x272B88u);
    ctx->pc = 0x2154C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154C0u, 0x272B80u, 0x272B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272B88u;
label_272b88:
    // 0x272b88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x272b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272b8c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x272b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x272b90: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x272B90u;
    {
        const bool branch_taken_0x272b90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x272b90) {
            ctx->pc = 0x272BA0u;
            goto label_272ba0;
        }
    }
    ctx->pc = 0x272B98u;
    // 0x272b98: 0x8fa50360  lw          $a1, 0x360($sp)
    ctx->pc = 0x272b98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 864)));
    // 0x272b9c: 0xafa502b0  sw          $a1, 0x2B0($sp)
    ctx->pc = 0x272b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 688), GPR_U32(ctx, 5));
label_272ba0:
    // 0x272ba0: 0x8fa202b0  lw          $v0, 0x2B0($sp)
    ctx->pc = 0x272ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x272ba4: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x272BA4u;
    {
        const bool branch_taken_0x272ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x272ba4) {
            ctx->pc = 0x272C4Cu;
            goto label_272c4c;
        }
    }
    ctx->pc = 0x272BACu;
    // 0x272bac: 0x8fa502b0  lw          $a1, 0x2B0($sp)
    ctx->pc = 0x272bacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x272bb0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x272bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272bb4: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x272bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x272bb8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x272bb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272bbc: 0xc085538  jal         func_2154E0
    ctx->pc = 0x272BBCu;
    SET_GPR_U32(ctx, 31, 0x272BC4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x272BBCu, 0x272BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272BC4u;
label_272bc4:
    // 0x272bc4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x272bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272bc8: 0xafa402ac  sw          $a0, 0x2AC($sp)
    ctx->pc = 0x272bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 684), GPR_U32(ctx, 4));
    // 0x272bcc: 0x8fa202b4  lw          $v0, 0x2B4($sp)
    ctx->pc = 0x272bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 692)));
    // 0x272bd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x272bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272bd4: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x272BD4u;
    SET_GPR_U32(ctx, 31, 0x272BDCu);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x272BD4u, 0x272BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272BDCu;
label_272bdc:
    // 0x272bdc: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x272BDCu;
    {
        const bool branch_taken_0x272bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x272bdc) {
            ctx->pc = 0x272C4Cu;
            goto label_272c4c;
        }
    }
    ctx->pc = 0x272BE4u;
    // 0x272be4: 0x8fa602ac  lw          $a2, 0x2AC($sp)
    ctx->pc = 0x272be4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 684)));
    // 0x272be8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x272be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272bec: 0xc0969a8  jal         func_25A6A0
    ctx->pc = 0x272BECu;
    SET_GPR_U32(ctx, 31, 0x272BF4u);
    ctx->pc = 0x25A6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A6A0u, 0x272BECu, 0x272BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272BF4u;
label_272bf4:
    // 0x272bf4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x272BF4u;
    {
        const bool branch_taken_0x272bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x272bf4) {
            ctx->pc = 0x272C08u;
            goto label_272c08;
        }
    }
    ctx->pc = 0x272BFCu;
    // 0x272bfc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x272bfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272c00: 0x1000033e  b           . + 4 + (0x33E << 2)
    ctx->pc = 0x272C00u;
    {
        const bool branch_taken_0x272c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x272c00) {
            ctx->pc = 0x2738FCu;
            goto label_2738fc;
        }
    }
    ctx->pc = 0x272C08u;
label_272c08:
    // 0x272c08: 0x8fa402ac  lw          $a0, 0x2AC($sp)
    ctx->pc = 0x272c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 684)));
    // 0x272c0c: 0xc0969a8  jal         func_25A6A0
    ctx->pc = 0x272C0Cu;
    SET_GPR_U32(ctx, 31, 0x272C14u);
    ctx->pc = 0x25A6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A6A0u, 0x272C0Cu, 0x272C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272C14u;
label_272c14:
    // 0x272c14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x272c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272c18: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x272C18u;
    SET_GPR_U32(ctx, 31, 0x272C20u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x272C18u, 0x272C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272C20u;
label_272c20:
    // 0x272c20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x272c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272c24: 0x8fa202b4  lw          $v0, 0x2B4($sp)
    ctx->pc = 0x272c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 692)));
    // 0x272c28: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x272c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    // 0x272c2c: 0x7ba500f0  lq          $a1, 0xF0($sp)
    ctx->pc = 0x272c2cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x272c30: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x272C30u;
    SET_GPR_U32(ctx, 31, 0x272C38u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x272C30u, 0x272C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272C38u;
label_272c38:
    // 0x272c38: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x272C38u;
    {
        const bool branch_taken_0x272c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x272c38) {
            ctx->pc = 0x272C4Cu;
            goto label_272c4c;
        }
    }
    ctx->pc = 0x272C40u;
    // 0x272c40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x272c40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272c44: 0x1000032d  b           . + 4 + (0x32D << 2)
    ctx->pc = 0x272C44u;
    {
        const bool branch_taken_0x272c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x272c44) {
            ctx->pc = 0x2738FCu;
            goto label_2738fc;
        }
    }
    ctx->pc = 0x272C4Cu;
label_272c4c:
    // 0x272c4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x272c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x272c50: 0x1000032a  b           . + 4 + (0x32A << 2)
    ctx->pc = 0x272C50u;
    {
        const bool branch_taken_0x272c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x272c50) {
            ctx->pc = 0x2738FCu;
            goto label_2738fc;
        }
    }
    ctx->pc = 0x272C58u;
label_272c58:
    // 0x272c58: 0x8fa20330  lw          $v0, 0x330($sp)
    ctx->pc = 0x272c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x272c5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x272c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272c60: 0x240504f0  addiu       $a1, $zero, 0x4F0
    ctx->pc = 0x272c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1264));
    // 0x272c64: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x272c64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x272c68: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x272C68u;
    SET_GPR_U32(ctx, 31, 0x272C70u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x272C68u, 0x272C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272C70u;
label_272c70:
    // 0x272c70: 0xafa202a8  sw          $v0, 0x2A8($sp)
    ctx->pc = 0x272c70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 680), GPR_U32(ctx, 2));
    // 0x272c74: 0x8fa202a8  lw          $v0, 0x2A8($sp)
    ctx->pc = 0x272c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 680)));
    // 0x272c78: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x272c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x272c7c: 0x10440010  beq         $v0, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x272C7Cu;
    {
        const bool branch_taken_0x272c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x272c7c) {
            ctx->pc = 0x272CC0u;
            goto label_272cc0;
        }
    }
    ctx->pc = 0x272C84u;
    // 0x272c84: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x272C84u;
    {
        const bool branch_taken_0x272c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x272c84) {
            ctx->pc = 0x272C94u;
            goto label_272c94;
        }
    }
    ctx->pc = 0x272C8Cu;
    // 0x272c8c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x272C8Cu;
    {
        const bool branch_taken_0x272c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x272c8c) {
            ctx->pc = 0x272CECu;
            goto label_272cec;
        }
    }
    ctx->pc = 0x272C94u;
label_272c94:
    // 0x272c94: 0x8fa50330  lw          $a1, 0x330($sp)
    ctx->pc = 0x272c94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x272c98: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x272c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272c9c: 0x8fa20340  lw          $v0, 0x340($sp)
    ctx->pc = 0x272c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x272ca0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x272ca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272ca4: 0x8fa60350  lw          $a2, 0x350($sp)
    ctx->pc = 0x272ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 848)));
    // 0x272ca8: 0x8fa20360  lw          $v0, 0x360($sp)
    ctx->pc = 0x272ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 864)));
    // 0x272cac: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x272cacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272cb0: 0xc09cf58  jal         func_273D60
    ctx->pc = 0x272CB0u;
    SET_GPR_U32(ctx, 31, 0x272CB8u);
    ctx->pc = 0x273D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273D60u, 0x272CB0u, 0x272CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272CB8u;
label_272cb8:
    // 0x272cb8: 0x10000310  b           . + 4 + (0x310 << 2)
    ctx->pc = 0x272CB8u;
    {
        const bool branch_taken_0x272cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x272cb8) {
            ctx->pc = 0x2738FCu;
            goto label_2738fc;
        }
    }
    ctx->pc = 0x272CC0u;
label_272cc0:
    // 0x272cc0: 0x8fa50330  lw          $a1, 0x330($sp)
    ctx->pc = 0x272cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x272cc4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x272cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272cc8: 0x8fa50340  lw          $a1, 0x340($sp)
    ctx->pc = 0x272cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x272ccc: 0x8fa60350  lw          $a2, 0x350($sp)
    ctx->pc = 0x272cccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 848)));
    // 0x272cd0: 0x8fa70360  lw          $a3, 0x360($sp)
    ctx->pc = 0x272cd0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 864)));
    // 0x272cd4: 0xc09d020  jal         func_274080
    ctx->pc = 0x272CD4u;
    SET_GPR_U32(ctx, 31, 0x272CDCu);
    ctx->pc = 0x274080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274080u, 0x272CD4u, 0x272CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272CDCu;
label_272cdc:
    // 0x272cdc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x272cdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272ce0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x272ce0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272ce4: 0x10000305  b           . + 4 + (0x305 << 2)
    ctx->pc = 0x272CE4u;
    {
        const bool branch_taken_0x272ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x272ce4) {
            ctx->pc = 0x2738FCu;
            goto label_2738fc;
        }
    }
    ctx->pc = 0x272CECu;
label_272cec:
    // 0x272cec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x272cecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272cf0: 0x10000302  b           . + 4 + (0x302 << 2)
    ctx->pc = 0x272CF0u;
    {
        const bool branch_taken_0x272cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x272cf0) {
            ctx->pc = 0x2738FCu;
            goto label_2738fc;
        }
    }
    ctx->pc = 0x272CF8u;
label_272cf8:
    // 0x272cf8: 0x8f84bbf0  lw          $a0, -0x4410($gp)
    ctx->pc = 0x272cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949872)));
    // 0x272cfc: 0xc090018  jal         func_240060
    ctx->pc = 0x272CFCu;
    SET_GPR_U32(ctx, 31, 0x272D04u);
    ctx->pc = 0x240060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240060u, 0x272CFCu, 0x272D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272D04u;
label_272d04:
    // 0x272d04: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x272d04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272d08: 0xafa502a4  sw          $a1, 0x2A4($sp)
    ctx->pc = 0x272d08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 676), GPR_U32(ctx, 5));
    // 0x272d0c: 0x8fa502a4  lw          $a1, 0x2A4($sp)
    ctx->pc = 0x272d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
    // 0x272d10: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x272d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272d14: 0xc08feb4  jal         func_23FAD0
    ctx->pc = 0x272D14u;
    SET_GPR_U32(ctx, 31, 0x272D1Cu);
    ctx->pc = 0x23FAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FAD0u, 0x272D14u, 0x272D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272D1Cu;
label_272d1c:
    // 0x272d1c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x272d1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272d20: 0xafa502a0  sw          $a1, 0x2A0($sp)
    ctx->pc = 0x272d20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 672), GPR_U32(ctx, 5));
    // 0x272d24: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x272D24u;
    {
        const bool branch_taken_0x272d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x272d24) {
            ctx->pc = 0x272D80u;
            goto label_272d80;
        }
    }
    ctx->pc = 0x272D2Cu;
label_272d2c:
    // 0x272d2c: 0x8fa402a0  lw          $a0, 0x2A0($sp)
    ctx->pc = 0x272d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x272d30: 0xafa4029c  sw          $a0, 0x29C($sp)
    ctx->pc = 0x272d30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 668), GPR_U32(ctx, 4));
    // 0x272d34: 0x8fa5029c  lw          $a1, 0x29C($sp)
    ctx->pc = 0x272d34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 668)));
    // 0x272d38: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x272d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x272d3c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x272d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x272d40: 0x1485000a  bne         $a0, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x272D40u;
    {
        const bool branch_taken_0x272d40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x272d40) {
            ctx->pc = 0x272D6Cu;
            goto label_272d6c;
        }
    }
    ctx->pc = 0x272D48u;
    // 0x272d48: 0x8fa6029c  lw          $a2, 0x29C($sp)
    ctx->pc = 0x272d48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 668)));
    // 0x272d4c: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x272d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x272d50: 0x8fa40340  lw          $a0, 0x340($sp)
    ctx->pc = 0x272d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x272d54: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x272d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x272d58: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x272D58u;
    {
        const bool branch_taken_0x272d58 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x272d58) {
            ctx->pc = 0x272D6Cu;
            goto label_272d6c;
        }
    }
    ctx->pc = 0x272D60u;
    // 0x272d60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x272d60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272d64: 0x100002e5  b           . + 4 + (0x2E5 << 2)
    ctx->pc = 0x272D64u;
    {
        const bool branch_taken_0x272d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x272d64) {
            ctx->pc = 0x2738FCu;
            goto label_2738fc;
        }
    }
    ctx->pc = 0x272D6Cu;
label_272d6c:
    // 0x272d6c: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x272d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x272d70: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x272d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x272d74: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x272d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x272d78: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x272d78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x272d7c: 0xafa202a0  sw          $v0, 0x2A0($sp)
    ctx->pc = 0x272d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 672), GPR_U32(ctx, 2));
label_272d80:
    // 0x272d80: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x272d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x272d84: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x272d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x272d88: 0x8fa502a4  lw          $a1, 0x2A4($sp)
    ctx->pc = 0x272d88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
    // 0x272d8c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x272d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272d90: 0xc08feac  jal         func_23FAB0
    ctx->pc = 0x272D90u;
    SET_GPR_U32(ctx, 31, 0x272D98u);
    ctx->pc = 0x23FAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FAB0u, 0x272D90u, 0x272D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272D98u;
label_272d98:
    // 0x272d98: 0x7ba300d0  lq          $v1, 0xD0($sp)
    ctx->pc = 0x272d98u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x272d9c: 0x1462ffe3  bne         $v1, $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x272D9Cu;
    {
        const bool branch_taken_0x272d9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x272d9c) {
            ctx->pc = 0x272D2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_272d2c;
        }
    }
    ctx->pc = 0x272DA4u;
    // 0x272da4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x272da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x272da8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x272da8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272dac: 0x100002d3  b           . + 4 + (0x2D3 << 2)
    ctx->pc = 0x272DACu;
    {
        const bool branch_taken_0x272dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x272dac) {
            ctx->pc = 0x2738FCu;
            goto label_2738fc;
        }
    }
    ctx->pc = 0x272DB4u;
label_272db4:
    // 0x272db4: 0x8fa20330  lw          $v0, 0x330($sp)
    ctx->pc = 0x272db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x272db8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x272db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272dbc: 0x240204f2  addiu       $v0, $zero, 0x4F2
    ctx->pc = 0x272dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1266));
    // 0x272dc0: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x272dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x272dc4: 0x7ba500c0  lq          $a1, 0xC0($sp)
    ctx->pc = 0x272dc4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x272dc8: 0x2782a168  addiu       $v0, $gp, -0x5E98
    ctx->pc = 0x272dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943080));
    // 0x272dcc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x272dccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272dd0: 0xc041a50  jal         func_106940
    ctx->pc = 0x272DD0u;
    SET_GPR_U32(ctx, 31, 0x272DD8u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x272DD0u, 0x272DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272DD8u;
label_272dd8:
    // 0x272dd8: 0xafa20298  sw          $v0, 0x298($sp)
    ctx->pc = 0x272dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 664), GPR_U32(ctx, 2));
    // 0x272ddc: 0xafa00294  sw          $zero, 0x294($sp)
    ctx->pc = 0x272ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 660), GPR_U32(ctx, 0));
    // 0x272de0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x272de0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272de4: 0x8fa20330  lw          $v0, 0x330($sp)
    ctx->pc = 0x272de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x272de8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x272de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272dec: 0x240504f3  addiu       $a1, $zero, 0x4F3
    ctx->pc = 0x272decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1267));
    // 0x272df0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x272df0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272df4: 0xc04146c  jal         func_1051B0
    ctx->pc = 0x272DF4u;
    SET_GPR_U32(ctx, 31, 0x272DFCu);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x272DF4u, 0x272DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272DFCu;
label_272dfc:
    // 0x272dfc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x272dfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272e00: 0x1220002d  beqz        $s1, . + 4 + (0x2D << 2)
    ctx->pc = 0x272E00u;
    {
        const bool branch_taken_0x272e00 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x272e00) {
            ctx->pc = 0x272EB8u;
            goto label_272eb8;
        }
    }
    ctx->pc = 0x272E08u;
    // 0x272e08: 0x8fa40340  lw          $a0, 0x340($sp)
    ctx->pc = 0x272e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x272e0c: 0xc096880  jal         func_25A200
    ctx->pc = 0x272E0Cu;
    SET_GPR_U32(ctx, 31, 0x272E14u);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x272E0Cu, 0x272E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272E14u;
label_272e14:
    // 0x272e14: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x272e14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272e18: 0x12400019  beqz        $s2, . + 4 + (0x19 << 2)
    ctx->pc = 0x272E18u;
    {
        const bool branch_taken_0x272e18 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x272e18) {
            ctx->pc = 0x272E80u;
            goto label_272e80;
        }
    }
    ctx->pc = 0x272E20u;
    // 0x272e20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x272e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272e24: 0xc048b18  jal         func_122C60
    ctx->pc = 0x272E24u;
    SET_GPR_U32(ctx, 31, 0x272E2Cu);
    ctx->pc = 0x122C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122C60u, 0x272E24u, 0x272E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272E2Cu;
label_272e2c:
    // 0x272e2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x272e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272e30: 0xafa40294  sw          $a0, 0x294($sp)
    ctx->pc = 0x272e30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 660), GPR_U32(ctx, 4));
    // 0x272e34: 0x8fa50298  lw          $a1, 0x298($sp)
    ctx->pc = 0x272e34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x272e38: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x272e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272e3c: 0x8fa20294  lw          $v0, 0x294($sp)
    ctx->pc = 0x272e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 660)));
    // 0x272e40: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x272e40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272e44: 0xc0b6510  jal         func_2D9440
    ctx->pc = 0x272E44u;
    SET_GPR_U32(ctx, 31, 0x272E4Cu);
    ctx->pc = 0x2D9440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9440u, 0x272E44u, 0x272E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272E4Cu;
label_272e4c:
    // 0x272e4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x272e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272e50: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x272E50u;
    {
        const bool branch_taken_0x272e50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x272e50) {
            ctx->pc = 0x272E80u;
            goto label_272e80;
        }
    }
    ctx->pc = 0x272E58u;
    // 0x272e58: 0x8fa20330  lw          $v0, 0x330($sp)
    ctx->pc = 0x272e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x272e5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x272e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272e60: 0x240504f4  addiu       $a1, $zero, 0x4F4
    ctx->pc = 0x272e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1268));
    // 0x272e64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x272e64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272e68: 0xc04146c  jal         func_1051B0
    ctx->pc = 0x272E68u;
    SET_GPR_U32(ctx, 31, 0x272E70u);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x272E68u, 0x272E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272E70u;
label_272e70:
    // 0x272e70: 0x2b02b  sltu        $s6, $zero, $v0
    ctx->pc = 0x272e70u;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x272e74: 0x3ac20001  xori        $v0, $s6, 0x1
    ctx->pc = 0x272e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) ^ (uint64_t)(uint16_t)1);
    // 0x272e78: 0x100002a0  b           . + 4 + (0x2A0 << 2)
    ctx->pc = 0x272E78u;
    {
        const bool branch_taken_0x272e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x272e78) {
            ctx->pc = 0x2738FCu;
            goto label_2738fc;
        }
    }
    ctx->pc = 0x272E80u;
label_272e80:
    // 0x272e80: 0x8fa40360  lw          $a0, 0x360($sp)
    ctx->pc = 0x272e80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 864)));
    // 0x272e84: 0xc085530  jal         func_2154C0
    ctx->pc = 0x272E84u;
    SET_GPR_U32(ctx, 31, 0x272E8Cu);
    ctx->pc = 0x2154C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154C0u, 0x272E84u, 0x272E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272E8Cu;
label_272e8c:
    // 0x272e8c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x272e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272e90: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x272e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x272e94: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x272E94u;
    {
        const bool branch_taken_0x272e94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x272e94) {
            ctx->pc = 0x272EA4u;
            goto label_272ea4;
        }
    }
    ctx->pc = 0x272E9Cu;
    // 0x272e9c: 0x8fa50360  lw          $a1, 0x360($sp)
    ctx->pc = 0x272e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 864)));
    // 0x272ea0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x272ea0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_272ea4:
    // 0x272ea4: 0x16400007  bnez        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x272EA4u;
    {
        const bool branch_taken_0x272ea4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x272ea4) {
            ctx->pc = 0x272EC4u;
            goto label_272ec4;
        }
    }
    ctx->pc = 0x272EACu;
    // 0x272eac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x272eacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272eb0: 0x10000292  b           . + 4 + (0x292 << 2)
    ctx->pc = 0x272EB0u;
    {
        const bool branch_taken_0x272eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x272eb0) {
            ctx->pc = 0x2738FCu;
            goto label_2738fc;
        }
    }
    ctx->pc = 0x272EB8u;
label_272eb8:
    // 0x272eb8: 0x8fa20340  lw          $v0, 0x340($sp)
    ctx->pc = 0x272eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x272ebc: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x272ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x272ec0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x272ec0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_272ec4:
    // 0x272ec4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x272ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272ec8: 0xc048b18  jal         func_122C60
    ctx->pc = 0x272EC8u;
    SET_GPR_U32(ctx, 31, 0x272ED0u);
    ctx->pc = 0x122C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122C60u, 0x272EC8u, 0x272ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272ED0u;
label_272ed0:
    // 0x272ed0: 0xafa20294  sw          $v0, 0x294($sp)
    ctx->pc = 0x272ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 660), GPR_U32(ctx, 2));
    // 0x272ed4: 0x8fa50298  lw          $a1, 0x298($sp)
    ctx->pc = 0x272ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x272ed8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x272ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272edc: 0x8fa20294  lw          $v0, 0x294($sp)
    ctx->pc = 0x272edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 660)));
    // 0x272ee0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x272ee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272ee4: 0xc0b6510  jal         func_2D9440
    ctx->pc = 0x272EE4u;
    SET_GPR_U32(ctx, 31, 0x272EECu);
    ctx->pc = 0x2D9440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9440u, 0x272EE4u, 0x272EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272EECu;
label_272eec:
    // 0x272eec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x272eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272ef0: 0xa3a4032e  sb          $a0, 0x32E($sp)
    ctx->pc = 0x272ef0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 814), (uint8_t)GPR_U32(ctx, 4));
    // 0x272ef4: 0x8fa50330  lw          $a1, 0x330($sp)
    ctx->pc = 0x272ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x272ef8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x272ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272efc: 0x240204f4  addiu       $v0, $zero, 0x4F4
    ctx->pc = 0x272efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1268));
    // 0x272f00: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x272f00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272f04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x272f04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272f08: 0xc04146c  jal         func_1051B0
    ctx->pc = 0x272F08u;
    SET_GPR_U32(ctx, 31, 0x272F10u);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x272F08u, 0x272F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272F10u;
label_272f10:
    // 0x272f10: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x272f10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x272f14: 0x93a2032e  lbu         $v0, 0x32E($sp)
    ctx->pc = 0x272f14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 814)));
    // 0x272f18: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x272f18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x272f1c: 0x831026  xor         $v0, $a0, $v1
    ctx->pc = 0x272f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x272f20: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x272f20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x272f24: 0x10000275  b           . + 4 + (0x275 << 2)
    ctx->pc = 0x272F24u;
    {
        const bool branch_taken_0x272f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x272f24) {
            ctx->pc = 0x2738FCu;
            goto label_2738fc;
        }
    }
    ctx->pc = 0x272F2Cu;
label_272f2c:
    // 0x272f2c: 0x8fa50330  lw          $a1, 0x330($sp)
    ctx->pc = 0x272f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x272f30: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x272f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272f34: 0x2402051d  addiu       $v0, $zero, 0x51D
    ctx->pc = 0x272f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1309));
    // 0x272f38: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x272f38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272f3c: 0x2786a168  addiu       $a2, $gp, -0x5E98
    ctx->pc = 0x272f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943080));
    // 0x272f40: 0xc041a50  jal         func_106940
    ctx->pc = 0x272F40u;
    SET_GPR_U32(ctx, 31, 0x272F48u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x272F40u, 0x272F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272F48u;
label_272f48:
    // 0x272f48: 0xafa20290  sw          $v0, 0x290($sp)
    ctx->pc = 0x272f48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 656), GPR_U32(ctx, 2));
    // 0x272f4c: 0x8fa50290  lw          $a1, 0x290($sp)
    ctx->pc = 0x272f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x272f50: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x272f50u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x272f54: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x272F54u;
    {
        const bool branch_taken_0x272f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x272f54) {
            ctx->pc = 0x273054u;
            goto label_273054;
        }
    }
    ctx->pc = 0x272F5Cu;
    // 0x272f5c: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x272f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x272f60: 0xc0514a8  jal         func_1452A0
    ctx->pc = 0x272F60u;
    SET_GPR_U32(ctx, 31, 0x272F68u);
    ctx->pc = 0x1452A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1452A0u, 0x272F60u, 0x272F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272F68u;
label_272f68:
    // 0x272f68: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x272f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x272f6c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x272f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272f70: 0x8fa50290  lw          $a1, 0x290($sp)
    ctx->pc = 0x272f70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x272f74: 0xc040304  jal         func_100C10
    ctx->pc = 0x272F74u;
    SET_GPR_U32(ctx, 31, 0x272F7Cu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x272F74u, 0x272F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272F7Cu;
label_272f7c:
    // 0x272f7c: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x272f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x272f80: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x272f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x272f84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x272f84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272f88: 0xc061bf0  jal         func_186FC0
    ctx->pc = 0x272F88u;
    SET_GPR_U32(ctx, 31, 0x272F90u);
    ctx->pc = 0x186FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186FC0u, 0x272F88u, 0x272F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272F90u;
label_272f90:
    // 0x272f90: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x272f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x272f94: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x272f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x272f98: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x272F98u;
    SET_GPR_U32(ctx, 31, 0x272FA0u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x272F98u, 0x272FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272FA0u;
label_272fa0:
    // 0x272fa0: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x272fa0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272fa4: 0x8fa40330  lw          $a0, 0x330($sp)
    ctx->pc = 0x272fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x272fa8: 0x2417051e  addiu       $s7, $zero, 0x51E
    ctx->pc = 0x272fa8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1310));
    // 0x272fac: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x272facu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272fb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x272fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x272fb4: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x272fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x272fb8: 0x7ba600b0  lq          $a2, 0xB0($sp)
    ctx->pc = 0x272fb8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x272fbc: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x272FBCu;
    SET_GPR_U32(ctx, 31, 0x272FC4u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x272FBCu, 0x272FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272FC4u;
label_272fc4:
    // 0x272fc4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x272fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272fc8: 0xafa4028c  sw          $a0, 0x28C($sp)
    ctx->pc = 0x272fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 652), GPR_U32(ctx, 4));
    // 0x272fcc: 0x8f85bbb4  lw          $a1, -0x444C($gp)
    ctx->pc = 0x272fccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x272fd0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x272fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272fd4: 0xc041b40  jal         func_106D00
    ctx->pc = 0x272FD4u;
    SET_GPR_U32(ctx, 31, 0x272FDCu);
    ctx->pc = 0x106D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D00u, 0x272FD4u, 0x272FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272FDCu;
label_272fdc:
    // 0x272fdc: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x272fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x272fe0: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x272fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x272fe4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x272fe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272fe8: 0xc042ff0  jal         func_10BFC0
    ctx->pc = 0x272FE8u;
    SET_GPR_U32(ctx, 31, 0x272FF0u);
    ctx->pc = 0x10BFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BFC0u, 0x272FE8u, 0x272FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272FF0u;
label_272ff0:
    // 0x272ff0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x272ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272ff4: 0xc041874  jal         func_1061D0
    ctx->pc = 0x272FF4u;
    SET_GPR_U32(ctx, 31, 0x272FFCu);
    ctx->pc = 0x1061D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1061D0u, 0x272FF4u, 0x272FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272FFCu;
label_272ffc:
    // 0x272ffc: 0x7ba400a0  lq          $a0, 0xA0($sp)
    ctx->pc = 0x272ffcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x273000: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x273000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273004: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x273004u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273008: 0xc047970  jal         func_11E5C0
    ctx->pc = 0x273008u;
    SET_GPR_U32(ctx, 31, 0x273010u);
    ctx->pc = 0x11E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E5C0u, 0x273008u, 0x273010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273010u;
label_273010:
    // 0x273010: 0xafa20288  sw          $v0, 0x288($sp)
    ctx->pc = 0x273010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 648), GPR_U32(ctx, 2));
    // 0x273014: 0x8fa40288  lw          $a0, 0x288($sp)
    ctx->pc = 0x273014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 648)));
    // 0x273018: 0x4282b  sltu        $a1, $zero, $a0
    ctx->pc = 0x273018u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x27301c: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x27301cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x273020: 0x8fa3028c  lw          $v1, 0x28C($sp)
    ctx->pc = 0x273020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 652)));
    // 0x273024: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x273024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x273028: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x273028u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x27302c: 0xa3a20326  sb          $v0, 0x326($sp)
    ctx->pc = 0x27302cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 806), (uint8_t)GPR_U32(ctx, 2));
    // 0x273030: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x273030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x273034: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x273034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x273038: 0xc051428  jal         func_1450A0
    ctx->pc = 0x273038u;
    SET_GPR_U32(ctx, 31, 0x273040u);
    ctx->pc = 0x1450A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1450A0u, 0x273038u, 0x273040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273040u;
label_273040:
    // 0x273040: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x273040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273044: 0x93a50326  lbu         $a1, 0x326($sp)
    ctx->pc = 0x273044u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 806)));
    // 0x273048: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x273048u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27304c: 0x1000022b  b           . + 4 + (0x22B << 2)
    ctx->pc = 0x27304Cu;
    {
        const bool branch_taken_0x27304c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27304c) {
            ctx->pc = 0x2738FCu;
            goto label_2738fc;
        }
    }
    ctx->pc = 0x273054u;
label_273054:
    // 0x273054: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x273054u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273058: 0x10000228  b           . + 4 + (0x228 << 2)
    ctx->pc = 0x273058u;
    {
        const bool branch_taken_0x273058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x273058) {
            ctx->pc = 0x2738FCu;
            goto label_2738fc;
        }
    }
    ctx->pc = 0x273060u;
label_273060:
    // 0x273060: 0x8fa20340  lw          $v0, 0x340($sp)
    ctx->pc = 0x273060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x273064: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x273064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273068: 0xc096880  jal         func_25A200
    ctx->pc = 0x273068u;
    SET_GPR_U32(ctx, 31, 0x273070u);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x273068u, 0x273070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273070u;
label_273070:
    // 0x273070: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x273070u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273074: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x273074u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273078: 0x17c0000a  bnez        $fp, . + 4 + (0xA << 2)
    ctx->pc = 0x273078u;
    {
        const bool branch_taken_0x273078 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x273078) {
            ctx->pc = 0x2730A4u;
            goto label_2730a4;
        }
    }
    ctx->pc = 0x273080u;
    // 0x273080: 0x8fa20360  lw          $v0, 0x360($sp)
    ctx->pc = 0x273080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 864)));
    // 0x273084: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x273084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273088: 0xc085530  jal         func_2154C0
    ctx->pc = 0x273088u;
    SET_GPR_U32(ctx, 31, 0x273090u);
    ctx->pc = 0x2154C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154C0u, 0x273088u, 0x273090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273090u;
label_273090:
    // 0x273090: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x273090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273094: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x273094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x273098: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x273098u;
    {
        const bool branch_taken_0x273098 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x273098) {
            ctx->pc = 0x2730A4u;
            goto label_2730a4;
        }
    }
    ctx->pc = 0x2730A0u;
    // 0x2730a0: 0x8fbe0360  lw          $fp, 0x360($sp)
    ctx->pc = 0x2730a0u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 864)));
label_2730a4:
    // 0x2730a4: 0x13c00026  beqz        $fp, . + 4 + (0x26 << 2)
    ctx->pc = 0x2730A4u;
    {
        const bool branch_taken_0x2730a4 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x2730a4) {
            ctx->pc = 0x273140u;
            goto label_273140;
        }
    }
    ctx->pc = 0x2730ACu;
    // 0x2730ac: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2730acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2730b0: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x2730b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2730b4: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2730B4u;
    SET_GPR_U32(ctx, 31, 0x2730BCu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2730B4u, 0x2730BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2730BCu;
label_2730bc:
    // 0x2730bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2730bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2730c0: 0xafa50284  sw          $a1, 0x284($sp)
    ctx->pc = 0x2730c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 644), GPR_U32(ctx, 5));
    // 0x2730c4: 0x8fa60330  lw          $a2, 0x330($sp)
    ctx->pc = 0x2730c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x2730c8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2730c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2730cc: 0x2402051f  addiu       $v0, $zero, 0x51F
    ctx->pc = 0x2730ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1311));
    // 0x2730d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2730d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2730d4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2730d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2730d8: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x2730D8u;
    SET_GPR_U32(ctx, 31, 0x2730E0u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x2730D8u, 0x2730E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2730E0u;
label_2730e0:
    // 0x2730e0: 0xafa20280  sw          $v0, 0x280($sp)
    ctx->pc = 0x2730e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 2));
    // 0x2730e4: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x2730e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x2730e8: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2730E8u;
    {
        const bool branch_taken_0x2730e8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2730e8) {
            ctx->pc = 0x27311Cu;
            goto label_27311c;
        }
    }
    ctx->pc = 0x2730F0u;
    // 0x2730f0: 0x8fa50284  lw          $a1, 0x284($sp)
    ctx->pc = 0x2730f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 644)));
    // 0x2730f4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2730f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2730f8: 0xc0984a4  jal         func_261290
    ctx->pc = 0x2730F8u;
    SET_GPR_U32(ctx, 31, 0x273100u);
    ctx->pc = 0x261290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261290u, 0x2730F8u, 0x273100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273100u;
label_273100:
    // 0x273100: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x273100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273104: 0x8fa60280  lw          $a2, 0x280($sp)
    ctx->pc = 0x273104u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x273108: 0x61023  negu        $v0, $a2
    ctx->pc = 0x273108u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x27310c: 0xa2202a  slt         $a0, $a1, $v0
    ctx->pc = 0x27310cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x273110: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x273110u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273114: 0x100001f9  b           . + 4 + (0x1F9 << 2)
    ctx->pc = 0x273114u;
    {
        const bool branch_taken_0x273114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x273114) {
            ctx->pc = 0x2738FCu;
            goto label_2738fc;
        }
    }
    ctx->pc = 0x27311Cu;
label_27311c:
    // 0x27311c: 0x8fa20284  lw          $v0, 0x284($sp)
    ctx->pc = 0x27311cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 644)));
    // 0x273120: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x273120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273124: 0xc0984a4  jal         func_261290
    ctx->pc = 0x273124u;
    SET_GPR_U32(ctx, 31, 0x27312Cu);
    ctx->pc = 0x261290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261290u, 0x273124u, 0x27312Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27312Cu;
label_27312c:
    // 0x27312c: 0x8fa40280  lw          $a0, 0x280($sp)
    ctx->pc = 0x27312cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x273130: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x273130u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x273134: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x273134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x273138: 0x100001f0  b           . + 4 + (0x1F0 << 2)
    ctx->pc = 0x273138u;
    {
        const bool branch_taken_0x273138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x273138) {
            ctx->pc = 0x2738FCu;
            goto label_2738fc;
        }
    }
    ctx->pc = 0x273140u;
label_273140:
    // 0x273140: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x273140u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273144: 0x100001ed  b           . + 4 + (0x1ED << 2)
    ctx->pc = 0x273144u;
    {
        const bool branch_taken_0x273144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x273144) {
            ctx->pc = 0x2738FCu;
            goto label_2738fc;
        }
    }
    ctx->pc = 0x27314Cu;
label_27314c:
    // 0x27314c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x27314cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273150: 0x8fa40330  lw          $a0, 0x330($sp)
    ctx->pc = 0x273150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x273154: 0x24020523  addiu       $v0, $zero, 0x523
    ctx->pc = 0x273154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1315));
    // 0x273158: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x273158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27315c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27315cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273160: 0xc04146c  jal         func_1051B0
    ctx->pc = 0x273160u;
    SET_GPR_U32(ctx, 31, 0x273168u);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x273160u, 0x273168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273168u;
label_273168:
    // 0x273168: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x273168u;
    {
        const bool branch_taken_0x273168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x273168) {
            ctx->pc = 0x273240u;
            goto label_273240;
        }
    }
    ctx->pc = 0x273170u;
    // 0x273170: 0xafa0027c  sw          $zero, 0x27C($sp)
    ctx->pc = 0x273170u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 636), GPR_U32(ctx, 0));
    // 0x273174: 0x8fa20340  lw          $v0, 0x340($sp)
    ctx->pc = 0x273174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x273178: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x273178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27317c: 0xc096880  jal         func_25A200
    ctx->pc = 0x27317Cu;
    SET_GPR_U32(ctx, 31, 0x273184u);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x27317Cu, 0x273184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273184u;
label_273184:
    // 0x273184: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x273184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273188: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x273188u;
    {
        const bool branch_taken_0x273188 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x273188) {
            ctx->pc = 0x2731D0u;
            goto label_2731d0;
        }
    }
    ctx->pc = 0x273190u;
    // 0x273190: 0x8fa40340  lw          $a0, 0x340($sp)
    ctx->pc = 0x273190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x273194: 0xc096880  jal         func_25A200
    ctx->pc = 0x273194u;
    SET_GPR_U32(ctx, 31, 0x27319Cu);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x273194u, 0x27319Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27319Cu;
label_27319c:
    // 0x27319c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27319cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2731a0: 0xafa50278  sw          $a1, 0x278($sp)
    ctx->pc = 0x2731a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 632), GPR_U32(ctx, 5));
    // 0x2731a4: 0x8fa20278  lw          $v0, 0x278($sp)
    ctx->pc = 0x2731a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
    // 0x2731a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2731a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2731ac: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x2731acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2731b0: 0x7fa20150  sq          $v0, 0x150($sp)
    ctx->pc = 0x2731b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 2));
    // 0x2731b4: 0x7ba50150  lq          $a1, 0x150($sp)
    ctx->pc = 0x2731b4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2731b8: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2731B8u;
    SET_GPR_U32(ctx, 31, 0x2731C0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2731B8u, 0x2731C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2731C0u;
label_2731c0:
    // 0x2731c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2731c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2731c4: 0xafa5027c  sw          $a1, 0x27C($sp)
    ctx->pc = 0x2731c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 636), GPR_U32(ctx, 5));
    // 0x2731c8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2731C8u;
    {
        const bool branch_taken_0x2731c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2731c8) {
            ctx->pc = 0x273224u;
            goto label_273224;
        }
    }
    ctx->pc = 0x2731D0u;
label_2731d0:
    // 0x2731d0: 0x8fa20360  lw          $v0, 0x360($sp)
    ctx->pc = 0x2731d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 864)));
    // 0x2731d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2731d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2731d8: 0xc085530  jal         func_2154C0
    ctx->pc = 0x2731D8u;
    SET_GPR_U32(ctx, 31, 0x2731E0u);
    ctx->pc = 0x2154C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154C0u, 0x2731D8u, 0x2731E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2731E0u;
label_2731e0:
    // 0x2731e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2731e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2731e4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2731e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2731e8: 0x1485000b  bne         $a0, $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x2731E8u;
    {
        const bool branch_taken_0x2731e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x2731e8) {
            ctx->pc = 0x273218u;
            goto label_273218;
        }
    }
    ctx->pc = 0x2731F0u;
    // 0x2731f0: 0x8fa40360  lw          $a0, 0x360($sp)
    ctx->pc = 0x2731f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 864)));
    // 0x2731f4: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x2731f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2731f8: 0x7fa20140  sq          $v0, 0x140($sp)
    ctx->pc = 0x2731f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 2));
    // 0x2731fc: 0x7ba50140  lq          $a1, 0x140($sp)
    ctx->pc = 0x2731fcu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x273200: 0xc085538  jal         func_2154E0
    ctx->pc = 0x273200u;
    SET_GPR_U32(ctx, 31, 0x273208u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x273200u, 0x273208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273208u;
label_273208:
    // 0x273208: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x273208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27320c: 0xafa4027c  sw          $a0, 0x27C($sp)
    ctx->pc = 0x27320cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 636), GPR_U32(ctx, 4));
    // 0x273210: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x273210u;
    {
        const bool branch_taken_0x273210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x273210) {
            ctx->pc = 0x273224u;
            goto label_273224;
        }
    }
    ctx->pc = 0x273218u;
label_273218:
    // 0x273218: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x273218u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27321c: 0x100001b7  b           . + 4 + (0x1B7 << 2)
    ctx->pc = 0x27321Cu;
    {
        const bool branch_taken_0x27321c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27321c) {
            ctx->pc = 0x2738FCu;
            goto label_2738fc;
        }
    }
    ctx->pc = 0x273224u;
label_273224:
    // 0x273224: 0x8fa5027c  lw          $a1, 0x27C($sp)
    ctx->pc = 0x273224u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 636)));
    // 0x273228: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x273228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27322c: 0xc096fec  jal         func_25BFB0
    ctx->pc = 0x27322Cu;
    SET_GPR_U32(ctx, 31, 0x273234u);
    ctx->pc = 0x25BFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BFB0u, 0x27322Cu, 0x273234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273234u;
label_273234:
    // 0x273234: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x273234u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273238: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x273238u;
    {
        const bool branch_taken_0x273238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x273238) {
            ctx->pc = 0x273254u;
            goto label_273254;
        }
    }
    ctx->pc = 0x273240u;
label_273240:
    // 0x273240: 0x8fa40340  lw          $a0, 0x340($sp)
    ctx->pc = 0x273240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x273244: 0xc096fec  jal         func_25BFB0
    ctx->pc = 0x273244u;
    SET_GPR_U32(ctx, 31, 0x27324Cu);
    ctx->pc = 0x25BFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BFB0u, 0x273244u, 0x27324Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27324Cu;
label_27324c:
    // 0x27324c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27324cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273250: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x273250u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_273254:
    // 0x273254: 0x8fa40330  lw          $a0, 0x330($sp)
    ctx->pc = 0x273254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x273258: 0x24050520  addiu       $a1, $zero, 0x520
    ctx->pc = 0x273258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1312));
    // 0x27325c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27325cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273260: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x273260u;
    SET_GPR_U32(ctx, 31, 0x273268u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x273260u, 0x273268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273268u;
label_273268:
    // 0x273268: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x273268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27326c: 0x10440018  beq         $v0, $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x27326Cu;
    {
        const bool branch_taken_0x27326c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x27326c) {
            ctx->pc = 0x2732D0u;
            goto label_2732d0;
        }
    }
    ctx->pc = 0x273274u;
    // 0x273274: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x273274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273278: 0x1045000e  beq         $v0, $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x273278u;
    {
        const bool branch_taken_0x273278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x273278) {
            ctx->pc = 0x2732B4u;
            goto label_2732b4;
        }
    }
    ctx->pc = 0x273280u;
    // 0x273280: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x273280u;
    {
        const bool branch_taken_0x273280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x273280) {
            ctx->pc = 0x273290u;
            goto label_273290;
        }
    }
    ctx->pc = 0x273288u;
    // 0x273288: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x273288u;
    {
        const bool branch_taken_0x273288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x273288) {
            ctx->pc = 0x2733DCu;
            goto label_2733dc;
        }
    }
    ctx->pc = 0x273290u;
label_273290:
    // 0x273290: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x273290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273294: 0xc0970e8  jal         func_25C3A0
    ctx->pc = 0x273294u;
    SET_GPR_U32(ctx, 31, 0x27329Cu);
    ctx->pc = 0x25C3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C3A0u, 0x273294u, 0x27329Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27329Cu;
label_27329c:
    // 0x27329c: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x27329cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2732a0: 0x38820001  xori        $v0, $a0, 0x1
    ctx->pc = 0x2732a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x2732a4: 0x7fa20130  sq          $v0, 0x130($sp)
    ctx->pc = 0x2732a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
    // 0x2732a8: 0x7ba20130  lq          $v0, 0x130($sp)
    ctx->pc = 0x2732a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2732ac: 0x10000193  b           . + 4 + (0x193 << 2)
    ctx->pc = 0x2732ACu;
    {
        const bool branch_taken_0x2732ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2732ac) {
            ctx->pc = 0x2738FCu;
            goto label_2738fc;
        }
    }
    ctx->pc = 0x2732B4u;
label_2732b4:
    // 0x2732b4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2732b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2732b8: 0xc0970e8  jal         func_25C3A0
    ctx->pc = 0x2732B8u;
    SET_GPR_U32(ctx, 31, 0x2732C0u);
    ctx->pc = 0x25C3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C3A0u, 0x2732B8u, 0x2732C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2732C0u;
label_2732c0:
    // 0x2732c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2732c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2732c4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2732c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2732c8: 0x1000018c  b           . + 4 + (0x18C << 2)
    ctx->pc = 0x2732C8u;
    {
        const bool branch_taken_0x2732c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2732c8) {
            ctx->pc = 0x2738FCu;
            goto label_2738fc;
        }
    }
    ctx->pc = 0x2732D0u;
label_2732d0:
    // 0x2732d0: 0x8fa50330  lw          $a1, 0x330($sp)
    ctx->pc = 0x2732d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x2732d4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2732d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2732d8: 0x24020521  addiu       $v0, $zero, 0x521
    ctx->pc = 0x2732d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1313));
    // 0x2732dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2732dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2732e0: 0x2782a168  addiu       $v0, $gp, -0x5E98
    ctx->pc = 0x2732e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943080));
    // 0x2732e4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2732e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2732e8: 0xc041a50  jal         func_106940
    ctx->pc = 0x2732E8u;
    SET_GPR_U32(ctx, 31, 0x2732F0u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x2732E8u, 0x2732F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2732F0u;
label_2732f0:
    // 0x2732f0: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x2732f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2732f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2732f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2732f8: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x2732F8u;
    SET_GPR_U32(ctx, 31, 0x273300u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x2732F8u, 0x273300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273300u;
label_273300:
    // 0x273300: 0x8fa40330  lw          $a0, 0x330($sp)
    ctx->pc = 0x273300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x273304: 0x24020522  addiu       $v0, $zero, 0x522
    ctx->pc = 0x273304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1314));
    // 0x273308: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x273308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27330c: 0x2786a168  addiu       $a2, $gp, -0x5E98
    ctx->pc = 0x27330cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943080));
    // 0x273310: 0xc041a50  jal         func_106940
    ctx->pc = 0x273310u;
    SET_GPR_U32(ctx, 31, 0x273318u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x273310u, 0x273318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273318u;
label_273318:
    // 0x273318: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x273318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x27331c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27331cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273320: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x273320u;
    SET_GPR_U32(ctx, 31, 0x273328u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x273320u, 0x273328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273328u;
label_273328:
    // 0x273328: 0x7fa20120  sq          $v0, 0x120($sp)
    ctx->pc = 0x273328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
    // 0x27332c: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x27332cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x273330: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x273330u;
    SET_GPR_U32(ctx, 31, 0x273338u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x273330u, 0x273338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273338u;
label_273338:
    // 0x273338: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x273338u;
    {
        const bool branch_taken_0x273338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x273338) {
            ctx->pc = 0x27337Cu;
            goto label_27337c;
        }
    }
    ctx->pc = 0x273340u;
    // 0x273340: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x273340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273344: 0xc097134  jal         func_25C4D0
    ctx->pc = 0x273344u;
    SET_GPR_U32(ctx, 31, 0x27334Cu);
    ctx->pc = 0x25C4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C4D0u, 0x273344u, 0x27334Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27334Cu;
label_27334c:
    // 0x27334c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x27334cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273350: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x273350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x273354: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x273354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273358: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x273358u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27335c: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x27335Cu;
    SET_GPR_U32(ctx, 31, 0x273364u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x27335Cu, 0x273364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273364u;
label_273364:
    // 0x273364: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x273364u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273368: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x273368u;
    {
        const bool branch_taken_0x273368 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x273368) {
            ctx->pc = 0x27337Cu;
            goto label_27337c;
        }
    }
    ctx->pc = 0x273370u;
    // 0x273370: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x273370u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273374: 0x10000161  b           . + 4 + (0x161 << 2)
    ctx->pc = 0x273374u;
    {
        const bool branch_taken_0x273374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x273374) {
            ctx->pc = 0x2738FCu;
            goto label_2738fc;
        }
    }
    ctx->pc = 0x27337Cu;
label_27337c:
    // 0x27337c: 0x27a70160  addiu       $a3, $sp, 0x160
    ctx->pc = 0x27337cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x273380: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x273380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273384: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x273384u;
    SET_GPR_U32(ctx, 31, 0x27338Cu);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x273384u, 0x27338Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27338Cu;
label_27338c:
    // 0x27338c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x27338Cu;
    {
        const bool branch_taken_0x27338c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27338c) {
            ctx->pc = 0x2733CCu;
            goto label_2733cc;
        }
    }
    ctx->pc = 0x273394u;
    // 0x273394: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x273394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273398: 0xc09713c  jal         func_25C4F0
    ctx->pc = 0x273398u;
    SET_GPR_U32(ctx, 31, 0x2733A0u);
    ctx->pc = 0x25C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C4F0u, 0x273398u, 0x2733A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2733A0u;
label_2733a0:
    // 0x2733a0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2733a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2733a4: 0x27a20160  addiu       $v0, $sp, 0x160
    ctx->pc = 0x2733a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2733a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2733a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2733ac: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2733acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2733b0: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x2733B0u;
    SET_GPR_U32(ctx, 31, 0x2733B8u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x2733B0u, 0x2733B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2733B8u;
label_2733b8:
    // 0x2733b8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2733B8u;
    {
        const bool branch_taken_0x2733b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2733b8) {
            ctx->pc = 0x2733CCu;
            goto label_2733cc;
        }
    }
    ctx->pc = 0x2733C0u;
    // 0x2733c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2733c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2733c4: 0x1000014d  b           . + 4 + (0x14D << 2)
    ctx->pc = 0x2733C4u;
    {
        const bool branch_taken_0x2733c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2733c4) {
            ctx->pc = 0x2738FCu;
            goto label_2738fc;
        }
    }
    ctx->pc = 0x2733CCu;
label_2733cc:
    // 0x2733cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2733ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2733d0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2733d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2733d4: 0x10000149  b           . + 4 + (0x149 << 2)
    ctx->pc = 0x2733D4u;
    {
        const bool branch_taken_0x2733d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2733d4) {
            ctx->pc = 0x2738FCu;
            goto label_2738fc;
        }
    }
    ctx->pc = 0x2733DCu;
label_2733dc:
    // 0x2733dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2733dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2733e0: 0x10000146  b           . + 4 + (0x146 << 2)
    ctx->pc = 0x2733E0u;
    {
        const bool branch_taken_0x2733e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2733e0) {
            ctx->pc = 0x2738FCu;
            goto label_2738fc;
        }
    }
    ctx->pc = 0x2733E8u;
label_2733e8:
    // 0x2733e8: 0x8fa40330  lw          $a0, 0x330($sp)
    ctx->pc = 0x2733e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x2733ec: 0x24050525  addiu       $a1, $zero, 0x525
    ctx->pc = 0x2733ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1317));
    // 0x2733f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2733f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2733f4: 0xc04146c  jal         func_1051B0
    ctx->pc = 0x2733F4u;
    SET_GPR_U32(ctx, 31, 0x2733FCu);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x2733F4u, 0x2733FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2733FCu;
label_2733fc:
    // 0x2733fc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2733fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273400: 0xa3a6032d  sb          $a2, 0x32D($sp)
    ctx->pc = 0x273400u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 813), (uint8_t)GPR_U32(ctx, 6));
    // 0x273404: 0x8fa70340  lw          $a3, 0x340($sp)
    ctx->pc = 0x273404u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x273408: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x273408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27340c: 0xc0968a8  jal         func_25A2A0
    ctx->pc = 0x27340Cu;
    SET_GPR_U32(ctx, 31, 0x273414u);
    ctx->pc = 0x25A2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A2A0u, 0x27340Cu, 0x273414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273414u;
label_273414:
    // 0x273414: 0xafa20274  sw          $v0, 0x274($sp)
    ctx->pc = 0x273414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 2));
    // 0x273418: 0x8fa20274  lw          $v0, 0x274($sp)
    ctx->pc = 0x273418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
    // 0x27341c: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x27341cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    // 0x273420: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x273420u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x273424: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x273424u;
    {
        const bool branch_taken_0x273424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x273424) {
            ctx->pc = 0x2734D0u;
            goto label_2734d0;
        }
    }
    ctx->pc = 0x27342Cu;
    // 0x27342c: 0x8fa50330  lw          $a1, 0x330($sp)
    ctx->pc = 0x27342cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x273430: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x273430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273434: 0x24020524  addiu       $v0, $zero, 0x524
    ctx->pc = 0x273434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1316));
    // 0x273438: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x273438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27343c: 0x2786a168  addiu       $a2, $gp, -0x5E98
    ctx->pc = 0x27343cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943080));
    // 0x273440: 0xc041a50  jal         func_106940
    ctx->pc = 0x273440u;
    SET_GPR_U32(ctx, 31, 0x273448u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x273440u, 0x273448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273448u;
label_273448:
    // 0x273448: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x273448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x27344c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27344cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273450: 0xc040304  jal         func_100C10
    ctx->pc = 0x273450u;
    SET_GPR_U32(ctx, 31, 0x273458u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x273450u, 0x273458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273458u;
label_273458:
    // 0x273458: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x273458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27345c: 0x8fa20274  lw          $v0, 0x274($sp)
    ctx->pc = 0x27345cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
    // 0x273460: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x273460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273464: 0xc09138c  jal         func_244E30
    ctx->pc = 0x273464u;
    SET_GPR_U32(ctx, 31, 0x27346Cu);
    ctx->pc = 0x244E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244E30u, 0x273464u, 0x27346Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27346Cu;
label_27346c:
    // 0x27346c: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x27346cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x273470: 0x27a201c0  addiu       $v0, $sp, 0x1C0
    ctx->pc = 0x273470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x273474: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x273474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273478: 0xc0457a8  jal         func_115EA0
    ctx->pc = 0x273478u;
    SET_GPR_U32(ctx, 31, 0x273480u);
    ctx->pc = 0x115EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115EA0u, 0x273478u, 0x273480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273480u;
label_273480:
    // 0x273480: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x273480u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273484: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x273484u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x273488: 0x462826  xor         $a1, $v0, $a2
    ctx->pc = 0x273488u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 6));
    // 0x27348c: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x27348cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x273490: 0xa3a5032c  sb          $a1, 0x32C($sp)
    ctx->pc = 0x273490u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 812), (uint8_t)GPR_U32(ctx, 5));
    // 0x273494: 0x27a601c0  addiu       $a2, $sp, 0x1C0
    ctx->pc = 0x273494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x273498: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x273498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27349c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x27349cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2734a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2734a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2734a4: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x2734A4u;
    SET_GPR_U32(ctx, 31, 0x2734ACu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2734A4u, 0x2734ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2734ACu;
label_2734ac:
    // 0x2734ac: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2734acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2734b0: 0x93a2032d  lbu         $v0, 0x32D($sp)
    ctx->pc = 0x2734b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 813)));
    // 0x2734b4: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x2734b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2734b8: 0x93a2032c  lbu         $v0, 0x32C($sp)
    ctx->pc = 0x2734b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 812)));
    // 0x2734bc: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2734bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2734c0: 0xa41026  xor         $v0, $a1, $a0
    ctx->pc = 0x2734c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 4));
    // 0x2734c4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2734c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2734c8: 0x1000010c  b           . + 4 + (0x10C << 2)
    ctx->pc = 0x2734C8u;
    {
        const bool branch_taken_0x2734c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2734c8) {
            ctx->pc = 0x2738FCu;
            goto label_2738fc;
        }
    }
    ctx->pc = 0x2734D0u;
label_2734d0:
    // 0x2734d0: 0x93a4032d  lbu         $a0, 0x32D($sp)
    ctx->pc = 0x2734d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 813)));
    // 0x2734d4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2734d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2734d8: 0x10000108  b           . + 4 + (0x108 << 2)
    ctx->pc = 0x2734D8u;
    {
        const bool branch_taken_0x2734d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2734d8) {
            ctx->pc = 0x2738FCu;
            goto label_2738fc;
        }
    }
    ctx->pc = 0x2734E0u;
label_2734e0:
    // 0x2734e0: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x2734e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x2734e4: 0xc041b48  jal         func_106D20
    ctx->pc = 0x2734E4u;
    SET_GPR_U32(ctx, 31, 0x2734ECu);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x2734E4u, 0x2734ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2734ECu;
label_2734ec:
    // 0x2734ec: 0x8f85bbb4  lw          $a1, -0x444C($gp)
    ctx->pc = 0x2734ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x2734f0: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x2734f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x2734f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2734f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2734f8: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2734f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2734fc: 0x24a5d010  addiu       $a1, $a1, -0x2FF0
    ctx->pc = 0x2734fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955024));
    // 0x273500: 0x2782a168  addiu       $v0, $gp, -0x5E98
    ctx->pc = 0x273500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943080));
    // 0x273504: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x273504u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273508: 0xc04206c  jal         func_1081B0
    ctx->pc = 0x273508u;
    SET_GPR_U32(ctx, 31, 0x273510u);
    ctx->pc = 0x1081B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1081B0u, 0x273508u, 0x273510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273510u;
label_273510:
    // 0x273510: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x273510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273514: 0x27a201b0  addiu       $v0, $sp, 0x1B0
    ctx->pc = 0x273514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x273518: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x273518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27351c: 0xc040304  jal         func_100C10
    ctx->pc = 0x27351Cu;
    SET_GPR_U32(ctx, 31, 0x273524u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x27351Cu, 0x273524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273524u;
label_273524:
    // 0x273524: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x273524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273528: 0x27a20230  addiu       $v0, $sp, 0x230
    ctx->pc = 0x273528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x27352c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27352cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273530: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x273530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x273534: 0xc1190f4  jal         func_4643D0
    ctx->pc = 0x273534u;
    SET_GPR_U32(ctx, 31, 0x27353Cu);
    ctx->pc = 0x4643D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4643D0u, 0x273534u, 0x27353Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27353Cu;
label_27353c:
    // 0x27353c: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x27353cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x273540: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x273540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273544: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x273544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x273548: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x273548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27354c: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x27354Cu;
    SET_GPR_U32(ctx, 31, 0x273554u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x27354Cu, 0x273554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273554u;
label_273554:
    // 0x273554: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x273554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273558: 0x8fa20330  lw          $v0, 0x330($sp)
    ctx->pc = 0x273558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x27355c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27355cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273560: 0x24020526  addiu       $v0, $zero, 0x526
    ctx->pc = 0x273560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1318));
    // 0x273564: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x273564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273568: 0x2786a168  addiu       $a2, $gp, -0x5E98
    ctx->pc = 0x273568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943080));
    // 0x27356c: 0xc041a50  jal         func_106940
    ctx->pc = 0x27356Cu;
    SET_GPR_U32(ctx, 31, 0x273574u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x27356Cu, 0x273574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273574u;
label_273574:
    // 0x273574: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x273574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x273578: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x273578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27357c: 0xc040304  jal         func_100C10
    ctx->pc = 0x27357Cu;
    SET_GPR_U32(ctx, 31, 0x273584u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x27357Cu, 0x273584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273584u;
label_273584:
    // 0x273584: 0x27a20230  addiu       $v0, $sp, 0x230
    ctx->pc = 0x273584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x273588: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x273588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27358c: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x27358Cu;
    SET_GPR_U32(ctx, 31, 0x273594u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x27358Cu, 0x273594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273594u;
label_273594:
    // 0x273594: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x273594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    // 0x273598: 0x27a20220  addiu       $v0, $sp, 0x220
    ctx->pc = 0x273598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x27359c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27359cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2735a0: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x2735A0u;
    SET_GPR_U32(ctx, 31, 0x2735A8u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x2735A0u, 0x2735A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2735A8u;
label_2735a8:
    // 0x2735a8: 0x7ba400f0  lq          $a0, 0xF0($sp)
    ctx->pc = 0x2735a8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2735ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2735acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2735b0: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x2735B0u;
    SET_GPR_U32(ctx, 31, 0x2735B8u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x2735B0u, 0x2735B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2735B8u;
label_2735b8:
    // 0x2735b8: 0x402826  xor         $a1, $v0, $zero
    ctx->pc = 0x2735b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x2735bc: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x2735bcu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2735c0: 0xa3a5032b  sb          $a1, 0x32B($sp)
    ctx->pc = 0x2735c0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 811), (uint8_t)GPR_U32(ctx, 5));
    // 0x2735c4: 0x8fa60330  lw          $a2, 0x330($sp)
    ctx->pc = 0x2735c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x2735c8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2735c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2735cc: 0x24020527  addiu       $v0, $zero, 0x527
    ctx->pc = 0x2735ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1319));
    // 0x2735d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2735d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2735d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2735d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2735d8: 0xc04146c  jal         func_1051B0
    ctx->pc = 0x2735D8u;
    SET_GPR_U32(ctx, 31, 0x2735E0u);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x2735D8u, 0x2735E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2735E0u;
label_2735e0:
    // 0x2735e0: 0xa3a2032a  sb          $v0, 0x32A($sp)
    ctx->pc = 0x2735e0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 810), (uint8_t)GPR_U32(ctx, 2));
    // 0x2735e4: 0x93a4032a  lbu         $a0, 0x32A($sp)
    ctx->pc = 0x2735e4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 810)));
    // 0x2735e8: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x2735e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2735ec: 0x93a2032b  lbu         $v0, 0x32B($sp)
    ctx->pc = 0x2735ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 811)));
    // 0x2735f0: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x2735f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2735f4: 0xa61026  xor         $v0, $a1, $a2
    ctx->pc = 0x2735f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 6));
    // 0x2735f8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2735f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2735fc: 0xa3a20325  sb          $v0, 0x325($sp)
    ctx->pc = 0x2735fcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 805), (uint8_t)GPR_U32(ctx, 2));
    // 0x273600: 0x27a20220  addiu       $v0, $sp, 0x220
    ctx->pc = 0x273600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x273604: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x273604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273608: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x273608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27360c: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x27360Cu;
    SET_GPR_U32(ctx, 31, 0x273614u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x27360Cu, 0x273614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273614u;
label_273614:
    // 0x273614: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x273614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273618: 0x27a60230  addiu       $a2, $sp, 0x230
    ctx->pc = 0x273618u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x27361c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x27361cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273620: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x273620u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x273624: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x273624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273628: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x273628u;
    SET_GPR_U32(ctx, 31, 0x273630u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x273628u, 0x273630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273630u;
label_273630:
    // 0x273630: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x273630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273634: 0x93a40325  lbu         $a0, 0x325($sp)
    ctx->pc = 0x273634u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 805)));
    // 0x273638: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x273638u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27363c: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x27363Cu;
    {
        const bool branch_taken_0x27363c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27363c) {
            ctx->pc = 0x2738FCu;
            goto label_2738fc;
        }
    }
    ctx->pc = 0x273644u;
label_273644:
    // 0x273644: 0x8fa50330  lw          $a1, 0x330($sp)
    ctx->pc = 0x273644u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x273648: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x273648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27364c: 0x24050529  addiu       $a1, $zero, 0x529
    ctx->pc = 0x27364cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1321));
    // 0x273650: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x273650u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273654: 0xc04146c  jal         func_1051B0
    ctx->pc = 0x273654u;
    SET_GPR_U32(ctx, 31, 0x27365Cu);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x273654u, 0x27365Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27365Cu;
label_27365c:
    // 0x27365c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27365cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273660: 0xa3a50329  sb          $a1, 0x329($sp)
    ctx->pc = 0x273660u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 809), (uint8_t)GPR_U32(ctx, 5));
    // 0x273664: 0x8fa40340  lw          $a0, 0x340($sp)
    ctx->pc = 0x273664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x273668: 0xc096874  jal         func_25A1D0
    ctx->pc = 0x273668u;
    SET_GPR_U32(ctx, 31, 0x273670u);
    ctx->pc = 0x25A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A1D0u, 0x273668u, 0x273670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273670u;
label_273670:
    // 0x273670: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x273670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273674: 0x10a0005b  beqz        $a1, . + 4 + (0x5B << 2)
    ctx->pc = 0x273674u;
    {
        const bool branch_taken_0x273674 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x273674) {
            ctx->pc = 0x2737E4u;
            goto label_2737e4;
        }
    }
    ctx->pc = 0x27367Cu;
    // 0x27367c: 0x8fa40330  lw          $a0, 0x330($sp)
    ctx->pc = 0x27367cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x273680: 0x24050576  addiu       $a1, $zero, 0x576
    ctx->pc = 0x273680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1398));
    // 0x273684: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x273684u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x273688: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x273688u;
    SET_GPR_U32(ctx, 31, 0x273690u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x273688u, 0x273690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273690u;
label_273690:
    // 0x273690: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x273690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273694: 0xafa50270  sw          $a1, 0x270($sp)
    ctx->pc = 0x273694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 5));
    // 0x273698: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x273698u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27369c: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x27369cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x2736a0: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2736a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2736a4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2736A4u;
    {
        const bool branch_taken_0x2736a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2736a4) {
            ctx->pc = 0x2736ECu;
            goto label_2736ec;
        }
    }
    ctx->pc = 0x2736ACu;
    // 0x2736ac: 0xc0b06cc  jal         func_2C1B30
    ctx->pc = 0x2736ACu;
    SET_GPR_U32(ctx, 31, 0x2736B4u);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x2736ACu, 0x2736B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2736B4u;
label_2736b4:
    // 0x2736b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2736b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2736b8: 0xc0b06c4  jal         func_2C1B10
    ctx->pc = 0x2736B8u;
    SET_GPR_U32(ctx, 31, 0x2736C0u);
    ctx->pc = 0x2C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B10u, 0x2736B8u, 0x2736C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2736C0u;
label_2736c0:
    // 0x2736c0: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x2736c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x2736c4: 0x8fa20340  lw          $v0, 0x340($sp)
    ctx->pc = 0x2736c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x2736c8: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x2736c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x2736cc: 0x7ba400e0  lq          $a0, 0xE0($sp)
    ctx->pc = 0x2736ccu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2736d0: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x2736d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2736d4: 0x8c45002c  lw          $a1, 0x2C($v0)
    ctx->pc = 0x2736d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2736d8: 0xc0b4d8c  jal         func_2D3630
    ctx->pc = 0x2736D8u;
    SET_GPR_U32(ctx, 31, 0x2736E0u);
    ctx->pc = 0x2D3630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3630u, 0x2736D8u, 0x2736E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2736E0u;
label_2736e0:
    // 0x2736e0: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x2736e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2736e4: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x2736e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2736e8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2736e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2736ec:
    // 0x2736ec: 0x16a00047  bnez        $s5, . + 4 + (0x47 << 2)
    ctx->pc = 0x2736ECu;
    {
        const bool branch_taken_0x2736ec = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x2736ec) {
            ctx->pc = 0x27380Cu;
            goto label_27380c;
        }
    }
    ctx->pc = 0x2736F4u;
    // 0x2736f4: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x2736f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x2736f8: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x2736f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x2736fc: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x2736fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x273700: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x273700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x273704: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x273704u;
    {
        const bool branch_taken_0x273704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x273704) {
            ctx->pc = 0x27380Cu;
            goto label_27380c;
        }
    }
    ctx->pc = 0x27370Cu;
    // 0x27370c: 0x8fa20360  lw          $v0, 0x360($sp)
    ctx->pc = 0x27370cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 864)));
    // 0x273710: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x273710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273714: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x273714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x273718: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x273718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27371c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x27371Cu;
    SET_GPR_U32(ctx, 31, 0x273724u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x27371Cu, 0x273724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273724u;
label_273724:
    // 0x273724: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x273724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273728: 0xafa5026c  sw          $a1, 0x26C($sp)
    ctx->pc = 0x273728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 5));
    // 0x27372c: 0x8fb1026c  lw          $s1, 0x26C($sp)
    ctx->pc = 0x27372cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
    // 0x273730: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x273730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273734: 0xc0976e4  jal         func_25DB90
    ctx->pc = 0x273734u;
    SET_GPR_U32(ctx, 31, 0x27373Cu);
    ctx->pc = 0x25DB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25DB90u, 0x273734u, 0x27373Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27373Cu;
label_27373c:
    // 0x27373c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27373cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273740: 0xafa40268  sw          $a0, 0x268($sp)
    ctx->pc = 0x273740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 4));
    // 0x273744: 0xafa00264  sw          $zero, 0x264($sp)
    ctx->pc = 0x273744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 0));
    // 0x273748: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x273748u;
    {
        const bool branch_taken_0x273748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x273748) {
            ctx->pc = 0x2737C8u;
            goto label_2737c8;
        }
    }
    ctx->pc = 0x273750u;
label_273750:
    // 0x273750: 0x8fa2026c  lw          $v0, 0x26C($sp)
    ctx->pc = 0x273750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
    // 0x273754: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x273754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273758: 0xc0976dc  jal         func_25DB70
    ctx->pc = 0x273758u;
    SET_GPR_U32(ctx, 31, 0x273760u);
    ctx->pc = 0x25DB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25DB70u, 0x273758u, 0x273760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273760u;
label_273760:
    // 0x273760: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x273760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273764: 0x8fa50264  lw          $a1, 0x264($sp)
    ctx->pc = 0x273764u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
    // 0x273768: 0xc09748c  jal         func_25D230
    ctx->pc = 0x273768u;
    SET_GPR_U32(ctx, 31, 0x273770u);
    ctx->pc = 0x25D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D230u, 0x273768u, 0x273770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273770u;
label_273770:
    // 0x273770: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x273770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x273774: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x273774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x273778: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x273778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27377c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x27377Cu;
    SET_GPR_U32(ctx, 31, 0x273784u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x27377Cu, 0x273784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273784u;
label_273784:
    // 0x273784: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x273784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273788: 0xafa50260  sw          $a1, 0x260($sp)
    ctx->pc = 0x273788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 5));
    // 0x27378c: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x27378cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x273790: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x273790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273794: 0xc096b6c  jal         func_25ADB0
    ctx->pc = 0x273794u;
    SET_GPR_U32(ctx, 31, 0x27379Cu);
    ctx->pc = 0x25ADB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25ADB0u, 0x273794u, 0x27379Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27379Cu;
label_27379c:
    // 0x27379c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x27379cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2737a0: 0x12c00006  beqz        $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x2737A0u;
    {
        const bool branch_taken_0x2737a0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x2737a0) {
            ctx->pc = 0x2737BCu;
            goto label_2737bc;
        }
    }
    ctx->pc = 0x2737A8u;
    // 0x2737a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2737a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2737ac: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2737acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2737b0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2737b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2737b4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2737B4u;
    {
        const bool branch_taken_0x2737b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2737b4) {
            ctx->pc = 0x27380Cu;
            goto label_27380c;
        }
    }
    ctx->pc = 0x2737BCu;
label_2737bc:
    // 0x2737bc: 0x8fa40264  lw          $a0, 0x264($sp)
    ctx->pc = 0x2737bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
    // 0x2737c0: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x2737c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2737c4: 0xafa20264  sw          $v0, 0x264($sp)
    ctx->pc = 0x2737c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 2));
label_2737c8:
    // 0x2737c8: 0x8fa50264  lw          $a1, 0x264($sp)
    ctx->pc = 0x2737c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
    // 0x2737cc: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x2737ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x2737d0: 0xa2202b  sltu        $a0, $a1, $v0
    ctx->pc = 0x2737d0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2737d4: 0x1480ffde  bnez        $a0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x2737D4u;
    {
        const bool branch_taken_0x2737d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2737d4) {
            ctx->pc = 0x273750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_273750;
        }
    }
    ctx->pc = 0x2737DCu;
    // 0x2737dc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2737DCu;
    {
        const bool branch_taken_0x2737dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2737dc) {
            ctx->pc = 0x27380Cu;
            goto label_27380c;
        }
    }
    ctx->pc = 0x2737E4u;
label_2737e4:
    // 0x2737e4: 0x8fa20330  lw          $v0, 0x330($sp)
    ctx->pc = 0x2737e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x2737e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2737e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2737ec: 0x24050528  addiu       $a1, $zero, 0x528
    ctx->pc = 0x2737ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1320));
    // 0x2737f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2737f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2737f4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2737f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2737f8: 0xc04146c  jal         func_1051B0
    ctx->pc = 0x2737F8u;
    SET_GPR_U32(ctx, 31, 0x273800u);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x2737F8u, 0x273800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273800u;
label_273800:
    // 0x273800: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x273800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273804: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x273804u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x273808: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x273808u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_27380c:
    // 0x27380c: 0x93a20329  lbu         $v0, 0x329($sp)
    ctx->pc = 0x27380cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 809)));
    // 0x273810: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x273810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x273814: 0x32a300ff  andi        $v1, $s5, 0xFF
    ctx->pc = 0x273814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x273818: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x273818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x27381c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x27381cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x273820: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x273820u;
    {
        const bool branch_taken_0x273820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x273820) {
            ctx->pc = 0x2738FCu;
            goto label_2738fc;
        }
    }
    ctx->pc = 0x273828u;
label_273828:
    // 0x273828: 0x8fa40330  lw          $a0, 0x330($sp)
    ctx->pc = 0x273828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x27382c: 0x2402052a  addiu       $v0, $zero, 0x52A
    ctx->pc = 0x27382cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1322));
    // 0x273830: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x273830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273834: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x273834u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273838: 0xc04146c  jal         func_1051B0
    ctx->pc = 0x273838u;
    SET_GPR_U32(ctx, 31, 0x273840u);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x273838u, 0x273840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273840u;
label_273840:
    // 0x273840: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x273840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273844: 0xa3a50328  sb          $a1, 0x328($sp)
    ctx->pc = 0x273844u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 808), (uint8_t)GPR_U32(ctx, 5));
    // 0x273848: 0xc0b06cc  jal         func_2C1B30
    ctx->pc = 0x273848u;
    SET_GPR_U32(ctx, 31, 0x273850u);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x273848u, 0x273850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273850u;
label_273850:
    // 0x273850: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x273850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273854: 0xc0b06c4  jal         func_2C1B10
    ctx->pc = 0x273854u;
    SET_GPR_U32(ctx, 31, 0x27385Cu);
    ctx->pc = 0x2C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B10u, 0x273854u, 0x27385Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27385Cu;
label_27385c:
    // 0x27385c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x27385cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273860: 0x8fa20340  lw          $v0, 0x340($sp)
    ctx->pc = 0x273860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x273864: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x273864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273868: 0x8c45002c  lw          $a1, 0x2C($v0)
    ctx->pc = 0x273868u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x27386c: 0xc0b4aac  jal         func_2D2AB0
    ctx->pc = 0x27386Cu;
    SET_GPR_U32(ctx, 31, 0x273874u);
    ctx->pc = 0x2D2AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2AB0u, 0x27386Cu, 0x273874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273874u;
label_273874:
    // 0x273874: 0xa3a20327  sb          $v0, 0x327($sp)
    ctx->pc = 0x273874u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 807), (uint8_t)GPR_U32(ctx, 2));
    // 0x273878: 0xc0b06cc  jal         func_2C1B30
    ctx->pc = 0x273878u;
    SET_GPR_U32(ctx, 31, 0x273880u);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x273878u, 0x273880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273880u;
label_273880:
    // 0x273880: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x273880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273884: 0xc0b06c4  jal         func_2C1B10
    ctx->pc = 0x273884u;
    SET_GPR_U32(ctx, 31, 0x27388Cu);
    ctx->pc = 0x2C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B10u, 0x273884u, 0x27388Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27388Cu;
label_27388c:
    // 0x27388c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27388cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273890: 0x8fa50360  lw          $a1, 0x360($sp)
    ctx->pc = 0x273890u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 864)));
    // 0x273894: 0xc0b4aac  jal         func_2D2AB0
    ctx->pc = 0x273894u;
    SET_GPR_U32(ctx, 31, 0x27389Cu);
    ctx->pc = 0x2D2AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2AB0u, 0x273894u, 0x27389Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27389Cu;
label_27389c:
    // 0x27389c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27389cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2738a0: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x2738a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2738a4: 0x93a40327  lbu         $a0, 0x327($sp)
    ctx->pc = 0x2738a4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 807)));
    // 0x2738a8: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x2738a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2738ac: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x2738acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x2738b0: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x2738b0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2738b4: 0x38850001  xori        $a1, $a0, 0x1
    ctx->pc = 0x2738b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x2738b8: 0x38b70001  xori        $s7, $a1, 0x1
    ctx->pc = 0x2738b8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x2738bc: 0xa3b70327  sb          $s7, 0x327($sp)
    ctx->pc = 0x2738bcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 807), (uint8_t)GPR_U32(ctx, 23));
    // 0x2738c0: 0x93a40328  lbu         $a0, 0x328($sp)
    ctx->pc = 0x2738c0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 808)));
    // 0x2738c4: 0x309700ff  andi        $s7, $a0, 0xFF
    ctx->pc = 0x2738c4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2738c8: 0x93a20327  lbu         $v0, 0x327($sp)
    ctx->pc = 0x2738c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 807)));
    // 0x2738cc: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x2738ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x2738d0: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x2738d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2738d4: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2738d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2738d8: 0x2e42826  xor         $a1, $s7, $a0
    ctx->pc = 0x2738d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 23) ^ GPR_U64(ctx, 4));
    // 0x2738dc: 0x5282b  sltu        $a1, $zero, $a1
    ctx->pc = 0x2738dcu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2738e0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2738e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2738e4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2738E4u;
    {
        const bool branch_taken_0x2738e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2738e4) {
            ctx->pc = 0x2738FCu;
            goto label_2738fc;
        }
    }
    ctx->pc = 0x2738ECu;
label_2738ec:
    // 0x2738ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2738ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2738f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2738F0u;
    {
        const bool branch_taken_0x2738f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2738f0) {
            ctx->pc = 0x2738FCu;
            goto label_2738fc;
        }
    }
    ctx->pc = 0x2738F8u;
label_2738f8:
    // 0x2738f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2738f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2738fc:
    // 0x2738fc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2738fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x273900: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x273900u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x273904: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x273904u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x273908: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x273908u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27390c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x27390cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x273910: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x273910u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x273914: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x273914u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x273918: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x273918u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27391c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27391cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x273920: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x273920u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x273924: 0x27bd0370  addiu       $sp, $sp, 0x370
    ctx->pc = 0x273924u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
    // 0x273928: 0x3e00008  jr          $ra
    ctx->pc = 0x273928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x273930u;
}
