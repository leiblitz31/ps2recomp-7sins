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

// Function: sub_00470950
// Address: 0x470950 - 0x470af0
void sub_00470950_0x470950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00470950_0x470950");
#endif

    switch (ctx->pc) {
        case 0x470950u: goto label_470950;
        case 0x470954u: goto label_470954;
        case 0x470958u: goto label_470958;
        case 0x47095cu: goto label_47095c;
        case 0x470960u: goto label_470960;
        case 0x470964u: goto label_470964;
        case 0x470968u: goto label_470968;
        case 0x47096cu: goto label_47096c;
        case 0x470970u: goto label_470970;
        case 0x470974u: goto label_470974;
        case 0x470978u: goto label_470978;
        case 0x47097cu: goto label_47097c;
        case 0x470980u: goto label_470980;
        case 0x470984u: goto label_470984;
        case 0x470988u: goto label_470988;
        case 0x47098cu: goto label_47098c;
        case 0x470990u: goto label_470990;
        case 0x470994u: goto label_470994;
        case 0x470998u: goto label_470998;
        case 0x47099cu: goto label_47099c;
        case 0x4709a0u: goto label_4709a0;
        case 0x4709a4u: goto label_4709a4;
        case 0x4709a8u: goto label_4709a8;
        case 0x4709acu: goto label_4709ac;
        case 0x4709b0u: goto label_4709b0;
        case 0x4709b4u: goto label_4709b4;
        case 0x4709b8u: goto label_4709b8;
        case 0x4709bcu: goto label_4709bc;
        case 0x4709c0u: goto label_4709c0;
        case 0x4709c4u: goto label_4709c4;
        case 0x4709c8u: goto label_4709c8;
        case 0x4709ccu: goto label_4709cc;
        case 0x4709d0u: goto label_4709d0;
        case 0x4709d4u: goto label_4709d4;
        case 0x4709d8u: goto label_4709d8;
        case 0x4709dcu: goto label_4709dc;
        case 0x4709e0u: goto label_4709e0;
        case 0x4709e4u: goto label_4709e4;
        case 0x4709e8u: goto label_4709e8;
        case 0x4709ecu: goto label_4709ec;
        case 0x4709f0u: goto label_4709f0;
        case 0x4709f4u: goto label_4709f4;
        case 0x4709f8u: goto label_4709f8;
        case 0x4709fcu: goto label_4709fc;
        case 0x470a00u: goto label_470a00;
        case 0x470a04u: goto label_470a04;
        case 0x470a08u: goto label_470a08;
        case 0x470a0cu: goto label_470a0c;
        case 0x470a10u: goto label_470a10;
        case 0x470a14u: goto label_470a14;
        case 0x470a18u: goto label_470a18;
        case 0x470a1cu: goto label_470a1c;
        case 0x470a20u: goto label_470a20;
        case 0x470a24u: goto label_470a24;
        case 0x470a28u: goto label_470a28;
        case 0x470a2cu: goto label_470a2c;
        case 0x470a30u: goto label_470a30;
        case 0x470a34u: goto label_470a34;
        case 0x470a38u: goto label_470a38;
        case 0x470a3cu: goto label_470a3c;
        case 0x470a40u: goto label_470a40;
        case 0x470a44u: goto label_470a44;
        case 0x470a48u: goto label_470a48;
        case 0x470a4cu: goto label_470a4c;
        case 0x470a50u: goto label_470a50;
        case 0x470a54u: goto label_470a54;
        case 0x470a58u: goto label_470a58;
        case 0x470a5cu: goto label_470a5c;
        case 0x470a60u: goto label_470a60;
        case 0x470a64u: goto label_470a64;
        case 0x470a68u: goto label_470a68;
        case 0x470a6cu: goto label_470a6c;
        case 0x470a70u: goto label_470a70;
        case 0x470a74u: goto label_470a74;
        case 0x470a78u: goto label_470a78;
        case 0x470a7cu: goto label_470a7c;
        case 0x470a80u: goto label_470a80;
        case 0x470a84u: goto label_470a84;
        case 0x470a88u: goto label_470a88;
        case 0x470a8cu: goto label_470a8c;
        case 0x470a90u: goto label_470a90;
        case 0x470a94u: goto label_470a94;
        case 0x470a98u: goto label_470a98;
        case 0x470a9cu: goto label_470a9c;
        case 0x470aa0u: goto label_470aa0;
        case 0x470aa4u: goto label_470aa4;
        case 0x470aa8u: goto label_470aa8;
        case 0x470aacu: goto label_470aac;
        case 0x470ab0u: goto label_470ab0;
        case 0x470ab4u: goto label_470ab4;
        case 0x470ab8u: goto label_470ab8;
        case 0x470abcu: goto label_470abc;
        case 0x470ac0u: goto label_470ac0;
        case 0x470ac4u: goto label_470ac4;
        case 0x470ac8u: goto label_470ac8;
        case 0x470accu: goto label_470acc;
        case 0x470ad0u: goto label_470ad0;
        case 0x470ad4u: goto label_470ad4;
        case 0x470ad8u: goto label_470ad8;
        case 0x470adcu: goto label_470adc;
        case 0x470ae0u: goto label_470ae0;
        case 0x470ae4u: goto label_470ae4;
        case 0x470ae8u: goto label_470ae8;
        case 0x470aecu: goto label_470aec;
        default: break;
    }

    ctx->pc = 0x470950u;

label_470950:
    // 0x470950: 0x27bdfd80  addiu       $sp, $sp, -0x280
    ctx->pc = 0x470950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966656));
label_470954:
    // 0x470954: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x470954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_470958:
    // 0x470958: 0xafa40270  sw          $a0, 0x270($sp)
    ctx->pc = 0x470958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 4));
label_47095c:
    // 0x47095c: 0x8f82c048  lw          $v0, -0x3FB8($gp)
    ctx->pc = 0x47095cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950984)));
label_470960:
    // 0x470960: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_470964:
    if (ctx->pc == 0x470964u) {
        ctx->pc = 0x470968u;
        goto label_470968;
    }
    ctx->pc = 0x470960u;
    {
        const bool branch_taken_0x470960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x470960) {
            ctx->pc = 0x470A10u;
            goto label_470a10;
        }
    }
    ctx->pc = 0x470968u;
label_470968:
    // 0x470968: 0x8f82b358  lw          $v0, -0x4CA8($gp)
    ctx->pc = 0x470968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947672)));
label_47096c:
    // 0x47096c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_470970:
    if (ctx->pc == 0x470970u) {
        ctx->pc = 0x470974u;
        goto label_470974;
    }
    ctx->pc = 0x47096Cu;
    {
        const bool branch_taken_0x47096c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47096c) {
            ctx->pc = 0x470A10u;
            goto label_470a10;
        }
    }
    ctx->pc = 0x470974u;
label_470974:
    // 0x470974: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x470974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_470978:
    // 0x470978: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x470978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47097c:
    // 0x47097c: 0x27a60260  addiu       $a2, $sp, 0x260
    ctx->pc = 0x47097cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_470980:
    // 0x470980: 0xc115ee8  jal         func_457BA0
label_470984:
    if (ctx->pc == 0x470984u) {
        ctx->pc = 0x470988u;
        goto label_470988;
    }
    ctx->pc = 0x470980u;
    SET_GPR_U32(ctx, 31, 0x470988u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x470980u, 0x470988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x470988u;
label_470988:
    // 0x470988: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_47098c:
    if (ctx->pc == 0x47098Cu) {
        ctx->pc = 0x470990u;
        goto label_470990;
    }
    ctx->pc = 0x470988u;
    {
        const bool branch_taken_0x470988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x470988) {
            ctx->pc = 0x470A10u;
            goto label_470a10;
        }
    }
    ctx->pc = 0x470990u;
label_470990:
    // 0x470990: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x470990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_470994:
    // 0x470994: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_470998:
    if (ctx->pc == 0x470998u) {
        ctx->pc = 0x47099Cu;
        goto label_47099c;
    }
    ctx->pc = 0x470994u;
    {
        const bool branch_taken_0x470994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x470994) {
            ctx->pc = 0x470A10u;
            goto label_470a10;
        }
    }
    ctx->pc = 0x47099Cu;
label_47099c:
    // 0x47099c: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x47099cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_4709a0:
    // 0x4709a0: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4709a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4709a4:
    // 0x4709a4: 0x8fa60264  lw          $a2, 0x264($sp)
    ctx->pc = 0x4709a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_4709a8:
    // 0x4709a8: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x4709a8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_4709ac:
    // 0x4709ac: 0x24e7fe30  addiu       $a3, $a3, -0x1D0
    ctx->pc = 0x4709acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966832));
label_4709b0:
    // 0x4709b0: 0x240800f5  addiu       $t0, $zero, 0xF5
    ctx->pc = 0x4709b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
label_4709b4:
    // 0x4709b4: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x4709b4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_4709b8:
    // 0x4709b8: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x4709b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
label_4709bc:
    // 0x4709bc: 0xc113940  jal         func_44E500
label_4709c0:
    if (ctx->pc == 0x4709C0u) {
        ctx->pc = 0x4709C4u;
        goto label_4709c4;
    }
    ctx->pc = 0x4709BCu;
    SET_GPR_U32(ctx, 31, 0x4709C4u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x4709BCu, 0x4709C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4709C4u;
label_4709c4:
    // 0x4709c4: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x4709c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_4709c8:
    // 0x4709c8: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x4709c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_4709cc:
    // 0x4709cc: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x4709ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_4709d0:
    // 0x4709d0: 0xc115c24  jal         func_457090
label_4709d4:
    if (ctx->pc == 0x4709D4u) {
        ctx->pc = 0x4709D8u;
        goto label_4709d8;
    }
    ctx->pc = 0x4709D0u;
    SET_GPR_U32(ctx, 31, 0x4709D8u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x4709D0u, 0x4709D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4709D8u;
label_4709d8:
    // 0x4709d8: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x4709d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_4709dc:
    // 0x4709dc: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x4709dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_4709e0:
    // 0x4709e0: 0x40f809  jalr        $v0
label_4709e4:
    if (ctx->pc == 0x4709E4u) {
        ctx->pc = 0x4709E8u;
        goto label_4709e8;
    }
    ctx->pc = 0x4709E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4709E8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4709E0u, 0x4709E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4709E8u;
label_4709e8:
    // 0x4709e8: 0xaf82b358  sw          $v0, -0x4CA8($gp)
    ctx->pc = 0x4709e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947672), GPR_U32(ctx, 2));
label_4709ec:
    // 0x4709ec: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x4709ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_4709f0:
    // 0x4709f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4709f4:
    if (ctx->pc == 0x4709F4u) {
        ctx->pc = 0x4709F8u;
        goto label_4709f8;
    }
    ctx->pc = 0x4709F0u;
    {
        const bool branch_taken_0x4709f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4709f0) {
            ctx->pc = 0x470A00u;
            goto label_470a00;
        }
    }
    ctx->pc = 0x4709F8u;
label_4709f8:
    // 0x4709f8: 0xd  break       0
    ctx->pc = 0x4709f8u;
    runtime->handleBreak(rdram, ctx);
label_4709fc:
    // 0x4709fc: 0x0  nop
    ctx->pc = 0x4709fcu;
    // NOP
label_470a00:
    // 0x470a00: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x470a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_470a04:
    // 0x470a04: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x470a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_470a08:
    // 0x470a08: 0xc11392c  jal         func_44E4B0
label_470a0c:
    if (ctx->pc == 0x470A0Cu) {
        ctx->pc = 0x470A10u;
        goto label_470a10;
    }
    ctx->pc = 0x470A08u;
    SET_GPR_U32(ctx, 31, 0x470A10u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x470A08u, 0x470A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x470A10u;
label_470a10:
    // 0x470a10: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x470a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_470a14:
    // 0x470a14: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x470a14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_470a18:
    // 0x470a18: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x470a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_470a1c:
    // 0x470a1c: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_470a20:
    if (ctx->pc == 0x470A20u) {
        ctx->pc = 0x470A24u;
        goto label_470a24;
    }
    ctx->pc = 0x470A1Cu;
    {
        const bool branch_taken_0x470a1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x470a1c) {
            ctx->pc = 0x470ACCu;
            goto label_470acc;
        }
    }
    ctx->pc = 0x470A24u;
label_470a24:
    // 0x470a24: 0x8f82b35c  lw          $v0, -0x4CA4($gp)
    ctx->pc = 0x470a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947676)));
label_470a28:
    // 0x470a28: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_470a2c:
    if (ctx->pc == 0x470A2Cu) {
        ctx->pc = 0x470A30u;
        goto label_470a30;
    }
    ctx->pc = 0x470A28u;
    {
        const bool branch_taken_0x470a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x470a28) {
            ctx->pc = 0x470ACCu;
            goto label_470acc;
        }
    }
    ctx->pc = 0x470A30u;
label_470a30:
    // 0x470a30: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x470a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_470a34:
    // 0x470a34: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x470a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_470a38:
    // 0x470a38: 0x27a60250  addiu       $a2, $sp, 0x250
    ctx->pc = 0x470a38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_470a3c:
    // 0x470a3c: 0xc115ee8  jal         func_457BA0
label_470a40:
    if (ctx->pc == 0x470A40u) {
        ctx->pc = 0x470A44u;
        goto label_470a44;
    }
    ctx->pc = 0x470A3Cu;
    SET_GPR_U32(ctx, 31, 0x470A44u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x470A3Cu, 0x470A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x470A44u;
label_470a44:
    // 0x470a44: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_470a48:
    if (ctx->pc == 0x470A48u) {
        ctx->pc = 0x470A4Cu;
        goto label_470a4c;
    }
    ctx->pc = 0x470A44u;
    {
        const bool branch_taken_0x470a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x470a44) {
            ctx->pc = 0x470ACCu;
            goto label_470acc;
        }
    }
    ctx->pc = 0x470A4Cu;
label_470a4c:
    // 0x470a4c: 0x8fa20258  lw          $v0, 0x258($sp)
    ctx->pc = 0x470a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
label_470a50:
    // 0x470a50: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_470a54:
    if (ctx->pc == 0x470A54u) {
        ctx->pc = 0x470A58u;
        goto label_470a58;
    }
    ctx->pc = 0x470A50u;
    {
        const bool branch_taken_0x470a50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x470a50) {
            ctx->pc = 0x470ACCu;
            goto label_470acc;
        }
    }
    ctx->pc = 0x470A58u;
label_470a58:
    // 0x470a58: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x470a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_470a5c:
    // 0x470a5c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x470a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_470a60:
    // 0x470a60: 0x8fa60254  lw          $a2, 0x254($sp)
    ctx->pc = 0x470a60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
label_470a64:
    // 0x470a64: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x470a64u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_470a68:
    // 0x470a68: 0x24e7fe30  addiu       $a3, $a3, -0x1D0
    ctx->pc = 0x470a68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966832));
label_470a6c:
    // 0x470a6c: 0x240800f6  addiu       $t0, $zero, 0xF6
    ctx->pc = 0x470a6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 246));
label_470a70:
    // 0x470a70: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x470a70u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_470a74:
    // 0x470a74: 0x25290060  addiu       $t1, $t1, 0x60
    ctx->pc = 0x470a74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 96));
label_470a78:
    // 0x470a78: 0xc113940  jal         func_44E500
label_470a7c:
    if (ctx->pc == 0x470A7Cu) {
        ctx->pc = 0x470A80u;
        goto label_470a80;
    }
    ctx->pc = 0x470A78u;
    SET_GPR_U32(ctx, 31, 0x470A80u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x470A78u, 0x470A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x470A80u;
label_470a80:
    // 0x470a80: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x470a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_470a84:
    // 0x470a84: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x470a84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_470a88:
    // 0x470a88: 0x24a50070  addiu       $a1, $a1, 0x70
    ctx->pc = 0x470a88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
label_470a8c:
    // 0x470a8c: 0xc115c24  jal         func_457090
label_470a90:
    if (ctx->pc == 0x470A90u) {
        ctx->pc = 0x470A94u;
        goto label_470a94;
    }
    ctx->pc = 0x470A8Cu;
    SET_GPR_U32(ctx, 31, 0x470A94u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x470A8Cu, 0x470A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x470A94u;
label_470a94:
    // 0x470a94: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x470a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_470a98:
    // 0x470a98: 0x8fa20258  lw          $v0, 0x258($sp)
    ctx->pc = 0x470a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
label_470a9c:
    // 0x470a9c: 0x40f809  jalr        $v0
label_470aa0:
    if (ctx->pc == 0x470AA0u) {
        ctx->pc = 0x470AA4u;
        goto label_470aa4;
    }
    ctx->pc = 0x470A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x470AA4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x470A9Cu, 0x470AA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x470AA4u;
label_470aa4:
    // 0x470aa4: 0xaf82b35c  sw          $v0, -0x4CA4($gp)
    ctx->pc = 0x470aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947676), GPR_U32(ctx, 2));
label_470aa8:
    // 0x470aa8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x470aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_470aac:
    // 0x470aac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_470ab0:
    if (ctx->pc == 0x470AB0u) {
        ctx->pc = 0x470AB4u;
        goto label_470ab4;
    }
    ctx->pc = 0x470AACu;
    {
        const bool branch_taken_0x470aac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x470aac) {
            ctx->pc = 0x470ABCu;
            goto label_470abc;
        }
    }
    ctx->pc = 0x470AB4u;
label_470ab4:
    // 0x470ab4: 0xd  break       0
    ctx->pc = 0x470ab4u;
    runtime->handleBreak(rdram, ctx);
label_470ab8:
    // 0x470ab8: 0x0  nop
    ctx->pc = 0x470ab8u;
    // NOP
label_470abc:
    // 0x470abc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x470abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_470ac0:
    // 0x470ac0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x470ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_470ac4:
    // 0x470ac4: 0xc11392c  jal         func_44E4B0
label_470ac8:
    if (ctx->pc == 0x470AC8u) {
        ctx->pc = 0x470ACCu;
        goto label_470acc;
    }
    ctx->pc = 0x470AC4u;
    SET_GPR_U32(ctx, 31, 0x470ACCu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x470AC4u, 0x470ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x470ACCu;
label_470acc:
    // 0x470acc: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x470accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_470ad0:
    // 0x470ad0: 0xc0eb360  jal         func_3ACD80
label_470ad4:
    if (ctx->pc == 0x470AD4u) {
        ctx->pc = 0x470AD8u;
        goto label_470ad8;
    }
    ctx->pc = 0x470AD0u;
    SET_GPR_U32(ctx, 31, 0x470AD8u);
    ctx->pc = 0x3ACD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACD80u, 0x470AD0u, 0x470AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x470AD8u;
label_470ad8:
    // 0x470ad8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x470ad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_470adc:
    // 0x470adc: 0x27bd0280  addiu       $sp, $sp, 0x280
    ctx->pc = 0x470adcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_470ae0:
    // 0x470ae0: 0x3e00008  jr          $ra
label_470ae4:
    if (ctx->pc == 0x470AE4u) {
        ctx->pc = 0x470AE8u;
        goto label_470ae8;
    }
    ctx->pc = 0x470AE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x470AE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x470AE8u;
label_470ae8:
    // 0x470ae8: 0x0  nop
    ctx->pc = 0x470ae8u;
    // NOP
label_470aec:
    // 0x470aec: 0x0  nop
    ctx->pc = 0x470aecu;
    // NOP
    ctx->pc = 0x470af0u;
}
