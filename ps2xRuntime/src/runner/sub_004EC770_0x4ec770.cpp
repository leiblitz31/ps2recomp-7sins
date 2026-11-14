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

// Function: sub_004EC770
// Address: 0x4ec770 - 0x4ecbe0
void sub_004EC770_0x4ec770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EC770_0x4ec770");
#endif

    switch (ctx->pc) {
        case 0x4ec770u: goto label_4ec770;
        case 0x4ec774u: goto label_4ec774;
        case 0x4ec778u: goto label_4ec778;
        case 0x4ec77cu: goto label_4ec77c;
        case 0x4ec780u: goto label_4ec780;
        case 0x4ec784u: goto label_4ec784;
        case 0x4ec788u: goto label_4ec788;
        case 0x4ec78cu: goto label_4ec78c;
        case 0x4ec790u: goto label_4ec790;
        case 0x4ec794u: goto label_4ec794;
        case 0x4ec798u: goto label_4ec798;
        case 0x4ec79cu: goto label_4ec79c;
        case 0x4ec7a0u: goto label_4ec7a0;
        case 0x4ec7a4u: goto label_4ec7a4;
        case 0x4ec7a8u: goto label_4ec7a8;
        case 0x4ec7acu: goto label_4ec7ac;
        case 0x4ec7b0u: goto label_4ec7b0;
        case 0x4ec7b4u: goto label_4ec7b4;
        case 0x4ec7b8u: goto label_4ec7b8;
        case 0x4ec7bcu: goto label_4ec7bc;
        case 0x4ec7c0u: goto label_4ec7c0;
        case 0x4ec7c4u: goto label_4ec7c4;
        case 0x4ec7c8u: goto label_4ec7c8;
        case 0x4ec7ccu: goto label_4ec7cc;
        case 0x4ec7d0u: goto label_4ec7d0;
        case 0x4ec7d4u: goto label_4ec7d4;
        case 0x4ec7d8u: goto label_4ec7d8;
        case 0x4ec7dcu: goto label_4ec7dc;
        case 0x4ec7e0u: goto label_4ec7e0;
        case 0x4ec7e4u: goto label_4ec7e4;
        case 0x4ec7e8u: goto label_4ec7e8;
        case 0x4ec7ecu: goto label_4ec7ec;
        case 0x4ec7f0u: goto label_4ec7f0;
        case 0x4ec7f4u: goto label_4ec7f4;
        case 0x4ec7f8u: goto label_4ec7f8;
        case 0x4ec7fcu: goto label_4ec7fc;
        case 0x4ec800u: goto label_4ec800;
        case 0x4ec804u: goto label_4ec804;
        case 0x4ec808u: goto label_4ec808;
        case 0x4ec80cu: goto label_4ec80c;
        case 0x4ec810u: goto label_4ec810;
        case 0x4ec814u: goto label_4ec814;
        case 0x4ec818u: goto label_4ec818;
        case 0x4ec81cu: goto label_4ec81c;
        case 0x4ec820u: goto label_4ec820;
        case 0x4ec824u: goto label_4ec824;
        case 0x4ec828u: goto label_4ec828;
        case 0x4ec82cu: goto label_4ec82c;
        case 0x4ec830u: goto label_4ec830;
        case 0x4ec834u: goto label_4ec834;
        case 0x4ec838u: goto label_4ec838;
        case 0x4ec83cu: goto label_4ec83c;
        case 0x4ec840u: goto label_4ec840;
        case 0x4ec844u: goto label_4ec844;
        case 0x4ec848u: goto label_4ec848;
        case 0x4ec84cu: goto label_4ec84c;
        case 0x4ec850u: goto label_4ec850;
        case 0x4ec854u: goto label_4ec854;
        case 0x4ec858u: goto label_4ec858;
        case 0x4ec85cu: goto label_4ec85c;
        case 0x4ec860u: goto label_4ec860;
        case 0x4ec864u: goto label_4ec864;
        case 0x4ec868u: goto label_4ec868;
        case 0x4ec86cu: goto label_4ec86c;
        case 0x4ec870u: goto label_4ec870;
        case 0x4ec874u: goto label_4ec874;
        case 0x4ec878u: goto label_4ec878;
        case 0x4ec87cu: goto label_4ec87c;
        case 0x4ec880u: goto label_4ec880;
        case 0x4ec884u: goto label_4ec884;
        case 0x4ec888u: goto label_4ec888;
        case 0x4ec88cu: goto label_4ec88c;
        case 0x4ec890u: goto label_4ec890;
        case 0x4ec894u: goto label_4ec894;
        case 0x4ec898u: goto label_4ec898;
        case 0x4ec89cu: goto label_4ec89c;
        case 0x4ec8a0u: goto label_4ec8a0;
        case 0x4ec8a4u: goto label_4ec8a4;
        case 0x4ec8a8u: goto label_4ec8a8;
        case 0x4ec8acu: goto label_4ec8ac;
        case 0x4ec8b0u: goto label_4ec8b0;
        case 0x4ec8b4u: goto label_4ec8b4;
        case 0x4ec8b8u: goto label_4ec8b8;
        case 0x4ec8bcu: goto label_4ec8bc;
        case 0x4ec8c0u: goto label_4ec8c0;
        case 0x4ec8c4u: goto label_4ec8c4;
        case 0x4ec8c8u: goto label_4ec8c8;
        case 0x4ec8ccu: goto label_4ec8cc;
        case 0x4ec8d0u: goto label_4ec8d0;
        case 0x4ec8d4u: goto label_4ec8d4;
        case 0x4ec8d8u: goto label_4ec8d8;
        case 0x4ec8dcu: goto label_4ec8dc;
        case 0x4ec8e0u: goto label_4ec8e0;
        case 0x4ec8e4u: goto label_4ec8e4;
        case 0x4ec8e8u: goto label_4ec8e8;
        case 0x4ec8ecu: goto label_4ec8ec;
        case 0x4ec8f0u: goto label_4ec8f0;
        case 0x4ec8f4u: goto label_4ec8f4;
        case 0x4ec8f8u: goto label_4ec8f8;
        case 0x4ec8fcu: goto label_4ec8fc;
        case 0x4ec900u: goto label_4ec900;
        case 0x4ec904u: goto label_4ec904;
        case 0x4ec908u: goto label_4ec908;
        case 0x4ec90cu: goto label_4ec90c;
        case 0x4ec910u: goto label_4ec910;
        case 0x4ec914u: goto label_4ec914;
        case 0x4ec918u: goto label_4ec918;
        case 0x4ec91cu: goto label_4ec91c;
        case 0x4ec920u: goto label_4ec920;
        case 0x4ec924u: goto label_4ec924;
        case 0x4ec928u: goto label_4ec928;
        case 0x4ec92cu: goto label_4ec92c;
        case 0x4ec930u: goto label_4ec930;
        case 0x4ec934u: goto label_4ec934;
        case 0x4ec938u: goto label_4ec938;
        case 0x4ec93cu: goto label_4ec93c;
        case 0x4ec940u: goto label_4ec940;
        case 0x4ec944u: goto label_4ec944;
        case 0x4ec948u: goto label_4ec948;
        case 0x4ec94cu: goto label_4ec94c;
        case 0x4ec950u: goto label_4ec950;
        case 0x4ec954u: goto label_4ec954;
        case 0x4ec958u: goto label_4ec958;
        case 0x4ec95cu: goto label_4ec95c;
        case 0x4ec960u: goto label_4ec960;
        case 0x4ec964u: goto label_4ec964;
        case 0x4ec968u: goto label_4ec968;
        case 0x4ec96cu: goto label_4ec96c;
        case 0x4ec970u: goto label_4ec970;
        case 0x4ec974u: goto label_4ec974;
        case 0x4ec978u: goto label_4ec978;
        case 0x4ec97cu: goto label_4ec97c;
        case 0x4ec980u: goto label_4ec980;
        case 0x4ec984u: goto label_4ec984;
        case 0x4ec988u: goto label_4ec988;
        case 0x4ec98cu: goto label_4ec98c;
        case 0x4ec990u: goto label_4ec990;
        case 0x4ec994u: goto label_4ec994;
        case 0x4ec998u: goto label_4ec998;
        case 0x4ec99cu: goto label_4ec99c;
        case 0x4ec9a0u: goto label_4ec9a0;
        case 0x4ec9a4u: goto label_4ec9a4;
        case 0x4ec9a8u: goto label_4ec9a8;
        case 0x4ec9acu: goto label_4ec9ac;
        case 0x4ec9b0u: goto label_4ec9b0;
        case 0x4ec9b4u: goto label_4ec9b4;
        case 0x4ec9b8u: goto label_4ec9b8;
        case 0x4ec9bcu: goto label_4ec9bc;
        case 0x4ec9c0u: goto label_4ec9c0;
        case 0x4ec9c4u: goto label_4ec9c4;
        case 0x4ec9c8u: goto label_4ec9c8;
        case 0x4ec9ccu: goto label_4ec9cc;
        case 0x4ec9d0u: goto label_4ec9d0;
        case 0x4ec9d4u: goto label_4ec9d4;
        case 0x4ec9d8u: goto label_4ec9d8;
        case 0x4ec9dcu: goto label_4ec9dc;
        case 0x4ec9e0u: goto label_4ec9e0;
        case 0x4ec9e4u: goto label_4ec9e4;
        case 0x4ec9e8u: goto label_4ec9e8;
        case 0x4ec9ecu: goto label_4ec9ec;
        case 0x4ec9f0u: goto label_4ec9f0;
        case 0x4ec9f4u: goto label_4ec9f4;
        case 0x4ec9f8u: goto label_4ec9f8;
        case 0x4ec9fcu: goto label_4ec9fc;
        case 0x4eca00u: goto label_4eca00;
        case 0x4eca04u: goto label_4eca04;
        case 0x4eca08u: goto label_4eca08;
        case 0x4eca0cu: goto label_4eca0c;
        case 0x4eca10u: goto label_4eca10;
        case 0x4eca14u: goto label_4eca14;
        case 0x4eca18u: goto label_4eca18;
        case 0x4eca1cu: goto label_4eca1c;
        case 0x4eca20u: goto label_4eca20;
        case 0x4eca24u: goto label_4eca24;
        case 0x4eca28u: goto label_4eca28;
        case 0x4eca2cu: goto label_4eca2c;
        case 0x4eca30u: goto label_4eca30;
        case 0x4eca34u: goto label_4eca34;
        case 0x4eca38u: goto label_4eca38;
        case 0x4eca3cu: goto label_4eca3c;
        case 0x4eca40u: goto label_4eca40;
        case 0x4eca44u: goto label_4eca44;
        case 0x4eca48u: goto label_4eca48;
        case 0x4eca4cu: goto label_4eca4c;
        case 0x4eca50u: goto label_4eca50;
        case 0x4eca54u: goto label_4eca54;
        case 0x4eca58u: goto label_4eca58;
        case 0x4eca5cu: goto label_4eca5c;
        case 0x4eca60u: goto label_4eca60;
        case 0x4eca64u: goto label_4eca64;
        case 0x4eca68u: goto label_4eca68;
        case 0x4eca6cu: goto label_4eca6c;
        case 0x4eca70u: goto label_4eca70;
        case 0x4eca74u: goto label_4eca74;
        case 0x4eca78u: goto label_4eca78;
        case 0x4eca7cu: goto label_4eca7c;
        case 0x4eca80u: goto label_4eca80;
        case 0x4eca84u: goto label_4eca84;
        case 0x4eca88u: goto label_4eca88;
        case 0x4eca8cu: goto label_4eca8c;
        case 0x4eca90u: goto label_4eca90;
        case 0x4eca94u: goto label_4eca94;
        case 0x4eca98u: goto label_4eca98;
        case 0x4eca9cu: goto label_4eca9c;
        case 0x4ecaa0u: goto label_4ecaa0;
        case 0x4ecaa4u: goto label_4ecaa4;
        case 0x4ecaa8u: goto label_4ecaa8;
        case 0x4ecaacu: goto label_4ecaac;
        case 0x4ecab0u: goto label_4ecab0;
        case 0x4ecab4u: goto label_4ecab4;
        case 0x4ecab8u: goto label_4ecab8;
        case 0x4ecabcu: goto label_4ecabc;
        case 0x4ecac0u: goto label_4ecac0;
        case 0x4ecac4u: goto label_4ecac4;
        case 0x4ecac8u: goto label_4ecac8;
        case 0x4ecaccu: goto label_4ecacc;
        case 0x4ecad0u: goto label_4ecad0;
        case 0x4ecad4u: goto label_4ecad4;
        case 0x4ecad8u: goto label_4ecad8;
        case 0x4ecadcu: goto label_4ecadc;
        case 0x4ecae0u: goto label_4ecae0;
        case 0x4ecae4u: goto label_4ecae4;
        case 0x4ecae8u: goto label_4ecae8;
        case 0x4ecaecu: goto label_4ecaec;
        case 0x4ecaf0u: goto label_4ecaf0;
        case 0x4ecaf4u: goto label_4ecaf4;
        case 0x4ecaf8u: goto label_4ecaf8;
        case 0x4ecafcu: goto label_4ecafc;
        case 0x4ecb00u: goto label_4ecb00;
        case 0x4ecb04u: goto label_4ecb04;
        case 0x4ecb08u: goto label_4ecb08;
        case 0x4ecb0cu: goto label_4ecb0c;
        case 0x4ecb10u: goto label_4ecb10;
        case 0x4ecb14u: goto label_4ecb14;
        case 0x4ecb18u: goto label_4ecb18;
        case 0x4ecb1cu: goto label_4ecb1c;
        case 0x4ecb20u: goto label_4ecb20;
        case 0x4ecb24u: goto label_4ecb24;
        case 0x4ecb28u: goto label_4ecb28;
        case 0x4ecb2cu: goto label_4ecb2c;
        case 0x4ecb30u: goto label_4ecb30;
        case 0x4ecb34u: goto label_4ecb34;
        case 0x4ecb38u: goto label_4ecb38;
        case 0x4ecb3cu: goto label_4ecb3c;
        case 0x4ecb40u: goto label_4ecb40;
        case 0x4ecb44u: goto label_4ecb44;
        case 0x4ecb48u: goto label_4ecb48;
        case 0x4ecb4cu: goto label_4ecb4c;
        case 0x4ecb50u: goto label_4ecb50;
        case 0x4ecb54u: goto label_4ecb54;
        case 0x4ecb58u: goto label_4ecb58;
        case 0x4ecb5cu: goto label_4ecb5c;
        case 0x4ecb60u: goto label_4ecb60;
        case 0x4ecb64u: goto label_4ecb64;
        case 0x4ecb68u: goto label_4ecb68;
        case 0x4ecb6cu: goto label_4ecb6c;
        case 0x4ecb70u: goto label_4ecb70;
        case 0x4ecb74u: goto label_4ecb74;
        case 0x4ecb78u: goto label_4ecb78;
        case 0x4ecb7cu: goto label_4ecb7c;
        case 0x4ecb80u: goto label_4ecb80;
        case 0x4ecb84u: goto label_4ecb84;
        case 0x4ecb88u: goto label_4ecb88;
        case 0x4ecb8cu: goto label_4ecb8c;
        case 0x4ecb90u: goto label_4ecb90;
        case 0x4ecb94u: goto label_4ecb94;
        case 0x4ecb98u: goto label_4ecb98;
        case 0x4ecb9cu: goto label_4ecb9c;
        case 0x4ecba0u: goto label_4ecba0;
        case 0x4ecba4u: goto label_4ecba4;
        case 0x4ecba8u: goto label_4ecba8;
        case 0x4ecbacu: goto label_4ecbac;
        case 0x4ecbb0u: goto label_4ecbb0;
        case 0x4ecbb4u: goto label_4ecbb4;
        case 0x4ecbb8u: goto label_4ecbb8;
        case 0x4ecbbcu: goto label_4ecbbc;
        case 0x4ecbc0u: goto label_4ecbc0;
        case 0x4ecbc4u: goto label_4ecbc4;
        case 0x4ecbc8u: goto label_4ecbc8;
        case 0x4ecbccu: goto label_4ecbcc;
        case 0x4ecbd0u: goto label_4ecbd0;
        case 0x4ecbd4u: goto label_4ecbd4;
        case 0x4ecbd8u: goto label_4ecbd8;
        case 0x4ecbdcu: goto label_4ecbdc;
        default: break;
    }

    ctx->pc = 0x4ec770u;

label_4ec770:
    // 0x4ec770: 0x6465656e  daddiu      $a1, $v1, 0x656E
    ctx->pc = 0x4ec770u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25966);
label_4ec774:
    // 0x4ec774: 0x66666f2e  daddiu      $a2, $s3, 0x6F2E
    ctx->pc = 0x4ec774u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)28462);
label_4ec778:
    // 0x4ec778: 0x746573  tltu        $v1, $s4, 405
    ctx->pc = 0x4ec778u;
    if (GPR_U64(ctx, 3) < GPR_U64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
label_4ec77c:
    // 0x4ec77c: 0x0  nop
    ctx->pc = 0x4ec77cu;
    // NOP
label_4ec780:
    // 0x4ec780: 0x5f424726  .word       0x5F424726                   # bgtzl       $k0, . + 4 + (0x4726 << 2) # 00020000 <InstrIdType: CPU_NORMAL>
label_4ec784:
    if (ctx->pc == 0x4EC784u) {
        ctx->pc = 0x4EC784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC780u;
        // 0x4ec784: 0x5f6e6973  .word       0x5F6E6973                   # bgtzl       $k1, . + 4 + (0x6973 << 2) # 000E0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x4EC784 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC788u;
        goto label_4ec788;
    }
    ctx->pc = 0x4EC780u;
    {
        const bool branch_taken_0x4ec780 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4ec780) {
            ctx->pc = 0x4EC784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EC780u;
            // 0x4ec784: 0x5f6e6973  .word       0x5F6E6973                   # bgtzl       $k1, . + 4 + (0x6973 << 2) # 000E0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x4EC784 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FE41Cu;
            return;
        }
    }
    ctx->pc = 0x4EC788u;
label_4ec788:
    // 0x4ec788: 0x65676e61  daddiu      $a3, $t3, 0x6E61
    ctx->pc = 0x4ec788u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28257);
label_4ec78c:
    // 0x4ec78c: 0x72  tlt         $zero, $zero, 1
    ctx->pc = 0x4ec78cu;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4ec790:
    // 0x4ec790: 0x5f424726  .word       0x5F424726                   # bgtzl       $k0, . + 4 + (0x4726 << 2) # 00020000 <InstrIdType: CPU_NORMAL>
label_4ec794:
    if (ctx->pc == 0x4EC794u) {
        ctx->pc = 0x4EC794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC790u;
        // 0x4ec794: 0x5f6e6973  .word       0x5F6E6973                   # bgtzl       $k1, . + 4 + (0x6973 << 2) # 000E0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x4EC794 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC798u;
        goto label_4ec798;
    }
    ctx->pc = 0x4EC790u;
    {
        const bool branch_taken_0x4ec790 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4ec790) {
            ctx->pc = 0x4EC794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EC790u;
            // 0x4ec794: 0x5f6e6973  .word       0x5F6E6973                   # bgtzl       $k1, . + 4 + (0x6973 << 2) # 000E0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x4EC794 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FE42Cu;
            return;
        }
    }
    ctx->pc = 0x4EC798u;
label_4ec798:
    // 0x4ec798: 0x72617661  .word       0x72617661                   # maddu1      $t6, $s3, $at # 00000640 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ec798u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 19) * (uint64_t)GPR_U32(ctx, 1); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_4ec79c:
    // 0x4ec79c: 0x656369  .word       0x00656369                   # mtsa        $v1 # 00056340 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4ec79cu;
    ctx->sa = GPR_U32(ctx, 3) & 0x7F;
label_4ec7a0:
    // 0x4ec7a0: 0x5f424726  .word       0x5F424726                   # bgtzl       $k0, . + 4 + (0x4726 << 2) # 00020000 <InstrIdType: CPU_NORMAL>
label_4ec7a4:
    if (ctx->pc == 0x4EC7A4u) {
        ctx->pc = 0x4EC7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC7A0u;
        // 0x4ec7a4: 0x5f6e6973  .word       0x5F6E6973                   # bgtzl       $k1, . + 4 + (0x6973 << 2) # 000E0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x4EC7A4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC7A8u;
        goto label_4ec7a8;
    }
    ctx->pc = 0x4EC7A0u;
    {
        const bool branch_taken_0x4ec7a0 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4ec7a0) {
            ctx->pc = 0x4EC7A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EC7A0u;
            // 0x4ec7a4: 0x5f6e6973  .word       0x5F6E6973                   # bgtzl       $k1, . + 4 + (0x6973 << 2) # 000E0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x4EC7A4 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FE43Cu;
            return;
        }
    }
    ctx->pc = 0x4EC7A8u;
label_4ec7a8:
    // 0x4ec7a8: 0x79766e65  lq          $s6, 0x6E65($t3)
    ctx->pc = 0x4ec7a8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 11), 28261)));
label_4ec7ac:
    // 0x4ec7ac: 0x0  nop
    ctx->pc = 0x4ec7acu;
    // NOP
label_4ec7b0:
    // 0x4ec7b0: 0x5f424726  .word       0x5F424726                   # bgtzl       $k0, . + 4 + (0x4726 << 2) # 00020000 <InstrIdType: CPU_NORMAL>
label_4ec7b4:
    if (ctx->pc == 0x4EC7B4u) {
        ctx->pc = 0x4EC7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC7B0u;
        // 0x4ec7b4: 0x5f6e6973  .word       0x5F6E6973                   # bgtzl       $k1, . + 4 + (0x6973 << 2) # 000E0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x4EC7B4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC7B8u;
        goto label_4ec7b8;
    }
    ctx->pc = 0x4EC7B0u;
    {
        const bool branch_taken_0x4ec7b0 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4ec7b0) {
            ctx->pc = 0x4EC7B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EC7B0u;
            // 0x4ec7b4: 0x5f6e6973  .word       0x5F6E6973                   # bgtzl       $k1, . + 4 + (0x6973 << 2) # 000E0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x4EC7B4 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FE44Cu;
            return;
        }
    }
    ctx->pc = 0x4EC7B8u;
label_4ec7b8:
    // 0x4ec7b8: 0x74756c67  .word       0x74756C67                   # INVALID     $v1, $s5, 0x6C67 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ec7b8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EC7B8 raw=0x74756C67");
label_4ec7bc:
    // 0x4ec7bc: 0x796e6f74  lq          $t6, 0x6F74($t3)
    ctx->pc = 0x4ec7bcu;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 11), 28532)));
label_4ec7c0:
    // 0x4ec7c0: 0x0  nop
    ctx->pc = 0x4ec7c0u;
    // NOP
label_4ec7c4:
    // 0x4ec7c4: 0x0  nop
    ctx->pc = 0x4ec7c4u;
    // NOP
label_4ec7c8:
    // 0x4ec7c8: 0x5f424726  .word       0x5F424726                   # bgtzl       $k0, . + 4 + (0x4726 << 2) # 00020000 <InstrIdType: CPU_NORMAL>
label_4ec7cc:
    if (ctx->pc == 0x4EC7CCu) {
        ctx->pc = 0x4EC7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC7C8u;
        // 0x4ec7cc: 0x5f6e6973  .word       0x5F6E6973                   # bgtzl       $k1, . + 4 + (0x6973 << 2) # 000E0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x4EC7CC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC7D0u;
        goto label_4ec7d0;
    }
    ctx->pc = 0x4EC7C8u;
    {
        const bool branch_taken_0x4ec7c8 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4ec7c8) {
            ctx->pc = 0x4EC7CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EC7C8u;
            // 0x4ec7cc: 0x5f6e6973  .word       0x5F6E6973                   # bgtzl       $k1, . + 4 + (0x6973 << 2) # 000E0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x4EC7CC - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FE464u;
            return;
        }
    }
    ctx->pc = 0x4EC7D0u;
label_4ec7d0:
    // 0x4ec7d0: 0x7473756c  .word       0x7473756C                   # INVALID     $v1, $s3, 0x756C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ec7d0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EC7D0 raw=0x7473756C");
label_4ec7d4:
    // 0x4ec7d4: 0x0  nop
    ctx->pc = 0x4ec7d4u;
    // NOP
label_4ec7d8:
    // 0x4ec7d8: 0x5f424726  .word       0x5F424726                   # bgtzl       $k0, . + 4 + (0x4726 << 2) # 00020000 <InstrIdType: CPU_NORMAL>
label_4ec7dc:
    if (ctx->pc == 0x4EC7DCu) {
        ctx->pc = 0x4EC7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC7D8u;
        // 0x4ec7dc: 0x5f6e6973  .word       0x5F6E6973                   # bgtzl       $k1, . + 4 + (0x6973 << 2) # 000E0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x4EC7DC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC7E0u;
        goto label_4ec7e0;
    }
    ctx->pc = 0x4EC7D8u;
    {
        const bool branch_taken_0x4ec7d8 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4ec7d8) {
            ctx->pc = 0x4EC7DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EC7D8u;
            // 0x4ec7dc: 0x5f6e6973  .word       0x5F6E6973                   # bgtzl       $k1, . + 4 + (0x6973 << 2) # 000E0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x4EC7DC - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FE474u;
            return;
        }
    }
    ctx->pc = 0x4EC7E0u;
label_4ec7e0:
    // 0x4ec7e0: 0x64697270  daddiu      $t1, $v1, 0x7270
    ctx->pc = 0x4ec7e0u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)29296);
label_4ec7e4:
    // 0x4ec7e4: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ec7e4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_4ec7e8:
    // 0x4ec7e8: 0x5f424726  .word       0x5F424726                   # bgtzl       $k0, . + 4 + (0x4726 << 2) # 00020000 <InstrIdType: CPU_NORMAL>
label_4ec7ec:
    if (ctx->pc == 0x4EC7ECu) {
        ctx->pc = 0x4EC7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC7E8u;
        // 0x4ec7ec: 0x5f6e6973  .word       0x5F6E6973                   # bgtzl       $k1, . + 4 + (0x6973 << 2) # 000E0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x4EC7EC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC7F0u;
        goto label_4ec7f0;
    }
    ctx->pc = 0x4EC7E8u;
    {
        const bool branch_taken_0x4ec7e8 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4ec7e8) {
            ctx->pc = 0x4EC7ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EC7E8u;
            // 0x4ec7ec: 0x5f6e6973  .word       0x5F6E6973                   # bgtzl       $k1, . + 4 + (0x6973 << 2) # 000E0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x4EC7EC - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FE484u;
            return;
        }
    }
    ctx->pc = 0x4EC7F0u;
label_4ec7f0:
    // 0x4ec7f0: 0x746f6c73  .word       0x746F6C73                   # INVALID     $v1, $t7, 0x6C73 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ec7f0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EC7F0 raw=0x746F6C73");
label_4ec7f4:
    // 0x4ec7f4: 0x68  .word       0x00000068                   # mfsa        $zero # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4ec7f4u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_4ec7f8:
    // 0x4ec7f8: 0x5f424726  .word       0x5F424726                   # bgtzl       $k0, . + 4 + (0x4726 << 2) # 00020000 <InstrIdType: CPU_NORMAL>
label_4ec7fc:
    if (ctx->pc == 0x4EC7FCu) {
        ctx->pc = 0x4EC7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC7F8u;
        // 0x4ec7fc: 0x5f6e6973  .word       0x5F6E6973                   # bgtzl       $k1, . + 4 + (0x6973 << 2) # 000E0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x4EC7FC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC800u;
        goto label_4ec800;
    }
    ctx->pc = 0x4EC7F8u;
    {
        const bool branch_taken_0x4ec7f8 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4ec7f8) {
            ctx->pc = 0x4EC7FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EC7F8u;
            // 0x4ec7fc: 0x5f6e6973  .word       0x5F6E6973                   # bgtzl       $k1, . + 4 + (0x6973 << 2) # 000E0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x4EC7FC - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FE494u;
            return;
        }
    }
    ctx->pc = 0x4EC800u;
label_4ec800:
    // 0x4ec800: 0x656e6f6e  daddiu      $t6, $t3, 0x6F6E
    ctx->pc = 0x4ec800u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28526);
label_4ec804:
    // 0x4ec804: 0x0  nop
    ctx->pc = 0x4ec804u;
    // NOP
label_4ec808:
    // 0x4ec808: 0x0  nop
    ctx->pc = 0x4ec808u;
    // NOP
label_4ec80c:
    // 0x4ec80c: 0x0  nop
    ctx->pc = 0x4ec80cu;
    // NOP
label_4ec810:
    // 0x4ec810: 0x4ec780  .word       0x004EC780                   # sll         $t8, $t6, 30 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ec810u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 14), 30));
label_4ec814:
    // 0x4ec814: 0x4ec790  .word       0x004EC790                   # mfhi        $t8 # 004E0780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ec814u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_4ec818:
    // 0x4ec818: 0x4ec7a0  .word       0x004EC7A0                   # add         $t8, $v0, $t6 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ec818u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_4ec81c:
    // 0x4ec81c: 0x4ec7b0  tge         $v0, $t6, 798
    ctx->pc = 0x4ec81cu;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_4ec820:
    // 0x4ec820: 0x4ec7c8  .word       0x004EC7C8                   # jr          $v0 # 000EC7C0 <InstrIdType: CPU_SPECIAL>
label_4ec824:
    if (ctx->pc == 0x4EC824u) {
        ctx->pc = 0x4EC824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC820u;
        // 0x4ec824: 0x4ec7d8  .word       0x004EC7D8                   # mult        $t8, $v0, $t6 # 000007C0 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 24, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC828u;
        goto label_4ec828;
    }
    ctx->pc = 0x4EC820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = 0x4EC824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC820u;
        // 0x4ec824: 0x4ec7d8  .word       0x004EC7D8                   # mult        $t8, $v0, $t6 # 000007C0 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 24, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EC820u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4EC828u;
label_4ec828:
    // 0x4ec828: 0x4ec7e8  .word       0x004EC7E8                   # mfsa        $t8 # 004E07C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4ec828u;
    SET_GPR_U32(ctx, 24, ctx->sa);
label_4ec82c:
    // 0x4ec82c: 0x4ec7f8  .word       0x004EC7F8                   # dsll        $t8, $t6, 31 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ec82cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 14) << 31);
label_4ec830:
    // 0x4ec830: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4ec830u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
label_4ec834:
    // 0x4ec834: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4ec834u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_4ec838:
    // 0x4ec838: 0x696e615c  ldl         $t6, 0x615C($t3)
    ctx->pc = 0x4ec838u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24924); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
label_4ec83c:
    // 0x4ec83c: 0x615c736d  daddi       $gp, $t2, 0x736D
    ctx->pc = 0x4ec83cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)29549; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 28, res); }
label_4ec840:
    // 0x4ec840: 0x726f7463  .word       0x726F7463                   # INVALID     $s3, $t7, 0x7463 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ec840u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x23 at 0x4EC840 raw=0x726F7463");
label_4ec844:
    // 0x4ec844: 0x616d5c73  daddi       $t5, $t3, 0x5C73
    ctx->pc = 0x4ec844u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)23667; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, res); }
label_4ec848:
    // 0x4ec848: 0x6665645f  daddiu      $a1, $s3, 0x645F
    ctx->pc = 0x4ec848u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)25695);
label_4ec84c:
    // 0x4ec84c: 0x746c7561  .word       0x746C7561                   # INVALID     $v1, $t4, 0x7561 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ec84cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EC84C raw=0x746C7561");
label_4ec850:
    // 0x4ec850: 0x6d6e612e  ldr         $t6, 0x612E($t3)
    ctx->pc = 0x4ec850u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24878); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
label_4ec854:
    // 0x4ec854: 0x0  nop
    ctx->pc = 0x4ec854u;
    // NOP
label_4ec858:
    // 0x4ec858: 0x645f616d  daddiu      $ra, $v0, 0x616D
    ctx->pc = 0x4ec858u;
    SET_GPR_S64(ctx, 31, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)24941);
label_4ec85c:
    // 0x4ec85c: 0x75616665  .word       0x75616665                   # INVALID     $t3, $at, 0x6665 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ec85cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EC85C raw=0x75616665");
label_4ec860:
    // 0x4ec860: 0x746c  .word       0x0000746C                   # dadd        $t6, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ec860u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, r); }
label_4ec864:
    // 0x4ec864: 0x0  nop
    ctx->pc = 0x4ec864u;
    // NOP
label_4ec868:
    // 0x4ec868: 0x0  nop
    ctx->pc = 0x4ec868u;
    // NOP
label_4ec86c:
    // 0x4ec86c: 0x0  nop
    ctx->pc = 0x4ec86cu;
    // NOP
label_4ec870:
    // 0x4ec870: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4ec870u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
label_4ec874:
    // 0x4ec874: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4ec874u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_4ec878:
    // 0x4ec878: 0x696e615c  ldl         $t6, 0x615C($t3)
    ctx->pc = 0x4ec878u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24924); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
label_4ec87c:
    // 0x4ec87c: 0x615c736d  daddi       $gp, $t2, 0x736D
    ctx->pc = 0x4ec87cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)29549; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 28, res); }
label_4ec880:
    // 0x4ec880: 0x726f7463  .word       0x726F7463                   # INVALID     $s3, $t7, 0x7463 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ec880u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x23 at 0x4EC880 raw=0x726F7463");
label_4ec884:
    // 0x4ec884: 0x626d5c73  daddi       $t5, $s3, 0x5C73
    ctx->pc = 0x4ec884u;
    { int64_t src = (int64_t)GPR_S64(ctx, 19); int64_t imm = (int64_t)(int32_t)23667; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, res); }
label_4ec888:
    // 0x4ec888: 0x6665645f  daddiu      $a1, $s3, 0x645F
    ctx->pc = 0x4ec888u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)25695);
label_4ec88c:
    // 0x4ec88c: 0x746c7561  .word       0x746C7561                   # INVALID     $v1, $t4, 0x7561 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ec88cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EC88C raw=0x746C7561");
label_4ec890:
    // 0x4ec890: 0x6d6e612e  ldr         $t6, 0x612E($t3)
    ctx->pc = 0x4ec890u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24878); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
label_4ec894:
    // 0x4ec894: 0x0  nop
    ctx->pc = 0x4ec894u;
    // NOP
label_4ec898:
    // 0x4ec898: 0x645f626d  daddiu      $ra, $v0, 0x626D
    ctx->pc = 0x4ec898u;
    SET_GPR_S64(ctx, 31, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)25197);
label_4ec89c:
    // 0x4ec89c: 0x75616665  .word       0x75616665                   # INVALID     $t3, $at, 0x6665 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ec89cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EC89C raw=0x75616665");
label_4ec8a0:
    // 0x4ec8a0: 0x746c  .word       0x0000746C                   # dadd        $t6, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ec8a0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, r); }
label_4ec8a4:
    // 0x4ec8a4: 0x0  nop
    ctx->pc = 0x4ec8a4u;
    // NOP
label_4ec8a8:
    // 0x4ec8a8: 0x0  nop
    ctx->pc = 0x4ec8a8u;
    // NOP
label_4ec8ac:
    // 0x4ec8ac: 0x0  nop
    ctx->pc = 0x4ec8acu;
    // NOP
label_4ec8b0:
    // 0x4ec8b0: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4ec8b0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
label_4ec8b4:
    // 0x4ec8b4: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4ec8b4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_4ec8b8:
    // 0x4ec8b8: 0x696e615c  ldl         $t6, 0x615C($t3)
    ctx->pc = 0x4ec8b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24924); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
label_4ec8bc:
    // 0x4ec8bc: 0x615c736d  daddi       $gp, $t2, 0x736D
    ctx->pc = 0x4ec8bcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)29549; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 28, res); }
label_4ec8c0:
    // 0x4ec8c0: 0x726f7463  .word       0x726F7463                   # INVALID     $s3, $t7, 0x7463 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ec8c0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x23 at 0x4EC8C0 raw=0x726F7463");
label_4ec8c4:
    // 0x4ec8c4: 0x636d5c73  daddi       $t5, $k1, 0x5C73
    ctx->pc = 0x4ec8c4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)23667; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, res); }
label_4ec8c8:
    // 0x4ec8c8: 0x6665645f  daddiu      $a1, $s3, 0x645F
    ctx->pc = 0x4ec8c8u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)25695);
label_4ec8cc:
    // 0x4ec8cc: 0x746c7561  .word       0x746C7561                   # INVALID     $v1, $t4, 0x7561 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ec8ccu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EC8CC raw=0x746C7561");
label_4ec8d0:
    // 0x4ec8d0: 0x6d6e612e  ldr         $t6, 0x612E($t3)
    ctx->pc = 0x4ec8d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24878); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
label_4ec8d4:
    // 0x4ec8d4: 0x0  nop
    ctx->pc = 0x4ec8d4u;
    // NOP
label_4ec8d8:
    // 0x4ec8d8: 0x645f636d  daddiu      $ra, $v0, 0x636D
    ctx->pc = 0x4ec8d8u;
    SET_GPR_S64(ctx, 31, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)25453);
label_4ec8dc:
    // 0x4ec8dc: 0x75616665  .word       0x75616665                   # INVALID     $t3, $at, 0x6665 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ec8dcu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EC8DC raw=0x75616665");
label_4ec8e0:
    // 0x4ec8e0: 0x746c  .word       0x0000746C                   # dadd        $t6, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ec8e0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, r); }
label_4ec8e4:
    // 0x4ec8e4: 0x0  nop
    ctx->pc = 0x4ec8e4u;
    // NOP
label_4ec8e8:
    // 0x4ec8e8: 0x0  nop
    ctx->pc = 0x4ec8e8u;
    // NOP
label_4ec8ec:
    // 0x4ec8ec: 0x0  nop
    ctx->pc = 0x4ec8ecu;
    // NOP
label_4ec8f0:
    // 0x4ec8f0: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4ec8f0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
label_4ec8f4:
    // 0x4ec8f4: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4ec8f4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_4ec8f8:
    // 0x4ec8f8: 0x696e615c  ldl         $t6, 0x615C($t3)
    ctx->pc = 0x4ec8f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24924); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
label_4ec8fc:
    // 0x4ec8fc: 0x615c736d  daddi       $gp, $t2, 0x736D
    ctx->pc = 0x4ec8fcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)29549; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 28, res); }
label_4ec900:
    // 0x4ec900: 0x726f7463  .word       0x726F7463                   # INVALID     $s3, $t7, 0x7463 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ec900u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x23 at 0x4EC900 raw=0x726F7463");
label_4ec904:
    // 0x4ec904: 0x646d5c73  daddiu      $t5, $v1, 0x5C73
    ctx->pc = 0x4ec904u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)23667);
label_4ec908:
    // 0x4ec908: 0x6665645f  daddiu      $a1, $s3, 0x645F
    ctx->pc = 0x4ec908u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)25695);
label_4ec90c:
    // 0x4ec90c: 0x746c7561  .word       0x746C7561                   # INVALID     $v1, $t4, 0x7561 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ec90cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EC90C raw=0x746C7561");
label_4ec910:
    // 0x4ec910: 0x6d6e612e  ldr         $t6, 0x612E($t3)
    ctx->pc = 0x4ec910u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24878); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
label_4ec914:
    // 0x4ec914: 0x0  nop
    ctx->pc = 0x4ec914u;
    // NOP
label_4ec918:
    // 0x4ec918: 0x645f646d  daddiu      $ra, $v0, 0x646D
    ctx->pc = 0x4ec918u;
    SET_GPR_S64(ctx, 31, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)25709);
label_4ec91c:
    // 0x4ec91c: 0x75616665  .word       0x75616665                   # INVALID     $t3, $at, 0x6665 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ec91cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EC91C raw=0x75616665");
label_4ec920:
    // 0x4ec920: 0x746c  .word       0x0000746C                   # dadd        $t6, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ec920u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, r); }
label_4ec924:
    // 0x4ec924: 0x0  nop
    ctx->pc = 0x4ec924u;
    // NOP
label_4ec928:
    // 0x4ec928: 0x0  nop
    ctx->pc = 0x4ec928u;
    // NOP
label_4ec92c:
    // 0x4ec92c: 0x0  nop
    ctx->pc = 0x4ec92cu;
    // NOP
label_4ec930:
    // 0x4ec930: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4ec930u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
label_4ec934:
    // 0x4ec934: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4ec934u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_4ec938:
    // 0x4ec938: 0x696e615c  ldl         $t6, 0x615C($t3)
    ctx->pc = 0x4ec938u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24924); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
label_4ec93c:
    // 0x4ec93c: 0x615c736d  daddi       $gp, $t2, 0x736D
    ctx->pc = 0x4ec93cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)29549; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 28, res); }
label_4ec940:
    // 0x4ec940: 0x726f7463  .word       0x726F7463                   # INVALID     $s3, $t7, 0x7463 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ec940u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x23 at 0x4EC940 raw=0x726F7463");
label_4ec944:
    // 0x4ec944: 0x61775c73  daddi       $s7, $t3, 0x5C73
    ctx->pc = 0x4ec944u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)23667; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 23, res); }
label_4ec948:
    // 0x4ec948: 0x6665645f  daddiu      $a1, $s3, 0x645F
    ctx->pc = 0x4ec948u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)25695);
label_4ec94c:
    // 0x4ec94c: 0x746c7561  .word       0x746C7561                   # INVALID     $v1, $t4, 0x7561 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ec94cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EC94C raw=0x746C7561");
label_4ec950:
    // 0x4ec950: 0x6d6e612e  ldr         $t6, 0x612E($t3)
    ctx->pc = 0x4ec950u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24878); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
label_4ec954:
    // 0x4ec954: 0x0  nop
    ctx->pc = 0x4ec954u;
    // NOP
label_4ec958:
    // 0x4ec958: 0x645f6177  daddiu      $ra, $v0, 0x6177
    ctx->pc = 0x4ec958u;
    SET_GPR_S64(ctx, 31, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)24951);
label_4ec95c:
    // 0x4ec95c: 0x75616665  .word       0x75616665                   # INVALID     $t3, $at, 0x6665 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ec95cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EC95C raw=0x75616665");
label_4ec960:
    // 0x4ec960: 0x746c  .word       0x0000746C                   # dadd        $t6, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ec960u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, r); }
label_4ec964:
    // 0x4ec964: 0x0  nop
    ctx->pc = 0x4ec964u;
    // NOP
label_4ec968:
    // 0x4ec968: 0x0  nop
    ctx->pc = 0x4ec968u;
    // NOP
label_4ec96c:
    // 0x4ec96c: 0x0  nop
    ctx->pc = 0x4ec96cu;
    // NOP
label_4ec970:
    // 0x4ec970: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4ec970u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
label_4ec974:
    // 0x4ec974: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4ec974u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_4ec978:
    // 0x4ec978: 0x696e615c  ldl         $t6, 0x615C($t3)
    ctx->pc = 0x4ec978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24924); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
label_4ec97c:
    // 0x4ec97c: 0x615c736d  daddi       $gp, $t2, 0x736D
    ctx->pc = 0x4ec97cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)29549; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 28, res); }
label_4ec980:
    // 0x4ec980: 0x726f7463  .word       0x726F7463                   # INVALID     $s3, $t7, 0x7463 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ec980u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x23 at 0x4EC980 raw=0x726F7463");
label_4ec984:
    // 0x4ec984: 0x62775c73  daddi       $s7, $s3, 0x5C73
    ctx->pc = 0x4ec984u;
    { int64_t src = (int64_t)GPR_S64(ctx, 19); int64_t imm = (int64_t)(int32_t)23667; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 23, res); }
label_4ec988:
    // 0x4ec988: 0x6665645f  daddiu      $a1, $s3, 0x645F
    ctx->pc = 0x4ec988u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)25695);
label_4ec98c:
    // 0x4ec98c: 0x746c7561  .word       0x746C7561                   # INVALID     $v1, $t4, 0x7561 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ec98cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EC98C raw=0x746C7561");
label_4ec990:
    // 0x4ec990: 0x6d6e612e  ldr         $t6, 0x612E($t3)
    ctx->pc = 0x4ec990u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24878); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
label_4ec994:
    // 0x4ec994: 0x0  nop
    ctx->pc = 0x4ec994u;
    // NOP
label_4ec998:
    // 0x4ec998: 0x645f6277  daddiu      $ra, $v0, 0x6277
    ctx->pc = 0x4ec998u;
    SET_GPR_S64(ctx, 31, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)25207);
label_4ec99c:
    // 0x4ec99c: 0x75616665  .word       0x75616665                   # INVALID     $t3, $at, 0x6665 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ec99cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EC99C raw=0x75616665");
label_4ec9a0:
    // 0x4ec9a0: 0x746c  .word       0x0000746C                   # dadd        $t6, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ec9a0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, r); }
label_4ec9a4:
    // 0x4ec9a4: 0x0  nop
    ctx->pc = 0x4ec9a4u;
    // NOP
label_4ec9a8:
    // 0x4ec9a8: 0x0  nop
    ctx->pc = 0x4ec9a8u;
    // NOP
label_4ec9ac:
    // 0x4ec9ac: 0x0  nop
    ctx->pc = 0x4ec9acu;
    // NOP
label_4ec9b0:
    // 0x4ec9b0: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4ec9b0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
label_4ec9b4:
    // 0x4ec9b4: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4ec9b4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_4ec9b8:
    // 0x4ec9b8: 0x696e615c  ldl         $t6, 0x615C($t3)
    ctx->pc = 0x4ec9b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24924); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
label_4ec9bc:
    // 0x4ec9bc: 0x615c736d  daddi       $gp, $t2, 0x736D
    ctx->pc = 0x4ec9bcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)29549; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 28, res); }
label_4ec9c0:
    // 0x4ec9c0: 0x726f7463  .word       0x726F7463                   # INVALID     $s3, $t7, 0x7463 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ec9c0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x23 at 0x4EC9C0 raw=0x726F7463");
label_4ec9c4:
    // 0x4ec9c4: 0x63775c73  daddi       $s7, $k1, 0x5C73
    ctx->pc = 0x4ec9c4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)23667; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 23, res); }
label_4ec9c8:
    // 0x4ec9c8: 0x6665645f  daddiu      $a1, $s3, 0x645F
    ctx->pc = 0x4ec9c8u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)25695);
label_4ec9cc:
    // 0x4ec9cc: 0x746c7561  .word       0x746C7561                   # INVALID     $v1, $t4, 0x7561 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ec9ccu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EC9CC raw=0x746C7561");
label_4ec9d0:
    // 0x4ec9d0: 0x6d6e612e  ldr         $t6, 0x612E($t3)
    ctx->pc = 0x4ec9d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24878); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
label_4ec9d4:
    // 0x4ec9d4: 0x0  nop
    ctx->pc = 0x4ec9d4u;
    // NOP
label_4ec9d8:
    // 0x4ec9d8: 0x645f6377  daddiu      $ra, $v0, 0x6377
    ctx->pc = 0x4ec9d8u;
    SET_GPR_S64(ctx, 31, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)25463);
label_4ec9dc:
    // 0x4ec9dc: 0x75616665  .word       0x75616665                   # INVALID     $t3, $at, 0x6665 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ec9dcu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EC9DC raw=0x75616665");
label_4ec9e0:
    // 0x4ec9e0: 0x746c  .word       0x0000746C                   # dadd        $t6, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ec9e0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, r); }
label_4ec9e4:
    // 0x4ec9e4: 0x0  nop
    ctx->pc = 0x4ec9e4u;
    // NOP
label_4ec9e8:
    // 0x4ec9e8: 0x0  nop
    ctx->pc = 0x4ec9e8u;
    // NOP
label_4ec9ec:
    // 0x4ec9ec: 0x0  nop
    ctx->pc = 0x4ec9ecu;
    // NOP
label_4ec9f0:
    // 0x4ec9f0: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4ec9f0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
label_4ec9f4:
    // 0x4ec9f4: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4ec9f4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_4ec9f8:
    // 0x4ec9f8: 0x696e615c  ldl         $t6, 0x615C($t3)
    ctx->pc = 0x4ec9f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24924); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
label_4ec9fc:
    // 0x4ec9fc: 0x615c736d  daddi       $gp, $t2, 0x736D
    ctx->pc = 0x4ec9fcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)29549; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 28, res); }
label_4eca00:
    // 0x4eca00: 0x726f7463  .word       0x726F7463                   # INVALID     $s3, $t7, 0x7463 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4eca00u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x23 at 0x4ECA00 raw=0x726F7463");
label_4eca04:
    // 0x4eca04: 0x64775c73  daddiu      $s7, $v1, 0x5C73
    ctx->pc = 0x4eca04u;
    SET_GPR_S64(ctx, 23, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)23667);
label_4eca08:
    // 0x4eca08: 0x6665645f  daddiu      $a1, $s3, 0x645F
    ctx->pc = 0x4eca08u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)25695);
label_4eca0c:
    // 0x4eca0c: 0x746c7561  .word       0x746C7561                   # INVALID     $v1, $t4, 0x7561 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4eca0cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4ECA0C raw=0x746C7561");
label_4eca10:
    // 0x4eca10: 0x6d6e612e  ldr         $t6, 0x612E($t3)
    ctx->pc = 0x4eca10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24878); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
label_4eca14:
    // 0x4eca14: 0x0  nop
    ctx->pc = 0x4eca14u;
    // NOP
label_4eca18:
    // 0x4eca18: 0x645f6477  daddiu      $ra, $v0, 0x6477
    ctx->pc = 0x4eca18u;
    SET_GPR_S64(ctx, 31, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)25719);
label_4eca1c:
    // 0x4eca1c: 0x75616665  .word       0x75616665                   # INVALID     $t3, $at, 0x6665 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4eca1cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4ECA1C raw=0x75616665");
label_4eca20:
    // 0x4eca20: 0x746c  .word       0x0000746C                   # dadd        $t6, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eca20u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, r); }
label_4eca24:
    // 0x4eca24: 0x0  nop
    ctx->pc = 0x4eca24u;
    // NOP
label_4eca28:
    // 0x4eca28: 0x416c6449  .word       0x416C6449                   # INVALID     $t3, $t4, 0x6449 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x4eca28u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x4ECA28 raw=0x416C6449");
label_4eca2c:
    // 0x4eca2c: 0x736d696e  .word       0x736D696E                   # INVALID     $k1, $t5, 0x696E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4eca2cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x4ECA2C raw=0x736D696E");
label_4eca30:
    // 0x4eca30: 0x696e692e  ldl         $t6, 0x692E($t3)
    ctx->pc = 0x4eca30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26926); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
label_4eca34:
    // 0x4eca34: 0x0  nop
    ctx->pc = 0x4eca34u;
    // NOP
label_4eca38:
    // 0x4eca38: 0x6e415f61  ldr         $at, 0x5F61($s2)
    ctx->pc = 0x4eca38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 24417); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_4eca3c:
    // 0x4eca3c: 0x2e736d69  sltiu       $s3, $s3, 0x6D69
    ctx->pc = 0x4eca3cu;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)28009) ? 1 : 0);
label_4eca40:
    // 0x4eca40: 0x696e69  .word       0x00696E69                   # mtsa        $v1 # 00096E40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4eca40u;
    ctx->sa = GPR_U32(ctx, 3) & 0x7F;
label_4eca44:
    // 0x4eca44: 0x0  nop
    ctx->pc = 0x4eca44u;
    // NOP
label_4eca48:
    // 0x4eca48: 0x6e415f62  ldr         $at, 0x5F62($s2)
    ctx->pc = 0x4eca48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 24418); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_4eca4c:
    // 0x4eca4c: 0x2e736d69  sltiu       $s3, $s3, 0x6D69
    ctx->pc = 0x4eca4cu;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)28009) ? 1 : 0);
label_4eca50:
    // 0x4eca50: 0x696e69  .word       0x00696E69                   # mtsa        $v1 # 00096E40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4eca50u;
    ctx->sa = GPR_U32(ctx, 3) & 0x7F;
label_4eca54:
    // 0x4eca54: 0x0  nop
    ctx->pc = 0x4eca54u;
    // NOP
label_4eca58:
    // 0x4eca58: 0x6e415f63  ldr         $at, 0x5F63($s2)
    ctx->pc = 0x4eca58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 24419); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_4eca5c:
    // 0x4eca5c: 0x2e736d69  sltiu       $s3, $s3, 0x6D69
    ctx->pc = 0x4eca5cu;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)28009) ? 1 : 0);
label_4eca60:
    // 0x4eca60: 0x696e69  .word       0x00696E69                   # mtsa        $v1 # 00096E40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4eca60u;
    ctx->sa = GPR_U32(ctx, 3) & 0x7F;
label_4eca64:
    // 0x4eca64: 0x0  nop
    ctx->pc = 0x4eca64u;
    // NOP
label_4eca68:
    // 0x4eca68: 0x6e415f64  ldr         $at, 0x5F64($s2)
    ctx->pc = 0x4eca68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 24420); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_4eca6c:
    // 0x4eca6c: 0x2e736d69  sltiu       $s3, $s3, 0x6D69
    ctx->pc = 0x4eca6cu;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)28009) ? 1 : 0);
label_4eca70:
    // 0x4eca70: 0x696e69  .word       0x00696E69                   # mtsa        $v1 # 00096E40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4eca70u;
    ctx->sa = GPR_U32(ctx, 3) & 0x7F;
label_4eca74:
    // 0x4eca74: 0x0  nop
    ctx->pc = 0x4eca74u;
    // NOP
label_4eca78:
    // 0x4eca78: 0x415f7361  .word       0x415F7361                   # INVALID     $t2, $ra, 0x7361 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x4eca78u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x4ECA78 raw=0x415F7361");
label_4eca7c:
    // 0x4eca7c: 0x736d696e  .word       0x736D696E                   # INVALID     $k1, $t5, 0x696E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4eca7cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x4ECA7C raw=0x736D696E");
label_4eca80:
    // 0x4eca80: 0x696e692e  ldl         $t6, 0x692E($t3)
    ctx->pc = 0x4eca80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26926); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
label_4eca84:
    // 0x4eca84: 0x0  nop
    ctx->pc = 0x4eca84u;
    // NOP
label_4eca88:
    // 0x4eca88: 0x415f7362  .word       0x415F7362                   # INVALID     $t2, $ra, 0x7362 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x4eca88u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x4ECA88 raw=0x415F7362");
label_4eca8c:
    // 0x4eca8c: 0x736d696e  .word       0x736D696E                   # INVALID     $k1, $t5, 0x696E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4eca8cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x4ECA8C raw=0x736D696E");
label_4eca90:
    // 0x4eca90: 0x696e692e  ldl         $t6, 0x692E($t3)
    ctx->pc = 0x4eca90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26926); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
label_4eca94:
    // 0x4eca94: 0x0  nop
    ctx->pc = 0x4eca94u;
    // NOP
label_4eca98:
    // 0x4eca98: 0x415f7363  .word       0x415F7363                   # INVALID     $t2, $ra, 0x7363 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x4eca98u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x4ECA98 raw=0x415F7363");
label_4eca9c:
    // 0x4eca9c: 0x736d696e  .word       0x736D696E                   # INVALID     $k1, $t5, 0x696E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4eca9cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x4ECA9C raw=0x736D696E");
label_4ecaa0:
    // 0x4ecaa0: 0x696e692e  ldl         $t6, 0x692E($t3)
    ctx->pc = 0x4ecaa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26926); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
label_4ecaa4:
    // 0x4ecaa4: 0x0  nop
    ctx->pc = 0x4ecaa4u;
    // NOP
label_4ecaa8:
    // 0x4ecaa8: 0x415f7364  .word       0x415F7364                   # INVALID     $t2, $ra, 0x7364 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x4ecaa8u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x4ECAA8 raw=0x415F7364");
label_4ecaac:
    // 0x4ecaac: 0x736d696e  .word       0x736D696E                   # INVALID     $k1, $t5, 0x696E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ecaacu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x4ECAAC raw=0x736D696E");
label_4ecab0:
    // 0x4ecab0: 0x696e692e  ldl         $t6, 0x692E($t3)
    ctx->pc = 0x4ecab0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26926); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
label_4ecab4:
    // 0x4ecab4: 0x0  nop
    ctx->pc = 0x4ecab4u;
    // NOP
label_4ecab8:
    // 0x4ecab8: 0x0  nop
    ctx->pc = 0x4ecab8u;
    // NOP
label_4ecabc:
    // 0x4ecabc: 0x0  nop
    ctx->pc = 0x4ecabcu;
    // NOP
label_4ecac0:
    // 0x4ecac0: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4ecac0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
label_4ecac4:
    // 0x4ecac4: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4ecac4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_4ecac8:
    // 0x4ecac8: 0x696e615c  ldl         $t6, 0x615C($t3)
    ctx->pc = 0x4ecac8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24924); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
label_4ecacc:
    // 0x4ecacc: 0x5c736d  .word       0x005C736D                   # daddu       $t6, $v0, $gp # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ecaccu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 28));
label_4ecad0:
    // 0x4ecad0: 0x0  nop
    ctx->pc = 0x4ecad0u;
    // NOP
label_4ecad4:
    // 0x4ecad4: 0x0  nop
    ctx->pc = 0x4ecad4u;
    // NOP
label_4ecad8:
    // 0x4ecad8: 0x0  nop
    ctx->pc = 0x4ecad8u;
    // NOP
label_4ecadc:
    // 0x4ecadc: 0x0  nop
    ctx->pc = 0x4ecadcu;
    // NOP
label_4ecae0:
    // 0x4ecae0: 0x61656c70  daddi       $a1, $t3, 0x6C70
    ctx->pc = 0x4ecae0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)27760; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_4ecae4:
    // 0x4ecae4: 0x65727573  daddiu      $s2, $t3, 0x7573
    ctx->pc = 0x4ecae4u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)30067);
label_4ecae8:
    // 0x4ecae8: 0x31  tgeu        $zero, $zero, 0
    ctx->pc = 0x4ecae8u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4ecaec:
    // 0x4ecaec: 0x0  nop
    ctx->pc = 0x4ecaecu;
    // NOP
label_4ecaf0:
    // 0x4ecaf0: 0x61656c70  daddi       $a1, $t3, 0x6C70
    ctx->pc = 0x4ecaf0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)27760; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_4ecaf4:
    // 0x4ecaf4: 0x65727573  daddiu      $s2, $t3, 0x7573
    ctx->pc = 0x4ecaf4u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)30067);
label_4ecaf8:
    // 0x4ecaf8: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x4ecaf8u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4ecafc:
    // 0x4ecafc: 0x0  nop
    ctx->pc = 0x4ecafcu;
    // NOP
label_4ecb00:
    // 0x4ecb00: 0x61656c70  daddi       $a1, $t3, 0x6C70
    ctx->pc = 0x4ecb00u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)27760; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_4ecb04:
    // 0x4ecb04: 0x65727573  daddiu      $s2, $t3, 0x7573
    ctx->pc = 0x4ecb04u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)30067);
label_4ecb08:
    // 0x4ecb08: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x4ecb08u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4ecb0c:
    // 0x4ecb0c: 0x0  nop
    ctx->pc = 0x4ecb0cu;
    // NOP
label_4ecb10:
    // 0x4ecb10: 0x61656c70  daddi       $a1, $t3, 0x6C70
    ctx->pc = 0x4ecb10u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)27760; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_4ecb14:
    // 0x4ecb14: 0x65727573  daddiu      $s2, $t3, 0x7573
    ctx->pc = 0x4ecb14u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)30067);
label_4ecb18:
    // 0x4ecb18: 0x34  teq         $zero, $zero, 0
    ctx->pc = 0x4ecb18u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4ecb1c:
    // 0x4ecb1c: 0x0  nop
    ctx->pc = 0x4ecb1cu;
    // NOP
label_4ecb20:
    // 0x4ecb20: 0x6775616c  daddiu      $s5, $k1, 0x616C
    ctx->pc = 0x4ecb20u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24940);
label_4ecb24:
    // 0x4ecb24: 0x77735f68  .word       0x77735F68                   # INVALID     $k1, $s3, 0x5F68 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ecb24u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4ECB24 raw=0x77735F68");
label_4ecb28:
    // 0x4ecb28: 0x6b6e61  .word       0x006B6E61                   # addu        $t5, $v1, $t3 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ecb28u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_4ecb2c:
    // 0x4ecb2c: 0x0  nop
    ctx->pc = 0x4ecb2cu;
    // NOP
label_4ecb30:
    // 0x4ecb30: 0x6775616c  daddiu      $s5, $k1, 0x616C
    ctx->pc = 0x4ecb30u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24940);
label_4ecb34:
    // 0x4ecb34: 0x6c635f68  ldr         $v1, 0x5F68($v1)
    ctx->pc = 0x4ecb34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24424); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_4ecb38:
    // 0x4ecb38: 0x6e6165  .word       0x006E6165                   # or          $t4, $v1, $t6 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ecb38u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) | GPR_U64(ctx, 14));
label_4ecb3c:
    // 0x4ecb3c: 0x0  nop
    ctx->pc = 0x4ecb3cu;
    // NOP
label_4ecb40:
    // 0x4ecb40: 0x676e6f63  daddiu      $t6, $k1, 0x6F63
    ctx->pc = 0x4ecb40u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)28515);
label_4ecb44:
    // 0x4ecb44: 0x75746172  .word       0x75746172                   # INVALID     $t3, $s4, 0x6172 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ecb44u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4ECB44 raw=0x75746172");
label_4ecb48:
    // 0x4ecb48: 0x6574616c  daddiu      $s4, $t3, 0x616C
    ctx->pc = 0x4ecb48u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24940);
label_4ecb4c:
    // 0x4ecb4c: 0x0  nop
    ctx->pc = 0x4ecb4cu;
    // NOP
label_4ecb50:
    // 0x4ecb50: 0x6c6f7061  ldr         $t7, 0x7061($v1)
    ctx->pc = 0x4ecb50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 28769); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_4ecb54:
    // 0x4ecb54: 0x7a69676f  lq          $t1, 0x676F($s3)
    ctx->pc = 0x4ecb54u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 19), 26479)));
label_4ecb58:
    // 0x4ecb58: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ecb58u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_4ecb5c:
    // 0x4ecb5c: 0x0  nop
    ctx->pc = 0x4ecb5cu;
    // NOP
label_4ecb60:
    // 0x4ecb60: 0x6f726874  ldr         $s2, 0x6874($k1)
    ctx->pc = 0x4ecb60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 26740); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_4ecb64:
    // 0x4ecb64: 0x70755f77  .word       0x70755F77                   # psrah       $t3, $s5, 29 # 00600000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ecb64u;
    SET_GPR_VEC(ctx, 11, _mm_srai_epi16(GPR_VEC(ctx, 21), 29));
label_4ecb68:
    // 0x4ecb68: 0x0  nop
    ctx->pc = 0x4ecb68u;
    // NOP
label_4ecb6c:
    // 0x4ecb6c: 0x0  nop
    ctx->pc = 0x4ecb6cu;
    // NOP
label_4ecb70:
    // 0x4ecb70: 0x608e70  tge         $v1, $zero, 569
    ctx->pc = 0x4ecb70u;
    if (GPR_S64(ctx, 3) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4ecb74:
    // 0x4ecb74: 0x608e78  .word       0x00608E78                   # dsll        $s1, $zero, 25 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ecb74u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) << 25);
label_4ecb78:
    // 0x4ecb78: 0x608e80  .word       0x00608E80                   # sll         $s1, $zero, 26 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ecb78u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_4ecb7c:
    // 0x4ecb7c: 0x608e88  .word       0x00608E88                   # jr          $v1 # 00008E80 <InstrIdType: CPU_SPECIAL>
label_4ecb80:
    if (ctx->pc == 0x4ECB80u) {
        ctx->pc = 0x4ECB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ECB7Cu;
        // 0x4ecb80: 0x608e90  .word       0x00608E90                   # mfhi        $s1 # 00600680 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 17, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ECB84u;
        goto label_4ecb84;
    }
    ctx->pc = 0x4ECB7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = 0x4ECB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ECB7Cu;
        // 0x4ecb80: 0x608e90  .word       0x00608E90                   # mfhi        $s1 # 00600680 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 17, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ECB7Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4ECB84u;
label_4ecb84:
    // 0x4ecb84: 0x4ecae0  .word       0x004ECAE0                   # add         $t9, $v0, $t6 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ecb84u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_4ecb88:
    // 0x4ecb88: 0x4ecaf0  tge         $v0, $t6, 811
    ctx->pc = 0x4ecb88u;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_4ecb8c:
    // 0x4ecb8c: 0x4ecb00  .word       0x004ECB00                   # sll         $t9, $t6, 12 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ecb8cu;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 14), 12));
label_4ecb90:
    // 0x4ecb90: 0x4ecb10  .word       0x004ECB10                   # mfhi        $t9 # 004E0300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ecb90u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_4ecb94:
    // 0x4ecb94: 0x608e98  .word       0x00608E98                   # mult        $s1, $v1, $zero # 00000680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4ecb94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_4ecb98:
    // 0x4ecb98: 0x608ea0  .word       0x00608EA0                   # add         $s1, $v1, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ecb98u;
    {     int32_t rs_val = GPR_S32(ctx, 3);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_4ecb9c:
    // 0x4ecb9c: 0x608ea8  .word       0x00608EA8                   # mfsa        $s1 # 00600680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4ecb9cu;
    SET_GPR_U32(ctx, 17, ctx->sa);
label_4ecba0:
    // 0x4ecba0: 0x608eb0  tge         $v1, $zero, 570
    ctx->pc = 0x4ecba0u;
    if (GPR_S64(ctx, 3) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4ecba4:
    // 0x4ecba4: 0x608eb8  .word       0x00608EB8                   # dsll        $s1, $zero, 26 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ecba4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) << 26);
label_4ecba8:
    // 0x4ecba8: 0x4ecb20  .word       0x004ECB20                   # add         $t9, $v0, $t6 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ecba8u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_4ecbac:
    // 0x4ecbac: 0x4ecb30  tge         $v0, $t6, 812
    ctx->pc = 0x4ecbacu;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_4ecbb0:
    // 0x4ecbb0: 0x608ec0  .word       0x00608EC0                   # sll         $s1, $zero, 27 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ecbb0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_4ecbb4:
    // 0x4ecbb4: 0x4ecb40  .word       0x004ECB40                   # sll         $t9, $t6, 13 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ecbb4u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 14), 13));
label_4ecbb8:
    // 0x4ecbb8: 0x4ecb50  .word       0x004ECB50                   # mfhi        $t9 # 004E0340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ecbb8u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_4ecbbc:
    // 0x4ecbbc: 0x4ecb60  .word       0x004ECB60                   # add         $t9, $v0, $t6 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ecbbcu;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_4ecbc0:
    // 0x4ecbc0: 0x608ec8  .word       0x00608EC8                   # jr          $v1 # 00008EC0 <InstrIdType: CPU_SPECIAL>
label_4ecbc4:
    if (ctx->pc == 0x4ECBC4u) {
        ctx->pc = 0x4ECBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ECBC0u;
        // 0x4ecbc4: 0x608ed0  .word       0x00608ED0                   # mfhi        $s1 # 006006C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 17, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ECBC8u;
        goto label_4ecbc8;
    }
    ctx->pc = 0x4ECBC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = 0x4ECBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ECBC0u;
        // 0x4ecbc4: 0x608ed0  .word       0x00608ED0                   # mfhi        $s1 # 006006C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 17, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ECBC0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4ECBC8u;
label_4ecbc8:
    // 0x4ecbc8: 0x608ed8  .word       0x00608ED8                   # mult        $s1, $v1, $zero # 000006C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4ecbc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_4ecbcc:
    // 0x4ecbcc: 0x608ee0  .word       0x00608EE0                   # add         $s1, $v1, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ecbccu;
    {     int32_t rs_val = GPR_S32(ctx, 3);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_4ecbd0:
    // 0x4ecbd0: 0x608ee8  .word       0x00608EE8                   # mfsa        $s1 # 006006C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4ecbd0u;
    SET_GPR_U32(ctx, 17, ctx->sa);
label_4ecbd4:
    // 0x4ecbd4: 0x608ef0  tge         $v1, $zero, 571
    ctx->pc = 0x4ecbd4u;
    if (GPR_S64(ctx, 3) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4ecbd8:
    // 0x4ecbd8: 0x0  nop
    ctx->pc = 0x4ecbd8u;
    // NOP
label_4ecbdc:
    // 0x4ecbdc: 0x0  nop
    ctx->pc = 0x4ecbdcu;
    // NOP
    ctx->pc = 0x4ecbe0u;
}
