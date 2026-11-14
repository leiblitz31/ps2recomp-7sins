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

// Function: sub_0048A8E0
// Address: 0x48a8e0 - 0x48abc0
void sub_0048A8E0_0x48a8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048A8E0_0x48a8e0");
#endif

    switch (ctx->pc) {
        case 0x48a8e0u: goto label_48a8e0;
        case 0x48a8e4u: goto label_48a8e4;
        case 0x48a8e8u: goto label_48a8e8;
        case 0x48a8ecu: goto label_48a8ec;
        case 0x48a8f0u: goto label_48a8f0;
        case 0x48a8f4u: goto label_48a8f4;
        case 0x48a8f8u: goto label_48a8f8;
        case 0x48a8fcu: goto label_48a8fc;
        case 0x48a900u: goto label_48a900;
        case 0x48a904u: goto label_48a904;
        case 0x48a908u: goto label_48a908;
        case 0x48a90cu: goto label_48a90c;
        case 0x48a910u: goto label_48a910;
        case 0x48a914u: goto label_48a914;
        case 0x48a918u: goto label_48a918;
        case 0x48a91cu: goto label_48a91c;
        case 0x48a920u: goto label_48a920;
        case 0x48a924u: goto label_48a924;
        case 0x48a928u: goto label_48a928;
        case 0x48a92cu: goto label_48a92c;
        case 0x48a930u: goto label_48a930;
        case 0x48a934u: goto label_48a934;
        case 0x48a938u: goto label_48a938;
        case 0x48a93cu: goto label_48a93c;
        case 0x48a940u: goto label_48a940;
        case 0x48a944u: goto label_48a944;
        case 0x48a948u: goto label_48a948;
        case 0x48a94cu: goto label_48a94c;
        case 0x48a950u: goto label_48a950;
        case 0x48a954u: goto label_48a954;
        case 0x48a958u: goto label_48a958;
        case 0x48a95cu: goto label_48a95c;
        case 0x48a960u: goto label_48a960;
        case 0x48a964u: goto label_48a964;
        case 0x48a968u: goto label_48a968;
        case 0x48a96cu: goto label_48a96c;
        case 0x48a970u: goto label_48a970;
        case 0x48a974u: goto label_48a974;
        case 0x48a978u: goto label_48a978;
        case 0x48a97cu: goto label_48a97c;
        case 0x48a980u: goto label_48a980;
        case 0x48a984u: goto label_48a984;
        case 0x48a988u: goto label_48a988;
        case 0x48a98cu: goto label_48a98c;
        case 0x48a990u: goto label_48a990;
        case 0x48a994u: goto label_48a994;
        case 0x48a998u: goto label_48a998;
        case 0x48a99cu: goto label_48a99c;
        case 0x48a9a0u: goto label_48a9a0;
        case 0x48a9a4u: goto label_48a9a4;
        case 0x48a9a8u: goto label_48a9a8;
        case 0x48a9acu: goto label_48a9ac;
        case 0x48a9b0u: goto label_48a9b0;
        case 0x48a9b4u: goto label_48a9b4;
        case 0x48a9b8u: goto label_48a9b8;
        case 0x48a9bcu: goto label_48a9bc;
        case 0x48a9c0u: goto label_48a9c0;
        case 0x48a9c4u: goto label_48a9c4;
        case 0x48a9c8u: goto label_48a9c8;
        case 0x48a9ccu: goto label_48a9cc;
        case 0x48a9d0u: goto label_48a9d0;
        case 0x48a9d4u: goto label_48a9d4;
        case 0x48a9d8u: goto label_48a9d8;
        case 0x48a9dcu: goto label_48a9dc;
        case 0x48a9e0u: goto label_48a9e0;
        case 0x48a9e4u: goto label_48a9e4;
        case 0x48a9e8u: goto label_48a9e8;
        case 0x48a9ecu: goto label_48a9ec;
        case 0x48a9f0u: goto label_48a9f0;
        case 0x48a9f4u: goto label_48a9f4;
        case 0x48a9f8u: goto label_48a9f8;
        case 0x48a9fcu: goto label_48a9fc;
        case 0x48aa00u: goto label_48aa00;
        case 0x48aa04u: goto label_48aa04;
        case 0x48aa08u: goto label_48aa08;
        case 0x48aa0cu: goto label_48aa0c;
        case 0x48aa10u: goto label_48aa10;
        case 0x48aa14u: goto label_48aa14;
        case 0x48aa18u: goto label_48aa18;
        case 0x48aa1cu: goto label_48aa1c;
        case 0x48aa20u: goto label_48aa20;
        case 0x48aa24u: goto label_48aa24;
        case 0x48aa28u: goto label_48aa28;
        case 0x48aa2cu: goto label_48aa2c;
        case 0x48aa30u: goto label_48aa30;
        case 0x48aa34u: goto label_48aa34;
        case 0x48aa38u: goto label_48aa38;
        case 0x48aa3cu: goto label_48aa3c;
        case 0x48aa40u: goto label_48aa40;
        case 0x48aa44u: goto label_48aa44;
        case 0x48aa48u: goto label_48aa48;
        case 0x48aa4cu: goto label_48aa4c;
        case 0x48aa50u: goto label_48aa50;
        case 0x48aa54u: goto label_48aa54;
        case 0x48aa58u: goto label_48aa58;
        case 0x48aa5cu: goto label_48aa5c;
        case 0x48aa60u: goto label_48aa60;
        case 0x48aa64u: goto label_48aa64;
        case 0x48aa68u: goto label_48aa68;
        case 0x48aa6cu: goto label_48aa6c;
        case 0x48aa70u: goto label_48aa70;
        case 0x48aa74u: goto label_48aa74;
        case 0x48aa78u: goto label_48aa78;
        case 0x48aa7cu: goto label_48aa7c;
        case 0x48aa80u: goto label_48aa80;
        case 0x48aa84u: goto label_48aa84;
        case 0x48aa88u: goto label_48aa88;
        case 0x48aa8cu: goto label_48aa8c;
        case 0x48aa90u: goto label_48aa90;
        case 0x48aa94u: goto label_48aa94;
        case 0x48aa98u: goto label_48aa98;
        case 0x48aa9cu: goto label_48aa9c;
        case 0x48aaa0u: goto label_48aaa0;
        case 0x48aaa4u: goto label_48aaa4;
        case 0x48aaa8u: goto label_48aaa8;
        case 0x48aaacu: goto label_48aaac;
        case 0x48aab0u: goto label_48aab0;
        case 0x48aab4u: goto label_48aab4;
        case 0x48aab8u: goto label_48aab8;
        case 0x48aabcu: goto label_48aabc;
        case 0x48aac0u: goto label_48aac0;
        case 0x48aac4u: goto label_48aac4;
        case 0x48aac8u: goto label_48aac8;
        case 0x48aaccu: goto label_48aacc;
        case 0x48aad0u: goto label_48aad0;
        case 0x48aad4u: goto label_48aad4;
        case 0x48aad8u: goto label_48aad8;
        case 0x48aadcu: goto label_48aadc;
        case 0x48aae0u: goto label_48aae0;
        case 0x48aae4u: goto label_48aae4;
        case 0x48aae8u: goto label_48aae8;
        case 0x48aaecu: goto label_48aaec;
        case 0x48aaf0u: goto label_48aaf0;
        case 0x48aaf4u: goto label_48aaf4;
        case 0x48aaf8u: goto label_48aaf8;
        case 0x48aafcu: goto label_48aafc;
        case 0x48ab00u: goto label_48ab00;
        case 0x48ab04u: goto label_48ab04;
        case 0x48ab08u: goto label_48ab08;
        case 0x48ab0cu: goto label_48ab0c;
        case 0x48ab10u: goto label_48ab10;
        case 0x48ab14u: goto label_48ab14;
        case 0x48ab18u: goto label_48ab18;
        case 0x48ab1cu: goto label_48ab1c;
        case 0x48ab20u: goto label_48ab20;
        case 0x48ab24u: goto label_48ab24;
        case 0x48ab28u: goto label_48ab28;
        case 0x48ab2cu: goto label_48ab2c;
        case 0x48ab30u: goto label_48ab30;
        case 0x48ab34u: goto label_48ab34;
        case 0x48ab38u: goto label_48ab38;
        case 0x48ab3cu: goto label_48ab3c;
        case 0x48ab40u: goto label_48ab40;
        case 0x48ab44u: goto label_48ab44;
        case 0x48ab48u: goto label_48ab48;
        case 0x48ab4cu: goto label_48ab4c;
        case 0x48ab50u: goto label_48ab50;
        case 0x48ab54u: goto label_48ab54;
        case 0x48ab58u: goto label_48ab58;
        case 0x48ab5cu: goto label_48ab5c;
        case 0x48ab60u: goto label_48ab60;
        case 0x48ab64u: goto label_48ab64;
        case 0x48ab68u: goto label_48ab68;
        case 0x48ab6cu: goto label_48ab6c;
        case 0x48ab70u: goto label_48ab70;
        case 0x48ab74u: goto label_48ab74;
        case 0x48ab78u: goto label_48ab78;
        case 0x48ab7cu: goto label_48ab7c;
        case 0x48ab80u: goto label_48ab80;
        case 0x48ab84u: goto label_48ab84;
        case 0x48ab88u: goto label_48ab88;
        case 0x48ab8cu: goto label_48ab8c;
        case 0x48ab90u: goto label_48ab90;
        case 0x48ab94u: goto label_48ab94;
        case 0x48ab98u: goto label_48ab98;
        case 0x48ab9cu: goto label_48ab9c;
        case 0x48aba0u: goto label_48aba0;
        case 0x48aba4u: goto label_48aba4;
        case 0x48aba8u: goto label_48aba8;
        case 0x48abacu: goto label_48abac;
        case 0x48abb0u: goto label_48abb0;
        case 0x48abb4u: goto label_48abb4;
        case 0x48abb8u: goto label_48abb8;
        case 0x48abbcu: goto label_48abbc;
        default: break;
    }

    ctx->pc = 0x48a8e0u;

label_48a8e0:
    // 0x48a8e0: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x48a8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
label_48a8e4:
    // 0x48a8e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x48a8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_48a8e8:
    // 0x48a8e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x48a8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_48a8ec:
    // 0x48a8ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48a8ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_48a8f0:
    // 0x48a8f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48a8f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_48a8f4:
    // 0x48a8f4: 0xafa401b0  sw          $a0, 0x1B0($sp)
    ctx->pc = 0x48a8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 4));
label_48a8f8:
    // 0x48a8f8: 0xafa501c0  sw          $a1, 0x1C0($sp)
    ctx->pc = 0x48a8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 5));
label_48a8fc:
    // 0x48a8fc: 0x8fa201c0  lw          $v0, 0x1C0($sp)
    ctx->pc = 0x48a8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_48a900:
    // 0x48a900: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x48a900u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_48a904:
    // 0x48a904: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x48a904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_48a908:
    // 0x48a908: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_48a90c:
    if (ctx->pc == 0x48A90Cu) {
        ctx->pc = 0x48A910u;
        goto label_48a910;
    }
    ctx->pc = 0x48A908u;
    {
        const bool branch_taken_0x48a908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48a908) {
            ctx->pc = 0x48A9B4u;
            goto label_48a9b4;
        }
    }
    ctx->pc = 0x48A910u;
label_48a910:
    // 0x48a910: 0x8f82b624  lw          $v0, -0x49DC($gp)
    ctx->pc = 0x48a910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948388)));
label_48a914:
    // 0x48a914: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_48a918:
    if (ctx->pc == 0x48A918u) {
        ctx->pc = 0x48A91Cu;
        goto label_48a91c;
    }
    ctx->pc = 0x48A914u;
    {
        const bool branch_taken_0x48a914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48a914) {
            ctx->pc = 0x48A9B4u;
            goto label_48a9b4;
        }
    }
    ctx->pc = 0x48A91Cu;
label_48a91c:
    // 0x48a91c: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x48a91cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_48a920:
    // 0x48a920: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x48a920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_48a924:
    // 0x48a924: 0x27a601a0  addiu       $a2, $sp, 0x1A0
    ctx->pc = 0x48a924u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_48a928:
    // 0x48a928: 0xc115ee8  jal         func_457BA0
label_48a92c:
    if (ctx->pc == 0x48A92Cu) {
        ctx->pc = 0x48A930u;
        goto label_48a930;
    }
    ctx->pc = 0x48A928u;
    SET_GPR_U32(ctx, 31, 0x48A930u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x48A928u, 0x48A930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48A930u;
label_48a930:
    // 0x48a930: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_48a934:
    if (ctx->pc == 0x48A934u) {
        ctx->pc = 0x48A938u;
        goto label_48a938;
    }
    ctx->pc = 0x48A930u;
    {
        const bool branch_taken_0x48a930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48a930) {
            ctx->pc = 0x48A9B4u;
            goto label_48a9b4;
        }
    }
    ctx->pc = 0x48A938u;
label_48a938:
    // 0x48a938: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x48a938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_48a93c:
    // 0x48a93c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_48a940:
    if (ctx->pc == 0x48A940u) {
        ctx->pc = 0x48A944u;
        goto label_48a944;
    }
    ctx->pc = 0x48A93Cu;
    {
        const bool branch_taken_0x48a93c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48a93c) {
            ctx->pc = 0x48A9B4u;
            goto label_48a9b4;
        }
    }
    ctx->pc = 0x48A944u;
label_48a944:
    // 0x48a944: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x48a944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_48a948:
    // 0x48a948: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x48a948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_48a94c:
    // 0x48a94c: 0x8fa601a4  lw          $a2, 0x1A4($sp)
    ctx->pc = 0x48a94cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
label_48a950:
    // 0x48a950: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x48a950u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_48a954:
    // 0x48a954: 0x24e74628  addiu       $a3, $a3, 0x4628
    ctx->pc = 0x48a954u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 17960));
label_48a958:
    // 0x48a958: 0x24080123  addiu       $t0, $zero, 0x123
    ctx->pc = 0x48a958u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
label_48a95c:
    // 0x48a95c: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x48a95cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
label_48a960:
    // 0x48a960: 0x252946e0  addiu       $t1, $t1, 0x46E0
    ctx->pc = 0x48a960u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 18144));
label_48a964:
    // 0x48a964: 0xc113940  jal         func_44E500
label_48a968:
    if (ctx->pc == 0x48A968u) {
        ctx->pc = 0x48A96Cu;
        goto label_48a96c;
    }
    ctx->pc = 0x48A964u;
    SET_GPR_U32(ctx, 31, 0x48A96Cu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x48A964u, 0x48A96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48A96Cu;
label_48a96c:
    // 0x48a96c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x48a96cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_48a970:
    // 0x48a970: 0x2785b618  addiu       $a1, $gp, -0x49E8
    ctx->pc = 0x48a970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948376));
label_48a974:
    // 0x48a974: 0xc115c24  jal         func_457090
label_48a978:
    if (ctx->pc == 0x48A978u) {
        ctx->pc = 0x48A97Cu;
        goto label_48a97c;
    }
    ctx->pc = 0x48A974u;
    SET_GPR_U32(ctx, 31, 0x48A97Cu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x48A974u, 0x48A97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48A97Cu;
label_48a97c:
    // 0x48a97c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x48a97cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_48a980:
    // 0x48a980: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x48a980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_48a984:
    // 0x48a984: 0x40f809  jalr        $v0
label_48a988:
    if (ctx->pc == 0x48A988u) {
        ctx->pc = 0x48A98Cu;
        goto label_48a98c;
    }
    ctx->pc = 0x48A984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x48A98Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48A984u, 0x48A98Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x48A98Cu;
label_48a98c:
    // 0x48a98c: 0xaf82b624  sw          $v0, -0x49DC($gp)
    ctx->pc = 0x48a98cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948388), GPR_U32(ctx, 2));
label_48a990:
    // 0x48a990: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x48a990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_48a994:
    // 0x48a994: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_48a998:
    if (ctx->pc == 0x48A998u) {
        ctx->pc = 0x48A99Cu;
        goto label_48a99c;
    }
    ctx->pc = 0x48A994u;
    {
        const bool branch_taken_0x48a994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48a994) {
            ctx->pc = 0x48A9A4u;
            goto label_48a9a4;
        }
    }
    ctx->pc = 0x48A99Cu;
label_48a99c:
    // 0x48a99c: 0xd  break       0
    ctx->pc = 0x48a99cu;
    runtime->handleBreak(rdram, ctx);
label_48a9a0:
    // 0x48a9a0: 0x0  nop
    ctx->pc = 0x48a9a0u;
    // NOP
label_48a9a4:
    // 0x48a9a4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x48a9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_48a9a8:
    // 0x48a9a8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x48a9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48a9ac:
    // 0x48a9ac: 0xc11392c  jal         func_44E4B0
label_48a9b0:
    if (ctx->pc == 0x48A9B0u) {
        ctx->pc = 0x48A9B4u;
        goto label_48a9b4;
    }
    ctx->pc = 0x48A9ACu;
    SET_GPR_U32(ctx, 31, 0x48A9B4u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x48A9ACu, 0x48A9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48A9B4u;
label_48a9b4:
    // 0x48a9b4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x48a9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_48a9b8:
    // 0x48a9b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x48a9b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_48a9bc:
    // 0x48a9bc: 0x0  nop
    ctx->pc = 0x48a9bcu;
    // NOP
label_48a9c0:
    // 0x48a9c0: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x48a9c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_48a9c4:
    // 0x48a9c4: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x48a9c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_48a9c8:
    // 0x48a9c8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x48a9c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_48a9cc:
    // 0x48a9cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x48a9ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_48a9d0:
    // 0x48a9d0: 0x0  nop
    ctx->pc = 0x48a9d0u;
    // NOP
label_48a9d4:
    // 0x48a9d4: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x48a9d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_48a9d8:
    // 0x48a9d8: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x48a9d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_48a9dc:
    // 0x48a9dc: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x48a9dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_48a9e0:
    // 0x48a9e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x48a9e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_48a9e4:
    // 0x48a9e4: 0x0  nop
    ctx->pc = 0x48a9e4u;
    // NOP
label_48a9e8:
    // 0x48a9e8: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x48a9e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_48a9ec:
    // 0x48a9ec: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x48a9ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_48a9f0:
    // 0x48a9f0: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x48a9f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_48a9f4:
    // 0x48a9f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x48a9f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_48a9f8:
    // 0x48a9f8: 0x0  nop
    ctx->pc = 0x48a9f8u;
    // NOP
label_48a9fc:
    // 0x48a9fc: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x48a9fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_48aa00:
    // 0x48aa00: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x48aa00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_48aa04:
    // 0x48aa04: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x48aa04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_48aa08:
    // 0x48aa08: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x48aa08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_48aa0c:
    // 0x48aa0c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x48aa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_48aa10:
    // 0x48aa10: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x48aa10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
label_48aa14:
    // 0x48aa14: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x48aa14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_48aa18:
    // 0x48aa18: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x48aa18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_48aa1c:
    // 0x48aa1c: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x48aa1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_48aa20:
    // 0x48aa20: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x48aa20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_48aa24:
    // 0x48aa24: 0x27b20050  addiu       $s2, $sp, 0x50
    ctx->pc = 0x48aa24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_48aa28:
    // 0x48aa28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x48aa28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_48aa2c:
    // 0x48aa2c: 0x8fa501c0  lw          $a1, 0x1C0($sp)
    ctx->pc = 0x48aa2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_48aa30:
    // 0x48aa30: 0xc041d58  jal         func_107560
label_48aa34:
    if (ctx->pc == 0x48AA34u) {
        ctx->pc = 0x48AA38u;
        goto label_48aa38;
    }
    ctx->pc = 0x48AA30u;
    SET_GPR_U32(ctx, 31, 0x48AA38u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x48AA30u, 0x48AA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48AA38u;
label_48aa38:
    // 0x48aa38: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x48aa38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_48aa3c:
    // 0x48aa3c: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x48aa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_48aa40:
    // 0x48aa40: 0xc4420084  lwc1        $f2, 0x84($v0)
    ctx->pc = 0x48aa40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_48aa44:
    // 0x48aa44: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x48aa44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_48aa48:
    // 0x48aa48: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x48aa48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48aa4c:
    // 0x48aa4c: 0xc4400088  lwc1        $f0, 0x88($v0)
    ctx->pc = 0x48aa4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48aa50:
    // 0x48aa50: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x48aa50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_48aa54:
    // 0x48aa54: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x48aa54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_48aa58:
    // 0x48aa58: 0x0  nop
    ctx->pc = 0x48aa58u;
    // NOP
label_48aa5c:
    // 0x48aa5c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x48aa5cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_48aa60:
    // 0x48aa60: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x48aa60u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_48aa64:
    // 0x48aa64: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x48aa64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_48aa68:
    // 0x48aa68: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x48aa68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_48aa6c:
    // 0x48aa6c: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x48aa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_48aa70:
    // 0x48aa70: 0xc4420088  lwc1        $f2, 0x88($v0)
    ctx->pc = 0x48aa70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_48aa74:
    // 0x48aa74: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x48aa74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_48aa78:
    // 0x48aa78: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x48aa78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48aa7c:
    // 0x48aa7c: 0xc4400080  lwc1        $f0, 0x80($v0)
    ctx->pc = 0x48aa7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48aa80:
    // 0x48aa80: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x48aa80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_48aa84:
    // 0x48aa84: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x48aa84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_48aa88:
    // 0x48aa88: 0x0  nop
    ctx->pc = 0x48aa88u;
    // NOP
label_48aa8c:
    // 0x48aa8c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x48aa8cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_48aa90:
    // 0x48aa90: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x48aa90u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_48aa94:
    // 0x48aa94: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x48aa94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_48aa98:
    // 0x48aa98: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x48aa98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_48aa9c:
    // 0x48aa9c: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x48aa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_48aaa0:
    // 0x48aaa0: 0xc4420080  lwc1        $f2, 0x80($v0)
    ctx->pc = 0x48aaa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_48aaa4:
    // 0x48aaa4: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x48aaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_48aaa8:
    // 0x48aaa8: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x48aaa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48aaac:
    // 0x48aaac: 0xc4400084  lwc1        $f0, 0x84($v0)
    ctx->pc = 0x48aaacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48aab0:
    // 0x48aab0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x48aab0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_48aab4:
    // 0x48aab4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x48aab4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_48aab8:
    // 0x48aab8: 0x0  nop
    ctx->pc = 0x48aab8u;
    // NOP
label_48aabc:
    // 0x48aabc: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x48aabcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_48aac0:
    // 0x48aac0: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x48aac0u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_48aac4:
    // 0x48aac4: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x48aac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_48aac8:
    // 0x48aac8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x48aac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_48aacc:
    // 0x48aacc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x48aaccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_48aad0:
    // 0x48aad0: 0xc104cf2  jal         func_4133C8
label_48aad4:
    if (ctx->pc == 0x48AAD4u) {
        ctx->pc = 0x48AAD8u;
        goto label_48aad8;
    }
    ctx->pc = 0x48AAD0u;
    SET_GPR_U32(ctx, 31, 0x48AAD8u);
    ctx->pc = 0x4133C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4133C8u, 0x48AAD0u, 0x48AAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48AAD8u;
label_48aad8:
    // 0x48aad8: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x48aad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_48aadc:
    // 0x48aadc: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x48aadcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_48aae0:
    // 0x48aae0: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x48aae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48aae4:
    // 0x48aae4: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x48aae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48aae8:
    // 0x48aae8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x48aae8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_48aaec:
    // 0x48aaec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x48aaecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_48aaf0:
    // 0x48aaf0: 0x0  nop
    ctx->pc = 0x48aaf0u;
    // NOP
label_48aaf4:
    // 0x48aaf4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x48aaf4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_48aaf8:
    // 0x48aaf8: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x48aaf8u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_48aafc:
    // 0x48aafc: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x48aafcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_48ab00:
    // 0x48ab00: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x48ab00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_48ab04:
    // 0x48ab04: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x48ab04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_48ab08:
    // 0x48ab08: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x48ab08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48ab0c:
    // 0x48ab0c: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x48ab0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48ab10:
    // 0x48ab10: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x48ab10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_48ab14:
    // 0x48ab14: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x48ab14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_48ab18:
    // 0x48ab18: 0x0  nop
    ctx->pc = 0x48ab18u;
    // NOP
label_48ab1c:
    // 0x48ab1c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x48ab1cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_48ab20:
    // 0x48ab20: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x48ab20u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_48ab24:
    // 0x48ab24: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x48ab24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_48ab28:
    // 0x48ab28: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x48ab28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_48ab2c:
    // 0x48ab2c: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x48ab2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_48ab30:
    // 0x48ab30: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x48ab30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48ab34:
    // 0x48ab34: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x48ab34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48ab38:
    // 0x48ab38: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x48ab38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_48ab3c:
    // 0x48ab3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x48ab3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_48ab40:
    // 0x48ab40: 0x0  nop
    ctx->pc = 0x48ab40u;
    // NOP
label_48ab44:
    // 0x48ab44: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x48ab44u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_48ab48:
    // 0x48ab48: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x48ab48u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_48ab4c:
    // 0x48ab4c: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x48ab4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_48ab50:
    // 0x48ab50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x48ab50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_48ab54:
    // 0x48ab54: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x48ab54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_48ab58:
    // 0x48ab58: 0xc104cf2  jal         func_4133C8
label_48ab5c:
    if (ctx->pc == 0x48AB5Cu) {
        ctx->pc = 0x48AB60u;
        goto label_48ab60;
    }
    ctx->pc = 0x48AB58u;
    SET_GPR_U32(ctx, 31, 0x48AB60u);
    ctx->pc = 0x4133C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4133C8u, 0x48AB58u, 0x48AB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48AB60u;
label_48ab60:
    // 0x48ab60: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x48ab60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_48ab64:
    // 0x48ab64: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x48ab64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_48ab68:
    // 0x48ab68: 0xc103e64  jal         func_40F990
label_48ab6c:
    if (ctx->pc == 0x48AB6Cu) {
        ctx->pc = 0x48AB70u;
        goto label_48ab70;
    }
    ctx->pc = 0x48AB68u;
    SET_GPR_U32(ctx, 31, 0x48AB70u);
    ctx->pc = 0x40F990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F990u, 0x48AB68u, 0x48AB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48AB70u;
label_48ab70:
    // 0x48ab70: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x48ab70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_48ab74:
    // 0x48ab74: 0x2444002c  addiu       $a0, $v0, 0x2C
    ctx->pc = 0x48ab74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
label_48ab78:
    // 0x48ab78: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x48ab78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_48ab7c:
    // 0x48ab7c: 0xc10229c  jal         func_408A70
label_48ab80:
    if (ctx->pc == 0x48AB80u) {
        ctx->pc = 0x48AB84u;
        goto label_48ab84;
    }
    ctx->pc = 0x48AB7Cu;
    SET_GPR_U32(ctx, 31, 0x48AB84u);
    ctx->pc = 0x408A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x408A70u, 0x48AB7Cu, 0x48AB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48AB84u;
label_48ab84:
    // 0x48ab84: 0x8fa301b0  lw          $v1, 0x1B0($sp)
    ctx->pc = 0x48ab84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_48ab88:
    // 0x48ab88: 0xac600050  sw          $zero, 0x50($v1)
    ctx->pc = 0x48ab88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 0));
label_48ab8c:
    // 0x48ab8c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x48ab8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48ab90:
    // 0x48ab90: 0x8fa301b0  lw          $v1, 0x1B0($sp)
    ctx->pc = 0x48ab90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_48ab94:
    // 0x48ab94: 0xac64008c  sw          $a0, 0x8C($v1)
    ctx->pc = 0x48ab94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 140), GPR_U32(ctx, 4));
label_48ab98:
    // 0x48ab98: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x48ab98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_48ab9c:
    // 0x48ab9c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x48ab9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_48aba0:
    // 0x48aba0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48aba0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_48aba4:
    // 0x48aba4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48aba4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_48aba8:
    // 0x48aba8: 0x27bd01d0  addiu       $sp, $sp, 0x1D0
    ctx->pc = 0x48aba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_48abac:
    // 0x48abac: 0x3e00008  jr          $ra
label_48abb0:
    if (ctx->pc == 0x48ABB0u) {
        ctx->pc = 0x48ABB4u;
        goto label_48abb4;
    }
    ctx->pc = 0x48ABACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48ABACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48ABB4u;
label_48abb4:
    // 0x48abb4: 0x0  nop
    ctx->pc = 0x48abb4u;
    // NOP
label_48abb8:
    // 0x48abb8: 0x0  nop
    ctx->pc = 0x48abb8u;
    // NOP
label_48abbc:
    // 0x48abbc: 0x0  nop
    ctx->pc = 0x48abbcu;
    // NOP
    ctx->pc = 0x48abc0u;
}
