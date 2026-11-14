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

// Function: sub_0027D6C0
// Address: 0x27d6c0 - 0x27d9a0
void sub_0027D6C0_0x27d6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027D6C0_0x27d6c0");
#endif

    switch (ctx->pc) {
        case 0x27d6c0u: goto label_27d6c0;
        case 0x27d6c4u: goto label_27d6c4;
        case 0x27d6c8u: goto label_27d6c8;
        case 0x27d6ccu: goto label_27d6cc;
        case 0x27d6d0u: goto label_27d6d0;
        case 0x27d6d4u: goto label_27d6d4;
        case 0x27d6d8u: goto label_27d6d8;
        case 0x27d6dcu: goto label_27d6dc;
        case 0x27d6e0u: goto label_27d6e0;
        case 0x27d6e4u: goto label_27d6e4;
        case 0x27d6e8u: goto label_27d6e8;
        case 0x27d6ecu: goto label_27d6ec;
        case 0x27d6f0u: goto label_27d6f0;
        case 0x27d6f4u: goto label_27d6f4;
        case 0x27d6f8u: goto label_27d6f8;
        case 0x27d6fcu: goto label_27d6fc;
        case 0x27d700u: goto label_27d700;
        case 0x27d704u: goto label_27d704;
        case 0x27d708u: goto label_27d708;
        case 0x27d70cu: goto label_27d70c;
        case 0x27d710u: goto label_27d710;
        case 0x27d714u: goto label_27d714;
        case 0x27d718u: goto label_27d718;
        case 0x27d71cu: goto label_27d71c;
        case 0x27d720u: goto label_27d720;
        case 0x27d724u: goto label_27d724;
        case 0x27d728u: goto label_27d728;
        case 0x27d72cu: goto label_27d72c;
        case 0x27d730u: goto label_27d730;
        case 0x27d734u: goto label_27d734;
        case 0x27d738u: goto label_27d738;
        case 0x27d73cu: goto label_27d73c;
        case 0x27d740u: goto label_27d740;
        case 0x27d744u: goto label_27d744;
        case 0x27d748u: goto label_27d748;
        case 0x27d74cu: goto label_27d74c;
        case 0x27d750u: goto label_27d750;
        case 0x27d754u: goto label_27d754;
        case 0x27d758u: goto label_27d758;
        case 0x27d75cu: goto label_27d75c;
        case 0x27d760u: goto label_27d760;
        case 0x27d764u: goto label_27d764;
        case 0x27d768u: goto label_27d768;
        case 0x27d76cu: goto label_27d76c;
        case 0x27d770u: goto label_27d770;
        case 0x27d774u: goto label_27d774;
        case 0x27d778u: goto label_27d778;
        case 0x27d77cu: goto label_27d77c;
        case 0x27d780u: goto label_27d780;
        case 0x27d784u: goto label_27d784;
        case 0x27d788u: goto label_27d788;
        case 0x27d78cu: goto label_27d78c;
        case 0x27d790u: goto label_27d790;
        case 0x27d794u: goto label_27d794;
        case 0x27d798u: goto label_27d798;
        case 0x27d79cu: goto label_27d79c;
        case 0x27d7a0u: goto label_27d7a0;
        case 0x27d7a4u: goto label_27d7a4;
        case 0x27d7a8u: goto label_27d7a8;
        case 0x27d7acu: goto label_27d7ac;
        case 0x27d7b0u: goto label_27d7b0;
        case 0x27d7b4u: goto label_27d7b4;
        case 0x27d7b8u: goto label_27d7b8;
        case 0x27d7bcu: goto label_27d7bc;
        case 0x27d7c0u: goto label_27d7c0;
        case 0x27d7c4u: goto label_27d7c4;
        case 0x27d7c8u: goto label_27d7c8;
        case 0x27d7ccu: goto label_27d7cc;
        case 0x27d7d0u: goto label_27d7d0;
        case 0x27d7d4u: goto label_27d7d4;
        case 0x27d7d8u: goto label_27d7d8;
        case 0x27d7dcu: goto label_27d7dc;
        case 0x27d7e0u: goto label_27d7e0;
        case 0x27d7e4u: goto label_27d7e4;
        case 0x27d7e8u: goto label_27d7e8;
        case 0x27d7ecu: goto label_27d7ec;
        case 0x27d7f0u: goto label_27d7f0;
        case 0x27d7f4u: goto label_27d7f4;
        case 0x27d7f8u: goto label_27d7f8;
        case 0x27d7fcu: goto label_27d7fc;
        case 0x27d800u: goto label_27d800;
        case 0x27d804u: goto label_27d804;
        case 0x27d808u: goto label_27d808;
        case 0x27d80cu: goto label_27d80c;
        case 0x27d810u: goto label_27d810;
        case 0x27d814u: goto label_27d814;
        case 0x27d818u: goto label_27d818;
        case 0x27d81cu: goto label_27d81c;
        case 0x27d820u: goto label_27d820;
        case 0x27d824u: goto label_27d824;
        case 0x27d828u: goto label_27d828;
        case 0x27d82cu: goto label_27d82c;
        case 0x27d830u: goto label_27d830;
        case 0x27d834u: goto label_27d834;
        case 0x27d838u: goto label_27d838;
        case 0x27d83cu: goto label_27d83c;
        case 0x27d840u: goto label_27d840;
        case 0x27d844u: goto label_27d844;
        case 0x27d848u: goto label_27d848;
        case 0x27d84cu: goto label_27d84c;
        case 0x27d850u: goto label_27d850;
        case 0x27d854u: goto label_27d854;
        case 0x27d858u: goto label_27d858;
        case 0x27d85cu: goto label_27d85c;
        case 0x27d860u: goto label_27d860;
        case 0x27d864u: goto label_27d864;
        case 0x27d868u: goto label_27d868;
        case 0x27d86cu: goto label_27d86c;
        case 0x27d870u: goto label_27d870;
        case 0x27d874u: goto label_27d874;
        case 0x27d878u: goto label_27d878;
        case 0x27d87cu: goto label_27d87c;
        case 0x27d880u: goto label_27d880;
        case 0x27d884u: goto label_27d884;
        case 0x27d888u: goto label_27d888;
        case 0x27d88cu: goto label_27d88c;
        case 0x27d890u: goto label_27d890;
        case 0x27d894u: goto label_27d894;
        case 0x27d898u: goto label_27d898;
        case 0x27d89cu: goto label_27d89c;
        case 0x27d8a0u: goto label_27d8a0;
        case 0x27d8a4u: goto label_27d8a4;
        case 0x27d8a8u: goto label_27d8a8;
        case 0x27d8acu: goto label_27d8ac;
        case 0x27d8b0u: goto label_27d8b0;
        case 0x27d8b4u: goto label_27d8b4;
        case 0x27d8b8u: goto label_27d8b8;
        case 0x27d8bcu: goto label_27d8bc;
        case 0x27d8c0u: goto label_27d8c0;
        case 0x27d8c4u: goto label_27d8c4;
        case 0x27d8c8u: goto label_27d8c8;
        case 0x27d8ccu: goto label_27d8cc;
        case 0x27d8d0u: goto label_27d8d0;
        case 0x27d8d4u: goto label_27d8d4;
        case 0x27d8d8u: goto label_27d8d8;
        case 0x27d8dcu: goto label_27d8dc;
        case 0x27d8e0u: goto label_27d8e0;
        case 0x27d8e4u: goto label_27d8e4;
        case 0x27d8e8u: goto label_27d8e8;
        case 0x27d8ecu: goto label_27d8ec;
        case 0x27d8f0u: goto label_27d8f0;
        case 0x27d8f4u: goto label_27d8f4;
        case 0x27d8f8u: goto label_27d8f8;
        case 0x27d8fcu: goto label_27d8fc;
        case 0x27d900u: goto label_27d900;
        case 0x27d904u: goto label_27d904;
        case 0x27d908u: goto label_27d908;
        case 0x27d90cu: goto label_27d90c;
        case 0x27d910u: goto label_27d910;
        case 0x27d914u: goto label_27d914;
        case 0x27d918u: goto label_27d918;
        case 0x27d91cu: goto label_27d91c;
        case 0x27d920u: goto label_27d920;
        case 0x27d924u: goto label_27d924;
        case 0x27d928u: goto label_27d928;
        case 0x27d92cu: goto label_27d92c;
        case 0x27d930u: goto label_27d930;
        case 0x27d934u: goto label_27d934;
        case 0x27d938u: goto label_27d938;
        case 0x27d93cu: goto label_27d93c;
        case 0x27d940u: goto label_27d940;
        case 0x27d944u: goto label_27d944;
        case 0x27d948u: goto label_27d948;
        case 0x27d94cu: goto label_27d94c;
        case 0x27d950u: goto label_27d950;
        case 0x27d954u: goto label_27d954;
        case 0x27d958u: goto label_27d958;
        case 0x27d95cu: goto label_27d95c;
        case 0x27d960u: goto label_27d960;
        case 0x27d964u: goto label_27d964;
        case 0x27d968u: goto label_27d968;
        case 0x27d96cu: goto label_27d96c;
        case 0x27d970u: goto label_27d970;
        case 0x27d974u: goto label_27d974;
        case 0x27d978u: goto label_27d978;
        case 0x27d97cu: goto label_27d97c;
        case 0x27d980u: goto label_27d980;
        case 0x27d984u: goto label_27d984;
        case 0x27d988u: goto label_27d988;
        case 0x27d98cu: goto label_27d98c;
        case 0x27d990u: goto label_27d990;
        case 0x27d994u: goto label_27d994;
        case 0x27d998u: goto label_27d998;
        case 0x27d99cu: goto label_27d99c;
        default: break;
    }

    ctx->pc = 0x27d6c0u;

label_27d6c0:
    // 0x27d6c0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x27d6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_27d6c4:
    // 0x27d6c4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x27d6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_27d6c8:
    // 0x27d6c8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x27d6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_27d6cc:
    // 0x27d6cc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x27d6ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_27d6d0:
    // 0x27d6d0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x27d6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_27d6d4:
    // 0x27d6d4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x27d6d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_27d6d8:
    // 0x27d6d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27d6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_27d6dc:
    // 0x27d6dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27d6dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_27d6e0:
    // 0x27d6e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27d6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_27d6e4:
    // 0x27d6e4: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x27d6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
label_27d6e8:
    // 0x27d6e8: 0xc12242c  jal         func_4890B0
label_27d6ec:
    if (ctx->pc == 0x27D6ECu) {
        ctx->pc = 0x27D6F0u;
        goto label_27d6f0;
    }
    ctx->pc = 0x27D6E8u;
    SET_GPR_U32(ctx, 31, 0x27D6F0u);
    ctx->pc = 0x4890B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890B0u, 0x27D6E8u, 0x27D6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D6F0u;
label_27d6f0:
    // 0x27d6f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27d6f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27d6f4:
    // 0x27d6f4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x27d6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_27d6f8:
    // 0x27d6f8: 0x8c44008c  lw          $a0, 0x8C($v0)
    ctx->pc = 0x27d6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_27d6fc:
    // 0x27d6fc: 0xc0ab06c  jal         func_2AC1B0
label_27d700:
    if (ctx->pc == 0x27D700u) {
        ctx->pc = 0x27D704u;
        goto label_27d704;
    }
    ctx->pc = 0x27D6FCu;
    SET_GPR_U32(ctx, 31, 0x27D704u);
    ctx->pc = 0x2AC1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC1B0u, 0x27D6FCu, 0x27D704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D704u;
label_27d704:
    // 0x27d704: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x27d704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_27d708:
    // 0x27d708: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x27d708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_27d70c:
    // 0x27d70c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x27d70cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_27d710:
    // 0x27d710: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x27d710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_27d714:
    // 0x27d714: 0x40f809  jalr        $v0
label_27d718:
    if (ctx->pc == 0x27D718u) {
        ctx->pc = 0x27D71Cu;
        goto label_27d71c;
    }
    ctx->pc = 0x27D714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x27D71Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27D714u, 0x27D71Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27D71Cu;
label_27d71c:
    // 0x27d71c: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x27d71cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_27d720:
    // 0x27d720: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27d720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27d724:
    // 0x27d724: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x27d724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_27d728:
    // 0x27d728: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x27d728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_27d72c:
    // 0x27d72c: 0x40f809  jalr        $v0
label_27d730:
    if (ctx->pc == 0x27D730u) {
        ctx->pc = 0x27D734u;
        goto label_27d734;
    }
    ctx->pc = 0x27D72Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x27D734u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27D72Cu, 0x27D734u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27D734u;
label_27d734:
    // 0x27d734: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x27d734u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27d738:
    // 0x27d738: 0x10000056  b           . + 4 + (0x56 << 2)
label_27d73c:
    if (ctx->pc == 0x27D73Cu) {
        ctx->pc = 0x27D740u;
        goto label_27d740;
    }
    ctx->pc = 0x27D738u;
    {
        const bool branch_taken_0x27d738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d738) {
            ctx->pc = 0x27D894u;
            goto label_27d894;
        }
    }
    ctx->pc = 0x27D740u;
label_27d740:
    // 0x27d740: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x27d740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_27d744:
    // 0x27d744: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x27d744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_27d748:
    // 0x27d748: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x27d748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27d74c:
    // 0x27d74c: 0xc0a1248  jal         func_284920
label_27d750:
    if (ctx->pc == 0x27D750u) {
        ctx->pc = 0x27D754u;
        goto label_27d754;
    }
    ctx->pc = 0x27D74Cu;
    SET_GPR_U32(ctx, 31, 0x27D754u);
    ctx->pc = 0x284920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284920u, 0x27D74Cu, 0x27D754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D754u;
label_27d754:
    // 0x27d754: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x27d754u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27d758:
    // 0x27d758: 0x1012004d  beq         $zero, $s2, . + 4 + (0x4D << 2)
label_27d75c:
    if (ctx->pc == 0x27D75Cu) {
        ctx->pc = 0x27D760u;
        goto label_27d760;
    }
    ctx->pc = 0x27D758u;
    {
        const bool branch_taken_0x27d758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 18));
        if (branch_taken_0x27d758) {
            ctx->pc = 0x27D890u;
            goto label_27d890;
        }
    }
    ctx->pc = 0x27D760u;
label_27d760:
    // 0x27d760: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27d760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27d764:
    // 0x27d764: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27d764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27d768:
    // 0x27d768: 0xc0e6e40  jal         func_39B900
label_27d76c:
    if (ctx->pc == 0x27D76Cu) {
        ctx->pc = 0x27D770u;
        goto label_27d770;
    }
    ctx->pc = 0x27D768u;
    SET_GPR_U32(ctx, 31, 0x27D770u);
    ctx->pc = 0x39B900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B900u, 0x27D768u, 0x27D770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D770u;
label_27d770:
    // 0x27d770: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27d770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27d774:
    // 0x27d774: 0xc105f96  jal         func_417E58
label_27d778:
    if (ctx->pc == 0x27D778u) {
        ctx->pc = 0x27D77Cu;
        goto label_27d77c;
    }
    ctx->pc = 0x27D774u;
    SET_GPR_U32(ctx, 31, 0x27D77Cu);
    ctx->pc = 0x417E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417E58u, 0x27D774u, 0x27D77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D77Cu;
label_27d77c:
    // 0x27d77c: 0x10020040  beq         $zero, $v0, . + 4 + (0x40 << 2)
label_27d780:
    if (ctx->pc == 0x27D780u) {
        ctx->pc = 0x27D784u;
        goto label_27d784;
    }
    ctx->pc = 0x27D77Cu;
    {
        const bool branch_taken_0x27d77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x27d77c) {
            ctx->pc = 0x27D880u;
            goto label_27d880;
        }
    }
    ctx->pc = 0x27D784u;
label_27d784:
    // 0x27d784: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27d784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27d788:
    // 0x27d788: 0x1262000d  beq         $s3, $v0, . + 4 + (0xD << 2)
label_27d78c:
    if (ctx->pc == 0x27D78Cu) {
        ctx->pc = 0x27D790u;
        goto label_27d790;
    }
    ctx->pc = 0x27D788u;
    {
        const bool branch_taken_0x27d788 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x27d788) {
            ctx->pc = 0x27D7C0u;
            goto label_27d7c0;
        }
    }
    ctx->pc = 0x27D790u;
label_27d790:
    // 0x27d790: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
label_27d794:
    if (ctx->pc == 0x27D794u) {
        ctx->pc = 0x27D798u;
        goto label_27d798;
    }
    ctx->pc = 0x27D790u;
    {
        const bool branch_taken_0x27d790 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d790) {
            ctx->pc = 0x27D7A0u;
            goto label_27d7a0;
        }
    }
    ctx->pc = 0x27D798u;
label_27d798:
    // 0x27d798: 0x10000009  b           . + 4 + (0x9 << 2)
label_27d79c:
    if (ctx->pc == 0x27D79Cu) {
        ctx->pc = 0x27D7A0u;
        goto label_27d7a0;
    }
    ctx->pc = 0x27D798u;
    {
        const bool branch_taken_0x27d798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d798) {
            ctx->pc = 0x27D7C0u;
            goto label_27d7c0;
        }
    }
    ctx->pc = 0x27D7A0u;
label_27d7a0:
    // 0x27d7a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27d7a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27d7a4:
    // 0x27d7a4: 0xc0e69ac  jal         func_39A6B0
label_27d7a8:
    if (ctx->pc == 0x27D7A8u) {
        ctx->pc = 0x27D7ACu;
        goto label_27d7ac;
    }
    ctx->pc = 0x27D7A4u;
    SET_GPR_U32(ctx, 31, 0x27D7ACu);
    ctx->pc = 0x39A6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A6B0u, 0x27D7A4u, 0x27D7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D7ACu;
label_27d7ac:
    // 0x27d7ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27d7acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27d7b0:
    // 0x27d7b0: 0xc105f9e  jal         func_417E78
label_27d7b4:
    if (ctx->pc == 0x27D7B4u) {
        ctx->pc = 0x27D7B8u;
        goto label_27d7b8;
    }
    ctx->pc = 0x27D7B0u;
    SET_GPR_U32(ctx, 31, 0x27D7B8u);
    ctx->pc = 0x417E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417E78u, 0x27D7B0u, 0x27D7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D7B8u;
label_27d7b8:
    // 0x27d7b8: 0x10000031  b           . + 4 + (0x31 << 2)
label_27d7bc:
    if (ctx->pc == 0x27D7BCu) {
        ctx->pc = 0x27D7C0u;
        goto label_27d7c0;
    }
    ctx->pc = 0x27D7B8u;
    {
        const bool branch_taken_0x27d7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d7b8) {
            ctx->pc = 0x27D880u;
            goto label_27d880;
        }
    }
    ctx->pc = 0x27D7C0u;
label_27d7c0:
    // 0x27d7c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27d7c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27d7c4:
    // 0x27d7c4: 0xc0e69ac  jal         func_39A6B0
label_27d7c8:
    if (ctx->pc == 0x27D7C8u) {
        ctx->pc = 0x27D7CCu;
        goto label_27d7cc;
    }
    ctx->pc = 0x27D7C4u;
    SET_GPR_U32(ctx, 31, 0x27D7CCu);
    ctx->pc = 0x39A6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A6B0u, 0x27D7C4u, 0x27D7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D7CCu;
label_27d7cc:
    // 0x27d7cc: 0xc11dfd8  jal         func_477F60
label_27d7d0:
    if (ctx->pc == 0x27D7D0u) {
        ctx->pc = 0x27D7D4u;
        goto label_27d7d4;
    }
    ctx->pc = 0x27D7CCu;
    SET_GPR_U32(ctx, 31, 0x27D7D4u);
    ctx->pc = 0x477F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x477F60u, 0x27D7CCu, 0x27D7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D7D4u;
label_27d7d4:
    // 0x27d7d4: 0xc11df18  jal         func_477C60
label_27d7d8:
    if (ctx->pc == 0x27D7D8u) {
        ctx->pc = 0x27D7DCu;
        goto label_27d7dc;
    }
    ctx->pc = 0x27D7D4u;
    SET_GPR_U32(ctx, 31, 0x27D7DCu);
    ctx->pc = 0x477C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x477C60u, 0x27D7D4u, 0x27D7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D7DCu;
label_27d7dc:
    // 0x27d7dc: 0xc11dfec  jal         func_477FB0
label_27d7e0:
    if (ctx->pc == 0x27D7E0u) {
        ctx->pc = 0x27D7E4u;
        goto label_27d7e4;
    }
    ctx->pc = 0x27D7DCu;
    SET_GPR_U32(ctx, 31, 0x27D7E4u);
    ctx->pc = 0x477FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x477FB0u, 0x27D7DCu, 0x27D7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D7E4u;
label_27d7e4:
    // 0x27d7e4: 0xc090864  jal         func_242190
label_27d7e8:
    if (ctx->pc == 0x27D7E8u) {
        ctx->pc = 0x27D7ECu;
        goto label_27d7ec;
    }
    ctx->pc = 0x27D7E4u;
    SET_GPR_U32(ctx, 31, 0x27D7ECu);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x27D7E4u, 0x27D7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D7ECu;
label_27d7ec:
    // 0x27d7ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27d7ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27d7f0:
    // 0x27d7f0: 0xc090590  jal         func_241640
label_27d7f4:
    if (ctx->pc == 0x27D7F4u) {
        ctx->pc = 0x27D7F8u;
        goto label_27d7f8;
    }
    ctx->pc = 0x27D7F0u;
    SET_GPR_U32(ctx, 31, 0x27D7F8u);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x27D7F0u, 0x27D7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D7F8u;
label_27d7f8:
    // 0x27d7f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27d7f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27d7fc:
    // 0x27d7fc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x27d7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_27d800:
    // 0x27d800: 0xc09157c  jal         func_2455F0
label_27d804:
    if (ctx->pc == 0x27D804u) {
        ctx->pc = 0x27D808u;
        goto label_27d808;
    }
    ctx->pc = 0x27D800u;
    SET_GPR_U32(ctx, 31, 0x27D808u);
    ctx->pc = 0x2455F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455F0u, 0x27D800u, 0x27D808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D808u;
label_27d808:
    // 0x27d808: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x27d808u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27d80c:
    // 0x27d80c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x27d80cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_27d810:
    // 0x27d810: 0xc040e7c  jal         func_1039F0
label_27d814:
    if (ctx->pc == 0x27D814u) {
        ctx->pc = 0x27D818u;
        goto label_27d818;
    }
    ctx->pc = 0x27D810u;
    SET_GPR_U32(ctx, 31, 0x27D818u);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x27D810u, 0x27D818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D818u;
label_27d818:
    // 0x27d818: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x27d818u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27d81c:
    // 0x27d81c: 0x1000000a  b           . + 4 + (0xA << 2)
label_27d820:
    if (ctx->pc == 0x27D820u) {
        ctx->pc = 0x27D824u;
        goto label_27d824;
    }
    ctx->pc = 0x27D81Cu;
    {
        const bool branch_taken_0x27d81c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d81c) {
            ctx->pc = 0x27D848u;
            goto label_27d848;
        }
    }
    ctx->pc = 0x27D824u;
label_27d824:
    // 0x27d824: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x27d824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_27d828:
    // 0x27d828: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x27d828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_27d82c:
    // 0x27d82c: 0xc085538  jal         func_2154E0
label_27d830:
    if (ctx->pc == 0x27D830u) {
        ctx->pc = 0x27D834u;
        goto label_27d834;
    }
    ctx->pc = 0x27D82Cu;
    SET_GPR_U32(ctx, 31, 0x27D834u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x27D82Cu, 0x27D834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D834u;
label_27d834:
    // 0x27d834: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x27d834u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27d838:
    // 0x27d838: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x27d838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_27d83c:
    // 0x27d83c: 0xc0a87b0  jal         func_2A1EC0
label_27d840:
    if (ctx->pc == 0x27D840u) {
        ctx->pc = 0x27D844u;
        goto label_27d844;
    }
    ctx->pc = 0x27D83Cu;
    SET_GPR_U32(ctx, 31, 0x27D844u);
    ctx->pc = 0x2A1EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1EC0u, 0x27D83Cu, 0x27D844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D844u;
label_27d844:
    // 0x27d844: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x27d844u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_27d848:
    // 0x27d848: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x27d848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_27d84c:
    // 0x27d84c: 0xc04147c  jal         func_1051F0
label_27d850:
    if (ctx->pc == 0x27D850u) {
        ctx->pc = 0x27D854u;
        goto label_27d854;
    }
    ctx->pc = 0x27D84Cu;
    SET_GPR_U32(ctx, 31, 0x27D854u);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x27D84Cu, 0x27D854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D854u;
label_27d854:
    // 0x27d854: 0x1682fff3  bne         $s4, $v0, . + 4 + (-0xD << 2)
label_27d858:
    if (ctx->pc == 0x27D858u) {
        ctx->pc = 0x27D85Cu;
        goto label_27d85c;
    }
    ctx->pc = 0x27D854u;
    {
        const bool branch_taken_0x27d854 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x27d854) {
            ctx->pc = 0x27D824u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27d824;
        }
    }
    ctx->pc = 0x27D85Cu;
label_27d85c:
    // 0x27d85c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x27d85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_27d860:
    // 0x27d860: 0x8c44008c  lw          $a0, 0x8C($v0)
    ctx->pc = 0x27d860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_27d864:
    // 0x27d864: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x27d864u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27d868:
    // 0x27d868: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x27d868u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_27d86c:
    // 0x27d86c: 0x320f809  jalr        $t9
label_27d870:
    if (ctx->pc == 0x27D870u) {
        ctx->pc = 0x27D874u;
        goto label_27d874;
    }
    ctx->pc = 0x27D86Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27D874u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27D86Cu, 0x27D874u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27D874u;
label_27d874:
    // 0x27d874: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27d874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27d878:
    // 0x27d878: 0xc105f9e  jal         func_417E78
label_27d87c:
    if (ctx->pc == 0x27D87Cu) {
        ctx->pc = 0x27D880u;
        goto label_27d880;
    }
    ctx->pc = 0x27D878u;
    SET_GPR_U32(ctx, 31, 0x27D880u);
    ctx->pc = 0x417E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417E78u, 0x27D878u, 0x27D880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D880u;
label_27d880:
    // 0x27d880: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27d880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27d884:
    // 0x27d884: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27d884u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27d888:
    // 0x27d888: 0xc0e6e36  jal         func_39B8D8
label_27d88c:
    if (ctx->pc == 0x27D88Cu) {
        ctx->pc = 0x27D890u;
        goto label_27d890;
    }
    ctx->pc = 0x27D888u;
    SET_GPR_U32(ctx, 31, 0x27D890u);
    ctx->pc = 0x39B8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B8D8u, 0x27D888u, 0x27D890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D890u;
label_27d890:
    // 0x27d890: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x27d890u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_27d894:
    // 0x27d894: 0x2e620002  sltiu       $v0, $s3, 0x2
    ctx->pc = 0x27d894u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_27d898:
    // 0x27d898: 0x1440ffa9  bnez        $v0, . + 4 + (-0x57 << 2)
label_27d89c:
    if (ctx->pc == 0x27D89Cu) {
        ctx->pc = 0x27D8A0u;
        goto label_27d8a0;
    }
    ctx->pc = 0x27D898u;
    {
        const bool branch_taken_0x27d898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27d898) {
            ctx->pc = 0x27D740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27d740;
        }
    }
    ctx->pc = 0x27D8A0u;
label_27d8a0:
    // 0x27d8a0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x27d8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_27d8a4:
    // 0x27d8a4: 0x8c44008c  lw          $a0, 0x8C($v0)
    ctx->pc = 0x27d8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_27d8a8:
    // 0x27d8a8: 0xc0ab0a0  jal         func_2AC280
label_27d8ac:
    if (ctx->pc == 0x27D8ACu) {
        ctx->pc = 0x27D8B0u;
        goto label_27d8b0;
    }
    ctx->pc = 0x27D8A8u;
    SET_GPR_U32(ctx, 31, 0x27D8B0u);
    ctx->pc = 0x2AC280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC280u, 0x27D8A8u, 0x27D8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D8B0u;
label_27d8b0:
    // 0x27d8b0: 0x8f83bb80  lw          $v1, -0x4480($gp)
    ctx->pc = 0x27d8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
label_27d8b4:
    // 0x27d8b4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x27d8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_27d8b8:
    // 0x27d8b8: 0x1860002d  blez        $v1, . + 4 + (0x2D << 2)
label_27d8bc:
    if (ctx->pc == 0x27D8BCu) {
        ctx->pc = 0x27D8C0u;
        goto label_27d8c0;
    }
    ctx->pc = 0x27D8B8u;
    {
        const bool branch_taken_0x27d8b8 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x27d8b8) {
            ctx->pc = 0x27D970u;
            goto label_27d970;
        }
    }
    ctx->pc = 0x27D8C0u;
label_27d8c0:
    // 0x27d8c0: 0x8f83bb80  lw          $v1, -0x4480($gp)
    ctx->pc = 0x27d8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
label_27d8c4:
    // 0x27d8c4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x27d8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_27d8c8:
    // 0x27d8c8: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x27d8c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_27d8cc:
    // 0x27d8cc: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
label_27d8d0:
    if (ctx->pc == 0x27D8D0u) {
        ctx->pc = 0x27D8D4u;
        goto label_27d8d4;
    }
    ctx->pc = 0x27D8CCu;
    {
        const bool branch_taken_0x27d8cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d8cc) {
            ctx->pc = 0x27D970u;
            goto label_27d970;
        }
    }
    ctx->pc = 0x27D8D4u;
label_27d8d4:
    // 0x27d8d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27d8d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27d8d8:
    // 0x27d8d8: 0xc105f96  jal         func_417E58
label_27d8dc:
    if (ctx->pc == 0x27D8DCu) {
        ctx->pc = 0x27D8E0u;
        goto label_27d8e0;
    }
    ctx->pc = 0x27D8D8u;
    SET_GPR_U32(ctx, 31, 0x27D8E0u);
    ctx->pc = 0x417E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417E58u, 0x27D8D8u, 0x27D8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D8E0u;
label_27d8e0:
    // 0x27d8e0: 0x10020023  beq         $zero, $v0, . + 4 + (0x23 << 2)
label_27d8e4:
    if (ctx->pc == 0x27D8E4u) {
        ctx->pc = 0x27D8E8u;
        goto label_27d8e8;
    }
    ctx->pc = 0x27D8E0u;
    {
        const bool branch_taken_0x27d8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x27d8e0) {
            ctx->pc = 0x27D970u;
            goto label_27d970;
        }
    }
    ctx->pc = 0x27D8E8u;
label_27d8e8:
    // 0x27d8e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27d8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27d8ec:
    // 0x27d8ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27d8ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27d8f0:
    // 0x27d8f0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x27d8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_27d8f4:
    // 0x27d8f4: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x27d8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_27d8f8:
    // 0x27d8f8: 0x40f809  jalr        $v0
label_27d8fc:
    if (ctx->pc == 0x27D8FCu) {
        ctx->pc = 0x27D900u;
        goto label_27d900;
    }
    ctx->pc = 0x27D8F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x27D900u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27D8F8u, 0x27D900u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27D900u;
label_27d900:
    // 0x27d900: 0x8f84bc1c  lw          $a0, -0x43E4($gp)
    ctx->pc = 0x27d900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949916)));
label_27d904:
    // 0x27d904: 0xc09f678  jal         func_27D9E0
label_27d908:
    if (ctx->pc == 0x27D908u) {
        ctx->pc = 0x27D90Cu;
        goto label_27d90c;
    }
    ctx->pc = 0x27D904u;
    SET_GPR_U32(ctx, 31, 0x27D90Cu);
    ctx->pc = 0x27D9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D9E0u, 0x27D904u, 0x27D90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D90Cu;
label_27d90c:
    // 0x27d90c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27d90cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27d910:
    // 0x27d910: 0x1000000f  b           . + 4 + (0xF << 2)
label_27d914:
    if (ctx->pc == 0x27D914u) {
        ctx->pc = 0x27D918u;
        goto label_27d918;
    }
    ctx->pc = 0x27D910u;
    {
        const bool branch_taken_0x27d910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d910) {
            ctx->pc = 0x27D950u;
            goto label_27d950;
        }
    }
    ctx->pc = 0x27D918u;
label_27d918:
    // 0x27d918: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x27d918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_27d91c:
    // 0x27d91c: 0xc09f670  jal         func_27D9C0
label_27d920:
    if (ctx->pc == 0x27D920u) {
        ctx->pc = 0x27D924u;
        goto label_27d924;
    }
    ctx->pc = 0x27D91Cu;
    SET_GPR_U32(ctx, 31, 0x27D924u);
    ctx->pc = 0x27D9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D9C0u, 0x27D91Cu, 0x27D924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D924u;
label_27d924:
    // 0x27d924: 0x8f83bb80  lw          $v1, -0x4480($gp)
    ctx->pc = 0x27d924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
label_27d928:
    // 0x27d928: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x27d928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_27d92c:
    // 0x27d92c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x27d92cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_27d930:
    // 0x27d930: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
label_27d934:
    if (ctx->pc == 0x27D934u) {
        ctx->pc = 0x27D938u;
        goto label_27d938;
    }
    ctx->pc = 0x27D930u;
    {
        const bool branch_taken_0x27d930 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x27d930) {
            ctx->pc = 0x27D94Cu;
            goto label_27d94c;
        }
    }
    ctx->pc = 0x27D938u;
label_27d938:
    // 0x27d938: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x27d938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_27d93c:
    // 0x27d93c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x27d93cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27d940:
    // 0x27d940: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x27d940u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_27d944:
    // 0x27d944: 0x320f809  jalr        $t9
label_27d948:
    if (ctx->pc == 0x27D948u) {
        ctx->pc = 0x27D94Cu;
        goto label_27d94c;
    }
    ctx->pc = 0x27D944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27D94Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27D944u, 0x27D94Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27D94Cu;
label_27d94c:
    // 0x27d94c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x27d94cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_27d950:
    // 0x27d950: 0x8f84bc1c  lw          $a0, -0x43E4($gp)
    ctx->pc = 0x27d950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949916)));
label_27d954:
    // 0x27d954: 0xc09f668  jal         func_27D9A0
label_27d958:
    if (ctx->pc == 0x27D958u) {
        ctx->pc = 0x27D95Cu;
        goto label_27d95c;
    }
    ctx->pc = 0x27D954u;
    SET_GPR_U32(ctx, 31, 0x27D95Cu);
    ctx->pc = 0x27D9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D9A0u, 0x27D954u, 0x27D95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D95Cu;
label_27d95c:
    // 0x27d95c: 0x1622ffee  bne         $s1, $v0, . + 4 + (-0x12 << 2)
label_27d960:
    if (ctx->pc == 0x27D960u) {
        ctx->pc = 0x27D964u;
        goto label_27d964;
    }
    ctx->pc = 0x27D95Cu;
    {
        const bool branch_taken_0x27d95c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x27d95c) {
            ctx->pc = 0x27D918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27d918;
        }
    }
    ctx->pc = 0x27D964u;
label_27d964:
    // 0x27d964: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27d964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27d968:
    // 0x27d968: 0xc105f9e  jal         func_417E78
label_27d96c:
    if (ctx->pc == 0x27D96Cu) {
        ctx->pc = 0x27D970u;
        goto label_27d970;
    }
    ctx->pc = 0x27D968u;
    SET_GPR_U32(ctx, 31, 0x27D970u);
    ctx->pc = 0x417E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417E78u, 0x27D968u, 0x27D970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D970u;
label_27d970:
    // 0x27d970: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x27d970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_27d974:
    // 0x27d974: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x27d974u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_27d978:
    // 0x27d978: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x27d978u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_27d97c:
    // 0x27d97c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x27d97cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_27d980:
    // 0x27d980: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x27d980u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_27d984:
    // 0x27d984: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27d984u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_27d988:
    // 0x27d988: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27d988u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27d98c:
    // 0x27d98c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27d98cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_27d990:
    // 0x27d990: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x27d990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_27d994:
    // 0x27d994: 0x3e00008  jr          $ra
label_27d998:
    if (ctx->pc == 0x27D998u) {
        ctx->pc = 0x27D99Cu;
        goto label_27d99c;
    }
    ctx->pc = 0x27D994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27D994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27D99Cu;
label_27d99c:
    // 0x27d99c: 0x0  nop
    ctx->pc = 0x27d99cu;
    // NOP
    ctx->pc = 0x27d9a0u;
}
