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

// Function: sub_00312818
// Address: 0x312818 - 0x312c10
void sub_00312818_0x312818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00312818_0x312818");
#endif

    switch (ctx->pc) {
        case 0x312818u: goto label_312818;
        case 0x31281cu: goto label_31281c;
        case 0x312820u: goto label_312820;
        case 0x312824u: goto label_312824;
        case 0x312828u: goto label_312828;
        case 0x31282cu: goto label_31282c;
        case 0x312830u: goto label_312830;
        case 0x312834u: goto label_312834;
        case 0x312838u: goto label_312838;
        case 0x31283cu: goto label_31283c;
        case 0x312840u: goto label_312840;
        case 0x312844u: goto label_312844;
        case 0x312848u: goto label_312848;
        case 0x31284cu: goto label_31284c;
        case 0x312850u: goto label_312850;
        case 0x312854u: goto label_312854;
        case 0x312858u: goto label_312858;
        case 0x31285cu: goto label_31285c;
        case 0x312860u: goto label_312860;
        case 0x312864u: goto label_312864;
        case 0x312868u: goto label_312868;
        case 0x31286cu: goto label_31286c;
        case 0x312870u: goto label_312870;
        case 0x312874u: goto label_312874;
        case 0x312878u: goto label_312878;
        case 0x31287cu: goto label_31287c;
        case 0x312880u: goto label_312880;
        case 0x312884u: goto label_312884;
        case 0x312888u: goto label_312888;
        case 0x31288cu: goto label_31288c;
        case 0x312890u: goto label_312890;
        case 0x312894u: goto label_312894;
        case 0x312898u: goto label_312898;
        case 0x31289cu: goto label_31289c;
        case 0x3128a0u: goto label_3128a0;
        case 0x3128a4u: goto label_3128a4;
        case 0x3128a8u: goto label_3128a8;
        case 0x3128acu: goto label_3128ac;
        case 0x3128b0u: goto label_3128b0;
        case 0x3128b4u: goto label_3128b4;
        case 0x3128b8u: goto label_3128b8;
        case 0x3128bcu: goto label_3128bc;
        case 0x3128c0u: goto label_3128c0;
        case 0x3128c4u: goto label_3128c4;
        case 0x3128c8u: goto label_3128c8;
        case 0x3128ccu: goto label_3128cc;
        case 0x3128d0u: goto label_3128d0;
        case 0x3128d4u: goto label_3128d4;
        case 0x3128d8u: goto label_3128d8;
        case 0x3128dcu: goto label_3128dc;
        case 0x3128e0u: goto label_3128e0;
        case 0x3128e4u: goto label_3128e4;
        case 0x3128e8u: goto label_3128e8;
        case 0x3128ecu: goto label_3128ec;
        case 0x3128f0u: goto label_3128f0;
        case 0x3128f4u: goto label_3128f4;
        case 0x3128f8u: goto label_3128f8;
        case 0x3128fcu: goto label_3128fc;
        case 0x312900u: goto label_312900;
        case 0x312904u: goto label_312904;
        case 0x312908u: goto label_312908;
        case 0x31290cu: goto label_31290c;
        case 0x312910u: goto label_312910;
        case 0x312914u: goto label_312914;
        case 0x312918u: goto label_312918;
        case 0x31291cu: goto label_31291c;
        case 0x312920u: goto label_312920;
        case 0x312924u: goto label_312924;
        case 0x312928u: goto label_312928;
        case 0x31292cu: goto label_31292c;
        case 0x312930u: goto label_312930;
        case 0x312934u: goto label_312934;
        case 0x312938u: goto label_312938;
        case 0x31293cu: goto label_31293c;
        case 0x312940u: goto label_312940;
        case 0x312944u: goto label_312944;
        case 0x312948u: goto label_312948;
        case 0x31294cu: goto label_31294c;
        case 0x312950u: goto label_312950;
        case 0x312954u: goto label_312954;
        case 0x312958u: goto label_312958;
        case 0x31295cu: goto label_31295c;
        case 0x312960u: goto label_312960;
        case 0x312964u: goto label_312964;
        case 0x312968u: goto label_312968;
        case 0x31296cu: goto label_31296c;
        case 0x312970u: goto label_312970;
        case 0x312974u: goto label_312974;
        case 0x312978u: goto label_312978;
        case 0x31297cu: goto label_31297c;
        case 0x312980u: goto label_312980;
        case 0x312984u: goto label_312984;
        case 0x312988u: goto label_312988;
        case 0x31298cu: goto label_31298c;
        case 0x312990u: goto label_312990;
        case 0x312994u: goto label_312994;
        case 0x312998u: goto label_312998;
        case 0x31299cu: goto label_31299c;
        case 0x3129a0u: goto label_3129a0;
        case 0x3129a4u: goto label_3129a4;
        case 0x3129a8u: goto label_3129a8;
        case 0x3129acu: goto label_3129ac;
        case 0x3129b0u: goto label_3129b0;
        case 0x3129b4u: goto label_3129b4;
        case 0x3129b8u: goto label_3129b8;
        case 0x3129bcu: goto label_3129bc;
        case 0x3129c0u: goto label_3129c0;
        case 0x3129c4u: goto label_3129c4;
        case 0x3129c8u: goto label_3129c8;
        case 0x3129ccu: goto label_3129cc;
        case 0x3129d0u: goto label_3129d0;
        case 0x3129d4u: goto label_3129d4;
        case 0x3129d8u: goto label_3129d8;
        case 0x3129dcu: goto label_3129dc;
        case 0x3129e0u: goto label_3129e0;
        case 0x3129e4u: goto label_3129e4;
        case 0x3129e8u: goto label_3129e8;
        case 0x3129ecu: goto label_3129ec;
        case 0x3129f0u: goto label_3129f0;
        case 0x3129f4u: goto label_3129f4;
        case 0x3129f8u: goto label_3129f8;
        case 0x3129fcu: goto label_3129fc;
        case 0x312a00u: goto label_312a00;
        case 0x312a04u: goto label_312a04;
        case 0x312a08u: goto label_312a08;
        case 0x312a0cu: goto label_312a0c;
        case 0x312a10u: goto label_312a10;
        case 0x312a14u: goto label_312a14;
        case 0x312a18u: goto label_312a18;
        case 0x312a1cu: goto label_312a1c;
        case 0x312a20u: goto label_312a20;
        case 0x312a24u: goto label_312a24;
        case 0x312a28u: goto label_312a28;
        case 0x312a2cu: goto label_312a2c;
        case 0x312a30u: goto label_312a30;
        case 0x312a34u: goto label_312a34;
        case 0x312a38u: goto label_312a38;
        case 0x312a3cu: goto label_312a3c;
        case 0x312a40u: goto label_312a40;
        case 0x312a44u: goto label_312a44;
        case 0x312a48u: goto label_312a48;
        case 0x312a4cu: goto label_312a4c;
        case 0x312a50u: goto label_312a50;
        case 0x312a54u: goto label_312a54;
        case 0x312a58u: goto label_312a58;
        case 0x312a5cu: goto label_312a5c;
        case 0x312a60u: goto label_312a60;
        case 0x312a64u: goto label_312a64;
        case 0x312a68u: goto label_312a68;
        case 0x312a6cu: goto label_312a6c;
        case 0x312a70u: goto label_312a70;
        case 0x312a74u: goto label_312a74;
        case 0x312a78u: goto label_312a78;
        case 0x312a7cu: goto label_312a7c;
        case 0x312a80u: goto label_312a80;
        case 0x312a84u: goto label_312a84;
        case 0x312a88u: goto label_312a88;
        case 0x312a8cu: goto label_312a8c;
        case 0x312a90u: goto label_312a90;
        case 0x312a94u: goto label_312a94;
        case 0x312a98u: goto label_312a98;
        case 0x312a9cu: goto label_312a9c;
        case 0x312aa0u: goto label_312aa0;
        case 0x312aa4u: goto label_312aa4;
        case 0x312aa8u: goto label_312aa8;
        case 0x312aacu: goto label_312aac;
        case 0x312ab0u: goto label_312ab0;
        case 0x312ab4u: goto label_312ab4;
        case 0x312ab8u: goto label_312ab8;
        case 0x312abcu: goto label_312abc;
        case 0x312ac0u: goto label_312ac0;
        case 0x312ac4u: goto label_312ac4;
        case 0x312ac8u: goto label_312ac8;
        case 0x312accu: goto label_312acc;
        case 0x312ad0u: goto label_312ad0;
        case 0x312ad4u: goto label_312ad4;
        case 0x312ad8u: goto label_312ad8;
        case 0x312adcu: goto label_312adc;
        case 0x312ae0u: goto label_312ae0;
        case 0x312ae4u: goto label_312ae4;
        case 0x312ae8u: goto label_312ae8;
        case 0x312aecu: goto label_312aec;
        case 0x312af0u: goto label_312af0;
        case 0x312af4u: goto label_312af4;
        case 0x312af8u: goto label_312af8;
        case 0x312afcu: goto label_312afc;
        case 0x312b00u: goto label_312b00;
        case 0x312b04u: goto label_312b04;
        case 0x312b08u: goto label_312b08;
        case 0x312b0cu: goto label_312b0c;
        case 0x312b10u: goto label_312b10;
        case 0x312b14u: goto label_312b14;
        case 0x312b18u: goto label_312b18;
        case 0x312b1cu: goto label_312b1c;
        case 0x312b20u: goto label_312b20;
        case 0x312b24u: goto label_312b24;
        case 0x312b28u: goto label_312b28;
        case 0x312b2cu: goto label_312b2c;
        case 0x312b30u: goto label_312b30;
        case 0x312b34u: goto label_312b34;
        case 0x312b38u: goto label_312b38;
        case 0x312b3cu: goto label_312b3c;
        case 0x312b40u: goto label_312b40;
        case 0x312b44u: goto label_312b44;
        case 0x312b48u: goto label_312b48;
        case 0x312b4cu: goto label_312b4c;
        case 0x312b50u: goto label_312b50;
        case 0x312b54u: goto label_312b54;
        case 0x312b58u: goto label_312b58;
        case 0x312b5cu: goto label_312b5c;
        case 0x312b60u: goto label_312b60;
        case 0x312b64u: goto label_312b64;
        case 0x312b68u: goto label_312b68;
        case 0x312b6cu: goto label_312b6c;
        case 0x312b70u: goto label_312b70;
        case 0x312b74u: goto label_312b74;
        case 0x312b78u: goto label_312b78;
        case 0x312b7cu: goto label_312b7c;
        case 0x312b80u: goto label_312b80;
        case 0x312b84u: goto label_312b84;
        case 0x312b88u: goto label_312b88;
        case 0x312b8cu: goto label_312b8c;
        case 0x312b90u: goto label_312b90;
        case 0x312b94u: goto label_312b94;
        case 0x312b98u: goto label_312b98;
        case 0x312b9cu: goto label_312b9c;
        case 0x312ba0u: goto label_312ba0;
        case 0x312ba4u: goto label_312ba4;
        case 0x312ba8u: goto label_312ba8;
        case 0x312bacu: goto label_312bac;
        case 0x312bb0u: goto label_312bb0;
        case 0x312bb4u: goto label_312bb4;
        case 0x312bb8u: goto label_312bb8;
        case 0x312bbcu: goto label_312bbc;
        case 0x312bc0u: goto label_312bc0;
        case 0x312bc4u: goto label_312bc4;
        case 0x312bc8u: goto label_312bc8;
        case 0x312bccu: goto label_312bcc;
        case 0x312bd0u: goto label_312bd0;
        case 0x312bd4u: goto label_312bd4;
        case 0x312bd8u: goto label_312bd8;
        case 0x312bdcu: goto label_312bdc;
        case 0x312be0u: goto label_312be0;
        case 0x312be4u: goto label_312be4;
        case 0x312be8u: goto label_312be8;
        case 0x312becu: goto label_312bec;
        case 0x312bf0u: goto label_312bf0;
        case 0x312bf4u: goto label_312bf4;
        case 0x312bf8u: goto label_312bf8;
        case 0x312bfcu: goto label_312bfc;
        case 0x312c00u: goto label_312c00;
        case 0x312c04u: goto label_312c04;
        case 0x312c08u: goto label_312c08;
        case 0x312c0cu: goto label_312c0c;
        default: break;
    }

    ctx->pc = 0x312818u;

label_312818:
    // 0x312818: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x312818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_31281c:
    // 0x31281c: 0x7fbe00e0  sq          $fp, 0xE0($sp)
    ctx->pc = 0x31281cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 30));
label_312820:
    // 0x312820: 0x7fb00160  sq          $s0, 0x160($sp)
    ctx->pc = 0x312820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 16));
label_312824:
    // 0x312824: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x312824u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_312828:
    // 0x312828: 0x7fb10150  sq          $s1, 0x150($sp)
    ctx->pc = 0x312828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 17));
label_31282c:
    // 0x31282c: 0x24100028  addiu       $s0, $zero, 0x28
    ctx->pc = 0x31282cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_312830:
    // 0x312830: 0x7fb20140  sq          $s2, 0x140($sp)
    ctx->pc = 0x312830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 18));
label_312834:
    // 0x312834: 0x30d1ffff  andi        $s1, $a2, 0xFFFF
    ctx->pc = 0x312834u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_312838:
    // 0x312838: 0x7fb30130  sq          $s3, 0x130($sp)
    ctx->pc = 0x312838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 19));
label_31283c:
    // 0x31283c: 0x30b2ffff  andi        $s2, $a1, 0xFFFF
    ctx->pc = 0x31283cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_312840:
    // 0x312840: 0x7fb50110  sq          $s5, 0x110($sp)
    ctx->pc = 0x312840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 21));
label_312844:
    // 0x312844: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x312844u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_312848:
    // 0x312848: 0x7fb40120  sq          $s4, 0x120($sp)
    ctx->pc = 0x312848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 20));
label_31284c:
    // 0x31284c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x31284cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_312850:
    // 0x312850: 0x7fb60100  sq          $s6, 0x100($sp)
    ctx->pc = 0x312850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 22));
label_312854:
    // 0x312854: 0x7fb700f0  sq          $s7, 0xF0($sp)
    ctx->pc = 0x312854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 23));
label_312858:
    // 0x312858: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x312858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
label_31285c:
    // 0x31285c: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_312860:
    if (ctx->pc == 0x312860u) {
        ctx->pc = 0x312860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31285Cu;
        // 0x312860: 0xafc00000  sw          $zero, 0x0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312864u;
        goto label_312864;
    }
    ctx->pc = 0x31285Cu;
    {
        const bool branch_taken_0x31285c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x312860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31285Cu;
        // 0x312860: 0xafc00000  sw          $zero, 0x0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31285c) {
            ctx->pc = 0x31286Cu;
            goto label_31286c;
        }
    }
    ctx->pc = 0x312864u;
label_312864:
    // 0x312864: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x312864u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_312868:
    // 0x312868: 0x24500037  addiu       $s0, $v0, 0x37
    ctx->pc = 0x312868u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 55));
label_31286c:
    // 0x31286c: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x31286cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_312870:
    // 0x312870: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x312870u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_312874:
    // 0x312874: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x312874u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_312878:
    // 0x312878: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x312878u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_31287c:
    // 0x31287c: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x31287cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_312880:
    // 0x312880: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x312880u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_312884:
    // 0x312884: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x312884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_312888:
    // 0x312888: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x312888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31288c:
    // 0x31288c: 0x40f809  jalr        $v0
label_312890:
    if (ctx->pc == 0x312890u) {
        ctx->pc = 0x312890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31288Cu;
        // 0x312890: 0x34a5002c  ori         $a1, $a1, 0x2C (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)44);
        ctx->in_delay_slot = false;
        ctx->pc = 0x312894u;
        goto label_312894;
    }
    ctx->pc = 0x31288Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x312894u);
        ctx->pc = 0x312890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31288Cu;
        // 0x312890: 0x34a5002c  ori         $a1, $a1, 0x2C (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)44);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31288Cu, 0x312894u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x312894u;
label_312894:
    // 0x312894: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x312894u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_312898:
    // 0x312898: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_31289c:
    if (ctx->pc == 0x31289Cu) {
        ctx->pc = 0x31289Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312898u;
        // 0x31289c: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3128A0u;
        goto label_3128a0;
    }
    ctx->pc = 0x312898u;
    {
        const bool branch_taken_0x312898 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31289Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312898u;
        // 0x31289c: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312898) {
            ctx->pc = 0x3128D0u;
            goto label_3128d0;
        }
    }
    ctx->pc = 0x3128A0u;
label_3128a0:
    // 0x3128a0: 0x2402011d  addiu       $v0, $zero, 0x11D
    ctx->pc = 0x3128a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 285));
label_3128a4:
    // 0x3128a4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3128a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_3128a8:
    // 0x3128a8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3128a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_3128ac:
    // 0x3128ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3128acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3128b0:
    // 0x3128b0: 0xc1035f6  jal         func_40D7D8
label_3128b4:
    if (ctx->pc == 0x3128B4u) {
        ctx->pc = 0x3128B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3128B0u;
        // 0x3128b4: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3128B8u;
        goto label_3128b8;
    }
    ctx->pc = 0x3128B0u;
    SET_GPR_U32(ctx, 31, 0x3128B8u);
    ctx->pc = 0x3128B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3128B0u;
    // 0x3128b4: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x3128B0u, 0x3128B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3128B8u;
label_3128b8:
    // 0x3128b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3128b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3128bc:
    // 0x3128bc: 0xc103628  jal         func_40D8A0
label_3128c0:
    if (ctx->pc == 0x3128C0u) {
        ctx->pc = 0x3128C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3128BCu;
        // 0x3128c0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3128C4u;
        goto label_3128c4;
    }
    ctx->pc = 0x3128BCu;
    SET_GPR_U32(ctx, 31, 0x3128C4u);
    ctx->pc = 0x3128C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3128BCu;
    // 0x3128c0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x3128BCu, 0x3128C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3128C4u;
label_3128c4:
    // 0x3128c4: 0x10000023  b           . + 4 + (0x23 << 2)
label_3128c8:
    if (ctx->pc == 0x3128C8u) {
        ctx->pc = 0x3128C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3128C4u;
        // 0x3128c8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3128CCu;
        goto label_3128cc;
    }
    ctx->pc = 0x3128C4u;
    {
        const bool branch_taken_0x3128c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3128C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3128C4u;
        // 0x3128c8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3128c4) {
            ctx->pc = 0x312954u;
            goto label_312954;
        }
    }
    ctx->pc = 0x3128CCu;
label_3128cc:
    // 0x3128cc: 0x0  nop
    ctx->pc = 0x3128ccu;
    // NOP
label_3128d0:
    // 0x3128d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3128d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3128d4:
    // 0x3128d4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x3128d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_3128d8:
    // 0x3128d8: 0xa4b2001c  sh          $s2, 0x1C($a1)
    ctx->pc = 0x3128d8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 28), (uint16_t)GPR_U32(ctx, 18));
label_3128dc:
    // 0x3128dc: 0xa4b1001e  sh          $s1, 0x1E($a1)
    ctx->pc = 0x3128dcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 30), (uint16_t)GPR_U32(ctx, 17));
label_3128e0:
    // 0x3128e0: 0x6a620007  ldl         $v0, 0x7($s3)
    ctx->pc = 0x3128e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_3128e4:
    // 0x3128e4: 0x6e620000  ldr         $v0, 0x0($s3)
    ctx->pc = 0x3128e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_3128e8:
    // 0x3128e8: 0x6a64000f  ldl         $a0, 0xF($s3)
    ctx->pc = 0x3128e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_3128ec:
    // 0x3128ec: 0x6e640008  ldr         $a0, 0x8($s3)
    ctx->pc = 0x3128ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_3128f0:
    // 0x3128f0: 0x6a660017  ldl         $a2, 0x17($s3)
    ctx->pc = 0x3128f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_3128f4:
    // 0x3128f4: 0x6e660010  ldr         $a2, 0x10($s3)
    ctx->pc = 0x3128f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_3128f8:
    // 0x3128f8: 0xb0a2000b  sdl         $v0, 0xB($a1)
    ctx->pc = 0x3128f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3128fc:
    // 0x3128fc: 0xb4a20004  sdr         $v0, 0x4($a1)
    ctx->pc = 0x3128fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_312900:
    // 0x312900: 0xb0a40013  sdl         $a0, 0x13($a1)
    ctx->pc = 0x312900u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_312904:
    // 0x312904: 0xb4a4000c  sdr         $a0, 0xC($a1)
    ctx->pc = 0x312904u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_312908:
    // 0x312908: 0xb0a6001b  sdl         $a2, 0x1B($a1)
    ctx->pc = 0x312908u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_31290c:
    // 0x31290c: 0xb4a60014  sdr         $a2, 0x14($a1)
    ctx->pc = 0x31290cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_312910:
    // 0x312910: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_312914:
    if (ctx->pc == 0x312914u) {
        ctx->pc = 0x312914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312910u;
        // 0x312914: 0x24a30028  addiu       $v1, $a1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312918u;
        goto label_312918;
    }
    ctx->pc = 0x312910u;
    {
        const bool branch_taken_0x312910 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x312914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312910u;
        // 0x312914: 0x24a30028  addiu       $v1, $a1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312910) {
            ctx->pc = 0x312938u;
            goto label_312938;
        }
    }
    ctx->pc = 0x312918u;
label_312918:
    // 0x312918: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x312918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_31291c:
    // 0x31291c: 0x24a30037  addiu       $v1, $a1, 0x37
    ctx->pc = 0x31291cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 55));
label_312920:
    // 0x312920: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x312920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
label_312924:
    // 0x312924: 0x112100  sll         $a0, $s1, 4
    ctx->pc = 0x312924u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_312928:
    // 0x312928: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x312928u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_31292c:
    // 0x31292c: 0xaca30020  sw          $v1, 0x20($a1)
    ctx->pc = 0x31292cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 3));
label_312930:
    // 0x312930: 0x10000002  b           . + 4 + (0x2 << 2)
label_312934:
    if (ctx->pc == 0x312934u) {
        ctx->pc = 0x312934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312930u;
        // 0x312934: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312938u;
        goto label_312938;
    }
    ctx->pc = 0x312930u;
    {
        const bool branch_taken_0x312930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312930u;
        // 0x312934: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312930) {
            ctx->pc = 0x31293Cu;
            goto label_31293c;
        }
    }
    ctx->pc = 0x312938u;
label_312938:
    // 0x312938: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x312938u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
label_31293c:
    // 0x31293c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x31293cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_312940:
    // 0x312940: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x312940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_312944:
    // 0x312944: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x312944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
label_312948:
    // 0x312948: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x312948u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_31294c:
    // 0x31294c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x31294cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_312950:
    // 0x312950: 0xaca30024  sw          $v1, 0x24($a1)
    ctx->pc = 0x312950u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 3));
label_312954:
    // 0x312954: 0x126000a1  beqz        $s3, . + 4 + (0xA1 << 2)
label_312958:
    if (ctx->pc == 0x312958u) {
        ctx->pc = 0x312958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312954u;
        // 0x312958: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31295Cu;
        goto label_31295c;
    }
    ctx->pc = 0x312954u;
    {
        const bool branch_taken_0x312954 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x312958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312954u;
        // 0x312958: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312954) {
            ctx->pc = 0x312BDCu;
            goto label_312bdc;
        }
    }
    ctx->pc = 0x31295Cu;
label_31295c:
    // 0x31295c: 0x9662001e  lhu         $v0, 0x1E($s3)
    ctx->pc = 0x31295cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 30)));
label_312960:
    // 0x312960: 0x10400070  beqz        $v0, . + 4 + (0x70 << 2)
label_312964:
    if (ctx->pc == 0x312964u) {
        ctx->pc = 0x312964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312960u;
        // 0x312964: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312968u;
        goto label_312968;
    }
    ctx->pc = 0x312960u;
    {
        const bool branch_taken_0x312960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x312964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312960u;
        // 0x312964: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312960) {
            ctx->pc = 0x312B24u;
            goto label_312b24;
        }
    }
    ctx->pc = 0x312968u;
label_312968:
    // 0x312968: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
label_31296c:
    if (ctx->pc == 0x31296Cu) {
        ctx->pc = 0x31296Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312968u;
        // 0x31296c: 0x8e650020  lw          $a1, 0x20($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312970u;
        goto label_312970;
    }
    ctx->pc = 0x312968u;
    {
        const bool branch_taken_0x312968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31296Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312968u;
        // 0x31296c: 0x8e650020  lw          $a1, 0x20($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312968) {
            ctx->pc = 0x312A48u;
            goto label_312a48;
        }
    }
    ctx->pc = 0x312970u;
label_312970:
    // 0x312970: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x312970u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_312974:
    // 0x312974: 0x24170002  addiu       $s7, $zero, 0x2
    ctx->pc = 0x312974u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_312978:
    // 0x312978: 0x241600ff  addiu       $s6, $zero, 0xFF
    ctx->pc = 0x312978u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_31297c:
    // 0x31297c: 0x24b2000c  addiu       $s2, $a1, 0xC
    ctx->pc = 0x31297cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_312980:
    // 0x312980: 0x24b10004  addiu       $s1, $a1, 0x4
    ctx->pc = 0x312980u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_312984:
    // 0x312984: 0x0  nop
    ctx->pc = 0x312984u;
    // NOP
label_312988:
    // 0x312988: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x312988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_31298c:
    // 0x31298c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x31298cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_312990:
    // 0x312990: 0xc103468  jal         func_40D1A0
label_312994:
    if (ctx->pc == 0x312994u) {
        ctx->pc = 0x312994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312990u;
        // 0x312994: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312998u;
        goto label_312998;
    }
    ctx->pc = 0x312990u;
    SET_GPR_U32(ctx, 31, 0x312998u);
    ctx->pc = 0x312994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312990u;
    // 0x312994: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x312990u, 0x312998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312998u;
label_312998:
    // 0x312998: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_31299c:
    if (ctx->pc == 0x31299Cu) {
        ctx->pc = 0x31299Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312998u;
        // 0x31299c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3129A0u;
        goto label_3129a0;
    }
    ctx->pc = 0x312998u;
    {
        const bool branch_taken_0x312998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31299Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312998u;
        // 0x31299c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312998) {
            ctx->pc = 0x3129DCu;
            goto label_3129dc;
        }
    }
    ctx->pc = 0x3129A0u;
label_3129a0:
    // 0x3129a0: 0x27a500c4  addiu       $a1, $sp, 0xC4
    ctx->pc = 0x3129a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
label_3129a4:
    // 0x3129a4: 0xc103468  jal         func_40D1A0
label_3129a8:
    if (ctx->pc == 0x3129A8u) {
        ctx->pc = 0x3129A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3129A4u;
        // 0x3129a8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3129ACu;
        goto label_3129ac;
    }
    ctx->pc = 0x3129A4u;
    SET_GPR_U32(ctx, 31, 0x3129ACu);
    ctx->pc = 0x3129A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3129A4u;
    // 0x3129a8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x3129A4u, 0x3129ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3129ACu;
label_3129ac:
    // 0x3129ac: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_3129b0:
    if (ctx->pc == 0x3129B0u) {
        ctx->pc = 0x3129B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3129ACu;
        // 0x3129b0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3129B4u;
        goto label_3129b4;
    }
    ctx->pc = 0x3129ACu;
    {
        const bool branch_taken_0x3129ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3129B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3129ACu;
        // 0x3129b0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3129ac) {
            ctx->pc = 0x3129DCu;
            goto label_3129dc;
        }
    }
    ctx->pc = 0x3129B4u;
label_3129b4:
    // 0x3129b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3129b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3129b8:
    // 0x3129b8: 0xc103454  jal         func_40D150
label_3129bc:
    if (ctx->pc == 0x3129BCu) {
        ctx->pc = 0x3129BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3129B8u;
        // 0x3129bc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3129C0u;
        goto label_3129c0;
    }
    ctx->pc = 0x3129B8u;
    SET_GPR_U32(ctx, 31, 0x3129C0u);
    ctx->pc = 0x3129BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3129B8u;
    // 0x3129bc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x3129B8u, 0x3129C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3129C0u;
label_3129c0:
    // 0x3129c0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3129c4:
    if (ctx->pc == 0x3129C4u) {
        ctx->pc = 0x3129C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3129C0u;
        // 0x3129c4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3129C8u;
        goto label_3129c8;
    }
    ctx->pc = 0x3129C0u;
    {
        const bool branch_taken_0x3129c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3129C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3129C0u;
        // 0x3129c4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3129c0) {
            ctx->pc = 0x3129DCu;
            goto label_3129dc;
        }
    }
    ctx->pc = 0x3129C8u;
label_3129c8:
    // 0x3129c8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3129c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3129cc:
    // 0x3129cc: 0xc103454  jal         func_40D150
label_3129d0:
    if (ctx->pc == 0x3129D0u) {
        ctx->pc = 0x3129D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3129CCu;
        // 0x3129d0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3129D4u;
        goto label_3129d4;
    }
    ctx->pc = 0x3129CCu;
    SET_GPR_U32(ctx, 31, 0x3129D4u);
    ctx->pc = 0x3129D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3129CCu;
    // 0x3129d0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x3129CCu, 0x3129D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3129D4u;
label_3129d4:
    // 0x3129d4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_3129d8:
    if (ctx->pc == 0x3129D8u) {
        ctx->pc = 0x3129D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3129D4u;
        // 0x3129d8: 0x97a200c2  lhu         $v0, 0xC2($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 194)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3129DCu;
        goto label_3129dc;
    }
    ctx->pc = 0x3129D4u;
    {
        const bool branch_taken_0x3129d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3129d4) {
            ctx->pc = 0x3129D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3129D4u;
            // 0x3129d8: 0x97a200c2  lhu         $v0, 0xC2($sp) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 194)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3129F0u;
            goto label_3129f0;
        }
    }
    ctx->pc = 0x3129DCu;
label_3129dc:
    // 0x3129dc: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3129dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3129e0:
    // 0x3129e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3129e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3129e4:
    // 0x3129e4: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x3129e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_3129e8:
    // 0x3129e8: 0x10000061  b           . + 4 + (0x61 << 2)
label_3129ec:
    if (ctx->pc == 0x3129ECu) {
        ctx->pc = 0x3129ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3129E8u;
        // 0x3129ec: 0x8c62010c  lw          $v0, 0x10C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3129F0u;
        goto label_3129f0;
    }
    ctx->pc = 0x3129E8u;
    {
        const bool branch_taken_0x3129e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3129ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3129E8u;
        // 0x3129ec: 0x8c62010c  lw          $v0, 0x10C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3129e8) {
            ctx->pc = 0x312B70u;
            goto label_312b70;
        }
    }
    ctx->pc = 0x3129F0u;
label_3129f0:
    // 0x3129f0: 0x34430001  ori         $v1, $v0, 0x1
    ctx->pc = 0x3129f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_3129f4:
    // 0x3129f4: 0xa2020008  sb          $v0, 0x8($s0)
    ctx->pc = 0x3129f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
label_3129f8:
    // 0x3129f8: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x3129f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
label_3129fc:
    // 0x3129fc: 0x97a200c4  lhu         $v0, 0xC4($sp)
    ctx->pc = 0x3129fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 196)));
label_312a00:
    // 0x312a00: 0xa602000a  sh          $v0, 0xA($s0)
    ctx->pc = 0x312a00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 2));
label_312a04:
    // 0x312a04: 0x97a300c6  lhu         $v1, 0xC6($sp)
    ctx->pc = 0x312a04u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 198)));
label_312a08:
    // 0x312a08: 0xa6030002  sh          $v1, 0x2($s0)
    ctx->pc = 0x312a08u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
label_312a0c:
    // 0x312a0c: 0x93a200c1  lbu         $v0, 0xC1($sp)
    ctx->pc = 0x312a0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 193)));
label_312a10:
    // 0x312a10: 0x54570002  bnel        $v0, $s7, . + 4 + (0x2 << 2)
label_312a14:
    if (ctx->pc == 0x312A14u) {
        ctx->pc = 0x312A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312A10u;
        // 0x312a14: 0xa2000001  sb          $zero, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312A18u;
        goto label_312a18;
    }
    ctx->pc = 0x312A10u;
    {
        const bool branch_taken_0x312a10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        if (branch_taken_0x312a10) {
            ctx->pc = 0x312A14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312A10u;
            // 0x312a14: 0xa2000001  sb          $zero, 0x1($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312A1Cu;
            goto label_312a1c;
        }
    }
    ctx->pc = 0x312A18u;
label_312a18:
    // 0x312a18: 0xa2160001  sb          $s6, 0x1($s0)
    ctx->pc = 0x312a18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 22));
label_312a1c:
    // 0x312a1c: 0x93a200c0  lbu         $v0, 0xC0($sp)
    ctx->pc = 0x312a1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 192)));
label_312a20:
    // 0x312a20: 0x54570002  bnel        $v0, $s7, . + 4 + (0x2 << 2)
label_312a24:
    if (ctx->pc == 0x312A24u) {
        ctx->pc = 0x312A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312A20u;
        // 0x312a24: 0xa2000009  sb          $zero, 0x9($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312A28u;
        goto label_312a28;
    }
    ctx->pc = 0x312A20u;
    {
        const bool branch_taken_0x312a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        if (branch_taken_0x312a20) {
            ctx->pc = 0x312A24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312A20u;
            // 0x312a24: 0xa2000009  sb          $zero, 0x9($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312A2Cu;
            goto label_312a2c;
        }
    }
    ctx->pc = 0x312A28u;
label_312a28:
    // 0x312a28: 0xa2160009  sb          $s6, 0x9($s0)
    ctx->pc = 0x312a28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 22));
label_312a2c:
    // 0x312a2c: 0x9662001e  lhu         $v0, 0x1E($s3)
    ctx->pc = 0x312a2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 30)));
label_312a30:
    // 0x312a30: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x312a30u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_312a34:
    // 0x312a34: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x312a34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_312a38:
    // 0x312a38: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x312a38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_312a3c:
    // 0x312a3c: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x312a3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_312a40:
    // 0x312a40: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
label_312a44:
    if (ctx->pc == 0x312A44u) {
        ctx->pc = 0x312A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312A40u;
        // 0x312a44: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312A48u;
        goto label_312a48;
    }
    ctx->pc = 0x312A40u;
    {
        const bool branch_taken_0x312a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x312A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312A40u;
        // 0x312a44: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312a40) {
            ctx->pc = 0x312988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_312988;
        }
    }
    ctx->pc = 0x312A48u;
label_312a48:
    // 0x312a48: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x312a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_312a4c:
    // 0x312a4c: 0xa7a00012  sh          $zero, 0x12($sp)
    ctx->pc = 0x312a4cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 18), (uint16_t)GPR_U32(ctx, 0));
label_312a50:
    // 0x312a50: 0xa3a20011  sb          $v0, 0x11($sp)
    ctx->pc = 0x312a50u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 2));
label_312a54:
    // 0x312a54: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x312a54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_312a58:
    // 0x312a58: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x312a58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_312a5c:
    // 0x312a5c: 0x241600ff  addiu       $s6, $zero, 0xFF
    ctx->pc = 0x312a5cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_312a60:
    // 0x312a60: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x312a60u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_312a64:
    // 0x312a64: 0x2414011d  addiu       $s4, $zero, 0x11D
    ctx->pc = 0x312a64u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 285));
label_312a68:
    // 0x312a68: 0x27b10024  addiu       $s1, $sp, 0x24
    ctx->pc = 0x312a68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
label_312a6c:
    // 0x312a6c: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x312a6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_312a70:
    // 0x312a70: 0x1056001d  beq         $v0, $s6, . + 4 + (0x1D << 2)
label_312a74:
    if (ctx->pc == 0x312A74u) {
        ctx->pc = 0x312A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312A70u;
        // 0x312a74: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312A78u;
        goto label_312a78;
    }
    ctx->pc = 0x312A70u;
    {
        const bool branch_taken_0x312a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        ctx->pc = 0x312A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312A70u;
        // 0x312a74: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312a70) {
            ctx->pc = 0x312AE8u;
            goto label_312ae8;
        }
    }
    ctx->pc = 0x312A78u;
label_312a78:
    // 0x312a78: 0x27a500c8  addiu       $a1, $sp, 0xC8
    ctx->pc = 0x312a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_312a7c:
    // 0x312a7c: 0xc103468  jal         func_40D1A0
label_312a80:
    if (ctx->pc == 0x312A80u) {
        ctx->pc = 0x312A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312A7Cu;
        // 0x312a80: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312A84u;
        goto label_312a84;
    }
    ctx->pc = 0x312A7Cu;
    SET_GPR_U32(ctx, 31, 0x312A84u);
    ctx->pc = 0x312A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312A7Cu;
    // 0x312a80: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x312A7Cu, 0x312A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312A84u;
label_312a84:
    // 0x312a84: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_312a88:
    if (ctx->pc == 0x312A88u) {
        ctx->pc = 0x312A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312A84u;
        // 0x312a88: 0x97a300ca  lhu         $v1, 0xCA($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 202)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312A8Cu;
        goto label_312a8c;
    }
    ctx->pc = 0x312A84u;
    {
        const bool branch_taken_0x312a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x312A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312A84u;
        // 0x312a88: 0x97a300ca  lhu         $v1, 0xCA($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 202)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312a84) {
            ctx->pc = 0x312B4Cu;
            goto label_312b4c;
        }
    }
    ctx->pc = 0x312A8Cu;
label_312a8c:
    // 0x312a8c: 0x2c6200f0  sltiu       $v0, $v1, 0xF0
    ctx->pc = 0x312a8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)240) ? 1 : 0);
label_312a90:
    // 0x312a90: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_312a94:
    if (ctx->pc == 0x312A94u) {
        ctx->pc = 0x312A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312A90u;
        // 0x312a94: 0xa2030001  sb          $v1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312A98u;
        goto label_312a98;
    }
    ctx->pc = 0x312A90u;
    {
        const bool branch_taken_0x312a90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x312a90) {
            ctx->pc = 0x312A94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312A90u;
            // 0x312a94: 0xa2030001  sb          $v1, 0x1($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312AD0u;
            goto label_312ad0;
        }
    }
    ctx->pc = 0x312A98u;
label_312a98:
    // 0x312a98: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x312a98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
label_312a9c:
    // 0x312a9c: 0xafd70000  sw          $s7, 0x0($fp)
    ctx->pc = 0x312a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 23));
label_312aa0:
    // 0x312aa0: 0x24c6e880  addiu       $a2, $a2, -0x1780
    ctx->pc = 0x312aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961280));
label_312aa4:
    // 0x312aa4: 0x8cc2010c  lw          $v0, 0x10C($a2)
    ctx->pc = 0x312aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 268)));
label_312aa8:
    // 0x312aa8: 0x40f809  jalr        $v0
label_312aac:
    if (ctx->pc == 0x312AACu) {
        ctx->pc = 0x312AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312AA8u;
        // 0x312aac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312AB0u;
        goto label_312ab0;
    }
    ctx->pc = 0x312AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x312AB0u);
        ctx->pc = 0x312AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312AA8u;
        // 0x312aac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312AA8u, 0x312AB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x312AB0u;
label_312ab0:
    // 0x312ab0: 0xafb400b0  sw          $s4, 0xB0($sp)
    ctx->pc = 0x312ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 20));
label_312ab4:
    // 0x312ab4: 0xc1035f6  jal         func_40D7D8
label_312ab8:
    if (ctx->pc == 0x312AB8u) {
        ctx->pc = 0x312AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312AB4u;
        // 0x312ab8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312ABCu;
        goto label_312abc;
    }
    ctx->pc = 0x312AB4u;
    SET_GPR_U32(ctx, 31, 0x312ABCu);
    ctx->pc = 0x312AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312AB4u;
    // 0x312ab8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x312AB4u, 0x312ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312ABCu;
label_312abc:
    // 0x312abc: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x312abcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
label_312ac0:
    // 0x312ac0: 0xc103628  jal         func_40D8A0
label_312ac4:
    if (ctx->pc == 0x312AC4u) {
        ctx->pc = 0x312AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312AC0u;
        // 0x312ac4: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312AC8u;
        goto label_312ac8;
    }
    ctx->pc = 0x312AC0u;
    SET_GPR_U32(ctx, 31, 0x312AC8u);
    ctx->pc = 0x312AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312AC0u;
    // 0x312ac4: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x312AC0u, 0x312AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312AC8u;
label_312ac8:
    // 0x312ac8: 0x10000044  b           . + 4 + (0x44 << 2)
label_312acc:
    if (ctx->pc == 0x312ACCu) {
        ctx->pc = 0x312ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312AC8u;
        // 0x312acc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312AD0u;
        goto label_312ad0;
    }
    ctx->pc = 0x312AC8u;
    {
        const bool branch_taken_0x312ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312AC8u;
        // 0x312acc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312ac8) {
            ctx->pc = 0x312BDCu;
            goto label_312bdc;
        }
    }
    ctx->pc = 0x312AD0u;
label_312ad0:
    // 0x312ad0: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x312ad0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
label_312ad4:
    // 0x312ad4: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x312ad4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_312ad8:
    // 0x312ad8: 0x97a200c8  lhu         $v0, 0xC8($sp)
    ctx->pc = 0x312ad8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 200)));
label_312adc:
    // 0x312adc: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x312adcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
label_312ae0:
    // 0x312ae0: 0x1000000c  b           . + 4 + (0xC << 2)
label_312ae4:
    if (ctx->pc == 0x312AE4u) {
        ctx->pc = 0x312AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312AE0u;
        // 0x312ae4: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312AE8u;
        goto label_312ae8;
    }
    ctx->pc = 0x312AE0u;
    {
        const bool branch_taken_0x312ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312AE0u;
        // 0x312ae4: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312ae0) {
            ctx->pc = 0x312B14u;
            goto label_312b14;
        }
    }
    ctx->pc = 0x312AE8u;
label_312ae8:
    // 0x312ae8: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x312ae8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_312aec:
    // 0x312aec: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x312aecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_312af0:
    // 0x312af0: 0x8e640020  lw          $a0, 0x20($s3)
    ctx->pc = 0x312af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_312af4:
    // 0x312af4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x312af4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_312af8:
    // 0x312af8: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x312af8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_312afc:
    // 0x312afc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x312afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_312b00:
    // 0x312b00: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x312b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_312b04:
    // 0x312b04: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x312b04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_312b08:
    // 0x312b08: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x312b08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_312b0c:
    // 0x312b0c: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x312b0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_312b10:
    // 0x312b10: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x312b10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_312b14:
    // 0x312b14: 0x5640ffd6  bnel        $s2, $zero, . + 4 + (-0x2A << 2)
label_312b18:
    if (ctx->pc == 0x312B18u) {
        ctx->pc = 0x312B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312B14u;
        // 0x312b18: 0x92020001  lbu         $v0, 0x1($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312B1Cu;
        goto label_312b1c;
    }
    ctx->pc = 0x312B14u;
    {
        const bool branch_taken_0x312b14 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x312b14) {
            ctx->pc = 0x312B18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312B14u;
            // 0x312b18: 0x92020001  lbu         $v0, 0x1($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312A70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_312a70;
        }
    }
    ctx->pc = 0x312B1Cu;
label_312b1c:
    // 0x312b1c: 0x10000018  b           . + 4 + (0x18 << 2)
label_312b20:
    if (ctx->pc == 0x312B20u) {
        ctx->pc = 0x312B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312B1Cu;
        // 0x312b20: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312B24u;
        goto label_312b24;
    }
    ctx->pc = 0x312B1Cu;
    {
        const bool branch_taken_0x312b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312B1Cu;
        // 0x312b20: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312b1c) {
            ctx->pc = 0x312B80u;
            goto label_312b80;
        }
    }
    ctx->pc = 0x312B24u;
label_312b24:
    // 0x312b24: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x312b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_312b28:
    // 0x312b28: 0xc1048ec  jal         func_4123B0
label_312b2c:
    if (ctx->pc == 0x312B2Cu) {
        ctx->pc = 0x312B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312B28u;
        // 0x312b2c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312B30u;
        goto label_312b30;
    }
    ctx->pc = 0x312B28u;
    SET_GPR_U32(ctx, 31, 0x312B30u);
    ctx->pc = 0x312B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312B28u;
    // 0x312b2c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4123B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4123B0u, 0x312B28u, 0x312B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312B30u;
label_312b30:
    // 0x312b30: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
label_312b34:
    if (ctx->pc == 0x312B34u) {
        ctx->pc = 0x312B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312B30u;
        // 0x312b34: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312B38u;
        goto label_312b38;
    }
    ctx->pc = 0x312B30u;
    {
        const bool branch_taken_0x312b30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x312b30) {
            ctx->pc = 0x312B34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312B30u;
            // 0x312b34: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312B80u;
            goto label_312b80;
        }
    }
    ctx->pc = 0x312B38u;
label_312b38:
    // 0x312b38: 0x3c070062  lui         $a3, 0x62
    ctx->pc = 0x312b38u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)98 << 16));
label_312b3c:
    // 0x312b3c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x312b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_312b40:
    // 0x312b40: 0x24e3e880  addiu       $v1, $a3, -0x1780
    ctx->pc = 0x312b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294961280));
label_312b44:
    // 0x312b44: 0x1000000a  b           . + 4 + (0xA << 2)
label_312b48:
    if (ctx->pc == 0x312B48u) {
        ctx->pc = 0x312B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312B44u;
        // 0x312b48: 0x8c62010c  lw          $v0, 0x10C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312B4Cu;
        goto label_312b4c;
    }
    ctx->pc = 0x312B44u;
    {
        const bool branch_taken_0x312b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312B44u;
        // 0x312b48: 0x8c62010c  lw          $v0, 0x10C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312b44) {
            ctx->pc = 0x312B70u;
            goto label_312b70;
        }
    }
    ctx->pc = 0x312B4Cu;
label_312b4c:
    // 0x312b4c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x312b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_312b50:
    // 0x312b50: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x312b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_312b54:
    // 0x312b54: 0x2443e880  addiu       $v1, $v0, -0x1780
    ctx->pc = 0x312b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_312b58:
    // 0x312b58: 0x10000005  b           . + 4 + (0x5 << 2)
label_312b5c:
    if (ctx->pc == 0x312B5Cu) {
        ctx->pc = 0x312B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312B58u;
        // 0x312b5c: 0x8c62010c  lw          $v0, 0x10C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312B60u;
        goto label_312b60;
    }
    ctx->pc = 0x312B58u;
    {
        const bool branch_taken_0x312b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312B58u;
        // 0x312b5c: 0x8c62010c  lw          $v0, 0x10C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312b58) {
            ctx->pc = 0x312B70u;
            goto label_312b70;
        }
    }
    ctx->pc = 0x312B60u;
label_312b60:
    // 0x312b60: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x312b60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_312b64:
    // 0x312b64: 0x2483e880  addiu       $v1, $a0, -0x1780
    ctx->pc = 0x312b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
label_312b68:
    // 0x312b68: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x312b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_312b6c:
    // 0x312b6c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x312b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_312b70:
    // 0x312b70: 0x40f809  jalr        $v0
label_312b74:
    if (ctx->pc == 0x312B74u) {
        ctx->pc = 0x312B78u;
        goto label_312b78;
    }
    ctx->pc = 0x312B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x312B78u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312B70u, 0x312B78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x312B78u;
label_312b78:
    // 0x312b78: 0x10000018  b           . + 4 + (0x18 << 2)
label_312b7c:
    if (ctx->pc == 0x312B7Cu) {
        ctx->pc = 0x312B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312B78u;
        // 0x312b7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312B80u;
        goto label_312b80;
    }
    ctx->pc = 0x312B78u;
    {
        const bool branch_taken_0x312b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312B78u;
        // 0x312b7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312b78) {
            ctx->pc = 0x312BDCu;
            goto label_312bdc;
        }
    }
    ctx->pc = 0x312B80u;
label_312b80:
    // 0x312b80: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x312b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_312b84:
    // 0x312b84: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_312b88:
    if (ctx->pc == 0x312B88u) {
        ctx->pc = 0x312B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312B84u;
        // 0x312b88: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312B8Cu;
        goto label_312b8c;
    }
    ctx->pc = 0x312B84u;
    {
        const bool branch_taken_0x312b84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x312B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312B84u;
        // 0x312b88: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312b84) {
            ctx->pc = 0x312BDCu;
            goto label_312bdc;
        }
    }
    ctx->pc = 0x312B8Cu;
label_312b8c:
    // 0x312b8c: 0x9662001c  lhu         $v0, 0x1C($s3)
    ctx->pc = 0x312b8cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 28)));
label_312b90:
    // 0x312b90: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_312b94:
    if (ctx->pc == 0x312B94u) {
        ctx->pc = 0x312B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312B90u;
        // 0x312b94: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312B98u;
        goto label_312b98;
    }
    ctx->pc = 0x312B90u;
    {
        const bool branch_taken_0x312b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x312B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312B90u;
        // 0x312b94: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312b90) {
            ctx->pc = 0x312BD8u;
            goto label_312bd8;
        }
    }
    ctx->pc = 0x312B98u;
label_312b98:
    // 0x312b98: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x312b98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_312b9c:
    // 0x312b9c: 0x0  nop
    ctx->pc = 0x312b9cu;
    // NOP
label_312ba0:
    // 0x312ba0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x312ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_312ba4:
    // 0x312ba4: 0x27a500cc  addiu       $a1, $sp, 0xCC
    ctx->pc = 0x312ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
label_312ba8:
    // 0x312ba8: 0xc103468  jal         func_40D1A0
label_312bac:
    if (ctx->pc == 0x312BACu) {
        ctx->pc = 0x312BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312BA8u;
        // 0x312bac: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312BB0u;
        goto label_312bb0;
    }
    ctx->pc = 0x312BA8u;
    SET_GPR_U32(ctx, 31, 0x312BB0u);
    ctx->pc = 0x312BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312BA8u;
    // 0x312bac: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x312BA8u, 0x312BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312BB0u;
label_312bb0:
    // 0x312bb0: 0x1040ffeb  beqz        $v0, . + 4 + (-0x15 << 2)
label_312bb4:
    if (ctx->pc == 0x312BB4u) {
        ctx->pc = 0x312BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312BB0u;
        // 0x312bb4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312BB8u;
        goto label_312bb8;
    }
    ctx->pc = 0x312BB0u;
    {
        const bool branch_taken_0x312bb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x312BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312BB0u;
        // 0x312bb4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312bb0) {
            ctx->pc = 0x312B60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_312b60;
        }
    }
    ctx->pc = 0x312BB8u;
label_312bb8:
    // 0x312bb8: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x312bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_312bbc:
    // 0x312bbc: 0x97a300cc  lhu         $v1, 0xCC($sp)
    ctx->pc = 0x312bbcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 204)));
label_312bc0:
    // 0x312bc0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x312bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_312bc4:
    // 0x312bc4: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x312bc4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
label_312bc8:
    // 0x312bc8: 0x9662001c  lhu         $v0, 0x1C($s3)
    ctx->pc = 0x312bc8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 28)));
label_312bcc:
    // 0x312bcc: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x312bccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_312bd0:
    // 0x312bd0: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_312bd4:
    if (ctx->pc == 0x312BD4u) {
        ctx->pc = 0x312BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312BD0u;
        // 0x312bd4: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312BD8u;
        goto label_312bd8;
    }
    ctx->pc = 0x312BD0u;
    {
        const bool branch_taken_0x312bd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x312BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312BD0u;
        // 0x312bd4: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312bd0) {
            ctx->pc = 0x312BA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_312ba0;
        }
    }
    ctx->pc = 0x312BD8u;
label_312bd8:
    // 0x312bd8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x312bd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_312bdc:
    // 0x312bdc: 0x7bb00160  lq          $s0, 0x160($sp)
    ctx->pc = 0x312bdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_312be0:
    // 0x312be0: 0x7bb10150  lq          $s1, 0x150($sp)
    ctx->pc = 0x312be0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_312be4:
    // 0x312be4: 0x7bb20140  lq          $s2, 0x140($sp)
    ctx->pc = 0x312be4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_312be8:
    // 0x312be8: 0x7bb30130  lq          $s3, 0x130($sp)
    ctx->pc = 0x312be8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_312bec:
    // 0x312bec: 0x7bb40120  lq          $s4, 0x120($sp)
    ctx->pc = 0x312becu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_312bf0:
    // 0x312bf0: 0x7bb50110  lq          $s5, 0x110($sp)
    ctx->pc = 0x312bf0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_312bf4:
    // 0x312bf4: 0x7bb60100  lq          $s6, 0x100($sp)
    ctx->pc = 0x312bf4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_312bf8:
    // 0x312bf8: 0x7bb700f0  lq          $s7, 0xF0($sp)
    ctx->pc = 0x312bf8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_312bfc:
    // 0x312bfc: 0x7bbe00e0  lq          $fp, 0xE0($sp)
    ctx->pc = 0x312bfcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_312c00:
    // 0x312c00: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x312c00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_312c04:
    // 0x312c04: 0x3e00008  jr          $ra
label_312c08:
    if (ctx->pc == 0x312C08u) {
        ctx->pc = 0x312C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312C04u;
        // 0x312c08: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312C0Cu;
        goto label_312c0c;
    }
    ctx->pc = 0x312C04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312C04u;
        // 0x312c08: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312C04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x312C0Cu;
label_312c0c:
    // 0x312c0c: 0x0  nop
    ctx->pc = 0x312c0cu;
    // NOP
    ctx->pc = 0x312c10u;
}
