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

// Function: sub_0045C740
// Address: 0x45c740 - 0x45ca80
void sub_0045C740_0x45c740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045C740_0x45c740");
#endif

    switch (ctx->pc) {
        case 0x45c740u: goto label_45c740;
        case 0x45c744u: goto label_45c744;
        case 0x45c748u: goto label_45c748;
        case 0x45c74cu: goto label_45c74c;
        case 0x45c750u: goto label_45c750;
        case 0x45c754u: goto label_45c754;
        case 0x45c758u: goto label_45c758;
        case 0x45c75cu: goto label_45c75c;
        case 0x45c760u: goto label_45c760;
        case 0x45c764u: goto label_45c764;
        case 0x45c768u: goto label_45c768;
        case 0x45c76cu: goto label_45c76c;
        case 0x45c770u: goto label_45c770;
        case 0x45c774u: goto label_45c774;
        case 0x45c778u: goto label_45c778;
        case 0x45c77cu: goto label_45c77c;
        case 0x45c780u: goto label_45c780;
        case 0x45c784u: goto label_45c784;
        case 0x45c788u: goto label_45c788;
        case 0x45c78cu: goto label_45c78c;
        case 0x45c790u: goto label_45c790;
        case 0x45c794u: goto label_45c794;
        case 0x45c798u: goto label_45c798;
        case 0x45c79cu: goto label_45c79c;
        case 0x45c7a0u: goto label_45c7a0;
        case 0x45c7a4u: goto label_45c7a4;
        case 0x45c7a8u: goto label_45c7a8;
        case 0x45c7acu: goto label_45c7ac;
        case 0x45c7b0u: goto label_45c7b0;
        case 0x45c7b4u: goto label_45c7b4;
        case 0x45c7b8u: goto label_45c7b8;
        case 0x45c7bcu: goto label_45c7bc;
        case 0x45c7c0u: goto label_45c7c0;
        case 0x45c7c4u: goto label_45c7c4;
        case 0x45c7c8u: goto label_45c7c8;
        case 0x45c7ccu: goto label_45c7cc;
        case 0x45c7d0u: goto label_45c7d0;
        case 0x45c7d4u: goto label_45c7d4;
        case 0x45c7d8u: goto label_45c7d8;
        case 0x45c7dcu: goto label_45c7dc;
        case 0x45c7e0u: goto label_45c7e0;
        case 0x45c7e4u: goto label_45c7e4;
        case 0x45c7e8u: goto label_45c7e8;
        case 0x45c7ecu: goto label_45c7ec;
        case 0x45c7f0u: goto label_45c7f0;
        case 0x45c7f4u: goto label_45c7f4;
        case 0x45c7f8u: goto label_45c7f8;
        case 0x45c7fcu: goto label_45c7fc;
        case 0x45c800u: goto label_45c800;
        case 0x45c804u: goto label_45c804;
        case 0x45c808u: goto label_45c808;
        case 0x45c80cu: goto label_45c80c;
        case 0x45c810u: goto label_45c810;
        case 0x45c814u: goto label_45c814;
        case 0x45c818u: goto label_45c818;
        case 0x45c81cu: goto label_45c81c;
        case 0x45c820u: goto label_45c820;
        case 0x45c824u: goto label_45c824;
        case 0x45c828u: goto label_45c828;
        case 0x45c82cu: goto label_45c82c;
        case 0x45c830u: goto label_45c830;
        case 0x45c834u: goto label_45c834;
        case 0x45c838u: goto label_45c838;
        case 0x45c83cu: goto label_45c83c;
        case 0x45c840u: goto label_45c840;
        case 0x45c844u: goto label_45c844;
        case 0x45c848u: goto label_45c848;
        case 0x45c84cu: goto label_45c84c;
        case 0x45c850u: goto label_45c850;
        case 0x45c854u: goto label_45c854;
        case 0x45c858u: goto label_45c858;
        case 0x45c85cu: goto label_45c85c;
        case 0x45c860u: goto label_45c860;
        case 0x45c864u: goto label_45c864;
        case 0x45c868u: goto label_45c868;
        case 0x45c86cu: goto label_45c86c;
        case 0x45c870u: goto label_45c870;
        case 0x45c874u: goto label_45c874;
        case 0x45c878u: goto label_45c878;
        case 0x45c87cu: goto label_45c87c;
        case 0x45c880u: goto label_45c880;
        case 0x45c884u: goto label_45c884;
        case 0x45c888u: goto label_45c888;
        case 0x45c88cu: goto label_45c88c;
        case 0x45c890u: goto label_45c890;
        case 0x45c894u: goto label_45c894;
        case 0x45c898u: goto label_45c898;
        case 0x45c89cu: goto label_45c89c;
        case 0x45c8a0u: goto label_45c8a0;
        case 0x45c8a4u: goto label_45c8a4;
        case 0x45c8a8u: goto label_45c8a8;
        case 0x45c8acu: goto label_45c8ac;
        case 0x45c8b0u: goto label_45c8b0;
        case 0x45c8b4u: goto label_45c8b4;
        case 0x45c8b8u: goto label_45c8b8;
        case 0x45c8bcu: goto label_45c8bc;
        case 0x45c8c0u: goto label_45c8c0;
        case 0x45c8c4u: goto label_45c8c4;
        case 0x45c8c8u: goto label_45c8c8;
        case 0x45c8ccu: goto label_45c8cc;
        case 0x45c8d0u: goto label_45c8d0;
        case 0x45c8d4u: goto label_45c8d4;
        case 0x45c8d8u: goto label_45c8d8;
        case 0x45c8dcu: goto label_45c8dc;
        case 0x45c8e0u: goto label_45c8e0;
        case 0x45c8e4u: goto label_45c8e4;
        case 0x45c8e8u: goto label_45c8e8;
        case 0x45c8ecu: goto label_45c8ec;
        case 0x45c8f0u: goto label_45c8f0;
        case 0x45c8f4u: goto label_45c8f4;
        case 0x45c8f8u: goto label_45c8f8;
        case 0x45c8fcu: goto label_45c8fc;
        case 0x45c900u: goto label_45c900;
        case 0x45c904u: goto label_45c904;
        case 0x45c908u: goto label_45c908;
        case 0x45c90cu: goto label_45c90c;
        case 0x45c910u: goto label_45c910;
        case 0x45c914u: goto label_45c914;
        case 0x45c918u: goto label_45c918;
        case 0x45c91cu: goto label_45c91c;
        case 0x45c920u: goto label_45c920;
        case 0x45c924u: goto label_45c924;
        case 0x45c928u: goto label_45c928;
        case 0x45c92cu: goto label_45c92c;
        case 0x45c930u: goto label_45c930;
        case 0x45c934u: goto label_45c934;
        case 0x45c938u: goto label_45c938;
        case 0x45c93cu: goto label_45c93c;
        case 0x45c940u: goto label_45c940;
        case 0x45c944u: goto label_45c944;
        case 0x45c948u: goto label_45c948;
        case 0x45c94cu: goto label_45c94c;
        case 0x45c950u: goto label_45c950;
        case 0x45c954u: goto label_45c954;
        case 0x45c958u: goto label_45c958;
        case 0x45c95cu: goto label_45c95c;
        case 0x45c960u: goto label_45c960;
        case 0x45c964u: goto label_45c964;
        case 0x45c968u: goto label_45c968;
        case 0x45c96cu: goto label_45c96c;
        case 0x45c970u: goto label_45c970;
        case 0x45c974u: goto label_45c974;
        case 0x45c978u: goto label_45c978;
        case 0x45c97cu: goto label_45c97c;
        case 0x45c980u: goto label_45c980;
        case 0x45c984u: goto label_45c984;
        case 0x45c988u: goto label_45c988;
        case 0x45c98cu: goto label_45c98c;
        case 0x45c990u: goto label_45c990;
        case 0x45c994u: goto label_45c994;
        case 0x45c998u: goto label_45c998;
        case 0x45c99cu: goto label_45c99c;
        case 0x45c9a0u: goto label_45c9a0;
        case 0x45c9a4u: goto label_45c9a4;
        case 0x45c9a8u: goto label_45c9a8;
        case 0x45c9acu: goto label_45c9ac;
        case 0x45c9b0u: goto label_45c9b0;
        case 0x45c9b4u: goto label_45c9b4;
        case 0x45c9b8u: goto label_45c9b8;
        case 0x45c9bcu: goto label_45c9bc;
        case 0x45c9c0u: goto label_45c9c0;
        case 0x45c9c4u: goto label_45c9c4;
        case 0x45c9c8u: goto label_45c9c8;
        case 0x45c9ccu: goto label_45c9cc;
        case 0x45c9d0u: goto label_45c9d0;
        case 0x45c9d4u: goto label_45c9d4;
        case 0x45c9d8u: goto label_45c9d8;
        case 0x45c9dcu: goto label_45c9dc;
        case 0x45c9e0u: goto label_45c9e0;
        case 0x45c9e4u: goto label_45c9e4;
        case 0x45c9e8u: goto label_45c9e8;
        case 0x45c9ecu: goto label_45c9ec;
        case 0x45c9f0u: goto label_45c9f0;
        case 0x45c9f4u: goto label_45c9f4;
        case 0x45c9f8u: goto label_45c9f8;
        case 0x45c9fcu: goto label_45c9fc;
        case 0x45ca00u: goto label_45ca00;
        case 0x45ca04u: goto label_45ca04;
        case 0x45ca08u: goto label_45ca08;
        case 0x45ca0cu: goto label_45ca0c;
        case 0x45ca10u: goto label_45ca10;
        case 0x45ca14u: goto label_45ca14;
        case 0x45ca18u: goto label_45ca18;
        case 0x45ca1cu: goto label_45ca1c;
        case 0x45ca20u: goto label_45ca20;
        case 0x45ca24u: goto label_45ca24;
        case 0x45ca28u: goto label_45ca28;
        case 0x45ca2cu: goto label_45ca2c;
        case 0x45ca30u: goto label_45ca30;
        case 0x45ca34u: goto label_45ca34;
        case 0x45ca38u: goto label_45ca38;
        case 0x45ca3cu: goto label_45ca3c;
        case 0x45ca40u: goto label_45ca40;
        case 0x45ca44u: goto label_45ca44;
        case 0x45ca48u: goto label_45ca48;
        case 0x45ca4cu: goto label_45ca4c;
        case 0x45ca50u: goto label_45ca50;
        case 0x45ca54u: goto label_45ca54;
        case 0x45ca58u: goto label_45ca58;
        case 0x45ca5cu: goto label_45ca5c;
        case 0x45ca60u: goto label_45ca60;
        case 0x45ca64u: goto label_45ca64;
        case 0x45ca68u: goto label_45ca68;
        case 0x45ca6cu: goto label_45ca6c;
        case 0x45ca70u: goto label_45ca70;
        case 0x45ca74u: goto label_45ca74;
        case 0x45ca78u: goto label_45ca78;
        case 0x45ca7cu: goto label_45ca7c;
        default: break;
    }

    ctx->pc = 0x45c740u;

label_45c740:
    // 0x45c740: 0x27bdfd80  addiu       $sp, $sp, -0x280
    ctx->pc = 0x45c740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966656));
label_45c744:
    // 0x45c744: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x45c744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_45c748:
    // 0x45c748: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x45c748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_45c74c:
    // 0x45c74c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x45c74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_45c750:
    // 0x45c750: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x45c750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_45c754:
    // 0x45c754: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x45c754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_45c758:
    // 0x45c758: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x45c758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_45c75c:
    // 0x45c75c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x45c75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_45c760:
    // 0x45c760: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x45c760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_45c764:
    // 0x45c764: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45c764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_45c768:
    // 0x45c768: 0xafa50250  sw          $a1, 0x250($sp)
    ctx->pc = 0x45c768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 5));
label_45c76c:
    // 0x45c76c: 0xafa60260  sw          $a2, 0x260($sp)
    ctx->pc = 0x45c76cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 6));
label_45c770:
    // 0x45c770: 0xafa70270  sw          $a3, 0x270($sp)
    ctx->pc = 0x45c770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 7));
label_45c774:
    // 0x45c774: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x45c774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_45c778:
    // 0x45c778: 0x8fa50260  lw          $a1, 0x260($sp)
    ctx->pc = 0x45c778u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_45c77c:
    // 0x45c77c: 0xc0bc5c6  jal         func_2F1718
label_45c780:
    if (ctx->pc == 0x45C780u) {
        ctx->pc = 0x45C784u;
        goto label_45c784;
    }
    ctx->pc = 0x45C77Cu;
    SET_GPR_U32(ctx, 31, 0x45C784u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x45C77Cu, 0x45C784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45C784u;
label_45c784:
    // 0x45c784: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x45c784u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45c788:
    // 0x45c788: 0x1000000c  b           . + 4 + (0xC << 2)
label_45c78c:
    if (ctx->pc == 0x45C78Cu) {
        ctx->pc = 0x45C790u;
        goto label_45c790;
    }
    ctx->pc = 0x45C788u;
    {
        const bool branch_taken_0x45c788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45c788) {
            ctx->pc = 0x45C7BCu;
            goto label_45c7bc;
        }
    }
    ctx->pc = 0x45C790u;
label_45c790:
    // 0x45c790: 0x21d1021  addu        $v0, $s0, $sp
    ctx->pc = 0x45c790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
label_45c794:
    // 0x45c794: 0x804201e0  lb          $v0, 0x1E0($v0)
    ctx->pc = 0x45c794u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 480)));
label_45c798:
    // 0x45c798: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x45c798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
label_45c79c:
    // 0x45c79c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x45c79cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_45c7a0:
    // 0x45c7a0: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x45c7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_45c7a4:
    // 0x45c7a4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_45c7a8:
    if (ctx->pc == 0x45C7A8u) {
        ctx->pc = 0x45C7ACu;
        goto label_45c7ac;
    }
    ctx->pc = 0x45C7A4u;
    {
        const bool branch_taken_0x45c7a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x45c7a4) {
            ctx->pc = 0x45C7B8u;
            goto label_45c7b8;
        }
    }
    ctx->pc = 0x45C7ACu;
label_45c7ac:
    // 0x45c7ac: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x45c7acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_45c7b0:
    // 0x45c7b0: 0x21d1021  addu        $v0, $s0, $sp
    ctx->pc = 0x45c7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
label_45c7b4:
    // 0x45c7b4: 0xa04301e0  sb          $v1, 0x1E0($v0)
    ctx->pc = 0x45c7b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 480), (uint8_t)GPR_U32(ctx, 3));
label_45c7b8:
    // 0x45c7b8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x45c7b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_45c7bc:
    // 0x45c7bc: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x45c7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_45c7c0:
    // 0x45c7c0: 0xc0bc60c  jal         func_2F1830
label_45c7c4:
    if (ctx->pc == 0x45C7C4u) {
        ctx->pc = 0x45C7C8u;
        goto label_45c7c8;
    }
    ctx->pc = 0x45C7C0u;
    SET_GPR_U32(ctx, 31, 0x45C7C8u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x45C7C0u, 0x45C7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45C7C8u;
label_45c7c8:
    // 0x45c7c8: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x45c7c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_45c7cc:
    // 0x45c7cc: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_45c7d0:
    if (ctx->pc == 0x45C7D0u) {
        ctx->pc = 0x45C7D4u;
        goto label_45c7d4;
    }
    ctx->pc = 0x45C7CCu;
    {
        const bool branch_taken_0x45c7cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45c7cc) {
            ctx->pc = 0x45C790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45c790;
        }
    }
    ctx->pc = 0x45C7D4u;
label_45c7d4:
    // 0x45c7d4: 0xc0f0c58  jal         func_3C3160
label_45c7d8:
    if (ctx->pc == 0x45C7D8u) {
        ctx->pc = 0x45C7DCu;
        goto label_45c7dc;
    }
    ctx->pc = 0x45C7D4u;
    SET_GPR_U32(ctx, 31, 0x45C7DCu);
    ctx->pc = 0x3C3160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C3160u, 0x45C7D4u, 0x45C7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45C7DCu;
label_45c7dc:
    // 0x45c7dc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x45c7dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45c7e0:
    // 0x45c7e0: 0x12600099  beqz        $s3, . + 4 + (0x99 << 2)
label_45c7e4:
    if (ctx->pc == 0x45C7E4u) {
        ctx->pc = 0x45C7E8u;
        goto label_45c7e8;
    }
    ctx->pc = 0x45C7E0u;
    {
        const bool branch_taken_0x45c7e0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x45c7e0) {
            ctx->pc = 0x45CA48u;
            goto label_45ca48;
        }
    }
    ctx->pc = 0x45C7E8u;
label_45c7e8:
    // 0x45c7e8: 0x26660028  addiu       $a2, $s3, 0x28
    ctx->pc = 0x45c7e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
label_45c7ec:
    // 0x45c7ec: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x45c7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_45c7f0:
    // 0x45c7f0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x45c7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_45c7f4:
    // 0x45c7f4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x45c7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_45c7f8:
    // 0x45c7f8: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x45c7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_45c7fc:
    // 0x45c7fc: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x45c7fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_45c800:
    // 0x45c800: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x45c800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_45c804:
    // 0x45c804: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x45c804u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_45c808:
    // 0x45c808: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x45c808u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_45c80c:
    // 0x45c80c: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x45c80cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_45c810:
    // 0x45c810: 0x1c80fff8  bgtz        $a0, . + 4 + (-0x8 << 2)
label_45c814:
    if (ctx->pc == 0x45C814u) {
        ctx->pc = 0x45C818u;
        goto label_45c818;
    }
    ctx->pc = 0x45C810u;
    {
        const bool branch_taken_0x45c810 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x45c810) {
            ctx->pc = 0x45C7F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45c7f4;
        }
    }
    ctx->pc = 0x45C818u;
label_45c818:
    // 0x45c818: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x45c818u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45c81c:
    // 0x45c81c: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x45c81cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_45c820:
    // 0x45c820: 0xc117948  jal         func_45E520
label_45c824:
    if (ctx->pc == 0x45C824u) {
        ctx->pc = 0x45C828u;
        goto label_45c828;
    }
    ctx->pc = 0x45C820u;
    SET_GPR_U32(ctx, 31, 0x45C828u);
    ctx->pc = 0x45E520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45E520u, 0x45C820u, 0x45C828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45C828u;
label_45c828:
    // 0x45c828: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x45c828u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45c82c:
    // 0x45c82c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x45c82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45c830:
    // 0x45c830: 0x12820010  beq         $s4, $v0, . + 4 + (0x10 << 2)
label_45c834:
    if (ctx->pc == 0x45C834u) {
        ctx->pc = 0x45C838u;
        goto label_45c838;
    }
    ctx->pc = 0x45C830u;
    {
        const bool branch_taken_0x45c830 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x45c830) {
            ctx->pc = 0x45C874u;
            goto label_45c874;
        }
    }
    ctx->pc = 0x45C838u;
label_45c838:
    // 0x45c838: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x45c838u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_45c83c:
    // 0x45c83c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45c83cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45c840:
    // 0x45c840: 0x24424c80  addiu       $v0, $v0, 0x4C80
    ctx->pc = 0x45c840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19584));
label_45c844:
    // 0x45c844: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45c844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45c848:
    // 0x45c848: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x45c848u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45c84c:
    // 0x45c84c: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x45c84cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_45c850:
    // 0x45c850: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45c850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45c854:
    // 0x45c854: 0x24424c80  addiu       $v0, $v0, 0x4C80
    ctx->pc = 0x45c854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19584));
label_45c858:
    // 0x45c858: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45c858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45c85c:
    // 0x45c85c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x45c85cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45c860:
    // 0x45c860: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45c860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45c864:
    // 0x45c864: 0x8c42e974  lw          $v0, -0x168C($v0)
    ctx->pc = 0x45c864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961524)));
label_45c868:
    // 0x45c868: 0x40f809  jalr        $v0
label_45c86c:
    if (ctx->pc == 0x45C86Cu) {
        ctx->pc = 0x45C870u;
        goto label_45c870;
    }
    ctx->pc = 0x45C868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x45C870u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45C868u, 0x45C870u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x45C870u;
label_45c870:
    // 0x45c870: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x45c870u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45c874:
    // 0x45c874: 0x10110068  beq         $zero, $s1, . + 4 + (0x68 << 2)
label_45c878:
    if (ctx->pc == 0x45C878u) {
        ctx->pc = 0x45C87Cu;
        goto label_45c87c;
    }
    ctx->pc = 0x45C874u;
    {
        const bool branch_taken_0x45c874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 17));
        if (branch_taken_0x45c874) {
            ctx->pc = 0x45CA18u;
            goto label_45ca18;
        }
    }
    ctx->pc = 0x45C87Cu;
label_45c87c:
    // 0x45c87c: 0x27a201e0  addiu       $v0, $sp, 0x1E0
    ctx->pc = 0x45c87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_45c880:
    // 0x45c880: 0x57b021  addu        $s6, $v0, $s7
    ctx->pc = 0x45c880u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_45c884:
    // 0x45c884: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x45c884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_45c888:
    // 0x45c888: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x45c888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_45c88c:
    // 0x45c88c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x45c88cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45c890:
    // 0x45c890: 0xc1170e0  jal         func_45C380
label_45c894:
    if (ctx->pc == 0x45C894u) {
        ctx->pc = 0x45C898u;
        goto label_45c898;
    }
    ctx->pc = 0x45C890u;
    SET_GPR_U32(ctx, 31, 0x45C898u);
    ctx->pc = 0x45C380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45C380u, 0x45C890u, 0x45C898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45C898u;
label_45c898:
    // 0x45c898: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x45c898u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45c89c:
    // 0x45c89c: 0x600005e  bltz        $s0, . + 4 + (0x5E << 2)
label_45c8a0:
    if (ctx->pc == 0x45C8A0u) {
        ctx->pc = 0x45C8A4u;
        goto label_45c8a4;
    }
    ctx->pc = 0x45C89Cu;
    {
        const bool branch_taken_0x45c89c = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x45c89c) {
            ctx->pc = 0x45CA18u;
            goto label_45ca18;
        }
    }
    ctx->pc = 0x45C8A4u;
label_45c8a4:
    // 0x45c8a4: 0x8fb20250  lw          $s2, 0x250($sp)
    ctx->pc = 0x45c8a4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
label_45c8a8:
    // 0x45c8a8: 0x1240005b  beqz        $s2, . + 4 + (0x5B << 2)
label_45c8ac:
    if (ctx->pc == 0x45C8ACu) {
        ctx->pc = 0x45C8B0u;
        goto label_45c8b0;
    }
    ctx->pc = 0x45C8A8u;
    {
        const bool branch_taken_0x45c8a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x45c8a8) {
            ctx->pc = 0x45CA18u;
            goto label_45ca18;
        }
    }
    ctx->pc = 0x45C8B0u;
label_45c8b0:
    // 0x45c8b0: 0x3c024b43  lui         $v0, 0x4B43
    ctx->pc = 0x45c8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19267 << 16));
label_45c8b4:
    // 0x45c8b4: 0x34424150  ori         $v0, $v0, 0x4150
    ctx->pc = 0x45c8b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16720);
label_45c8b8:
    // 0x45c8b8: 0xae420080  sw          $v0, 0x80($s2)
    ctx->pc = 0x45c8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 2));
label_45c8bc:
    // 0x45c8bc: 0xae510084  sw          $s1, 0x84($s2)
    ctx->pc = 0x45c8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 17));
label_45c8c0:
    // 0x45c8c0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x45c8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_45c8c4:
    // 0x45c8c4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x45c8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_45c8c8:
    // 0x45c8c8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x45c8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_45c8cc:
    // 0x45c8cc: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x45c8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_45c8d0:
    // 0x45c8d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45c8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45c8d4:
    // 0x45c8d4: 0xae420088  sw          $v0, 0x88($s2)
    ctx->pc = 0x45c8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 136), GPR_U32(ctx, 2));
label_45c8d8:
    // 0x45c8d8: 0xae40008c  sw          $zero, 0x8C($s2)
    ctx->pc = 0x45c8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 0));
label_45c8dc:
    // 0x45c8dc: 0xae400090  sw          $zero, 0x90($s2)
    ctx->pc = 0x45c8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 0));
label_45c8e0:
    // 0x45c8e0: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x45c8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_45c8e4:
    // 0x45c8e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x45c8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_45c8e8:
    // 0x45c8e8: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x45c8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
label_45c8ec:
    // 0x45c8ec: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x45c8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
label_45c8f0:
    // 0x45c8f0: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x45c8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_45c8f4:
    // 0x45c8f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x45c8f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45c8f8:
    // 0x45c8f8: 0xc116f64  jal         func_45BD90
label_45c8fc:
    if (ctx->pc == 0x45C8FCu) {
        ctx->pc = 0x45C900u;
        goto label_45c900;
    }
    ctx->pc = 0x45C8F8u;
    SET_GPR_U32(ctx, 31, 0x45C900u);
    ctx->pc = 0x45BD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45BD90u, 0x45C8F8u, 0x45C900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45C900u;
label_45c900:
    // 0x45c900: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x45c900u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_45c904:
    // 0x45c904: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x45c904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_45c908:
    // 0x45c908: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x45c908u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_45c90c:
    // 0x45c90c: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x45c90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_45c910:
    // 0x45c910: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45c910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45c914:
    // 0x45c914: 0x8fa40250  lw          $a0, 0x250($sp)
    ctx->pc = 0x45c914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
label_45c918:
    // 0x45c918: 0x8c45004c  lw          $a1, 0x4C($v0)
    ctx->pc = 0x45c918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_45c91c:
    // 0x45c91c: 0xc116f64  jal         func_45BD90
label_45c920:
    if (ctx->pc == 0x45C920u) {
        ctx->pc = 0x45C924u;
        goto label_45c924;
    }
    ctx->pc = 0x45C91Cu;
    SET_GPR_U32(ctx, 31, 0x45C924u);
    ctx->pc = 0x45BD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45BD90u, 0x45C91Cu, 0x45C924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45C924u;
label_45c924:
    // 0x45c924: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x45c924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_45c928:
    // 0x45c928: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x45c928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_45c92c:
    // 0x45c92c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_45c930:
    if (ctx->pc == 0x45C930u) {
        ctx->pc = 0x45C934u;
        goto label_45c934;
    }
    ctx->pc = 0x45C92Cu;
    {
        const bool branch_taken_0x45c92c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45c92c) {
            ctx->pc = 0x45C948u;
            goto label_45c948;
        }
    }
    ctx->pc = 0x45C934u;
label_45c934:
    // 0x45c934: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x45c934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45c938:
    // 0x45c938: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x45c938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
label_45c93c:
    // 0x45c93c: 0xac430030  sw          $v1, 0x30($v0)
    ctx->pc = 0x45c93cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 3));
label_45c940:
    // 0x45c940: 0x10000003  b           . + 4 + (0x3 << 2)
label_45c944:
    if (ctx->pc == 0x45C944u) {
        ctx->pc = 0x45C948u;
        goto label_45c948;
    }
    ctx->pc = 0x45C940u;
    {
        const bool branch_taken_0x45c940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45c940) {
            ctx->pc = 0x45C950u;
            goto label_45c950;
        }
    }
    ctx->pc = 0x45C948u;
label_45c948:
    // 0x45c948: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x45c948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
label_45c94c:
    // 0x45c94c: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x45c94cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
label_45c950:
    // 0x45c950: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x45c950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
label_45c954:
    // 0x45c954: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x45c954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_45c958:
    // 0x45c958: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x45c958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45c95c:
    // 0x45c95c: 0xc116f64  jal         func_45BD90
label_45c960:
    if (ctx->pc == 0x45C960u) {
        ctx->pc = 0x45C964u;
        goto label_45c964;
    }
    ctx->pc = 0x45C95Cu;
    SET_GPR_U32(ctx, 31, 0x45C964u);
    ctx->pc = 0x45BD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45BD90u, 0x45C95Cu, 0x45C964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45C964u;
label_45c964:
    // 0x45c964: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x45c964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_45c968:
    // 0x45c968: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x45c968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_45c96c:
    // 0x45c96c: 0x27a60230  addiu       $a2, $sp, 0x230
    ctx->pc = 0x45c96cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_45c970:
    // 0x45c970: 0xc115ee8  jal         func_457BA0
label_45c974:
    if (ctx->pc == 0x45C974u) {
        ctx->pc = 0x45C978u;
        goto label_45c978;
    }
    ctx->pc = 0x45C970u;
    SET_GPR_U32(ctx, 31, 0x45C978u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x45C970u, 0x45C978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45C978u;
label_45c978:
    // 0x45c978: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_45c97c:
    if (ctx->pc == 0x45C97Cu) {
        ctx->pc = 0x45C980u;
        goto label_45c980;
    }
    ctx->pc = 0x45C978u;
    {
        const bool branch_taken_0x45c978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45c978) {
            ctx->pc = 0x45CA0Cu;
            goto label_45ca0c;
        }
    }
    ctx->pc = 0x45C980u;
label_45c980:
    // 0x45c980: 0x8fa20238  lw          $v0, 0x238($sp)
    ctx->pc = 0x45c980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
label_45c984:
    // 0x45c984: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_45c988:
    if (ctx->pc == 0x45C988u) {
        ctx->pc = 0x45C98Cu;
        goto label_45c98c;
    }
    ctx->pc = 0x45C984u;
    {
        const bool branch_taken_0x45c984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45c984) {
            ctx->pc = 0x45CA0Cu;
            goto label_45ca0c;
        }
    }
    ctx->pc = 0x45C98Cu;
label_45c98c:
    // 0x45c98c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x45c98cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_45c990:
    // 0x45c990: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x45c990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_45c994:
    // 0x45c994: 0x8fa60234  lw          $a2, 0x234($sp)
    ctx->pc = 0x45c994u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
label_45c998:
    // 0x45c998: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x45c998u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_45c99c:
    // 0x45c99c: 0x24e7ec30  addiu       $a3, $a3, -0x13D0
    ctx->pc = 0x45c99cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962224));
label_45c9a0:
    // 0x45c9a0: 0x24080274  addiu       $t0, $zero, 0x274
    ctx->pc = 0x45c9a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 628));
label_45c9a4:
    // 0x45c9a4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x45c9a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45c9a8:
    // 0x45c9a8: 0xc113940  jal         func_44E500
label_45c9ac:
    if (ctx->pc == 0x45C9ACu) {
        ctx->pc = 0x45C9B0u;
        goto label_45c9b0;
    }
    ctx->pc = 0x45C9A8u;
    SET_GPR_U32(ctx, 31, 0x45C9B0u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x45C9A8u, 0x45C9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45C9B0u;
label_45c9b0:
    // 0x45c9b0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x45c9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_45c9b4:
    // 0x45c9b4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x45c9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_45c9b8:
    // 0x45c9b8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x45c9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_45c9bc:
    // 0x45c9bc: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x45c9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_45c9c0:
    // 0x45c9c0: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x45c9c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45c9c4:
    // 0x45c9c4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x45c9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_45c9c8:
    // 0x45c9c8: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x45c9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_45c9cc:
    // 0x45c9cc: 0x24a5ec40  addiu       $a1, $a1, -0x13C0
    ctx->pc = 0x45c9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962240));
label_45c9d0:
    // 0x45c9d0: 0xc115c24  jal         func_457090
label_45c9d4:
    if (ctx->pc == 0x45C9D4u) {
        ctx->pc = 0x45C9D8u;
        goto label_45c9d8;
    }
    ctx->pc = 0x45C9D0u;
    SET_GPR_U32(ctx, 31, 0x45C9D8u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x45C9D0u, 0x45C9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45C9D8u;
label_45c9d8:
    // 0x45c9d8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x45c9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_45c9dc:
    // 0x45c9dc: 0x8fa20238  lw          $v0, 0x238($sp)
    ctx->pc = 0x45c9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
label_45c9e0:
    // 0x45c9e0: 0x40f809  jalr        $v0
label_45c9e4:
    if (ctx->pc == 0x45C9E4u) {
        ctx->pc = 0x45C9E8u;
        goto label_45c9e8;
    }
    ctx->pc = 0x45C9E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x45C9E8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45C9E0u, 0x45C9E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x45C9E8u;
label_45c9e8:
    // 0x45c9e8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x45c9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_45c9ec:
    // 0x45c9ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_45c9f0:
    if (ctx->pc == 0x45C9F0u) {
        ctx->pc = 0x45C9F4u;
        goto label_45c9f4;
    }
    ctx->pc = 0x45C9ECu;
    {
        const bool branch_taken_0x45c9ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45c9ec) {
            ctx->pc = 0x45C9FCu;
            goto label_45c9fc;
        }
    }
    ctx->pc = 0x45C9F4u;
label_45c9f4:
    // 0x45c9f4: 0xd  break       0
    ctx->pc = 0x45c9f4u;
    runtime->handleBreak(rdram, ctx);
label_45c9f8:
    // 0x45c9f8: 0x0  nop
    ctx->pc = 0x45c9f8u;
    // NOP
label_45c9fc:
    // 0x45c9fc: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x45c9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_45ca00:
    // 0x45ca00: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x45ca00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45ca04:
    // 0x45ca04: 0xc11392c  jal         func_44E4B0
label_45ca08:
    if (ctx->pc == 0x45CA08u) {
        ctx->pc = 0x45CA0Cu;
        goto label_45ca0c;
    }
    ctx->pc = 0x45CA04u;
    SET_GPR_U32(ctx, 31, 0x45CA0Cu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x45CA04u, 0x45CA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45CA0Cu;
label_45ca0c:
    // 0x45ca0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x45ca0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45ca10:
    // 0x45ca10: 0x1000000e  b           . + 4 + (0xE << 2)
label_45ca14:
    if (ctx->pc == 0x45CA14u) {
        ctx->pc = 0x45CA18u;
        goto label_45ca18;
    }
    ctx->pc = 0x45CA10u;
    {
        const bool branch_taken_0x45ca10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45ca10) {
            ctx->pc = 0x45CA4Cu;
            goto label_45ca4c;
        }
    }
    ctx->pc = 0x45CA18u;
label_45ca18:
    // 0x45ca18: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x45ca18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_45ca1c:
    // 0x45ca1c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x45ca1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_45ca20:
    // 0x45ca20: 0x8fa50250  lw          $a1, 0x250($sp)
    ctx->pc = 0x45ca20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
label_45ca24:
    // 0x45ca24: 0x24460004  addiu       $a2, $v0, 0x4
    ctx->pc = 0x45ca24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_45ca28:
    // 0x45ca28: 0x8fa70270  lw          $a3, 0x270($sp)
    ctx->pc = 0x45ca28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_45ca2c:
    // 0x45ca2c: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x45ca2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_45ca30:
    // 0x45ca30: 0x40f809  jalr        $v0
label_45ca34:
    if (ctx->pc == 0x45CA34u) {
        ctx->pc = 0x45CA38u;
        goto label_45ca38;
    }
    ctx->pc = 0x45CA30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x45CA38u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45CA30u, 0x45CA38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x45CA38u;
label_45ca38:
    // 0x45ca38: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x45ca38u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45ca3c:
    // 0x45ca3c: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x45ca3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_45ca40:
    // 0x45ca40: 0x10000002  b           . + 4 + (0x2 << 2)
label_45ca44:
    if (ctx->pc == 0x45CA44u) {
        ctx->pc = 0x45CA48u;
        goto label_45ca48;
    }
    ctx->pc = 0x45CA40u;
    {
        const bool branch_taken_0x45ca40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45ca40) {
            ctx->pc = 0x45CA4Cu;
            goto label_45ca4c;
        }
    }
    ctx->pc = 0x45CA48u;
label_45ca48:
    // 0x45ca48: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x45ca48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_45ca4c:
    // 0x45ca4c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x45ca4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_45ca50:
    // 0x45ca50: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x45ca50u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_45ca54:
    // 0x45ca54: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x45ca54u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_45ca58:
    // 0x45ca58: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x45ca58u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_45ca5c:
    // 0x45ca5c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x45ca5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_45ca60:
    // 0x45ca60: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x45ca60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_45ca64:
    // 0x45ca64: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x45ca64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_45ca68:
    // 0x45ca68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x45ca68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_45ca6c:
    // 0x45ca6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45ca6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_45ca70:
    // 0x45ca70: 0x27bd0280  addiu       $sp, $sp, 0x280
    ctx->pc = 0x45ca70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_45ca74:
    // 0x45ca74: 0x3e00008  jr          $ra
label_45ca78:
    if (ctx->pc == 0x45CA78u) {
        ctx->pc = 0x45CA7Cu;
        goto label_45ca7c;
    }
    ctx->pc = 0x45CA74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45CA74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45CA7Cu;
label_45ca7c:
    // 0x45ca7c: 0x0  nop
    ctx->pc = 0x45ca7cu;
    // NOP
    ctx->pc = 0x45ca80u;
}
