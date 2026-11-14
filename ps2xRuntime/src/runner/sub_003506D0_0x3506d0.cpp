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

// Function: sub_003506D0
// Address: 0x3506d0 - 0x350a60
void sub_003506D0_0x3506d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003506D0_0x3506d0");
#endif

    switch (ctx->pc) {
        case 0x3506d0u: goto label_3506d0;
        case 0x3506d4u: goto label_3506d4;
        case 0x3506d8u: goto label_3506d8;
        case 0x3506dcu: goto label_3506dc;
        case 0x3506e0u: goto label_3506e0;
        case 0x3506e4u: goto label_3506e4;
        case 0x3506e8u: goto label_3506e8;
        case 0x3506ecu: goto label_3506ec;
        case 0x3506f0u: goto label_3506f0;
        case 0x3506f4u: goto label_3506f4;
        case 0x3506f8u: goto label_3506f8;
        case 0x3506fcu: goto label_3506fc;
        case 0x350700u: goto label_350700;
        case 0x350704u: goto label_350704;
        case 0x350708u: goto label_350708;
        case 0x35070cu: goto label_35070c;
        case 0x350710u: goto label_350710;
        case 0x350714u: goto label_350714;
        case 0x350718u: goto label_350718;
        case 0x35071cu: goto label_35071c;
        case 0x350720u: goto label_350720;
        case 0x350724u: goto label_350724;
        case 0x350728u: goto label_350728;
        case 0x35072cu: goto label_35072c;
        case 0x350730u: goto label_350730;
        case 0x350734u: goto label_350734;
        case 0x350738u: goto label_350738;
        case 0x35073cu: goto label_35073c;
        case 0x350740u: goto label_350740;
        case 0x350744u: goto label_350744;
        case 0x350748u: goto label_350748;
        case 0x35074cu: goto label_35074c;
        case 0x350750u: goto label_350750;
        case 0x350754u: goto label_350754;
        case 0x350758u: goto label_350758;
        case 0x35075cu: goto label_35075c;
        case 0x350760u: goto label_350760;
        case 0x350764u: goto label_350764;
        case 0x350768u: goto label_350768;
        case 0x35076cu: goto label_35076c;
        case 0x350770u: goto label_350770;
        case 0x350774u: goto label_350774;
        case 0x350778u: goto label_350778;
        case 0x35077cu: goto label_35077c;
        case 0x350780u: goto label_350780;
        case 0x350784u: goto label_350784;
        case 0x350788u: goto label_350788;
        case 0x35078cu: goto label_35078c;
        case 0x350790u: goto label_350790;
        case 0x350794u: goto label_350794;
        case 0x350798u: goto label_350798;
        case 0x35079cu: goto label_35079c;
        case 0x3507a0u: goto label_3507a0;
        case 0x3507a4u: goto label_3507a4;
        case 0x3507a8u: goto label_3507a8;
        case 0x3507acu: goto label_3507ac;
        case 0x3507b0u: goto label_3507b0;
        case 0x3507b4u: goto label_3507b4;
        case 0x3507b8u: goto label_3507b8;
        case 0x3507bcu: goto label_3507bc;
        case 0x3507c0u: goto label_3507c0;
        case 0x3507c4u: goto label_3507c4;
        case 0x3507c8u: goto label_3507c8;
        case 0x3507ccu: goto label_3507cc;
        case 0x3507d0u: goto label_3507d0;
        case 0x3507d4u: goto label_3507d4;
        case 0x3507d8u: goto label_3507d8;
        case 0x3507dcu: goto label_3507dc;
        case 0x3507e0u: goto label_3507e0;
        case 0x3507e4u: goto label_3507e4;
        case 0x3507e8u: goto label_3507e8;
        case 0x3507ecu: goto label_3507ec;
        case 0x3507f0u: goto label_3507f0;
        case 0x3507f4u: goto label_3507f4;
        case 0x3507f8u: goto label_3507f8;
        case 0x3507fcu: goto label_3507fc;
        case 0x350800u: goto label_350800;
        case 0x350804u: goto label_350804;
        case 0x350808u: goto label_350808;
        case 0x35080cu: goto label_35080c;
        case 0x350810u: goto label_350810;
        case 0x350814u: goto label_350814;
        case 0x350818u: goto label_350818;
        case 0x35081cu: goto label_35081c;
        case 0x350820u: goto label_350820;
        case 0x350824u: goto label_350824;
        case 0x350828u: goto label_350828;
        case 0x35082cu: goto label_35082c;
        case 0x350830u: goto label_350830;
        case 0x350834u: goto label_350834;
        case 0x350838u: goto label_350838;
        case 0x35083cu: goto label_35083c;
        case 0x350840u: goto label_350840;
        case 0x350844u: goto label_350844;
        case 0x350848u: goto label_350848;
        case 0x35084cu: goto label_35084c;
        case 0x350850u: goto label_350850;
        case 0x350854u: goto label_350854;
        case 0x350858u: goto label_350858;
        case 0x35085cu: goto label_35085c;
        case 0x350860u: goto label_350860;
        case 0x350864u: goto label_350864;
        case 0x350868u: goto label_350868;
        case 0x35086cu: goto label_35086c;
        case 0x350870u: goto label_350870;
        case 0x350874u: goto label_350874;
        case 0x350878u: goto label_350878;
        case 0x35087cu: goto label_35087c;
        case 0x350880u: goto label_350880;
        case 0x350884u: goto label_350884;
        case 0x350888u: goto label_350888;
        case 0x35088cu: goto label_35088c;
        case 0x350890u: goto label_350890;
        case 0x350894u: goto label_350894;
        case 0x350898u: goto label_350898;
        case 0x35089cu: goto label_35089c;
        case 0x3508a0u: goto label_3508a0;
        case 0x3508a4u: goto label_3508a4;
        case 0x3508a8u: goto label_3508a8;
        case 0x3508acu: goto label_3508ac;
        case 0x3508b0u: goto label_3508b0;
        case 0x3508b4u: goto label_3508b4;
        case 0x3508b8u: goto label_3508b8;
        case 0x3508bcu: goto label_3508bc;
        case 0x3508c0u: goto label_3508c0;
        case 0x3508c4u: goto label_3508c4;
        case 0x3508c8u: goto label_3508c8;
        case 0x3508ccu: goto label_3508cc;
        case 0x3508d0u: goto label_3508d0;
        case 0x3508d4u: goto label_3508d4;
        case 0x3508d8u: goto label_3508d8;
        case 0x3508dcu: goto label_3508dc;
        case 0x3508e0u: goto label_3508e0;
        case 0x3508e4u: goto label_3508e4;
        case 0x3508e8u: goto label_3508e8;
        case 0x3508ecu: goto label_3508ec;
        case 0x3508f0u: goto label_3508f0;
        case 0x3508f4u: goto label_3508f4;
        case 0x3508f8u: goto label_3508f8;
        case 0x3508fcu: goto label_3508fc;
        case 0x350900u: goto label_350900;
        case 0x350904u: goto label_350904;
        case 0x350908u: goto label_350908;
        case 0x35090cu: goto label_35090c;
        case 0x350910u: goto label_350910;
        case 0x350914u: goto label_350914;
        case 0x350918u: goto label_350918;
        case 0x35091cu: goto label_35091c;
        case 0x350920u: goto label_350920;
        case 0x350924u: goto label_350924;
        case 0x350928u: goto label_350928;
        case 0x35092cu: goto label_35092c;
        case 0x350930u: goto label_350930;
        case 0x350934u: goto label_350934;
        case 0x350938u: goto label_350938;
        case 0x35093cu: goto label_35093c;
        case 0x350940u: goto label_350940;
        case 0x350944u: goto label_350944;
        case 0x350948u: goto label_350948;
        case 0x35094cu: goto label_35094c;
        case 0x350950u: goto label_350950;
        case 0x350954u: goto label_350954;
        case 0x350958u: goto label_350958;
        case 0x35095cu: goto label_35095c;
        case 0x350960u: goto label_350960;
        case 0x350964u: goto label_350964;
        case 0x350968u: goto label_350968;
        case 0x35096cu: goto label_35096c;
        case 0x350970u: goto label_350970;
        case 0x350974u: goto label_350974;
        case 0x350978u: goto label_350978;
        case 0x35097cu: goto label_35097c;
        case 0x350980u: goto label_350980;
        case 0x350984u: goto label_350984;
        case 0x350988u: goto label_350988;
        case 0x35098cu: goto label_35098c;
        case 0x350990u: goto label_350990;
        case 0x350994u: goto label_350994;
        case 0x350998u: goto label_350998;
        case 0x35099cu: goto label_35099c;
        case 0x3509a0u: goto label_3509a0;
        case 0x3509a4u: goto label_3509a4;
        case 0x3509a8u: goto label_3509a8;
        case 0x3509acu: goto label_3509ac;
        case 0x3509b0u: goto label_3509b0;
        case 0x3509b4u: goto label_3509b4;
        case 0x3509b8u: goto label_3509b8;
        case 0x3509bcu: goto label_3509bc;
        case 0x3509c0u: goto label_3509c0;
        case 0x3509c4u: goto label_3509c4;
        case 0x3509c8u: goto label_3509c8;
        case 0x3509ccu: goto label_3509cc;
        case 0x3509d0u: goto label_3509d0;
        case 0x3509d4u: goto label_3509d4;
        case 0x3509d8u: goto label_3509d8;
        case 0x3509dcu: goto label_3509dc;
        case 0x3509e0u: goto label_3509e0;
        case 0x3509e4u: goto label_3509e4;
        case 0x3509e8u: goto label_3509e8;
        case 0x3509ecu: goto label_3509ec;
        case 0x3509f0u: goto label_3509f0;
        case 0x3509f4u: goto label_3509f4;
        case 0x3509f8u: goto label_3509f8;
        case 0x3509fcu: goto label_3509fc;
        case 0x350a00u: goto label_350a00;
        case 0x350a04u: goto label_350a04;
        case 0x350a08u: goto label_350a08;
        case 0x350a0cu: goto label_350a0c;
        case 0x350a10u: goto label_350a10;
        case 0x350a14u: goto label_350a14;
        case 0x350a18u: goto label_350a18;
        case 0x350a1cu: goto label_350a1c;
        case 0x350a20u: goto label_350a20;
        case 0x350a24u: goto label_350a24;
        case 0x350a28u: goto label_350a28;
        case 0x350a2cu: goto label_350a2c;
        case 0x350a30u: goto label_350a30;
        case 0x350a34u: goto label_350a34;
        case 0x350a38u: goto label_350a38;
        case 0x350a3cu: goto label_350a3c;
        case 0x350a40u: goto label_350a40;
        case 0x350a44u: goto label_350a44;
        case 0x350a48u: goto label_350a48;
        case 0x350a4cu: goto label_350a4c;
        case 0x350a50u: goto label_350a50;
        case 0x350a54u: goto label_350a54;
        case 0x350a58u: goto label_350a58;
        case 0x350a5cu: goto label_350a5c;
        default: break;
    }

    ctx->pc = 0x3506d0u;

label_3506d0:
    // 0x3506d0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x3506d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_3506d4:
    // 0x3506d4: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x3506d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_3506d8:
    // 0x3506d8: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x3506d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_3506dc:
    // 0x3506dc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3506dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3506e0:
    // 0x3506e0: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x3506e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_3506e4:
    // 0x3506e4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3506e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3506e8:
    // 0x3506e8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x3506e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_3506ec:
    // 0x3506ec: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3506ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3506f0:
    // 0x3506f0: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x3506f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_3506f4:
    // 0x3506f4: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x3506f4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3506f8:
    // 0x3506f8: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x3506f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_3506fc:
    // 0x3506fc: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x3506fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_350700:
    // 0x350700: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x350700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_350704:
    // 0x350704: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x350704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_350708:
    // 0x350708: 0xc0e2094  jal         func_388250
label_35070c:
    if (ctx->pc == 0x35070Cu) {
        ctx->pc = 0x35070Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350708u;
        // 0x35070c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x350710u;
        goto label_350710;
    }
    ctx->pc = 0x350708u;
    SET_GPR_U32(ctx, 31, 0x350710u);
    ctx->pc = 0x35070Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350708u;
    // 0x35070c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x388250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388250u, 0x350708u, 0x350710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350710u;
label_350710:
    // 0x350710: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x350710u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_350714:
    // 0x350714: 0x124000c4  beqz        $s2, . + 4 + (0xC4 << 2)
label_350718:
    if (ctx->pc == 0x350718u) {
        ctx->pc = 0x350718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350714u;
        // 0x350718: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35071Cu;
        goto label_35071c;
    }
    ctx->pc = 0x350714u;
    {
        const bool branch_taken_0x350714 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x350718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350714u;
        // 0x350718: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350714) {
            ctx->pc = 0x350A28u;
            goto label_350a28;
        }
    }
    ctx->pc = 0x35071Cu;
label_35071c:
    // 0x35071c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x35071cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_350720:
    // 0x350720: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x350720u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_350724:
    // 0x350724: 0x24040140  addiu       $a0, $zero, 0x140
    ctx->pc = 0x350724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_350728:
    // 0x350728: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x350728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_35072c:
    // 0x35072c: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x35072cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_350730:
    // 0x350730: 0x40f809  jalr        $v0
label_350734:
    if (ctx->pc == 0x350734u) {
        ctx->pc = 0x350734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350730u;
        // 0x350734: 0x34a5012f  ori         $a1, $a1, 0x12F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)303);
        ctx->in_delay_slot = false;
        ctx->pc = 0x350738u;
        goto label_350738;
    }
    ctx->pc = 0x350730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x350738u);
        ctx->pc = 0x350734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350730u;
        // 0x350734: 0x34a5012f  ori         $a1, $a1, 0x12F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)303);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350730u, 0x350738u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x350738u;
label_350738:
    // 0x350738: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x350738u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35073c:
    // 0x35073c: 0x122000ba  beqz        $s1, . + 4 + (0xBA << 2)
label_350740:
    if (ctx->pc == 0x350740u) {
        ctx->pc = 0x350740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35073Cu;
        // 0x350740: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x350744u;
        goto label_350744;
    }
    ctx->pc = 0x35073Cu;
    {
        const bool branch_taken_0x35073c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x350740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35073Cu;
        // 0x350740: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35073c) {
            ctx->pc = 0x350A28u;
            goto label_350a28;
        }
    }
    ctx->pc = 0x350744u;
label_350744:
    // 0x350744: 0x8e430048  lw          $v1, 0x48($s2)
    ctx->pc = 0x350744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_350748:
    // 0x350748: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x350748u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
label_35074c:
    // 0x35074c: 0x24420ff8  addiu       $v0, $v0, 0xFF8
    ctx->pc = 0x35074cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4088));
label_350750:
    // 0x350750: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_350754:
    if (ctx->pc == 0x350754u) {
        ctx->pc = 0x350754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350750u;
        // 0x350754: 0xae420048  sw          $v0, 0x48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x350758u;
        goto label_350758;
    }
    ctx->pc = 0x350750u;
    {
        const bool branch_taken_0x350750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x350754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350750u;
        // 0x350754: 0xae420048  sw          $v0, 0x48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350750) {
            ctx->pc = 0x350768u;
            goto label_350768;
        }
    }
    ctx->pc = 0x350758u;
label_350758:
    // 0x350758: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x350758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_35075c:
    // 0x35075c: 0x24429850  addiu       $v0, $v0, -0x67B0
    ctx->pc = 0x35075cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940752));
label_350760:
    // 0x350760: 0xae420048  sw          $v0, 0x48($s2)
    ctx->pc = 0x350760u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 2));
label_350764:
    // 0x350764: 0x0  nop
    ctx->pc = 0x350764u;
    // NOP
label_350768:
    // 0x350768: 0x8f83a858  lw          $v1, -0x57A8($gp)
    ctx->pc = 0x350768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
label_35076c:
    // 0x35076c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x35076cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_350770:
    // 0x350770: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x350770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_350774:
    // 0x350774: 0xae340000  sw          $s4, 0x0($s1)
    ctx->pc = 0x350774u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 20));
label_350778:
    // 0x350778: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x350778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_35077c:
    // 0x35077c: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x35077cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
label_350780:
    // 0x350780: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x350780u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
label_350784:
    // 0x350784: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x350784u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_350788:
    // 0x350788: 0xae3000a8  sw          $s0, 0xA8($s1)
    ctx->pc = 0x350788u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 16));
label_35078c:
    // 0x35078c: 0xae330044  sw          $s3, 0x44($s1)
    ctx->pc = 0x35078cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 19));
label_350790:
    // 0x350790: 0xae20003c  sw          $zero, 0x3C($s1)
    ctx->pc = 0x350790u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
label_350794:
    // 0x350794: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x350794u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_350798:
    // 0x350798: 0x6ac20007  ldl         $v0, 0x7($s6)
    ctx->pc = 0x350798u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_35079c:
    // 0x35079c: 0x6ec20000  ldr         $v0, 0x0($s6)
    ctx->pc = 0x35079cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_3507a0:
    // 0x3507a0: 0x6ac3000f  ldl         $v1, 0xF($s6)
    ctx->pc = 0x3507a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_3507a4:
    // 0x3507a4: 0x6ec30008  ldr         $v1, 0x8($s6)
    ctx->pc = 0x3507a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_3507a8:
    // 0x3507a8: 0xb222001b  sdl         $v0, 0x1B($s1)
    ctx->pc = 0x3507a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3507ac:
    // 0x3507ac: 0xb6220014  sdr         $v0, 0x14($s1)
    ctx->pc = 0x3507acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3507b0:
    // 0x3507b0: 0xb2230023  sdl         $v1, 0x23($s1)
    ctx->pc = 0x3507b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3507b4:
    // 0x3507b4: 0xb623001c  sdr         $v1, 0x1C($s1)
    ctx->pc = 0x3507b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3507b8:
    // 0x3507b8: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x3507b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_3507bc:
    // 0x3507bc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_3507c0:
    if (ctx->pc == 0x3507C0u) {
        ctx->pc = 0x3507C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3507BCu;
        // 0x3507c0: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3507C4u;
        goto label_3507c4;
    }
    ctx->pc = 0x3507BCu;
    {
        const bool branch_taken_0x3507bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3507C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3507BCu;
        // 0x3507c0: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3507bc) {
            ctx->pc = 0x3507DCu;
            goto label_3507dc;
        }
    }
    ctx->pc = 0x3507C4u;
label_3507c4:
    // 0x3507c4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x3507c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3507c8:
    // 0x3507c8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3507c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3507cc:
    // 0x3507cc: 0x40f809  jalr        $v0
label_3507d0:
    if (ctx->pc == 0x3507D0u) {
        ctx->pc = 0x3507D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3507CCu;
        // 0x3507d0: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3507D4u;
        goto label_3507d4;
    }
    ctx->pc = 0x3507CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3507D4u);
        ctx->pc = 0x3507D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3507CCu;
        // 0x3507d0: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3507CCu, 0x3507D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3507D4u;
label_3507d4:
    // 0x3507d4: 0x1000000e  b           . + 4 + (0xE << 2)
label_3507d8:
    if (ctx->pc == 0x3507D8u) {
        ctx->pc = 0x3507D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3507D4u;
        // 0x3507d8: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3507DCu;
        goto label_3507dc;
    }
    ctx->pc = 0x3507D4u;
    {
        const bool branch_taken_0x3507d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3507D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3507D4u;
        // 0x3507d8: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3507d4) {
            ctx->pc = 0x350810u;
            goto label_350810;
        }
    }
    ctx->pc = 0x3507DCu;
label_3507dc:
    // 0x3507dc: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x3507dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_3507e0:
    // 0x3507e0: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x3507e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_3507e4:
    // 0x3507e4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3507e8:
    if (ctx->pc == 0x3507E8u) {
        ctx->pc = 0x3507E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3507E4u;
        // 0x3507e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3507ECu;
        goto label_3507ec;
    }
    ctx->pc = 0x3507E4u;
    {
        const bool branch_taken_0x3507e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3507E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3507E4u;
        // 0x3507e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3507e4) {
            ctx->pc = 0x350800u;
            goto label_350800;
        }
    }
    ctx->pc = 0x3507ECu;
label_3507ec:
    // 0x3507ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3507ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3507f0:
    // 0x3507f0: 0xc0d406a  jal         func_3501A8
label_3507f4:
    if (ctx->pc == 0x3507F4u) {
        ctx->pc = 0x3507F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3507F0u;
        // 0x3507f4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3507F8u;
        goto label_3507f8;
    }
    ctx->pc = 0x3507F0u;
    SET_GPR_U32(ctx, 31, 0x3507F8u);
    ctx->pc = 0x3507F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3507F0u;
    // 0x3507f4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3501A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3501A8u, 0x3507F0u, 0x3507F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3507F8u;
label_3507f8:
    // 0x3507f8: 0x10000005  b           . + 4 + (0x5 << 2)
label_3507fc:
    if (ctx->pc == 0x3507FCu) {
        ctx->pc = 0x3507FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3507F8u;
        // 0x3507fc: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x350800u;
        goto label_350800;
    }
    ctx->pc = 0x3507F8u;
    {
        const bool branch_taken_0x3507f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3507FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3507F8u;
        // 0x3507fc: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3507f8) {
            ctx->pc = 0x350810u;
            goto label_350810;
        }
    }
    ctx->pc = 0x350800u;
label_350800:
    // 0x350800: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x350800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_350804:
    // 0x350804: 0xc0d3f56  jal         func_34FD58
label_350808:
    if (ctx->pc == 0x350808u) {
        ctx->pc = 0x350808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350804u;
        // 0x350808: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35080Cu;
        goto label_35080c;
    }
    ctx->pc = 0x350804u;
    SET_GPR_U32(ctx, 31, 0x35080Cu);
    ctx->pc = 0x350808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350804u;
    // 0x350808: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34FD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34FD58u, 0x350804u, 0x35080Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35080Cu;
label_35080c:
    // 0x35080c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x35080cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_350810:
    // 0x350810: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x350810u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_350814:
    // 0x350814: 0x52b40005  beql        $s5, $s4, . + 4 + (0x5 << 2)
label_350818:
    if (ctx->pc == 0x350818u) {
        ctx->pc = 0x350818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350814u;
        // 0x350818: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35081Cu;
        goto label_35081c;
    }
    ctx->pc = 0x350814u;
    {
        const bool branch_taken_0x350814 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 20));
        if (branch_taken_0x350814) {
            ctx->pc = 0x350818u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x350814u;
            // 0x350818: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35082Cu;
            goto label_35082c;
        }
    }
    ctx->pc = 0x35081Cu;
label_35081c:
    // 0x35081c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x35081cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_350820:
    // 0x350820: 0x10400081  beqz        $v0, . + 4 + (0x81 << 2)
label_350824:
    if (ctx->pc == 0x350824u) {
        ctx->pc = 0x350828u;
        goto label_350828;
    }
    ctx->pc = 0x350820u;
    {
        const bool branch_taken_0x350820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x350820) {
            ctx->pc = 0x350A28u;
            goto label_350a28;
        }
    }
    ctx->pc = 0x350828u;
label_350828:
    // 0x350828: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x350828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_35082c:
    // 0x35082c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x35082cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_350830:
    // 0x350830: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x350830u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_350834:
    // 0x350834: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x350834u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_350838:
    // 0x350838: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x350838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_35083c:
    // 0x35083c: 0x40f809  jalr        $v0
label_350840:
    if (ctx->pc == 0x350840u) {
        ctx->pc = 0x350840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35083Cu;
        // 0x350840: 0x26250050  addiu       $a1, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x350844u;
        goto label_350844;
    }
    ctx->pc = 0x35083Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x350844u);
        ctx->pc = 0x350840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35083Cu;
        // 0x350840: 0x26250050  addiu       $a1, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35083Cu, 0x350844u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x350844u;
label_350844:
    // 0x350844: 0x14540078  bne         $v0, $s4, . + 4 + (0x78 << 2)
label_350848:
    if (ctx->pc == 0x350848u) {
        ctx->pc = 0x350848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350844u;
        // 0x350848: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35084Cu;
        goto label_35084c;
    }
    ctx->pc = 0x350844u;
    {
        const bool branch_taken_0x350844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x350848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350844u;
        // 0x350848: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350844) {
            ctx->pc = 0x350A28u;
            goto label_350a28;
        }
    }
    ctx->pc = 0x35084Cu;
label_35084c:
    // 0x35084c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35084cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_350850:
    // 0x350850: 0xc0bb7e6  jal         func_2EDF98
label_350854:
    if (ctx->pc == 0x350854u) {
        ctx->pc = 0x350854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350850u;
        // 0x350854: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x350858u;
        goto label_350858;
    }
    ctx->pc = 0x350850u;
    SET_GPR_U32(ctx, 31, 0x350858u);
    ctx->pc = 0x350854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350850u;
    // 0x350854: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x350850u, 0x350858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350858u;
label_350858:
    // 0x350858: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x350858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_35085c:
    // 0x35085c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x35085cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_350860:
    // 0x350860: 0x246297d0  addiu       $v0, $v1, -0x6830
    ctx->pc = 0x350860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940624));
label_350864:
    // 0x350864: 0x68470007  ldl         $a3, 0x7($v0)
    ctx->pc = 0x350864u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_350868:
    // 0x350868: 0x6c470000  ldr         $a3, 0x0($v0)
    ctx->pc = 0x350868u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_35086c:
    // 0x35086c: 0xb3a70017  sdl         $a3, 0x17($sp)
    ctx->pc = 0x35086cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_350870:
    // 0x350870: 0xb7a70010  sdr         $a3, 0x10($sp)
    ctx->pc = 0x350870u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_350874:
    // 0x350874: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x350874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_350878:
    // 0x350878: 0xc0bb7e6  jal         func_2EDF98
label_35087c:
    if (ctx->pc == 0x35087Cu) {
        ctx->pc = 0x35087Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350878u;
        // 0x35087c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x350880u;
        goto label_350880;
    }
    ctx->pc = 0x350878u;
    SET_GPR_U32(ctx, 31, 0x350880u);
    ctx->pc = 0x35087Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350878u;
    // 0x35087c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x350878u, 0x350880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350880u;
label_350880:
    // 0x350880: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x350880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_350884:
    // 0x350884: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x350884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_350888:
    // 0x350888: 0xa3a30023  sb          $v1, 0x23($sp)
    ctx->pc = 0x350888u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 35), (uint8_t)GPR_U32(ctx, 3));
label_35088c:
    // 0x35088c: 0x2446b978  addiu       $a2, $v0, -0x4688
    ctx->pc = 0x35088cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949240));
label_350890:
    // 0x350890: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x350890u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_350894:
    // 0x350894: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x350894u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_350898:
    // 0x350898: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x350898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_35089c:
    // 0x35089c: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x35089cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_3508a0:
    // 0x3508a0: 0x68c50017  ldl         $a1, 0x17($a2)
    ctx->pc = 0x3508a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_3508a4:
    // 0x3508a4: 0x6cc50010  ldr         $a1, 0x10($a2)
    ctx->pc = 0x3508a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_3508a8:
    // 0x3508a8: 0xb3a30037  sdl         $v1, 0x37($sp)
    ctx->pc = 0x3508a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3508ac:
    // 0x3508ac: 0xb7a30030  sdr         $v1, 0x30($sp)
    ctx->pc = 0x3508acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3508b0:
    // 0x3508b0: 0xb3a4003f  sdl         $a0, 0x3F($sp)
    ctx->pc = 0x3508b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3508b4:
    // 0x3508b4: 0xb7a40038  sdr         $a0, 0x38($sp)
    ctx->pc = 0x3508b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3508b8:
    // 0x3508b8: 0xb3a50047  sdl         $a1, 0x47($sp)
    ctx->pc = 0x3508b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3508bc:
    // 0x3508bc: 0xb7a50040  sdr         $a1, 0x40($sp)
    ctx->pc = 0x3508bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3508c0:
    // 0x3508c0: 0x68c3001f  ldl         $v1, 0x1F($a2)
    ctx->pc = 0x3508c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_3508c4:
    // 0x3508c4: 0x6cc30018  ldr         $v1, 0x18($a2)
    ctx->pc = 0x3508c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_3508c8:
    // 0x3508c8: 0xb3a3004f  sdl         $v1, 0x4F($sp)
    ctx->pc = 0x3508c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3508cc:
    // 0x3508cc: 0xb7a30048  sdr         $v1, 0x48($sp)
    ctx->pc = 0x3508ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3508d0:
    // 0x3508d0: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x3508d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_3508d4:
    // 0x3508d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3508d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3508d8:
    // 0x3508d8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x3508d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_3508dc:
    // 0x3508dc: 0xc0e39e0  jal         func_38E780
label_3508e0:
    if (ctx->pc == 0x3508E0u) {
        ctx->pc = 0x3508E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3508DCu;
        // 0x3508e0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3508E4u;
        goto label_3508e4;
    }
    ctx->pc = 0x3508DCu;
    SET_GPR_U32(ctx, 31, 0x3508E4u);
    ctx->pc = 0x3508E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3508DCu;
    // 0x3508e0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E780u, 0x3508DCu, 0x3508E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3508E4u;
label_3508e4:
    // 0x3508e4: 0x6ba70017  ldl         $a3, 0x17($sp)
    ctx->pc = 0x3508e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_3508e8:
    // 0x3508e8: 0x6fa70010  ldr         $a3, 0x10($sp)
    ctx->pc = 0x3508e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_3508ec:
    // 0x3508ec: 0xb22700c7  sdl         $a3, 0xC7($s1)
    ctx->pc = 0x3508ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3508f0:
    // 0x3508f0: 0xb62700c0  sdr         $a3, 0xC0($s1)
    ctx->pc = 0x3508f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3508f4:
    // 0x3508f4: 0xae2000c8  sw          $zero, 0xC8($s1)
    ctx->pc = 0x3508f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 0));
label_3508f8:
    // 0x3508f8: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x3508f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_3508fc:
    // 0x3508fc: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x3508fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_350900:
    // 0x350900: 0xb22300bf  sdl         $v1, 0xBF($s1)
    ctx->pc = 0x350900u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 191); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_350904:
    // 0x350904: 0xb62300b8  sdr         $v1, 0xB8($s1)
    ctx->pc = 0x350904u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 184); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_350908:
    // 0x350908: 0x26220100  addiu       $v0, $s1, 0x100
    ctx->pc = 0x350908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
label_35090c:
    // 0x35090c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x35090cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_350910:
    // 0x350910: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x350910u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_350914:
    // 0x350914: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x350914u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
label_350918:
    // 0x350918: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x350918u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_35091c:
    // 0x35091c: 0x34840003  ori         $a0, $a0, 0x3
    ctx->pc = 0x35091cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
label_350920:
    // 0x350920: 0xe4410028  swc1        $f1, 0x28($v0)
    ctx->pc = 0x350920u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
label_350924:
    // 0x350924: 0xe4410014  swc1        $f1, 0x14($v0)
    ctx->pc = 0x350924u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_350928:
    // 0x350928: 0xe6210100  swc1        $f1, 0x100($s1)
    ctx->pc = 0x350928u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 256), bits); }
label_35092c:
    // 0x35092c: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x35092cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_350930:
    // 0x350930: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x350930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_350934:
    // 0x350934: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x350934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
label_350938:
    // 0x350938: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x350938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_35093c:
    // 0x35093c: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x35093cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
label_350940:
    // 0x350940: 0x8e23010c  lw          $v1, 0x10C($s1)
    ctx->pc = 0x350940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_350944:
    // 0x350944: 0xe6200118  swc1        $f0, 0x118($s1)
    ctx->pc = 0x350944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 280), bits); }
label_350948:
    // 0x350948: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x350948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_35094c:
    // 0x35094c: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x35094cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
label_350950:
    // 0x350950: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x350950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
label_350954:
    // 0x350954: 0xe6200130  swc1        $f0, 0x130($s1)
    ctx->pc = 0x350954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 304), bits); }
label_350958:
    // 0x350958: 0xae23010c  sw          $v1, 0x10C($s1)
    ctx->pc = 0x350958u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 268), GPR_U32(ctx, 3));
label_35095c:
    // 0x35095c: 0x8ba70023  lwl         $a3, 0x23($sp)
    ctx->pc = 0x35095cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
label_350960:
    // 0x350960: 0x9ba70020  lwr         $a3, 0x20($sp)
    ctx->pc = 0x350960u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
label_350964:
    // 0x350964: 0xaa2700cf  swl         $a3, 0xCF($s1)
    ctx->pc = 0x350964u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 207); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_350968:
    // 0x350968: 0xba2700cc  swr         $a3, 0xCC($s1)
    ctx->pc = 0x350968u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 204); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_35096c:
    // 0x35096c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x35096cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_350970:
    // 0x350970: 0x8ba30023  lwl         $v1, 0x23($sp)
    ctx->pc = 0x350970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
label_350974:
    // 0x350974: 0x9ba30020  lwr         $v1, 0x20($sp)
    ctx->pc = 0x350974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
label_350978:
    // 0x350978: 0xaa2300d3  swl         $v1, 0xD3($s1)
    ctx->pc = 0x350978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 211); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_35097c:
    // 0x35097c: 0xba2300d0  swr         $v1, 0xD0($s1)
    ctx->pc = 0x35097cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 208); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_350980:
    // 0x350980: 0x26f0e880  addiu       $s0, $s7, -0x1780
    ctx->pc = 0x350980u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4294961280));
label_350984:
    // 0x350984: 0x8ba80023  lwl         $t0, 0x23($sp)
    ctx->pc = 0x350984u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 8) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 8, (int32_t)merged); }
label_350988:
    // 0x350988: 0x9ba80020  lwr         $t0, 0x20($sp)
    ctx->pc = 0x350988u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
label_35098c:
    // 0x35098c: 0xaa2800d7  swl         $t0, 0xD7($s1)
    ctx->pc = 0x35098cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 215); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_350990:
    // 0x350990: 0xba2800d4  swr         $t0, 0xD4($s1)
    ctx->pc = 0x350990u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 212); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_350994:
    // 0x350994: 0x8ba60023  lwl         $a2, 0x23($sp)
    ctx->pc = 0x350994u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
label_350998:
    // 0x350998: 0x9ba60020  lwr         $a2, 0x20($sp)
    ctx->pc = 0x350998u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
label_35099c:
    // 0x35099c: 0xaa2600db  swl         $a2, 0xDB($s1)
    ctx->pc = 0x35099cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 219); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_3509a0:
    // 0x3509a0: 0xba2600d8  swr         $a2, 0xD8($s1)
    ctx->pc = 0x3509a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 216); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_3509a4:
    // 0x3509a4: 0x8ba20023  lwl         $v0, 0x23($sp)
    ctx->pc = 0x3509a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
label_3509a8:
    // 0x3509a8: 0x9ba20020  lwr         $v0, 0x20($sp)
    ctx->pc = 0x3509a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
label_3509ac:
    // 0x3509ac: 0xaa2200df  swl         $v0, 0xDF($s1)
    ctx->pc = 0x3509acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 223); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_3509b0:
    // 0x3509b0: 0xba2200dc  swr         $v0, 0xDC($s1)
    ctx->pc = 0x3509b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 220); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_3509b4:
    // 0x3509b4: 0x6ba80037  ldl         $t0, 0x37($sp)
    ctx->pc = 0x3509b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_3509b8:
    // 0x3509b8: 0x6fa80030  ldr         $t0, 0x30($sp)
    ctx->pc = 0x3509b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_3509bc:
    // 0x3509bc: 0xb22800e7  sdl         $t0, 0xE7($s1)
    ctx->pc = 0x3509bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 231); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3509c0:
    // 0x3509c0: 0xb62800e0  sdr         $t0, 0xE0($s1)
    ctx->pc = 0x3509c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 224); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3509c4:
    // 0x3509c4: 0x6ba6003f  ldl         $a2, 0x3F($sp)
    ctx->pc = 0x3509c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_3509c8:
    // 0x3509c8: 0x6fa60038  ldr         $a2, 0x38($sp)
    ctx->pc = 0x3509c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_3509cc:
    // 0x3509cc: 0xb22600ef  sdl         $a2, 0xEF($s1)
    ctx->pc = 0x3509ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 239); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3509d0:
    // 0x3509d0: 0xb62600e8  sdr         $a2, 0xE8($s1)
    ctx->pc = 0x3509d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 232); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3509d4:
    // 0x3509d4: 0x6ba20047  ldl         $v0, 0x47($sp)
    ctx->pc = 0x3509d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_3509d8:
    // 0x3509d8: 0x6fa20040  ldr         $v0, 0x40($sp)
    ctx->pc = 0x3509d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_3509dc:
    // 0x3509dc: 0xb22200f7  sdl         $v0, 0xF7($s1)
    ctx->pc = 0x3509dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 247); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3509e0:
    // 0x3509e0: 0xb62200f0  sdr         $v0, 0xF0($s1)
    ctx->pc = 0x3509e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 240); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3509e4:
    // 0x3509e4: 0x6ba8004f  ldl         $t0, 0x4F($sp)
    ctx->pc = 0x3509e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_3509e8:
    // 0x3509e8: 0x6fa80048  ldr         $t0, 0x48($sp)
    ctx->pc = 0x3509e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_3509ec:
    // 0x3509ec: 0xb22800ff  sdl         $t0, 0xFF($s1)
    ctx->pc = 0x3509ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 255); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3509f0:
    // 0x3509f0: 0xb62800f8  sdr         $t0, 0xF8($s1)
    ctx->pc = 0x3509f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 248); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3509f4:
    // 0x3509f4: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x3509f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_3509f8:
    // 0x3509f8: 0x40f809  jalr        $v0
label_3509fc:
    if (ctx->pc == 0x3509FCu) {
        ctx->pc = 0x3509FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3509F8u;
        // 0x3509fc: 0x262500ac  addiu       $a1, $s1, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 172));
        ctx->in_delay_slot = false;
        ctx->pc = 0x350A00u;
        goto label_350a00;
    }
    ctx->pc = 0x3509F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x350A00u);
        ctx->pc = 0x3509FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3509F8u;
        // 0x3509fc: 0x262500ac  addiu       $a1, $s1, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 172));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3509F8u, 0x350A00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x350A00u;
label_350a00:
    // 0x350a00: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x350a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_350a04:
    // 0x350a04: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x350a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_350a08:
    // 0x350a08: 0x40f809  jalr        $v0
label_350a0c:
    if (ctx->pc == 0x350A0Cu) {
        ctx->pc = 0x350A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350A08u;
        // 0x350a0c: 0x262500b0  addiu       $a1, $s1, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x350A10u;
        goto label_350a10;
    }
    ctx->pc = 0x350A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x350A10u);
        ctx->pc = 0x350A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350A08u;
        // 0x350a0c: 0x262500b0  addiu       $a1, $s1, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350A08u, 0x350A10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x350A10u;
label_350a10:
    // 0x350a10: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x350a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_350a14:
    // 0x350a14: 0x262500b4  addiu       $a1, $s1, 0xB4
    ctx->pc = 0x350a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 180));
label_350a18:
    // 0x350a18: 0x40f809  jalr        $v0
label_350a1c:
    if (ctx->pc == 0x350A1Cu) {
        ctx->pc = 0x350A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350A18u;
        // 0x350a1c: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x350A20u;
        goto label_350a20;
    }
    ctx->pc = 0x350A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x350A20u);
        ctx->pc = 0x350A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350A18u;
        // 0x350a1c: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350A18u, 0x350A20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x350A20u;
label_350a20:
    // 0x350a20: 0x10000004  b           . + 4 + (0x4 << 2)
label_350a24:
    if (ctx->pc == 0x350A24u) {
        ctx->pc = 0x350A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350A20u;
        // 0x350a24: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x350A28u;
        goto label_350a28;
    }
    ctx->pc = 0x350A20u;
    {
        const bool branch_taken_0x350a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x350A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350A20u;
        // 0x350a24: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350a20) {
            ctx->pc = 0x350A34u;
            goto label_350a34;
        }
    }
    ctx->pc = 0x350A28u;
label_350a28:
    // 0x350a28: 0xc0e27ae  jal         func_389EB8
label_350a2c:
    if (ctx->pc == 0x350A2Cu) {
        ctx->pc = 0x350A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350A28u;
        // 0x350a2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x350A30u;
        goto label_350a30;
    }
    ctx->pc = 0x350A28u;
    SET_GPR_U32(ctx, 31, 0x350A30u);
    ctx->pc = 0x350A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350A28u;
    // 0x350a2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389EB8u, 0x350A28u, 0x350A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350A30u;
label_350a30:
    // 0x350a30: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x350a30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_350a34:
    // 0x350a34: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x350a34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_350a38:
    // 0x350a38: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x350a38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_350a3c:
    // 0x350a3c: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x350a3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_350a40:
    // 0x350a40: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x350a40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_350a44:
    // 0x350a44: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x350a44u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_350a48:
    // 0x350a48: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x350a48u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_350a4c:
    // 0x350a4c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x350a4cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_350a50:
    // 0x350a50: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x350a50u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_350a54:
    // 0x350a54: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x350a54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_350a58:
    // 0x350a58: 0x3e00008  jr          $ra
label_350a5c:
    if (ctx->pc == 0x350A5Cu) {
        ctx->pc = 0x350A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350A58u;
        // 0x350a5c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x350A60u;
        goto label_fallthrough_0x350a58;
    }
    ctx->pc = 0x350A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x350A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350A58u;
        // 0x350a5c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350A58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x350a58:
    ctx->pc = 0x350A60u;
}
