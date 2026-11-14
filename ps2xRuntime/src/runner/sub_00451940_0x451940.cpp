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

// Function: sub_00451940
// Address: 0x451940 - 0x451ac0
void sub_00451940_0x451940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00451940_0x451940");
#endif

    switch (ctx->pc) {
        case 0x451940u: goto label_451940;
        case 0x451944u: goto label_451944;
        case 0x451948u: goto label_451948;
        case 0x45194cu: goto label_45194c;
        case 0x451950u: goto label_451950;
        case 0x451954u: goto label_451954;
        case 0x451958u: goto label_451958;
        case 0x45195cu: goto label_45195c;
        case 0x451960u: goto label_451960;
        case 0x451964u: goto label_451964;
        case 0x451968u: goto label_451968;
        case 0x45196cu: goto label_45196c;
        case 0x451970u: goto label_451970;
        case 0x451974u: goto label_451974;
        case 0x451978u: goto label_451978;
        case 0x45197cu: goto label_45197c;
        case 0x451980u: goto label_451980;
        case 0x451984u: goto label_451984;
        case 0x451988u: goto label_451988;
        case 0x45198cu: goto label_45198c;
        case 0x451990u: goto label_451990;
        case 0x451994u: goto label_451994;
        case 0x451998u: goto label_451998;
        case 0x45199cu: goto label_45199c;
        case 0x4519a0u: goto label_4519a0;
        case 0x4519a4u: goto label_4519a4;
        case 0x4519a8u: goto label_4519a8;
        case 0x4519acu: goto label_4519ac;
        case 0x4519b0u: goto label_4519b0;
        case 0x4519b4u: goto label_4519b4;
        case 0x4519b8u: goto label_4519b8;
        case 0x4519bcu: goto label_4519bc;
        case 0x4519c0u: goto label_4519c0;
        case 0x4519c4u: goto label_4519c4;
        case 0x4519c8u: goto label_4519c8;
        case 0x4519ccu: goto label_4519cc;
        case 0x4519d0u: goto label_4519d0;
        case 0x4519d4u: goto label_4519d4;
        case 0x4519d8u: goto label_4519d8;
        case 0x4519dcu: goto label_4519dc;
        case 0x4519e0u: goto label_4519e0;
        case 0x4519e4u: goto label_4519e4;
        case 0x4519e8u: goto label_4519e8;
        case 0x4519ecu: goto label_4519ec;
        case 0x4519f0u: goto label_4519f0;
        case 0x4519f4u: goto label_4519f4;
        case 0x4519f8u: goto label_4519f8;
        case 0x4519fcu: goto label_4519fc;
        case 0x451a00u: goto label_451a00;
        case 0x451a04u: goto label_451a04;
        case 0x451a08u: goto label_451a08;
        case 0x451a0cu: goto label_451a0c;
        case 0x451a10u: goto label_451a10;
        case 0x451a14u: goto label_451a14;
        case 0x451a18u: goto label_451a18;
        case 0x451a1cu: goto label_451a1c;
        case 0x451a20u: goto label_451a20;
        case 0x451a24u: goto label_451a24;
        case 0x451a28u: goto label_451a28;
        case 0x451a2cu: goto label_451a2c;
        case 0x451a30u: goto label_451a30;
        case 0x451a34u: goto label_451a34;
        case 0x451a38u: goto label_451a38;
        case 0x451a3cu: goto label_451a3c;
        case 0x451a40u: goto label_451a40;
        case 0x451a44u: goto label_451a44;
        case 0x451a48u: goto label_451a48;
        case 0x451a4cu: goto label_451a4c;
        case 0x451a50u: goto label_451a50;
        case 0x451a54u: goto label_451a54;
        case 0x451a58u: goto label_451a58;
        case 0x451a5cu: goto label_451a5c;
        case 0x451a60u: goto label_451a60;
        case 0x451a64u: goto label_451a64;
        case 0x451a68u: goto label_451a68;
        case 0x451a6cu: goto label_451a6c;
        case 0x451a70u: goto label_451a70;
        case 0x451a74u: goto label_451a74;
        case 0x451a78u: goto label_451a78;
        case 0x451a7cu: goto label_451a7c;
        case 0x451a80u: goto label_451a80;
        case 0x451a84u: goto label_451a84;
        case 0x451a88u: goto label_451a88;
        case 0x451a8cu: goto label_451a8c;
        case 0x451a90u: goto label_451a90;
        case 0x451a94u: goto label_451a94;
        case 0x451a98u: goto label_451a98;
        case 0x451a9cu: goto label_451a9c;
        case 0x451aa0u: goto label_451aa0;
        case 0x451aa4u: goto label_451aa4;
        case 0x451aa8u: goto label_451aa8;
        case 0x451aacu: goto label_451aac;
        case 0x451ab0u: goto label_451ab0;
        case 0x451ab4u: goto label_451ab4;
        case 0x451ab8u: goto label_451ab8;
        case 0x451abcu: goto label_451abc;
        default: break;
    }

    ctx->pc = 0x451940u;

label_451940:
    // 0x451940: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x451940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_451944:
    // 0x451944: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x451944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_451948:
    // 0x451948: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x451948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_45194c:
    // 0x45194c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45194cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_451950:
    // 0x451950: 0xafa40160  sw          $a0, 0x160($sp)
    ctx->pc = 0x451950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 4));
label_451954:
    // 0x451954: 0xafa50170  sw          $a1, 0x170($sp)
    ctx->pc = 0x451954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 5));
label_451958:
    // 0x451958: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x451958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_45195c:
    // 0x45195c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x45195cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_451960:
    // 0x451960: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x451960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_451964:
    // 0x451964: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_451968:
    if (ctx->pc == 0x451968u) {
        ctx->pc = 0x45196Cu;
        goto label_45196c;
    }
    ctx->pc = 0x451964u;
    {
        const bool branch_taken_0x451964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x451964) {
            ctx->pc = 0x451A14u;
            goto label_451a14;
        }
    }
    ctx->pc = 0x45196Cu;
label_45196c:
    // 0x45196c: 0x8f82b000  lw          $v0, -0x5000($gp)
    ctx->pc = 0x45196cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946816)));
label_451970:
    // 0x451970: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_451974:
    if (ctx->pc == 0x451974u) {
        ctx->pc = 0x451978u;
        goto label_451978;
    }
    ctx->pc = 0x451970u;
    {
        const bool branch_taken_0x451970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x451970) {
            ctx->pc = 0x451A14u;
            goto label_451a14;
        }
    }
    ctx->pc = 0x451978u;
label_451978:
    // 0x451978: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x451978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_45197c:
    // 0x45197c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x45197cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_451980:
    // 0x451980: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x451980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_451984:
    // 0x451984: 0xc115ee8  jal         func_457BA0
label_451988:
    if (ctx->pc == 0x451988u) {
        ctx->pc = 0x45198Cu;
        goto label_45198c;
    }
    ctx->pc = 0x451984u;
    SET_GPR_U32(ctx, 31, 0x45198Cu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x451984u, 0x45198Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45198Cu;
label_45198c:
    // 0x45198c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_451990:
    if (ctx->pc == 0x451990u) {
        ctx->pc = 0x451994u;
        goto label_451994;
    }
    ctx->pc = 0x45198Cu;
    {
        const bool branch_taken_0x45198c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45198c) {
            ctx->pc = 0x451A14u;
            goto label_451a14;
        }
    }
    ctx->pc = 0x451994u;
label_451994:
    // 0x451994: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x451994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_451998:
    // 0x451998: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_45199c:
    if (ctx->pc == 0x45199Cu) {
        ctx->pc = 0x4519A0u;
        goto label_4519a0;
    }
    ctx->pc = 0x451998u;
    {
        const bool branch_taken_0x451998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x451998) {
            ctx->pc = 0x451A14u;
            goto label_451a14;
        }
    }
    ctx->pc = 0x4519A0u;
label_4519a0:
    // 0x4519a0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x4519a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4519a4:
    // 0x4519a4: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4519a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4519a8:
    // 0x4519a8: 0x8fa60154  lw          $a2, 0x154($sp)
    ctx->pc = 0x4519a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
label_4519ac:
    // 0x4519ac: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x4519acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_4519b0:
    // 0x4519b0: 0x24e7d990  addiu       $a3, $a3, -0x2670
    ctx->pc = 0x4519b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957456));
label_4519b4:
    // 0x4519b4: 0x24080216  addiu       $t0, $zero, 0x216
    ctx->pc = 0x4519b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 534));
label_4519b8:
    // 0x4519b8: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x4519b8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_4519bc:
    // 0x4519bc: 0x2529dd60  addiu       $t1, $t1, -0x22A0
    ctx->pc = 0x4519bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294958432));
label_4519c0:
    // 0x4519c0: 0xc113940  jal         func_44E500
label_4519c4:
    if (ctx->pc == 0x4519C4u) {
        ctx->pc = 0x4519C8u;
        goto label_4519c8;
    }
    ctx->pc = 0x4519C0u;
    SET_GPR_U32(ctx, 31, 0x4519C8u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x4519C0u, 0x4519C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4519C8u;
label_4519c8:
    // 0x4519c8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x4519c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4519cc:
    // 0x4519cc: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x4519ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_4519d0:
    // 0x4519d0: 0x24a5dd80  addiu       $a1, $a1, -0x2280
    ctx->pc = 0x4519d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958464));
label_4519d4:
    // 0x4519d4: 0xc115c24  jal         func_457090
label_4519d8:
    if (ctx->pc == 0x4519D8u) {
        ctx->pc = 0x4519DCu;
        goto label_4519dc;
    }
    ctx->pc = 0x4519D4u;
    SET_GPR_U32(ctx, 31, 0x4519DCu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x4519D4u, 0x4519DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4519DCu;
label_4519dc:
    // 0x4519dc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x4519dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4519e0:
    // 0x4519e0: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x4519e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_4519e4:
    // 0x4519e4: 0x40f809  jalr        $v0
label_4519e8:
    if (ctx->pc == 0x4519E8u) {
        ctx->pc = 0x4519ECu;
        goto label_4519ec;
    }
    ctx->pc = 0x4519E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4519ECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4519E4u, 0x4519ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4519ECu;
label_4519ec:
    // 0x4519ec: 0xaf82b000  sw          $v0, -0x5000($gp)
    ctx->pc = 0x4519ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946816), GPR_U32(ctx, 2));
label_4519f0:
    // 0x4519f0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x4519f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_4519f4:
    // 0x4519f4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4519f8:
    if (ctx->pc == 0x4519F8u) {
        ctx->pc = 0x4519FCu;
        goto label_4519fc;
    }
    ctx->pc = 0x4519F4u;
    {
        const bool branch_taken_0x4519f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4519f4) {
            ctx->pc = 0x451A04u;
            goto label_451a04;
        }
    }
    ctx->pc = 0x4519FCu;
label_4519fc:
    // 0x4519fc: 0xd  break       0
    ctx->pc = 0x4519fcu;
    runtime->handleBreak(rdram, ctx);
label_451a00:
    // 0x451a00: 0x0  nop
    ctx->pc = 0x451a00u;
    // NOP
label_451a04:
    // 0x451a04: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x451a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_451a08:
    // 0x451a08: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x451a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_451a0c:
    // 0x451a0c: 0xc11392c  jal         func_44E4B0
label_451a10:
    if (ctx->pc == 0x451A10u) {
        ctx->pc = 0x451A14u;
        goto label_451a14;
    }
    ctx->pc = 0x451A0Cu;
    SET_GPR_U32(ctx, 31, 0x451A14u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x451A0Cu, 0x451A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451A14u;
label_451a14:
    // 0x451a14: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x451a14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_451a18:
    // 0x451a18: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x451a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_451a1c:
    // 0x451a1c: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x451a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
label_451a20:
    // 0x451a20: 0xc114338  jal         func_450CE0
label_451a24:
    if (ctx->pc == 0x451A24u) {
        ctx->pc = 0x451A28u;
        goto label_451a28;
    }
    ctx->pc = 0x451A20u;
    SET_GPR_U32(ctx, 31, 0x451A28u);
    ctx->pc = 0x450CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x450CE0u, 0x451A20u, 0x451A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451A28u;
label_451a28:
    // 0x451a28: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_451a2c:
    if (ctx->pc == 0x451A2Cu) {
        ctx->pc = 0x451A30u;
        goto label_451a30;
    }
    ctx->pc = 0x451A28u;
    {
        const bool branch_taken_0x451a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x451a28) {
            ctx->pc = 0x451AA4u;
            goto label_451aa4;
        }
    }
    ctx->pc = 0x451A30u;
label_451a30:
    // 0x451a30: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x451a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_451a34:
    // 0x451a34: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x451a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
label_451a38:
    // 0x451a38: 0xc11452c  jal         func_4514B0
label_451a3c:
    if (ctx->pc == 0x451A3Cu) {
        ctx->pc = 0x451A40u;
        goto label_451a40;
    }
    ctx->pc = 0x451A38u;
    SET_GPR_U32(ctx, 31, 0x451A40u);
    ctx->pc = 0x4514B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4514B0u, 0x451A38u, 0x451A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451A40u;
label_451a40:
    // 0x451a40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x451a40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_451a44:
    // 0x451a44: 0x1000000f  b           . + 4 + (0xF << 2)
label_451a48:
    if (ctx->pc == 0x451A48u) {
        ctx->pc = 0x451A4Cu;
        goto label_451a4c;
    }
    ctx->pc = 0x451A44u;
    {
        const bool branch_taken_0x451a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x451a44) {
            ctx->pc = 0x451A84u;
            goto label_451a84;
        }
    }
    ctx->pc = 0x451A4Cu;
label_451a4c:
    // 0x451a4c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x451a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_451a50:
    // 0x451a50: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x451a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_451a54:
    // 0x451a54: 0x1483000a  bne         $a0, $v1, . + 4 + (0xA << 2)
label_451a58:
    if (ctx->pc == 0x451A58u) {
        ctx->pc = 0x451A5Cu;
        goto label_451a5c;
    }
    ctx->pc = 0x451A54u;
    {
        const bool branch_taken_0x451a54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x451a54) {
            ctx->pc = 0x451A80u;
            goto label_451a80;
        }
    }
    ctx->pc = 0x451A5Cu;
label_451a5c:
    // 0x451a5c: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x451a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_451a60:
    // 0x451a60: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x451a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
label_451a64:
    // 0x451a64: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x451a64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_451a68:
    // 0x451a68: 0xc1146b8  jal         func_451AE0
label_451a6c:
    if (ctx->pc == 0x451A6Cu) {
        ctx->pc = 0x451A70u;
        goto label_451a70;
    }
    ctx->pc = 0x451A68u;
    SET_GPR_U32(ctx, 31, 0x451A70u);
    ctx->pc = 0x451AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x451AE0u, 0x451A68u, 0x451A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451A70u;
label_451a70:
    // 0x451a70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x451a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_451a74:
    // 0x451a74: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x451a74u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_451a78:
    // 0x451a78: 0x10000002  b           . + 4 + (0x2 << 2)
label_451a7c:
    if (ctx->pc == 0x451A7Cu) {
        ctx->pc = 0x451A80u;
        goto label_451a80;
    }
    ctx->pc = 0x451A78u;
    {
        const bool branch_taken_0x451a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x451a78) {
            ctx->pc = 0x451A84u;
            goto label_451a84;
        }
    }
    ctx->pc = 0x451A80u;
label_451a80:
    // 0x451a80: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x451a80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_451a84:
    // 0x451a84: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
label_451a88:
    if (ctx->pc == 0x451A88u) {
        ctx->pc = 0x451A8Cu;
        goto label_451a8c;
    }
    ctx->pc = 0x451A84u;
    {
        const bool branch_taken_0x451a84 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x451a84) {
            ctx->pc = 0x451AA4u;
            goto label_451aa4;
        }
    }
    ctx->pc = 0x451A8Cu;
label_451a8c:
    // 0x451a8c: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x451a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_451a90:
    // 0x451a90: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x451a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
label_451a94:
    // 0x451a94: 0xc1146b0  jal         func_451AC0
label_451a98:
    if (ctx->pc == 0x451A98u) {
        ctx->pc = 0x451A9Cu;
        goto label_451a9c;
    }
    ctx->pc = 0x451A94u;
    SET_GPR_U32(ctx, 31, 0x451A9Cu);
    ctx->pc = 0x451AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x451AC0u, 0x451A94u, 0x451A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451A9Cu;
label_451a9c:
    // 0x451a9c: 0x1602ffeb  bne         $s0, $v0, . + 4 + (-0x15 << 2)
label_451aa0:
    if (ctx->pc == 0x451AA0u) {
        ctx->pc = 0x451AA4u;
        goto label_451aa4;
    }
    ctx->pc = 0x451A9Cu;
    {
        const bool branch_taken_0x451a9c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x451a9c) {
            ctx->pc = 0x451A4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_451a4c;
        }
    }
    ctx->pc = 0x451AA4u;
label_451aa4:
    // 0x451aa4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x451aa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_451aa8:
    // 0x451aa8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x451aa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_451aac:
    // 0x451aac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x451aacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_451ab0:
    // 0x451ab0: 0x27bd0180  addiu       $sp, $sp, 0x180
    ctx->pc = 0x451ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_451ab4:
    // 0x451ab4: 0x3e00008  jr          $ra
label_451ab8:
    if (ctx->pc == 0x451AB8u) {
        ctx->pc = 0x451ABCu;
        goto label_451abc;
    }
    ctx->pc = 0x451AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x451AB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x451ABCu;
label_451abc:
    // 0x451abc: 0x0  nop
    ctx->pc = 0x451abcu;
    // NOP
    ctx->pc = 0x451ac0u;
}
